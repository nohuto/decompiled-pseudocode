/*
 * XREFs of IopfCallDriver @ 0x1401732F4
 * Callers:
 *     IofCallDriverSpecifyReturn @ 0x1401732D0 (IofCallDriverSpecifyReturn.c)
 *     IopPerfCallDriver @ 0x140285568 (IopPerfCallDriver.c)
 *     IovCallDriver @ 0x140924CD4 (IovCallDriver.c)
 *     IovpCallDriverNoIrpTracking @ 0x1409254A0 (IovpCallDriverNoIrpTracking.c)
 *     IovpCallDriverWithStackBuffer @ 0x14092550C (IovpCallDriverWithStackBuffer.c)
 * Callees:
 *     IopPoHandleIrp @ 0x140171C4C (IopPoHandleIrp.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 */

__int64 __fastcall IopfCallDriver(__int64 a1, IRP *a2)
{
  __int64 v2; // rax
  unsigned __int8 v3; // r9

  if ( --a2->CurrentLocation <= 0 )
    KeBugCheckEx(0x35u, (ULONG_PTR)a2, 0LL, 0LL, 0LL);
  v2 = (__int64)&a2->Tail.Overlay.CurrentStackLocation[-1];
  a2->Tail.Overlay.CurrentStackLocation = (struct _IO_STACK_LOCATION *)v2;
  v3 = *(_BYTE *)v2;
  *(_QWORD *)(v2 + 40) = a1;
  if ( v3 == 22 && (unsigned __int8)(*(_BYTE *)(v2 + 1) - 2) <= 1u )
    return IopPoHandleIrp(a2);
  else
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(a1 + 8) + 8LL * v3 + 112))(a1);
}
