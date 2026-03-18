/*
 * XREFs of RtlpHpVaMgrRangeFree @ 0x14010E37C
 * Callers:
 *     RtlpHpVaMgrCtxFree @ 0x14010E80C (RtlpHpVaMgrCtxFree.c)
 * Callees:
 *     RtlpHpEnvFreeVA @ 0x14010E478 (RtlpHpEnvFreeVA.c)
 *     RtlpHpVaMgrRangeCleanup @ 0x14010E970 (RtlpHpVaMgrRangeCleanup.c)
 */

__int64 __fastcall RtlpHpVaMgrRangeFree(__int64 a1, __int64 a2)
{
  bool v2; // zf
  __int64 v3; // rax
  __int64 v4; // r9
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF
  __int64 v7; // [rsp+38h] [rbp+10h] BYREF

  v2 = (*(_BYTE *)a2 & 4) == 0;
  v7 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL)
     + ((a2 - *(_QWORD *)(*(_QWORD *)(a1 + 24) + 40LL)) >> *(_DWORD *)(*(_QWORD *)(a1 + 24) + 24LL) << 20);
  if ( v2 )
    v3 = *(unsigned __int16 *)(a2 + 24);
  else
    v3 = *(_QWORD *)(a2 + 24);
  v6 = v3 << 20;
  RtlpHpVaMgrRangeCleanup(a1);
  return RtlpHpEnvFreeVA(&v7, &v6, 0x8000LL, v4);
}
