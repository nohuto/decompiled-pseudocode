/*
 * XREFs of xxxSetIMEShowStatus @ 0x1C011A8BC
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x1C005BCF4 (xxxSystemParametersInfoWorker.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     UpdateWinIniInt @ 0x1C01DA5D4 (UpdateWinIniInt.c)
 *     ?xxxNotifyImeShowStatus@@YAXPEAUtagWND@@@Z @ 0x1C01E44EC (-xxxNotifyImeShowStatus@@YAXPEAUtagWND@@@Z.c)
 */

__int64 __fastcall xxxSetIMEShowStatus(unsigned int a1, __int64 a2, _DWORD *a3)
{
  __int64 ProfileUserName; // rax
  __int64 v7; // rsi
  __int64 v8; // rax
  __int64 v9; // rbx
  __int64 v10; // rdi
  __int64 ThreadWin32Thread; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // [rsp+20h] [rbp-38h] BYREF
  __int64 v16; // [rsp+28h] [rbp-30h]
  __int64 v17; // [rsp+30h] [rbp-28h]
  _QWORD v18[4]; // [rsp+38h] [rbp-20h] BYREF

  *a3 = 0;
  if ( LODWORD(WPP_MAIN_CB.Dpc.ProcessorHistory) == a1 )
    return 1LL;
  if ( !(_DWORD)a2 )
    goto LABEL_4;
  memset(v18, 0, 24);
  ProfileUserName = CreateProfileUserName(v18);
  v7 = ProfileUserName;
  if ( ProfileUserName )
  {
    *a3 = UpdateWinIniInt(ProfileUserName, 35LL, 236LL, a1);
    FreeProfileUserName(v7, v18);
  }
  if ( *a3 )
  {
LABEL_4:
    LODWORD(WPP_MAIN_CB.Dpc.ProcessorHistory) = a1;
    if ( (*gpsi & 4) != 0 )
    {
      if ( gpqForeground )
      {
        v8 = *(_QWORD *)(gpqForeground + 120LL);
        if ( v8 )
        {
          v9 = *(_QWORD *)(v8 + 16);
          v15 = 0LL;
          v16 = 0LL;
          v17 = 0LL;
          v10 = *(_QWORD *)(v9 + 776);
          if ( v10 )
          {
            if ( (*(_DWORD *)(v9 + 480) & 1) == 0 )
            {
              ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, (__int64)a3);
              v15 = *(_QWORD *)(ThreadWin32Thread + 408);
              *(_QWORD *)(ThreadWin32Thread + 408) = &v15;
              v16 = v10;
              HMLockObject(v10);
              xxxNotifyImeShowStatus(*(struct tagWND **)(v9 + 776));
              ThreadUnlock1(v13, v12, v14);
            }
          }
        }
      }
    }
    return 1LL;
  }
  return 0LL;
}
