/*
 * XREFs of ExpTimeRefreshDpcRoutine @ 0x14013A6A0
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x1400D1A80 (ExQueueWorkItem.c)
 *     _local_unwind @ 0x140195300 (_local_unwind.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     KiCustomAccessRoutine7 @ 0x1401C7A80 (KiCustomAccessRoutine7.c)
 */

void __fastcall ExpTimeRefreshDpcRoutine(__int64 a1, volatile signed __int32 *a2, __int64 a3, unsigned __int64 a4)
{
  _DWORD v5[70]; // [rsp+0h] [rbp-1C8h] BYREF
  __int64 v6; // [rsp+148h] [rbp-80h]
  __int64 v7; // [rsp+170h] [rbp-58h]
  __int64 v8; // [rsp+188h] [rbp-40h]
  _DWORD *v9; // [rsp+198h] [rbp-30h]

  v9 = v5;
  if ( (__int64)a2 >> 47 != -1 && (__int64)a2 >> 47 != 0 )
  {
    v5[13] = 0;
    *(_BYTE *)a1 = 0;
    *(_QWORD *)(a1 + 32) = a4 >> 8;
    v8 = a3;
    v7 = __ROL8__(a2, a3);
    v6 = __ROR8__(a1, a3);
    *(_QWORD *)(a1 + 40) ^= a4;
    *(_QWORD *)(a1 + 48) ^= a3;
    KiCustomAccessRoutine7(a2);
  }
  if ( _InterlockedIncrement(a2) == 1 )
    ExQueueWorkItem(&ExpTimeRefreshWorkItem, DelayedWorkQueue);
}
