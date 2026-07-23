/*
 * XREFs of IopGetMaxValidSectionSizeDown @ 0x1402818E8
 * Callers:
 *     KeCapturePersistentThreadState @ 0x140282890 (KeCapturePersistentThreadState.c)
 * Callees:
 *     MiIsAddressValid @ 0x140068590 (MiIsAddressValid.c)
 */

__int64 __fastcall IopGetMaxValidSectionSizeDown(unsigned __int64 a1, unsigned int a2)
{
  unsigned int v2; // edi
  unsigned int v3; // ebx

  v2 = a2;
  v3 = 0;
  if ( a1 < a2 )
    v2 = a1;
  if ( v2 )
  {
    do
    {
      if ( !MiIsAddressValid(a1 - v3) )
        break;
      ++v3;
    }
    while ( v3 < v2 );
  }
  return v3;
}
