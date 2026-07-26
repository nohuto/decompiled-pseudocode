/*
 * XREFs of ndisReferenceRef @ 0x1C003F3A4
 * Callers:
 *     ndisPktMonFilterRegister @ 0x1C010242C (ndisPktMonFilterRegister.c)
 * Callees:
 *     ndisReferenceRefEx @ 0x1C001B320 (ndisReferenceRefEx.c)
 */

bool __fastcall ndisReferenceRef(KSPIN_LOCK *a1, unsigned __int8 a2)
{
  int v3; // [rsp+40h] [rbp+18h] BYREF

  return ndisReferenceRefEx(a1, a2, &v3);
}
