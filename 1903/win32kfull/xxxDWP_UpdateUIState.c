/*
 * XREFs of xxxDWP_UpdateUIState @ 0x1C00915B4
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C0060288 (xxxRealDefWindowProc.c)
 *     ?xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z @ 0x1C00B387C (-xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z.c)
 * Callees:
 *     xxxSendNotifyMessage @ 0x1C001CE70 (xxxSendNotifyMessage.c)
 *     SetOrClrWF @ 0x1C0044F3C (SetOrClrWF.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     GetAppCompatFlags2 @ 0x1C0092010 (GetAppCompatFlags2.c)
 *     xxxSendMessage @ 0x1C009BAB0 (xxxSendMessage.c)
 *     BuildHwndList @ 0x1C00CC820 (BuildHwndList.c)
 *     FreeHwndList @ 0x1C00CC9E0 (FreeHwndList.c)
 *     HMValidateHandleNoSecure @ 0x1C00D0948 (HMValidateHandleNoSecure.c)
 */

__int64 __fastcall xxxDWP_UpdateUIState(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rdi
  unsigned __int64 v4; // rbx
  __int64 v6; // rbp
  int v7; // eax
  int v8; // eax
  struct tagWND *v9; // r9
  __int64 v11; // r14
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rbp
  _QWORD *i; // rbx
  struct tagWND *v16; // rsi
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 ThreadWin32Thread; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  int v23; // ecx
  int v24; // eax
  int v25; // edi
  __int64 v26; // [rsp+30h] [rbp-38h] BYREF
  struct tagWND *v27; // [rsp+38h] [rbp-30h]
  __int64 v28; // [rsp+40h] [rbp-28h]

  v3 = a2;
  v4 = a2 >> 16;
  LOWORD(v6) = a2;
  if ( (a2 & 0xFFF80000) != 0 || (unsigned __int16)a2 > 3u || a3 )
    return 0LL;
  v7 = *gpsi;
  if ( (_WORD)a2 == 3 )
  {
    if ( (v7 & 0x80u) != 0 )
      return 0LL;
    v24 = *(_DWORD *)(gpsi + 7004LL);
    if ( (v24 & 0x20) != 0 || v24 >= 0 || (GetAppCompatFlags2(1024LL) & 2) != 0 )
      return 0LL;
    LOBYTE(v4) = 3;
    v6 = (unsigned __int16)(((*gpsi & 0x40) != 0) + 1);
    v3 = v6 | 0x30000;
LABEL_10:
    if ( (unsigned __int16)v6 == 1 )
    {
      if ( (v4 & 2) != 0 )
        SetOrClrWF(1, a1, 0xB40u, 1);
      if ( (v4 & 1) != 0 )
        SetOrClrWF(1, a1, 0xB80u, 1);
      if ( (v4 & 4) == 0 )
        goto LABEL_16;
      v23 = 1;
    }
    else
    {
      if ( (unsigned __int16)v6 != 2 )
      {
        if ( (unsigned __int16)v6 == 3 )
        {
          v25 = *gpsi & 0x40;
          SetOrClrWF(v25 == 0, a1, 0xB80u, 1);
          SetOrClrWF(v25 == 0, a1, 0xB40u, 1);
          v3 = (v25 != 0) + 196609LL;
        }
        goto LABEL_16;
      }
      if ( (v4 & 2) != 0 )
        SetOrClrWF(0, a1, 0xB40u, 1);
      if ( (v4 & 1) != 0 )
        SetOrClrWF(0, a1, 0xB80u, 1);
      if ( (v4 & 4) == 0 )
      {
LABEL_16:
        v9 = *(struct tagWND **)(a1 + 112);
        if ( v9 )
        {
          v26 = 0LL;
          v27 = 0LL;
          v28 = 0LL;
          if ( gptiCurrent == gTermIO[2] || (v11 = 0LL, gptiCurrent == qword_1C032B730) )
            v11 = 1LL;
          v12 = BuildHwndList(v9);
          v14 = v12;
          if ( v12 )
          {
            for ( i = (_QWORD *)(v12 + 32); *i != 1LL; ++i )
            {
              LOBYTE(v13) = 1;
              v16 = (struct tagWND *)HMValidateHandleNoSecure(*i, v13);
              if ( v16 )
              {
                ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v13, v17, v18);
                v26 = *(_QWORD *)(ThreadWin32Thread + 408);
                *(_QWORD *)(ThreadWin32Thread + 408) = &v26;
                v27 = v16;
                HMLockObject(v16);
                if ( v11 )
                  xxxSendNotifyMessage(v16, 0x128u, v3, 0LL, 1);
                else
                  xxxSendMessage(v16, 296LL, v3, 0LL);
                ThreadUnlock1(v21, v20, v22);
              }
            }
            FreeHwndList(v14);
          }
        }
        return 0LL;
      }
      v23 = 0;
    }
    SetOrClrWF(v23, a1, 0xB04u, 1);
    goto LABEL_16;
  }
  if ( (v7 & 0x80u) != 0
    || (v8 = *(_DWORD *)(gpsi + 7004LL), (v8 & 0x20) != 0)
    || v8 >= 0
    || (GetAppCompatFlags2(1024LL) & 2) != 0 )
  {
    LOWORD(v4) = v4 & 0xFFFC;
  }
  if ( (_WORD)v4 )
    goto LABEL_10;
  return 0LL;
}
