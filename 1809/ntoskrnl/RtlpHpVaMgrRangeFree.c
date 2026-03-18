/*
 * XREFs of RtlpHpVaMgrRangeFree @ 0x140008544
 * Callers:
 *     RtlpHpVaMgrCtxFree @ 0x140008234 (RtlpHpVaMgrCtxFree.c)
 * Callees:
 *     RtlpHpVaMgrRangeCleanup @ 0x1400085AC (RtlpHpVaMgrRangeCleanup.c)
 *     RtlpHpEnvFreeVA @ 0x14000D2A8 (RtlpHpEnvFreeVA.c)
 */

__int64 __fastcall RtlpHpVaMgrRangeFree(__int64 a1, __int64 a2)
{
  bool v2; // zf
  __int64 v3; // rax
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  v2 = (*(_BYTE *)a2 & 4) == 0;
  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL)
     + ((a2 - *(_QWORD *)(*(_QWORD *)(a1 + 24) + 32LL)) >> *(_DWORD *)(*(_QWORD *)(a1 + 24) + 88LL) << 20);
  if ( v2 )
    v3 = *(unsigned __int16 *)(a2 + 24);
  else
    v3 = *(_QWORD *)(a2 + 24);
  v5 = v3 << 20;
  RtlpHpVaMgrRangeCleanup(a1);
  return RtlpHpEnvFreeVA(&v6, &v5, 0x8000LL);
}
