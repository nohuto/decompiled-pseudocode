/*
 * XREFs of ?CheckProcessIdentity@@YAHPEAUtagWND@@I_K_J@Z @ 0x1C010ADA8
 * Callers:
 *     ?xxxWrapDesktopWndProc@@YA_JPEAUtagWND@@I_K_J1@Z @ 0x1C010AD50 (-xxxWrapDesktopWndProc@@YA_JPEAUtagWND@@I_K_J1@Z.c)
 *     ?xxxWrapCallWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z @ 0x1C0133AF0 (-xxxWrapCallWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z.c)
 *     ?xxxWrapMenuWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z @ 0x1C01AD6E0 (-xxxWrapMenuWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z.c)
 *     ?xxxWrapSBWndProc@@YA_JPEAUtagWND@@I_K_J1@Z @ 0x1C01AD740 (-xxxWrapSBWndProc@@YA_JPEAUtagWND@@I_K_J1@Z.c)
 *     ?xxxWrapSwitchWndProc@@YA_JPEAUtagWND@@I_K_J1@Z @ 0x1C01AD7A0 (-xxxWrapSwitchWndProc@@YA_JPEAUtagWND@@I_K_J1@Z.c)
 * Callees:
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     ?IsMessageAllowedAcrossILByReceiver@@YAHPEAUtagPROCESSINFO@@0PEAUtagWND@@I_K_JH@Z @ 0x1C00620C0 (-IsMessageAllowedAcrossILByReceiver@@YAHPEAUtagPROCESSINFO@@0PEAUtagWND@@I_K_JH@Z.c)
 *     MSGSQMAddMessage @ 0x1C0062398 (MSGSQMAddMessage.c)
 *     ?IsMessageAlwaysAllowedAcrossIL@@YAHI@Z @ 0x1C0062410 (-IsMessageAlwaysAllowedAcrossIL@@YAHI@Z.c)
 */

__int64 __fastcall CheckProcessIdentity(struct tagWND *a1, __int64 a2, unsigned __int64 a3, unsigned __int64 a4)
{
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

  v6 = a2;
  if ( a1 != (struct tagWND *)-1LL )
  {
    CurrentProcessWin32Process = (struct tagPROCESSINFO *)PsGetCurrentProcessWin32Process(a1);
    v9 = CurrentProcessWin32Process;
    v10 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 416LL);
    if ( (struct tagPROCESSINFO *)v10 == CurrentProcessWin32Process )
      return 1LL;
    if ( v6 != 717 )
    {
      if ( (unsigned int)IsMessageAllowedAcrossILByReceiver(
                           CurrentProcessWin32Process,
                           (void *const **)v10,
                           a1,
                           v6,
                           a3,
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
        if ( v6 == 274 && ((a3 - 61472) & 0xFFFFFFFFFFFFFEBFuLL) == 0 && a3 != 61792 )
        {
          MSGSQMAddMessage(v9, (struct tagPROCESSINFO *)v10, 0x112u, a3, a4, 1, 2);
          return 1LL;
        }
        if ( *(_QWORD *)v10 == gpepCSRSS )
        {
          v15 = 0x2000;
          v16 = v13;
        }
        else
        {
          v15 = *(_DWORD *)(v10 + 872);
          v16 = *(_DWORD *)(v10 + 876);
        }
        v17 = *((_QWORD *)v9 + 109);
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
            if ( *(struct tagWND **)(v19 + 1376) == a1 && *(_QWORD *)(v19 + 424) == *(_QWORD *)(gptiCurrent + 424LL) )
              return 1LL;
          }
          EtwTraceUIPIMsgError(v9, v10, v6, a3, a4);
          UserSetLastError(5LL, v20);
          v14 = 0;
        }
      }
      MSGSQMAddMessage(v9, (struct tagPROCESSINFO *)v10, v6, a3, a4, 1, v14);
      if ( v12 )
        return 1LL;
    }
    a2 = gpepCSRSS;
    if ( *(_QWORD *)v9 == gpepCSRSS )
      return 1LL;
  }
  UserSetLastError(5LL, a2);
  return 0LL;
}
