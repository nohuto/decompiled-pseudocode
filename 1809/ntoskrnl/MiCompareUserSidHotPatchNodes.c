/*
 * XREFs of MiCompareUserSidHotPatchNodes @ 0x140855D08
 * Callers:
 *     MiFindUserSidHotPatchContext @ 0x1408561C0 (MiFindUserSidHotPatchContext.c)
 *     MiLoadHotPatchForUserSid @ 0x140856E98 (MiLoadHotPatchForUserSid.c)
 * Callees:
 *     RtlLengthSid @ 0x1400162C0 (RtlLengthSid.c)
 *     RtlCompareMemory @ 0x1401C5D30 (RtlCompareMemory.c)
 */

__int64 __fastcall MiCompareUserSidHotPatchNodes(unsigned __int64 *a1, __int64 a2)
{
  unsigned __int64 v3; // r8
  void *v4; // rbp
  void *v5; // rsi
  ULONG v6; // edi
  ULONG v7; // eax
  unsigned int v8; // eax

  v3 = *(_QWORD *)(a2 + 32);
  if ( *a1 < v3 )
    return 0xFFFFFFFFLL;
  if ( *a1 <= v3 )
  {
    v4 = (void *)a1[1];
    v5 = (void *)(a2 + 40);
    v6 = RtlLengthSid(v4);
    v7 = RtlLengthSid(v5);
    if ( v6 < v7 )
      return 0xFFFFFFFFLL;
    if ( v6 <= v7 )
    {
      v8 = RtlCompareMemory(v4, v5, v6);
      if ( v8 == v6 )
        return 0LL;
      if ( *(_BYTE *)(v8 + a1[1]) < *((_BYTE *)v5 + v8) )
        return 0xFFFFFFFFLL;
    }
  }
  return 1LL;
}
