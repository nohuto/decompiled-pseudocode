/*
 * XREFs of ViGenericAddDevice @ 0x140943830
 * Callers:
 *     <none>
 * Callees:
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ViGenericAddDevice(ULONG_PTR BugCheckParameter2, __int64 a2)
{
  ULONG_PTR v2; // r9
  __int64 (*v3)(void); // rax

  v2 = *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 48) + 64LL);
  if ( !v2 || (v3 = *(__int64 (**)(void))(v2 + 24)) == 0LL )
    KeBugCheckEx(0xC4u, 0x1013uLL, BugCheckParameter2, v2, 0LL);
  if ( pXdvAddDevice )
    return ((__int64 (__fastcall *)(ULONG_PTR, __int64, __int64 (*)(void)))pXdvAddDevice)(BugCheckParameter2, a2, v3);
  else
    return v3();
}
