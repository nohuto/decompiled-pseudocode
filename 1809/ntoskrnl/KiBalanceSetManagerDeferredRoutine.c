/*
 * XREFs of KiBalanceSetManagerDeferredRoutine @ 0x140129910
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x1400C2A40 (KeSetEvent.c)
 *     _local_unwind @ 0x140195300 (_local_unwind.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     KiCustomAccessRoutine6 @ 0x1401C7900 (KiCustomAccessRoutine6.c)
 */

LONG __fastcall KiBalanceSetManagerDeferredRoutine(__int64 a1, struct _KEVENT *a2, __int64 a3, unsigned __int64 a4)
{
  _DWORD v6[28]; // [rsp+0h] [rbp-158h] BYREF
  __int64 v7; // [rsp+9Fh] [rbp-B9h]
  __int64 v8; // [rsp+B7h] [rbp-A1h]
  __int64 v9; // [rsp+D7h] [rbp-81h]
  _DWORD *v10; // [rsp+140h] [rbp-18h]

  v10 = v6;
  if ( (__int64)a2 >> 47 != -1 && (__int64)a2 >> 47 != 0 )
  {
    v6[12] = 0;
    *(_BYTE *)a1 = 0;
    *(_QWORD *)(a1 + 32) = a4 >> 8;
    v9 = a3;
    v8 = __ROL8__(a2, a3);
    v7 = __ROR8__(a1, a3);
    *(_QWORD *)(a1 + 40) ^= a4;
    *(_QWORD *)(a1 + 48) ^= a3;
    KiCustomAccessRoutine6(a2);
  }
  return KeSetEvent(a2, 10, 0);
}
