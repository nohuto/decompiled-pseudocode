/*
 * XREFs of MmHardFaultBytesRequired @ 0x14064DEA0
 * Callers:
 *     CcFetchDataForRead @ 0x1400B5B10 (CcFetchDataForRead.c)
 * Callees:
 *     MiReadPteShadow @ 0x14004B4D0 (MiReadPteShadow.c)
 *     MiOffsetToProtos @ 0x1400B5C30 (MiOffsetToProtos.c)
 *     IS_PTE_NOT_DEMAND_ZERO @ 0x1400BFAD4 (IS_PTE_NOT_DEMAND_ZERO.c)
 */

__int64 __fastcall MmHardFaultBytesRequired(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rbx
  unsigned int *v4; // r11
  __int64 v5; // rdx
  __int64 *v6; // r9
  __int64 *v7; // r10
  __int64 v8; // rax
  unsigned __int64 v11; // [rsp+30h] [rbp+8h] BYREF

  v3 = ((a2 & 0xFFF) + a3 + 4095) >> 12;
  v4 = MiOffsetToProtos(**(_DWORD ***)(a1 + 40), a2, &v11);
  v5 = *((_QWORD *)v4 + 1);
  v6 = (__int64 *)(v5 + 8 * v11);
  v7 = (__int64 *)(v5 + 8LL * v4[11]);
  if ( !v3 )
    return 0LL;
  while ( 1 )
  {
    if ( v6 >= v7 )
    {
      v4 = (unsigned int *)*((_QWORD *)v4 + 2);
      v6 = (__int64 *)*((_QWORD *)v4 + 1);
      v7 = &v6[v4[11]];
    }
    v8 = *v6;
    if ( (unsigned __int64)v6 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v6 <= 0xFFFFF6FB7DBED7F8uLL )
      LOWORD(v8) = MiReadPteShadow((unsigned __int64)v6, *v6);
    if ( (v8 & 1) == 0 )
    {
      if ( (v8 & 0x400) != 0 )
        break;
      if ( (v8 & 0x800) == 0 && IS_PTE_NOT_DEMAND_ZERO(v8) )
        break;
    }
    ++v6;
    if ( !--v3 )
      return 0LL;
  }
  return 1LL;
}
