/*
 * XREFs of ndisReferenceRef @ 0x1C001C7EC
 * Callers:
 *     ndisPktMonFilterRegister @ 0x1C00C36AC (ndisPktMonFilterRegister.c)
 *     ndisFNotifyDetach @ 0x1C00EC974 (ndisFNotifyDetach.c)
 * Callees:
 *     ndisReferenceRefEx @ 0x1C001C808 (ndisReferenceRefEx.c)
 */

__int64 __fastcall ndisReferenceRef(KSPIN_LOCK *a1)
{
  return ndisReferenceRefEx(a1);
}
