/*
 * XREFs of CmpIsBufferGloballyVisible @ 0x14066CA08
 * Callers:
 *     CmpBounceContextStart @ 0x1405FE880 (CmpBounceContextStart.c)
 *     CmpDoesBufferRequireCapturing @ 0x1405FE9C0 (CmpDoesBufferRequireCapturing.c)
 * Callees:
 *     MmIsSessionAddress @ 0x14009EE80 (MmIsSessionAddress.c)
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
