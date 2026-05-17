/*
 * XREFs of RtlpHpMetadataHeapCreate @ 0x18004F000
 * Callers:
 *     <none>
 * Callees:
 *     RtlpHpHeapCreate @ 0x18004C4C0 (RtlpHpHeapCreate.c)
 */

__int64 __fastcall RtlpHpMetadataHeapCreate(__int64 a1, __int128 *a2)
{
  __int64 v3; // rdx
  __int64 result; // rax
  __int128 v5; // [rsp+20h] [rbp-18h] BYREF

  v5 = *a2;
  v3 = RtlpHpHeapCreate(0, 0LL, 0LL, &v5);
  result = 0LL;
  if ( v3 )
  {
    *(_QWORD *)(a1 - 8) = v3;
    return 1LL;
  }
  return result;
}
