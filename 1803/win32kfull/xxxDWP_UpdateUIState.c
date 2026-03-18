/*
 * XREFs of xxxDWP_UpdateUIState @ 0x1C00C32A4
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C00246A8 (xxxRealDefWindowProc.c)
 *     ?xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z @ 0x1C006C68C (-xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     HMValidateHandleNoSecure @ 0x1C00270B8 (HMValidateHandleNoSecure.c)
 *     FreeHwndList @ 0x1C002A0E0 (FreeHwndList.c)
 *     BuildHwndList @ 0x1C002A170 (BuildHwndList.c)
 *     xxxSendMessage @ 0x1C003F318 (xxxSendMessage.c)
 *     xxxSendNotifyMessage @ 0x1C0060D20 (xxxSendNotifyMessage.c)
 *     GetAppCompatFlags2 @ 0x1C00C3A80 (GetAppCompatFlags2.c)
 *     SetOrClrWF @ 0x1C00C3E94 (SetOrClrWF.c)
 */

__int64 __fastcall xxxDWP_UpdateUIState(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rdi
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
  __int64 v19; // r8
  __int64 v20; // rcx
  int v21; // eax
  int v22; // edi
  _QWORD v23[4]; // [rsp+30h] [rbp-38h] BYREF

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
    v21 = *(_DWORD *)(gpsi + 7004LL);
    if ( (v21 & 0x20) != 0 || v21 >= 0 || (GetAppCompatFlags2(1024LL) & 2) != 0 )
      return 0LL;
    LOBYTE(v4) = 3;
    v6 = (unsigned __int16)(((*gpsi & 0x40) != 0) + 1);
    v3 = v6 | 0x30000;
LABEL_10:
    if ( (unsigned __int16)v6 == 1 )
    {
      if ( (v4 & 2) != 0 )
        SetOrClrWF(1LL, a1, 2880LL, 1LL);
      if ( (v4 & 1) != 0 )
        SetOrClrWF(1LL, a1, 2944LL, 1LL);
      if ( (v4 & 4) == 0 )
        goto LABEL_16;
      v20 = 1LL;
    }
    else
    {
      if ( (unsigned __int16)v6 != 2 )
      {
        if ( (unsigned __int16)v6 == 3 )
        {
          v22 = *gpsi & 0x40;
          SetOrClrWF(v22 == 0, a1, 2944LL, 1LL);
          SetOrClrWF(v22 == 0, a1, 2880LL, 1LL);
          v3 = (v22 != 0) + 196609LL;
        }
        goto LABEL_16;
      }
      if ( (v4 & 2) != 0 )
        SetOrClrWF((unsigned int)(unsigned __int16)v6 - 2, a1, 2880LL, 1LL);
      if ( (v4 & 1) != 0 )
        SetOrClrWF(0LL, a1, 2944LL, 1LL);
      if ( (v4 & 4) == 0 )
      {
LABEL_16:
        if ( *(_QWORD *)(a1 + 88) )
        {
          if ( gptiCurrent == *((_QWORD *)&gTermIO + 2) || (v10 = 0LL, gptiCurrent == qword_1C032A0F0) )
            v10 = 1LL;
          v11 = BuildHwndList(*(_QWORD **)(a1 + 88), 2, 0LL);
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
                v23[0] = *(_QWORD *)(ThreadWin32Thread + 408);
                *(_QWORD *)(ThreadWin32Thread + 408) = v23;
                v23[1] = v15;
                _InterlockedAdd((volatile signed __int32 *)(v15 + 8), 1u);
                if ( v10 )
                  xxxSendNotifyMessage((struct tagWND *)v15, 0x128u, v3, 0LL, 1);
                else
                  xxxSendMessage(v15);
                ThreadUnlock1(v18, v17, v19);
              }
            }
            FreeHwndList(v13);
          }
        }
        return 0LL;
      }
      v20 = 0LL;
    }
    SetOrClrWF(v20, a1, 2820LL, 1LL);
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
