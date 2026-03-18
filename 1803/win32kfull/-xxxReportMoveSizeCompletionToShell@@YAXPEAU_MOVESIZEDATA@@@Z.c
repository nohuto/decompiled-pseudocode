/*
 * XREFs of ?xxxReportMoveSizeCompletionToShell@@YAXPEAU_MOVESIZEDATA@@@Z @ 0x1C01C416C
 * Callers:
 *     xxxMoveSize @ 0x1C01C7C58 (xxxMoveSize.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     ?xxxNotifyIAMWindowManagementEvent@@YAHQEBU_SHELL_WINDOWMANAGEMENT_NOTIFY_INFO@@@Z @ 0x1C00602A4 (-xxxNotifyIAMWindowManagementEvent@@YAHQEBU_SHELL_WINDOWMANAGEMENT_NOTIFY_INFO@@@Z.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C00733F0 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     IsShellParticipatesInSizing @ 0x1C0074B18 (IsShellParticipatesInSizing.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 */

void __fastcall xxxReportMoveSizeCompletionToShell(struct _MOVESIZEDATA *a1)
{
  __int64 *v1; // rdi
  int v3; // esi
  int v4; // ebx
  unsigned int v5; // ebx
  __int64 v6; // rax
  __int64 v7; // r15
  BOOL v8; // ecx
  unsigned int v9; // r8d
  int v10; // edx
  __int64 v11; // rdx
  unsigned int v12; // edi
  __int64 ThreadWin32Thread; // rax
  _QWORD *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  _QWORD v18[3]; // [rsp+28h] [rbp-49h] BYREF
  _QWORD v19[7]; // [rsp+40h] [rbp-31h] BYREF
  _QWORD v20[7]; // [rsp+78h] [rbp+7h] BYREF

  v1 = (__int64 *)*((_QWORD *)a1 + 2);
  v3 = *((_DWORD *)a1 + 70);
  if ( (unsigned int)IsShellParticipatesInSizing((__int64)v1) )
  {
    v4 = *((_DWORD *)a1 + 49);
    *((_DWORD *)a1 + 70) = v3 & 0xFFFFFFFB;
    if ( v4 >= 0 )
      v5 = 2;
    else
      v5 = (v4 & 0x100000) == 0;
    memset(v19, 0, sizeof(v19));
    v6 = *v1;
    v19[3] = 0LL;
    v19[0] = v6;
    v19[2] = v5;
    LODWORD(v19[1]) = 8;
    xxxNotifyIAMWindowManagementEvent((const struct _SHELL_WINDOWMANAGEMENT_NOTIFY_INFO *const)v19);
  }
  else if ( (v3 & 8) == 0 )
  {
    v7 = *(_QWORD *)(v1[3] + 328);
    if ( v7 )
    {
      v8 = !IsRectEmptyInl((const struct tagRECT *)((char *)a1 + 264));
      v11 = v9 ^ v10;
      if ( (_DWORD)v11 || v8 )
      {
        v12 = 2;
        if ( (*((_DWORD *)a1 + 49) & 0x100000) != 0 )
        {
          if ( (_DWORD)v11 )
            v12 = v9;
          else
            v12 = ~v3 & 2;
        }
        ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v11);
        v18[0] = *(_QWORD *)(ThreadWin32Thread + 408);
        *(_QWORD *)(ThreadWin32Thread + 408) = v18;
        v18[1] = v7;
        _InterlockedIncrement((volatile signed __int32 *)(v7 + 8));
        memset(v20, 0, sizeof(v20));
        v14 = (_QWORD *)*((_QWORD *)a1 + 2);
        v20[3] = 0LL;
        LODWORD(v20[1]) = 2;
        v20[0] = *v14;
        v20[2] = v12;
        if ( (unsigned int)xxxNotifyIAMWindowManagementEvent((const struct _SHELL_WINDOWMANAGEMENT_NOTIFY_INFO *const)v20)
          && !v12 )
        {
          CInputGlobals::SetPtiLastWoken(gpInputGlobals, *(struct tagTHREADINFO **)(v7 + 16), 0);
        }
        ThreadUnlock1(v16, v15, v17);
      }
    }
  }
}
