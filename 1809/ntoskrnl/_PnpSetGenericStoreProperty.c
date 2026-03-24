/*
 * XREFs of _PnpSetGenericStoreProperty @ 0x1406E5A2C
 * Callers:
 *     PiDqIrpPropertySet @ 0x1406D58DC (PiDqIrpPropertySet.c)
 *     _PnpSetObjectPropertyWorker @ 0x1406E579C (_PnpSetObjectPropertyWorker.c)
 * Callees:
 *     _PnpSetPropertyWorker @ 0x1406E61D0 (_PnpSetPropertyWorker.c)
 *     _PnpDeletePropertyWorker @ 0x140700F94 (_PnpDeletePropertyWorker.c)
 */

__int64 __fastcall PnpSetGenericStoreProperty(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  if ( a5 )
    return PnpSetPropertyWorker(a1, a2, a3);
  else
    return PnpDeletePropertyWorker(a1);
}
