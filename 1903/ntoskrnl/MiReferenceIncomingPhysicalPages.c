/*
 * XREFs of MiReferenceIncomingPhysicalPages @ 0x1408968D4
 * Callers:
 *     NtMapUserPhysicalPages @ 0x140897C30 (NtMapUserPhysicalPages.c)
 *     NtMapUserPhysicalPagesScatter @ 0x140897F10 (NtMapUserPhysicalPagesScatter.c)
 * Callees:
 *     MiGetPteAddress @ 0x140057698 (MiGetPteAddress.c)
 *     ExGetCallBackBlockRoutine @ 0x14013D1D0 (ExGetCallBackBlockRoutine.c)
 *     MiDecrementAweMapCount @ 0x1402D5840 (MiDecrementAweMapCount.c)
 *     MiGetAweNode @ 0x1402D6468 (MiGetAweNode.c)
 *     MiIncrementAweMapCount @ 0x1402D65E0 (MiIncrementAweMapCount.c)
 *     MiGetVadCacheAttribute @ 0x1402E55D4 (MiGetVadCacheAttribute.c)
 */

__int64 __fastcall MiReferenceIncomingPhysicalPages(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        __int64 *a5,
        __int64 a6,
        __int64 a7)
{
  __int64 v7; // rdi
  int v9; // esi
  __int64 v10; // rbp
  int v11; // r12d
  __int64 v12; // r11
  unsigned int VadCacheAttribute; // r8d
  __int64 v14; // r9
  __int64 v15; // r10
  __int64 v16; // r11
  unsigned __int64 v17; // r13
  unsigned __int64 v18; // rbx
  __int64 PteAddress; // r14
  unsigned __int64 v20; // r10
  unsigned __int64 v21; // r8
  unsigned __int64 v23; // rcx
  __int64 v24; // rdx
  unsigned __int64 v25; // [rsp+20h] [rbp-58h]
  const signed __int64 *v26; // [rsp+28h] [rbp-50h]
  __int64 v29; // [rsp+90h] [rbp+18h] BYREF
  __int64 v30; // [rsp+98h] [rbp+20h]

  v30 = a4;
  v7 = 0LL;
  v9 = 0;
  v10 = *(_QWORD *)(a6 + 24);
  v11 = *(_DWORD *)(v10 + 48) & 0x1100000;
  LODWORD(a6) = MiGetVadCacheAttribute(v10);
  v29 = 0LL;
  v17 = ExGetCallBackBlockRoutine(v12);
  v25 = *(_QWORD *)(v16 + 16);
  v18 = 0LL;
  v26 = *(const signed __int64 **)(v16 + 24);
  if ( a3 )
  {
    PteAddress = a7;
    while ( 1 )
    {
      v20 = *(_QWORD *)(v15 + 8 * v18);
      if ( !v14 )
        goto LABEL_18;
      if ( v20 )
        break;
      ++v18;
LABEL_12:
      v15 = a2;
      if ( v18 >= a3 )
      {
        v7 = v29;
        goto LABEL_14;
      }
    }
    PteAddress = MiGetPteAddress(*(_QWORD *)(v14 + 8 * v18));
    if ( v21 >= (*(unsigned int *)(v10 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v10 + 32) << 32)) << 12
      && v21 <= (((*(unsigned int *)(v10 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v10 + 33) << 32)) << 12) | 0xFFF) )
    {
      VadCacheAttribute = a6;
    }
    else
    {
      v10 = MiGetAweNode(v21)[3];
      if ( (*(_DWORD *)(v10 + 48) & 0x1100000) == 0x1100000 )
      {
        if ( v11 != 17825792 )
          goto LABEL_10;
      }
      else if ( v11 == 17825792 )
      {
        goto LABEL_10;
      }
      VadCacheAttribute = MiGetVadCacheAttribute(v10);
      LODWORD(a6) = VadCacheAttribute;
    }
LABEL_18:
    v23 = v20 / v17;
    if ( v20 / v17 < v25 && ((v17 - 1) & v20) == 0 && _bittest64(v26, v23) )
    {
      v24 = 48 * v20 - 0x58000000000LL;
      if ( v9 < 0 )
      {
        MiDecrementAweMapCount(v23, v24, &v29, 0);
      }
      else
      {
        v9 = MiIncrementAweMapCount(v16, v24, VadCacheAttribute, PteAddress);
        if ( v9 < 0 )
        {
          a3 = v18;
          v18 = -1LL;
        }
      }
      v16 = a1;
      PteAddress += 8 * v17;
      ++v18;
      goto LABEL_11;
    }
LABEL_10:
    a3 = v18;
    v9 = -1073741800;
    v18 = 0LL;
LABEL_11:
    v14 = v30;
    VadCacheAttribute = a6;
    goto LABEL_12;
  }
LABEL_14:
  *a5 = v7;
  return (unsigned int)v9;
}
