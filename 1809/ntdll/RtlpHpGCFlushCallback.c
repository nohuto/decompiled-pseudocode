/*
 * XREFs of RtlpHpGCFlushCallback @ 0x1800689D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpHpGCFlushCallback(__int64 a1)
{
  __int64 v1; // r8
  unsigned __int64 v2; // rax

  if ( *(_DWORD *)(a1 + 16) != -571548178 || (*(_BYTE *)(a1 + 20) & 1) != 0 )
    return 0LL;
  v1 = *(__int16 *)(a1 + 278);
  v2 = *(_QWORD *)(v1 + a1 + 264) >> *(_BYTE *)(a1 + 267);
  if ( v2 <= 8 )
    v2 = 8LL;
  if ( *(_QWORD *)(v1 + a1 + 272) + *(_QWORD *)(v1 + a1 + 280) > v2 )
    return RtlpHpHeapCompact(a1, 0LL);
  else
    return 0LL;
}
