/*
 * XREFs of BiMarkTreatAsSystemStore @ 0x140712404
 * Callers:
 *     BiLoadSystemStore @ 0x1407120C8 (BiLoadSystemStore.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     BiDeleteRegistryValue @ 0x140712A94 (BiDeleteRegistryValue.c)
 *     BiGetRegistryValue @ 0x140714444 (BiGetRegistryValue.c)
 *     BiSetRegistryValue @ 0x140715024 (BiSetRegistryValue.c)
 */

__int64 __fastcall BiMarkTreatAsSystemStore(__int64 a1, char a2)
{
  int v4; // ebx
  __int64 result; // rax
  PVOID P[5]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v7; // [rsp+78h] [rbp+20h] BYREF

  if ( (int)BiGetRegistryValue(a1, L"System", L"Description", 4LL, P, &v7) >= 0 )
  {
    v4 = *(_DWORD *)P[0];
    ExFreePoolWithTag(P[0], 0x4B444342u);
    if ( v4 )
    {
      if ( a2 )
        return BiSetRegistryValue(a1, L"TreatAsSystem", L"Description");
    }
  }
  result = BiDeleteRegistryValue(a1, L"TreatAsSystem", L"Description");
  if ( (_DWORD)result == -1073741772 )
    return 0LL;
  return result;
}
