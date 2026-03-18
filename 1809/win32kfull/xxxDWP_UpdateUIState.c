/*
 * XREFs of xxxDWP_UpdateUIState @ 0x1C00ABB00
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C0066C18 (xxxRealDefWindowProc.c)
 *     ?xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z @ 0x1C00B4ADC (-xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z.c)
 * Callees:
 *     SetOrClrWF @ 0x1C000DA60 (SetOrClrWF.c)
 *     xxxSendMessage @ 0x1C002CE20 (xxxSendMessage.c)
 *     HMValidateHandleNoSecure @ 0x1C003730C (HMValidateHandleNoSecure.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     FreeHwndList @ 0x1C0070D10 (FreeHwndList.c)
 *     BuildHwndList @ 0x1C0070DA0 (BuildHwndList.c)
 *     GetAppCompatFlags2 @ 0x1C00AC380 (GetAppCompatFlags2.c)
 *     xxxSendNotifyMessage @ 0x1C00D14F0 (xxxSendNotifyMessage.c)
 */

__int64 __fastcall xxxDWP_UpdateUIState(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v3; // rdi
  unsigned __int64 v4; // rbx
  __int64 v6; // rbp
  int v7; // eax
  int v8; // eax
  __int64 v10; // r14
  struct tagBWL *v11; // rax
  __int64 v12; // rdx
  struct tagBWL *v13; // rbp
  unsigned __int64 *i; // rsi
  ULONG_PTR v15; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  int v19; // ecx
  int v20; // eax
  int v21; // edi
  _QWORD v22[4]; // [rsp+30h] [rbp-38h] BYREF

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
    v20 = *(_DWORD *)(gpsi + 7004LL);
    if ( (v20 & 0x20) != 0 || v20 >= 0 || (GetAppCompatFlags2(1024LL) & 2) != 0 )
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
      v19 = 1;
    }
    else
    {
      if ( (unsigned __int16)v6 != 2 )
      {
        if ( (unsigned __int16)v6 == 3 )
        {
          v21 = *gpsi & 0x40;
          SetOrClrWF(v21 == 0, a1, 0xB80u, 1);
          SetOrClrWF(v21 == 0, a1, 0xB40u, 1);
          v3 = (v21 != 0) + 196609LL;
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
        if ( *(_QWORD *)(a1 + 88) )
        {
          if ( gptiCurrent == *((_QWORD *)&gTermIO + 2) || (v10 = 0LL, gptiCurrent == qword_1C0316700) )
            v10 = 1LL;
          v11 = BuildHwndList(*(struct tagWND **)(a1 + 88), 2, 0LL);
          v13 = v11;
          if ( v11 )
          {
            for ( i = (unsigned __int64 *)((char *)v11 + 32); *i != 1; ++i )
            {
              LOBYTE(v12) = 1;
              v15 = HMValidateHandleNoSecure(*i, v12);
              if ( v15 )
              {
                ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v12);
                v22[0] = *(_QWORD *)(ThreadWin32Thread + 416);
                *(_QWORD *)(ThreadWin32Thread + 416) = v22;
                v22[1] = v15;
                _InterlockedAdd((volatile signed __int32 *)(v15 + 8), 1u);
                if ( v10 )
                  xxxSendNotifyMessage(v15, 296LL, v3, 0LL, 1);
                else
                  xxxSendMessage(v15);
                ThreadUnlock1(v18, v17);
              }
            }
            FreeHwndList(v13);
          }
        }
        return 0LL;
      }
      v19 = 0;
    }
    SetOrClrWF(v19, a1, 0xB04u, 1);
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
