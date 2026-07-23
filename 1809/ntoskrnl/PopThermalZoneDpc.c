/*
 * XREFs of PopThermalZoneDpc @ 0x140190310
 * Callers:
 *     <none>
 * Callees:
 *     IoCancelIrp @ 0x140121F00 (IoCancelIrp.c)
 *     _local_unwind @ 0x140195300 (_local_unwind.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     KiCustomAccessRoutine3 @ 0x1401C79C0 (KiCustomAccessRoutine3.c)
 */

BOOLEAN __fastcall PopThermalZoneDpc(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  _DWORD v6[79]; // [rsp+0h] [rbp-1B8h] BYREF
  __int64 v7; // [rsp+13Ch] [rbp-7Ch]
  __int64 v8; // [rsp+154h] [rbp-64h]
  __int64 v9; // [rsp+174h] [rbp-44h]
  _DWORD *v10; // [rsp+190h] [rbp-28h]

  v10 = v6;
  if ( a2 >> 47 != -1 && a2 >> 47 != 0 )
  {
    v6[14] = 0;
    *(_BYTE *)a1 = 0;
    *(_QWORD *)(a1 + 32) = a4 >> 8;
    v9 = a3;
    v7 = __ROL8__(a2, a3);
    v8 = __ROR8__(a1, a3);
    *(_QWORD *)(a1 + 40) ^= a4;
    *(_QWORD *)(a1 + 48) ^= a3;
    KiCustomAccessRoutine3(a2);
  }
  return IoCancelIrp(*(PIRP *)(a2 + 56));
}
