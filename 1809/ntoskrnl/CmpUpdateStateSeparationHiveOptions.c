/*
 * XREFs of CmpUpdateStateSeparationHiveOptions @ 0x1409F3C84
 * Callers:
 *     CmInitSystem1 @ 0x1409C3050 (CmInitSystem1.c)
 * Callees:
 *     <none>
 */

__int64 CmpUpdateStateSeparationHiveOptions()
{
  _DWORD *v0; // rcx
  __int64 v1; // rdx
  __int64 result; // rax

  if ( CmStateSeparationAllHivesVolatile )
  {
    v0 = &unk_1403FEE30;
    v1 = 7LL;
    result = 0x8000LL;
    do
    {
      *v0 |= 0x8000u;
      v0 += 38;
      --v1;
    }
    while ( v1 );
  }
  else
  {
    byte_1403FEEE4 = 0;
    if ( !CmStateSeparationDevMode )
    {
      result = 0x8000LL;
      dword_1403FEF60 |= 0x8000u;
      dword_1403FEFF8 |= 0x8000u;
    }
    byte_1403FF144 = 0;
    byte_1403FF1DB = 1;
  }
  return result;
}
