/*
 * XREFs of xxxTurnOffCompositing @ 0x1C01E9B1C
 * Callers:
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C0017CC4 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     xxxSetWindowStyle @ 0x1C003C020 (xxxSetWindowStyle.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     xxxInternalEnumWindow @ 0x1C01D5E5C (xxxInternalEnumWindow.c)
 */

__int64 __fastcall xxxTurnOffCompositing(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  int v4; // edi
  struct tagWND *v5; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // [rsp+20h] [rbp-28h] BYREF
  struct tagWND *v11; // [rsp+28h] [rbp-20h]
  __int64 v12; // [rsp+30h] [rbp-18h]

  result = 0LL;
  v4 = a2;
  v10 = 0LL;
  v5 = (struct tagWND *)a1;
  v11 = 0LL;
  v12 = 0LL;
  if ( (_DWORD)a2 )
  {
    v5 = *(struct tagWND **)(a1 + 112);
    if ( !v5 )
      return result;
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3);
    v10 = *(_QWORD *)(ThreadWin32Thread + 408);
    *(_QWORD *)(ThreadWin32Thread + 408) = &v10;
    v11 = v5;
    HMLockObject(v5);
  }
  result = xxxInternalEnumWindow(v5, (__int64 (__fastcall *)(__int64, __int64))xxxEnumTurnOffCompositing, 0LL);
  if ( v4 )
    return ThreadUnlock1(v8, v7, v9);
  return result;
}
