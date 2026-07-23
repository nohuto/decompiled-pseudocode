/*
 * XREFs of ViGenericDriverUnload @ 0x140943B30
 * Callers:
 *     <none>
 * Callees:
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ViGenericDriverUnload(ULONG_PTR BugCheckParameter2)
{
  ULONG_PTR v1; // r9
  __int64 (*v2)(void); // rax

  v1 = *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 48) + 64LL);
  if ( !v1 || (v2 = *(__int64 (**)(void))(v1 + 16)) == 0LL )
    KeBugCheckEx(0xC4u, 0x1013uLL, BugCheckParameter2, v1, 0LL);
  if ( pXdvDriverUnload )
    return ((__int64 (__fastcall *)(ULONG_PTR, _QWORD))pXdvDriverUnload)(BugCheckParameter2, *(_QWORD *)(v1 + 16));
  else
    return v2();
}
