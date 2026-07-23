/*
 * XREFs of RtlpHpVaMgrAllocAligned @ 0x18004EA80
 * Callers:
 *     RtlpHpVaMgrAlloc @ 0x18004DEFC (RtlpHpVaMgrAlloc.c)
 *     RtlpHpVaMgrRegionAllocate @ 0x18004E374 (RtlpHpVaMgrRegionAllocate.c)
 * Callees:
 *     RtlpHpEnvAllocVA @ 0x180047BA0 (RtlpHpEnvAllocVA.c)
 */

PVOID __fastcall RtlpHpVaMgrAllocAligned(__int64 a1, ULONG_PTR *a2, __int64 a3)
{
  char v3; // r10
  int v4; // r9d
  int v6; // [rsp+28h] [rbp-30h]
  int v7; // [rsp+30h] [rbp-28h]
  PVOID BaseAddress; // [rsp+60h] [rbp+8h] BYREF

  v3 = *(_BYTE *)(a1 + 46);
  BaseAddress = 0LL;
  v4 = ((v3 & 6u) < 4 ? 0x2000 : 536883200) | 0x40000;
  if ( (v3 & 8) == 0 )
    v4 = (v3 & 6u) < 4 ? 0x2000 : 536883200;
  RtlpHpEnvAllocVA(&BaseAddress, a2, a3, v4, 4u, v6, v7, *(_QWORD *)(a1 + 32));
  return BaseAddress;
}
