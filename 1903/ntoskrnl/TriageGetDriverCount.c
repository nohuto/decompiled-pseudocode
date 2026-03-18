/*
 * XREFs of TriageGetDriverCount @ 0x140A403D8
 * Callers:
 *     VfTriageAddDrivers @ 0x140A3E028 (VfTriageAddDrivers.c)
 *     ViTriageSameDriversFromDump @ 0x140A3E330 (ViTriageSameDriversFromDump.c)
 * Callees:
 *     TriagepVerifyDump @ 0x140A4044C (TriagepVerifyDump.c)
 */

__int64 __fastcall TriageGetDriverCount(__int64 a1, _DWORD *a2)
{
  __int64 v4; // rax

  if ( !(unsigned __int8)TriagepVerifyDump(a1) )
    return 3221225485LL;
  v4 = a1 + (unsigned int)TriageImagePageSize;
  if ( !v4 )
    return 3221225485LL;
  *a2 = *(_DWORD *)(v4 + 52);
  return 0LL;
}
