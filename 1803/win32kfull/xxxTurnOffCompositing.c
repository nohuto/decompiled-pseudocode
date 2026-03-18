/*
 * XREFs of xxxTurnOffCompositing @ 0x1C01B1ECC
 * Callers:
 *     xxxSetWindowStyle @ 0x1C00442C0 (xxxSetWindowStyle.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C00C11FC (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     xxxInternalEnumWindow @ 0x1C005A814 (xxxInternalEnumWindow.c)
 */

void __fastcall xxxTurnOffCompositing(__int64 a1, __int64 a2)
{
  int v2; // edi
  __int64 v3; // rbx
  char v4; // si
  __int64 ThreadWin32Thread; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  _QWORD v9[5]; // [rsp+20h] [rbp-28h] BYREF

  v2 = a2;
  v3 = a1;
  v4 = 1;
  if ( (_DWORD)a2 )
  {
    v3 = *(_QWORD *)(a1 + 88);
    if ( !v3 )
      return;
    v4 = 3;
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2);
    v9[0] = *(_QWORD *)(ThreadWin32Thread + 408);
    *(_QWORD *)(ThreadWin32Thread + 408) = v9;
    v9[1] = v3;
    _InterlockedIncrement((volatile signed __int32 *)(v3 + 8));
  }
  xxxInternalEnumWindow((_QWORD *)v3, (__int64 (__fastcall *)(__int64, __int64))xxxEnumTurnOffCompositing, 0LL, v4);
  if ( v2 )
    ThreadUnlock1(v7, v6, v8);
}
