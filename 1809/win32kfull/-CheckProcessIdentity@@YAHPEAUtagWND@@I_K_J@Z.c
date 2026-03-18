/*
 * XREFs of ?CheckProcessIdentity@@YAHPEAUtagWND@@I_K_J@Z @ 0x1C012CDA8
 * Callers:
 *     ?xxxWrapDesktopWndProc@@YA_JPEAUtagWND@@I_K_J1@Z @ 0x1C012CD50 (-xxxWrapDesktopWndProc@@YA_JPEAUtagWND@@I_K_J1@Z.c)
 *     ?xxxWrapCallWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z @ 0x1C0155ED0 (-xxxWrapCallWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z.c)
 *     ?xxxWrapMenuWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z @ 0x1C01D0770 (-xxxWrapMenuWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z.c)
 *     ?xxxWrapSBWndProc@@YA_JPEAUtagWND@@I_K_J1@Z @ 0x1C01D07D0 (-xxxWrapSBWndProc@@YA_JPEAUtagWND@@I_K_J1@Z.c)
 *     ?xxxWrapSwitchWndProc@@YA_JPEAUtagWND@@I_K_J1@Z @ 0x1C01D0830 (-xxxWrapSwitchWndProc@@YA_JPEAUtagWND@@I_K_J1@Z.c)
 * Callees:
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     ?IsMessageAllowedAcrossILByReceiver@@YAHPEAUtagPROCESSINFO@@0PEAUtagWND@@I_K_JH@Z @ 0x1C00D08BC (-IsMessageAllowedAcrossILByReceiver@@YAHPEAUtagPROCESSINFO@@0PEAUtagWND@@I_K_JH@Z.c)
 *     MSGSQMAddMessage @ 0x1C00D0A28 (MSGSQMAddMessage.c)
 *     ?IsMessageAlwaysAllowedAcrossIL@@YAHI@Z @ 0x1C00D0C18 (-IsMessageAlwaysAllowedAcrossIL@@YAHI@Z.c)
 */

__int64 __fastcall CheckProcessIdentity(struct tagWND *a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  unsigned __int64 v5; // r14
  unsigned int v6; // ebp
  struct tagPROCESSINFO *CurrentProcessWin32Process; // rax
  struct tagPROCESSINFO *v9; // rbx
  __int64 v10; // rdi
  int v12; // esi
  int v13; // r11d
  __int16 v14; // cx
  unsigned int v15; // edx
  int v16; // r8d
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9

  v5 = a3;
  v6 = a2;
  if ( a1 != (struct tagWND *)-1LL )
  {
    CurrentProcessWin32Process = (struct tagPROCESSINFO *)PsGetCurrentProcessWin32Process(a1);
    a3 = *((_QWORD *)a1 + 2);
    v9 = CurrentProcessWin32Process;
    v10 = *(_QWORD *)(a3 + 424);
    if ( (struct tagPROCESSINFO *)v10 == CurrentProcessWin32Process )
      return 1LL;
    if ( v6 != 717 )
    {
      if ( (unsigned int)IsMessageAllowedAcrossILByReceiver(
                           CurrentProcessWin32Process,
                           (void *const **)v10,
                           a1,
                           v6,
                           v5,
                           a4,
                           1) )
        return 1LL;
      v12 = IsMessageAlwaysAllowedAcrossIL(v6);
      if ( v12 )
      {
        v14 = v13 + 2;
      }
      else
      {
        if ( v6 == 274 && ((v5 - 61472) & 0xFFFFFFFFFFFFFEBFuLL) == 0 && v5 != 61792 )
        {
          MSGSQMAddMessage(v9, (struct tagPROCESSINFO *)v10, 0x112u, v5, a4, 1, 2);
          return 1LL;
        }
        if ( *(_QWORD *)v10 == gpepCSRSS )
        {
          v15 = 0x2000;
          v16 = v13;
        }
        else
        {
          v15 = *(_DWORD *)(v10 + 880);
          v16 = *(_DWORD *)(v10 + 884);
        }
        v17 = *((_QWORD *)v9 + 110);
        if ( !gbEnforceUIPI
          || (unsigned int)v17 > v15
          || (_DWORD)v17 == v15 && ((v18 = HIDWORD(v17), (_DWORD)v18 == v16) || (_DWORD)v18 == -1 || v16 == -1) )
        {
          v12 = 1;
          v14 = gbEnforceUIPI != 0 ? 5 : 1;
        }
        else
        {
          v12 = v13;
          if ( v6 == 793 )
          {
            v19 = *((_QWORD *)a1 + 2);
            if ( *(struct tagWND **)(v19 + 1368) == a1 && *(_QWORD *)(v19 + 432) == *(_QWORD *)(gptiCurrent + 432LL) )
              return 1LL;
          }
          EtwTraceUIPIMsgError(v9, v10, v6, v5, a4);
          UserSetLastError(5LL, v20, v21, v22);
          v14 = 0;
        }
      }
      MSGSQMAddMessage(v9, (struct tagPROCESSINFO *)v10, v6, v5, a4, 1, v14);
      if ( v12 )
        return 1LL;
    }
    a2 = gpepCSRSS;
    if ( *(_QWORD *)v9 == gpepCSRSS )
      return 1LL;
  }
  UserSetLastError(5LL, a2, a3, a4);
  return 0LL;
}
