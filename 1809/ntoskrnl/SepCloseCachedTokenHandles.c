/*
 * XREFs of SepCloseCachedTokenHandles @ 0x1400DD540
 * Callers:
 *     SepDereferenceCachedHandlesEntry @ 0x1405E0178 (SepDereferenceCachedHandlesEntry.c)
 *     SepSetTokenCachedHandles @ 0x14065CF5C (SepSetTokenCachedHandles.c)
 * Callees:
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 */

__int64 __fastcall SepCloseCachedTokenHandles(unsigned int a1, HANDLE *a2)
{
  unsigned int v2; // ebx
  __int64 v4; // rsi
  NTSTATUS v5; // eax

  v2 = 0;
  if ( a1 )
  {
    v4 = a1;
    do
    {
      v5 = ZwClose(*a2++);
      if ( v5 < 0 )
        v2 = v5;
      --v4;
    }
    while ( v4 );
  }
  return v2;
}
