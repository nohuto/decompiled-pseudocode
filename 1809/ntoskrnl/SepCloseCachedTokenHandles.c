/*
 * XREFs of SepCloseCachedTokenHandles @ 0x1400DD4A0
 * Callers:
 *     SepDereferenceCachedHandlesEntry @ 0x1405DF178 (SepDereferenceCachedHandlesEntry.c)
 *     SepSetTokenCachedHandles @ 0x14065BDBC (SepSetTokenCachedHandles.c)
 * Callees:
 *     ZwClose @ 0x1401B8350 (ZwClose.c)
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
