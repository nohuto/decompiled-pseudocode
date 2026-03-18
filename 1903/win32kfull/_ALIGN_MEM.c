/*
 * XREFs of _ALIGN_MEM @ 0x1C0038A60
 * Callers:
 *     BuildShrinkAAInfo @ 0x1C0002200 (BuildShrinkAAInfo.c)
 *     SetupAAHeader @ 0x1C00381C0 (SetupAAHeader.c)
 *     BuildBltAAInfo @ 0x1C003C440 (BuildBltAAInfo.c)
 *     BuildExpandAAInfo @ 0x1C00F1D50 (BuildExpandAAInfo.c)
 *     BuildTileAAInfo @ 0x1C0262490 (BuildTileAAInfo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ALIGN_MEM(_DWORD *a1, unsigned int a2)
{
  unsigned int v2; // r8d
  int v3; // r9d
  __int64 result; // rax

  v2 = a2 + 8;
  v3 = -1;
  if ( a2 + 8 >= a2 )
    v3 = a2 + 8;
  result = v2 < a2 ? 0x80070216 : 0;
  *a1 = v3;
  if ( v2 >= a2 )
    *a1 = v3 & 0xFFFFFFF8;
  return result;
}
