/*
 * XREFs of ViGenericDriverStartIo @ 0x140943AD0
 * Callers:
 *     <none>
 * Callees:
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ViGenericDriverStartIo(__int64 a1, __int64 a2)
{
  ULONG_PTR v2; // r8
  ULONG_PTR v3; // r9
  __int64 (*v4)(void); // rax

  v2 = *(_QWORD *)(a1 + 8);
  v3 = *(_QWORD *)(*(_QWORD *)(v2 + 48) + 64LL);
  if ( !v3 || (v4 = *(__int64 (**)(void))(v3 + 8)) == 0LL )
    KeBugCheckEx(0xC4u, 0x1013uLL, v2, v3, 0LL);
  if ( pXdvDriverStartIo )
    return ((__int64 (__fastcall *)(__int64, __int64, __int64 (*)(void)))pXdvDriverStartIo)(a1, a2, v4);
  else
    return v4();
}
