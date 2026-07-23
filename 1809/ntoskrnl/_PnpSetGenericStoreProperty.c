/*
 * XREFs of _PnpSetGenericStoreProperty @ 0x1406E6CCC
 * Callers:
 *     PiDqIrpPropertySet @ 0x1406D6B7C (PiDqIrpPropertySet.c)
 *     _PnpSetObjectPropertyWorker @ 0x1406E6A3C (_PnpSetObjectPropertyWorker.c)
 * Callees:
 *     _PnpSetPropertyWorker @ 0x1406E7470 (_PnpSetPropertyWorker.c)
 *     _PnpDeletePropertyWorker @ 0x140702234 (_PnpDeletePropertyWorker.c)
 */

__int64 __fastcall PnpSetGenericStoreProperty(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  if ( a5 )
    return PnpSetPropertyWorker(a1, a2, a3);
  else
    return PnpDeletePropertyWorker(a1);
}
