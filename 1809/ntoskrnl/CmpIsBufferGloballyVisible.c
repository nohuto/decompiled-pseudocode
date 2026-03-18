/*
 * XREFs of CmpIsBufferGloballyVisible @ 0x1405DF288
 * Callers:
 *     CmpDoesBufferRequireCapturing @ 0x1405CD49C (CmpDoesBufferRequireCapturing.c)
 *     CmpBounceContextStart @ 0x1405D2F60 (CmpBounceContextStart.c)
 *     NtQueryValueKey @ 0x140640360 (NtQueryValueKey.c)
 * Callees:
 *     MmIsSessionAddress @ 0x1400245B0 (MmIsSessionAddress.c)
 */

bool __fastcall CmpIsBufferGloballyVisible(unsigned __int64 a1)
{
  int v1; // eax
  bool result; // al

  result = 0;
  if ( a1 > 0x7FFFFFFEFFFFLL )
  {
    LOBYTE(v1) = MmIsSessionAddress(a1);
    if ( !v1 )
      return 1;
  }
  return result;
}
