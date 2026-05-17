/*
 * XREFs of RtlpHpGCFlushCallback @ 0x18004F170
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpHpGCFlushCallback(__int64 a1)
{
  __int64 v2; // rax
  unsigned __int64 v3; // rdx

  if ( *(_DWORD *)(a1 + 16) != -571548178 || (*(_BYTE *)(a1 + 20) & 1) != 0 )
    return 0LL;
  v2 = *(__int16 *)(a1 + 278);
  v3 = *(_QWORD *)(v2 + a1 + 264) >> *(_BYTE *)(a1 + 267);
  if ( v3 <= 8 )
    v3 = 8LL;
  if ( *(_QWORD *)(v2 + a1 + 272) + *(_QWORD *)(v2 + a1 + 280) <= v3 )
    return 0LL;
  else
    return RtlpHpHeapCompact(a1, 0LL);
}
