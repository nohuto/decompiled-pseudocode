/*
 * XREFs of xxxSetIMEShowStatus @ 0x1C0112334
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x1C00675F4 (xxxSystemParametersInfoWorker.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     UpdateWinIniInt @ 0x1C01A51C0 (UpdateWinIniInt.c)
 *     ?xxxNotifyImeShowStatus@@YAXPEAUtagWND@@@Z @ 0x1C01AC7CC (-xxxNotifyImeShowStatus@@YAXPEAUtagWND@@@Z.c)
 */

__int64 __fastcall xxxSetIMEShowStatus(unsigned int a1, __int64 a2, _DWORD *a3, __int64 a4)
{
  __int64 ProfileUserName; // rax
  __int64 v8; // rsi
  __int64 v9; // rbx
  __int64 v10; // rbx
  __int64 v11; // rdi
  __int64 ThreadWin32Thread; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  _QWORD v16[3]; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v17[32]; // [rsp+38h] [rbp-20h] BYREF

  *a3 = 0;
  if ( gfIMEShowStatus == a1 )
    return 1LL;
  if ( !(_DWORD)a2 )
    goto LABEL_4;
  ProfileUserName = CreateProfileUserName(v17, a2, a3, a4);
  v8 = ProfileUserName;
  if ( ProfileUserName )
  {
    *a3 = UpdateWinIniInt(ProfileUserName, 35LL, 236LL, a1);
    FreeProfileUserName(v8, v17);
  }
  if ( *a3 )
  {
LABEL_4:
    gfIMEShowStatus = a1;
    if ( (*gpsi & 4) != 0 )
    {
      if ( gpqForeground )
      {
        v9 = *(_QWORD *)(gpqForeground + 112LL);
        if ( v9 )
        {
          v10 = *(_QWORD *)(v9 + 16);
          v11 = *(_QWORD *)(v10 + 768);
          if ( v11 )
          {
            if ( (*(_DWORD *)(v10 + 480) & 1) == 0 )
            {
              ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2);
              v16[0] = *(_QWORD *)(ThreadWin32Thread + 408);
              *(_QWORD *)(ThreadWin32Thread + 408) = v16;
              v16[1] = v11;
              _InterlockedIncrement((volatile signed __int32 *)(v11 + 8));
              xxxNotifyImeShowStatus(*(struct tagWND **)(v10 + 768));
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
