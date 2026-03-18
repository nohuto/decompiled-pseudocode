/*
 * XREFs of _PnpSetGenericStoreProperty @ 0x1407069EC
 * Callers:
 *     PiDqIrpPropertySet @ 0x1406F3670 (PiDqIrpPropertySet.c)
 *     _PnpSetObjectPropertyWorker @ 0x14070676C (_PnpSetObjectPropertyWorker.c)
 * Callees:
 *     _PnpSetPropertyWorker @ 0x140707184 (_PnpSetPropertyWorker.c)
 *     _PnpDeletePropertyWorker @ 0x14071C104 (_PnpDeletePropertyWorker.c)
 */

__int64 __fastcall PnpSetGenericStoreProperty(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  if ( a5 )
    return PnpSetPropertyWorker(a1, a2, a3);
  else
    return PnpDeletePropertyWorker(a1);
}
