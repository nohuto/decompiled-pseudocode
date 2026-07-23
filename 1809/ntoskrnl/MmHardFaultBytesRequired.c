/*
 * XREFs of MmHardFaultBytesRequired @ 0x140639940
 * Callers:
 *     CcFetchDataForRead @ 0x1400AF650 (CcFetchDataForRead.c)
 * Callees:
 *     MiReadPteShadow @ 0x14006C540 (MiReadPteShadow.c)
 *     IS_PTE_NOT_DEMAND_ZERO @ 0x1400946E4 (IS_PTE_NOT_DEMAND_ZERO.c)
 *     MiOffsetToProtos @ 0x1400AF770 (MiOffsetToProtos.c)
 */

__int64 __fastcall MmHardFaultBytesRequired(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // r11
  __int64 v5; // rdx
  __int64 *v6; // r9
  __int64 *v7; // r10
  __int64 v8; // rax
  unsigned __int64 v10; // [rsp+30h] [rbp+8h] BYREF

  v3 = ((a2 & 0xFFF) + a3 + 4095) >> 12;
  v4 = MiOffsetToProtos(**(_QWORD **)(a1 + 40), a2, &v10);
  v5 = *(_QWORD *)(v4 + 8);
  v6 = (__int64 *)(v5 + 8 * v10);
  v7 = (__int64 *)(v5 + 8LL * *(unsigned int *)(v4 + 44));
  if ( !v3 )
    return 0LL;
  while ( 1 )
  {
    if ( v6 >= v7 )
    {
      v4 = *(_QWORD *)(v4 + 16);
      v6 = *(__int64 **)(v4 + 8);
      v7 = &v6[*(unsigned int *)(v4 + 44)];
    }
    v8 = *v6;
    if ( (unsigned __int64)v6 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v6 <= 0xFFFFF6FB7DBED7F8uLL )
      LOWORD(v8) = MiReadPteShadow((unsigned __int64)v6, *v6);
    if ( (v8 & 1) == 0 && ((v8 & 0x400) != 0 || (v8 & 0x800) == 0 && IS_PTE_NOT_DEMAND_ZERO(v8)) )
      break;
    ++v6;
    if ( !--v3 )
      return 0LL;
  }
  return 1LL;
}
