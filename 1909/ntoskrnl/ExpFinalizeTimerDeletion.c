/*
 * XREFs of ExpFinalizeTimerDeletion @ 0x14013CC40
 * Callers:
 *     <none>
 * Callees:
 *     ExFreeHeapPool @ 0x140064E50 (ExFreeHeapPool.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ExpFinalizeTimerDeletion(ULONG_PTR BugCheckParameter2)
{
  void (__fastcall *v2)(unsigned __int64); // rax

  v2 = (void (__fastcall *)(unsigned __int64))(KiWaitAlways ^ _byteswap_uint64(BugCheckParameter2 ^ __ROL8__(KiWaitNever ^ *(_QWORD *)(BugCheckParameter2 + 136), KiWaitNever)));
  if ( v2 )
    v2(KiWaitAlways ^ _byteswap_uint64(BugCheckParameter2 ^ __ROL8__(
                                                              KiWaitNever ^ *(_QWORD *)(BugCheckParameter2 + 144),
                                                              KiWaitNever)));
  *(_BYTE *)(BugCheckParameter2 + 152) = ~ExpTimerFreedCookie;
  return ExFreeHeapPool(BugCheckParameter2);
}
