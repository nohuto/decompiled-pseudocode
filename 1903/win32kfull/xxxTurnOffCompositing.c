/*
 * XREFs of xxxTurnOffCompositing @ 0x1C01E9C9C
 * Callers:
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C008E698 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     xxxSetWindowStyle @ 0x1C009B250 (xxxSetWindowStyle.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     xxxInternalEnumWindow @ 0x1C01D5FEC (xxxInternalEnumWindow.c)
 */

__int64 __fastcall xxxTurnOffCompositing(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  int v5; // edi
  struct tagWND *v6; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // [rsp+20h] [rbp-28h] BYREF
  struct tagWND *v12; // [rsp+28h] [rbp-20h]
  __int64 v13; // [rsp+30h] [rbp-18h]

  result = 0LL;
  v5 = a2;
  v11 = 0LL;
  v6 = (struct tagWND *)a1;
  v12 = 0LL;
  v13 = 0LL;
  if ( (_DWORD)a2 )
  {
    v6 = *(struct tagWND **)(a1 + 112);
    if ( !v6 )
      return result;
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3, a4);
    v11 = *(_QWORD *)(ThreadWin32Thread + 408);
    *(_QWORD *)(ThreadWin32Thread + 408) = &v11;
    v12 = v6;
    HMLockObject(v6);
  }
  result = xxxInternalEnumWindow(v6, (__int64 (__fastcall *)(__int64, __int64))xxxEnumTurnOffCompositing, 0LL);
  if ( v5 )
    return ThreadUnlock1(v9, v8, v10);
  return result;
}
