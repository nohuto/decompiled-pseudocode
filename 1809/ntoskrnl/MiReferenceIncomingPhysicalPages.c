/*
 * XREFs of MiReferenceIncomingPhysicalPages @ 0x14085119C
 * Callers:
 *     NtMapUserPhysicalPages @ 0x140852620 (NtMapUserPhysicalPages.c)
 *     NtMapUserPhysicalPagesScatter @ 0x140852910 (NtMapUserPhysicalPagesScatter.c)
 * Callees:
 *     MiGetPteAddress @ 0x140065DD8 (MiGetPteAddress.c)
 *     ExGetCallBackBlockRoutine @ 0x140088BA0 (ExGetCallBackBlockRoutine.c)
 *     MiDecrementAweMapCount @ 0x1402B031C (MiDecrementAweMapCount.c)
 *     MiGetAweNode @ 0x1402B0F08 (MiGetAweNode.c)
 *     MiIncrementAweMapCount @ 0x1402B0FA4 (MiIncrementAweMapCount.c)
 *     MiGetVadCacheAttribute @ 0x1402CB2D4 (MiGetVadCacheAttribute.c)
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
  __int64 v7; // rbx
  int v9; // esi
  __int64 v10; // rbp
  int v11; // r12d
  __int64 v12; // r11
  unsigned int VadCacheAttribute; // r8d
  __int64 v14; // r9
  __int64 v15; // r10
  __int64 v16; // r11
  unsigned __int64 v17; // r13
  unsigned __int64 v18; // rdi
  __int64 PteAddress; // r14
  unsigned __int64 v20; // r10
  unsigned __int64 v21; // r8
  _QWORD *AweNode; // rax
  unsigned __int64 v24; // rcx
  __int64 v25; // rdx
  unsigned __int64 v26; // [rsp+20h] [rbp-58h]
  const signed __int64 *v27; // [rsp+28h] [rbp-50h]
  __int64 v30; // [rsp+90h] [rbp+18h] BYREF
  __int64 v31; // [rsp+98h] [rbp+20h]

  v31 = a4;
  v7 = 0LL;
  v9 = 0;
  v10 = *(_QWORD *)(a6 + 24);
  v11 = *(_DWORD *)(v10 + 48) & 0x10000;
  LODWORD(a6) = MiGetVadCacheAttribute(v10);
  v30 = 0LL;
  v17 = ExGetCallBackBlockRoutine(v12);
  v26 = *(_QWORD *)(v16 + 16);
  v18 = 0LL;
  v27 = *(const signed __int64 **)(v16 + 24);
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
        v7 = v30;
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
      AweNode = MiGetAweNode(v21);
      v10 = AweNode[3];
      if ( (*(_DWORD *)(v10 + 48) & 0x10000) != 0 )
      {
        if ( !v11 )
          goto LABEL_10;
      }
      else if ( v11 )
      {
        goto LABEL_10;
      }
      VadCacheAttribute = MiGetVadCacheAttribute(AweNode[3]);
      LODWORD(a6) = VadCacheAttribute;
    }
LABEL_18:
    v24 = v20 / v17;
    if ( v20 / v17 < v26 && ((v17 - 1) & v20) == 0 && _bittest64(v27, v24) )
    {
      v25 = 48 * v20 - 0x58000000000LL;
      if ( v9 < 0 )
      {
        MiDecrementAweMapCount(v24, v25, &v30, 0);
      }
      else
      {
        v9 = MiIncrementAweMapCount(v16, v25, VadCacheAttribute, PteAddress);
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
    v14 = v31;
    VadCacheAttribute = a6;
    goto LABEL_12;
  }
LABEL_14:
  *a5 = v7;
  return (unsigned int)v9;
}
