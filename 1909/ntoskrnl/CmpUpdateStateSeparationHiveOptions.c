/*
 * XREFs of CmpUpdateStateSeparationHiveOptions @ 0x140A38E48
 * Callers:
 *     CmInitSystem1 @ 0x140A0D1F0 (CmInitSystem1.c)
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
    v0 = &unk_140424E30;
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
    byte_140424EE4 = 0;
    if ( !CmStateSeparationDevMode )
    {
      result = 0x8000LL;
      dword_140424F60 |= 0x8000u;
      dword_140424FF8 |= 0x8000u;
    }
    byte_140425144 = 0;
    byte_1404251DB = 1;
  }
  return result;
}
