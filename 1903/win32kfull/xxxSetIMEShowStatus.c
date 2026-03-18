/*
 * XREFs of xxxSetIMEShowStatus @ 0x1C01403AC
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x1C00BA614 (xxxSystemParametersInfoWorker.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     UpdateWinIniInt @ 0x1C01DA754 (UpdateWinIniInt.c)
 *     ?xxxNotifyImeShowStatus@@YAXPEAUtagWND@@@Z @ 0x1C01E466C (-xxxNotifyImeShowStatus@@YAXPEAUtagWND@@@Z.c)
 */

__int64 __fastcall xxxSetIMEShowStatus(unsigned int a1, __int64 a2, _DWORD *a3, __int64 a4)
{
  __int64 ProfileUserName; // rax
  __int64 v8; // rsi
  __int64 v9; // rax
  __int64 v10; // rbx
  __int64 v11; // rdi
  __int64 ThreadWin32Thread; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // [rsp+20h] [rbp-38h] BYREF
  __int64 v17; // [rsp+28h] [rbp-30h]
  __int64 v18; // [rsp+30h] [rbp-28h]
  _QWORD v19[4]; // [rsp+38h] [rbp-20h] BYREF

  *a3 = 0;
  if ( LODWORD(WPP_MAIN_CB.Dpc.ProcessorHistory) == a1 )
    return 1LL;
  if ( !(_DWORD)a2 )
    goto LABEL_4;
  memset(v19, 0, 24);
  ProfileUserName = CreateProfileUserName(v19);
  v8 = ProfileUserName;
  if ( ProfileUserName )
  {
    *a3 = UpdateWinIniInt(ProfileUserName, 35LL, 236LL, a1);
    FreeProfileUserName(v8, v19);
  }
  if ( *a3 )
  {
LABEL_4:
    LODWORD(WPP_MAIN_CB.Dpc.ProcessorHistory) = a1;
    if ( (*gpsi & 4) != 0 )
    {
      if ( gpqForeground )
      {
        v9 = *(_QWORD *)(gpqForeground + 120LL);
        if ( v9 )
        {
          v10 = *(_QWORD *)(v9 + 16);
          v16 = 0LL;
          v17 = 0LL;
          v18 = 0LL;
          v11 = *(_QWORD *)(v10 + 776);
          if ( v11 )
          {
            if ( (*(_DWORD *)(v10 + 480) & 1) == 0 )
            {
              ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, (__int64)a3, a4);
              v16 = *(_QWORD *)(ThreadWin32Thread + 408);
              *(_QWORD *)(ThreadWin32Thread + 408) = &v16;
              v17 = v11;
              HMLockObject(v11);
              xxxNotifyImeShowStatus(*(struct tagWND **)(v10 + 776));
              ThreadUnlock1(v14, v13, v15);
            }
          }
        }
      }
    }
    return 1LL;
  }
  return 0LL;
}
