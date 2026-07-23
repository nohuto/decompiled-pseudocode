/*
 * XREFs of CmpKeyEnumStackCreateResumeContext @ 0x1408003E8
 * Callers:
 *     CmpEnumerateLayeredKey @ 0x1407F0F80 (CmpEnumerateLayeredKey.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140013000 (CmSiFreeMemory.c)
 *     CmpAllocateTransientPoolWithTag @ 0x140013040 (CmpAllocateTransientPoolWithTag.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     CmpDereferenceKeyControlBlockUnsafe @ 0x1405B0FE0 (CmpDereferenceKeyControlBlockUnsafe.c)
 *     CmpGetKcbAtLayerHeight @ 0x1405D9AC0 (CmpGetKcbAtLayerHeight.c)
 *     CmpReferenceKeyControlBlockUnsafe @ 0x1405D9ADC (CmpReferenceKeyControlBlockUnsafe.c)
 *     CmpKeyEnumStackGetEntryAtLayerHeight @ 0x140800A68 (CmpKeyEnumStackGetEntryAtLayerHeight.c)
 */

__int64 __fastcall CmpKeyEnumStackCreateResumeContext(__int64 a1, __int64 a2, int a3, char a4, _QWORD *a5)
{
  int v5; // esi
  __int64 v7; // r14
  SIZE_T v10; // rdx
  char *TransientPoolWithTag; // rax
  char *v12; // rbx
  unsigned int v13; // edi
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned __int16 v16; // di
  __int64 EntryAtLayerHeight; // rbp
  char *v18; // r14
  __int16 v19; // dx
  __int64 KcbAtLayerHeight; // r13
  __int64 v21; // rdx
  _DWORD *v22; // rcx
  __int64 v23; // rbp
  volatile signed __int32 **v24; // r14
  __int64 v25; // rsi

  v5 = *(__int16 *)(a1 + 2);
  v7 = a2;
  v10 = 24LL * (v5 + 1) + 8;
  if ( a4 )
    TransientPoolWithTag = (char *)CmpAllocateTransientPoolWithTag(PagedPool, v10, 0x36374D43u);
  else
    TransientPoolWithTag = (char *)CmpAllocateTransientPoolWithTag(PagedPool, v10, 0x37374D43u);
  v12 = TransientPoolWithTag;
  if ( TransientPoolWithTag )
  {
    memset(TransientPoolWithTag, 0, 24LL * (v5 + 1) + 8);
    *((_DWORD *)v12 + 1) = a3;
    v16 = 0;
    *(_WORD *)v12 = v5;
    v12[2] = a4;
    if ( (v5 & 0x8000u) != 0 )
    {
LABEL_11:
      v13 = 0;
      *a5 = v12;
      v12 = 0LL;
    }
    else
    {
      while ( 1 )
      {
        EntryAtLayerHeight = CmpKeyEnumStackGetEntryAtLayerHeight(v7, v16, v14, v15);
        v18 = &v12[16 * (__int16)v16 + 8 + 8 * (__int16)v16];
        KcbAtLayerHeight = CmpGetKcbAtLayerHeight(a1, v19);
        if ( !CmpReferenceKeyControlBlockUnsafe((volatile signed __int32 *)KcbAtLayerHeight) )
          break;
        v21 = 2LL;
        *((_QWORD *)v18 + 1) = KcbAtLayerHeight;
        v22 = v18 + 16;
        *(_QWORD *)v18 = *(_QWORD *)(KcbAtLayerHeight + 296);
        v23 = EntryAtLayerHeight - (_QWORD)v18;
        do
        {
          *v22 = *(_DWORD *)((char *)v22 + v23 + 8);
          ++v22;
          --v21;
        }
        while ( v21 );
        v7 = a2;
        if ( (__int16)++v16 > (__int16)v5 )
          goto LABEL_11;
      }
      v13 = -1073741670;
    }
    if ( v12 )
    {
      if ( (v5 & 0x8000u) == 0 )
      {
        v24 = (volatile signed __int32 **)(v12 + 16);
        v25 = (unsigned __int16)(v5 + 1);
        do
        {
          if ( *v24 )
            CmpDereferenceKeyControlBlockUnsafe(*v24);
          v24 += 3;
          --v25;
        }
        while ( v25 );
      }
      CmSiFreeMemory((PPRIVILEGE_SET)v12);
    }
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v13;
}
