/*
 * XREFs of CmpPartialPromoteSubkeys @ 0x14083EBC0
 * Callers:
 *     CmpSetKeySecurity @ 0x14063D6B0 (CmpSetKeySecurity.c)
 * Callees:
 *     CmSiFreeMemory @ 0x14008BCE0 (CmSiFreeMemory.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     CmpStartKcbStack @ 0x1405FCF70 (CmpStartKcbStack.c)
 *     CmpPopulateKcbStack @ 0x1405FCFD0 (CmpPopulateKcbStack.c)
 *     CmpGetKcbAtLayerHeight @ 0x1405FECE0 (CmpGetKcbAtLayerHeight.c)
 *     CmpHashUnicodeComponent @ 0x140632D10 (CmpHashUnicodeComponent.c)
 *     CmpFindKcbInHashEntryByName @ 0x140654954 (CmpFindKcbInHashEntryByName.c)
 *     CmpHashCompressedComponent @ 0x1407133F0 (CmpHashCompressedComponent.c)
 *     CmpFindKcbInHashEntryByCompressedName @ 0x14082B330 (CmpFindKcbInHashEntryByCompressedName.c)
 *     CmpKeyNodeStackGetEntryAtLayerHeight @ 0x140833358 (CmpKeyNodeStackGetEntryAtLayerHeight.c)
 *     CmpKeyEnumStackAdvance @ 0x1408382CC (CmpKeyEnumStackAdvance.c)
 *     CmpKeyEnumStackCleanup @ 0x14083857C (CmpKeyEnumStackCleanup.c)
 *     CmpKeyEnumStackInitialize @ 0x140838C34 (CmpKeyEnumStackInitialize.c)
 *     CmpKeyEnumStackNotifyPromotion @ 0x140838C84 (CmpKeyEnumStackNotifyPromotion.c)
 *     CmpKeyEnumStackStartFromKcbStack @ 0x140838E30 (CmpKeyEnumStackStartFromKcbStack.c)
 *     CmpPromoteSingleKeyFromKcbStacks @ 0x14083F090 (CmpPromoteSingleKeyFromKcbStacks.c)
 *     CmpPromoteSingleKeyFromParentKcbAndChildKeyNode @ 0x14083F224 (CmpPromoteSingleKeyFromParentKcbAndChildKeyNode.c)
 */

__int64 __fastcall CmpPartialPromoteSubkeys(__int64 a1)
{
  __int16 v2; // dx
  __int64 KcbAtLayerHeight; // rdi
  __int16 v4; // dx
  __int64 v5; // r8
  struct _LOOKASIDE_LIST_EX *v6; // r9
  __int64 v7; // rdx
  int started; // ebx
  __int64 v9; // r8
  __int64 v10; // r9
  __int16 v11; // r8
  __int64 v12; // r9
  __int16 v13; // dx
  __int64 EntryAtLayerHeight; // rax
  __int64 v15; // rax
  unsigned __int16 v16; // bx
  unsigned __int8 *v17; // r14
  int v18; // eax
  __int64 KcbInHashEntryByCompressedName; // rax
  int v20; // eax
  int v21; // eax
  int v22; // eax
  __m128i v24; // [rsp+30h] [rbp-D0h] BYREF
  PPRIVILEGE_SET v25[4]; // [rsp+40h] [rbp-C0h] BYREF
  __int16 v26[176]; // [rsp+60h] [rbp-A0h] BYREF

  memset(v26, 0, sizeof(v26));
  v24 = 0uLL;
  CmpKeyEnumStackInitialize((char *)v26);
  memset(v25, 0, sizeof(v25));
  v2 = *(_WORD *)(a1 + 2);
  WORD1(v25[0]) = -1;
  KcbAtLayerHeight = CmpGetKcbAtLayerHeight(a1, v2);
  started = CmpStartKcbStack((__int64)v25, v4, v5, v6);
  if ( started >= 0 )
  {
    started = CmpKeyEnumStackStartFromKcbStack((__int64)v26, a1, 0LL);
    if ( started >= 0 )
    {
      while ( 1 )
      {
        v22 = CmpKeyEnumStackAdvance(v26);
        started = v22;
        if ( v22 < 0 )
          break;
        v11 = *(_WORD *)(KcbAtLayerHeight + 66);
        v12 = 0LL;
        v13 = v11;
        if ( v11 >= 0 )
        {
          while ( 1 )
          {
            EntryAtLayerHeight = CmpKeyNodeStackGetEntryAtLayerHeight((__int64)&v26[4], v13);
            if ( *(_QWORD *)(EntryAtLayerHeight + 16) )
              break;
            if ( --v13 < 0 )
              goto LABEL_9;
          }
          v12 = EntryAtLayerHeight;
        }
LABEL_9:
        if ( v13 != v11 )
        {
          v15 = *(_QWORD *)(v12 + 16);
          v16 = *(_WORD *)(v15 + 72);
          v17 = (unsigned __int8 *)(v15 + 76);
          LOBYTE(v15) = *(_BYTE *)(v15 + 2);
          v24.m128i_i64[1] = (__int64)v17;
          v24.m128i_i16[0] = v16;
          v24.m128i_i16[1] = v16;
          if ( (v15 & 0x20) != 0 )
          {
            v18 = CmpHashCompressedComponent(v17, v16);
            KcbInHashEntryByCompressedName = CmpFindKcbInHashEntryByCompressedName(
                                               *(_QWORD *)(KcbAtLayerHeight + 32),
                                               v18 + 37 * *(_DWORD *)(KcbAtLayerHeight + 16),
                                               KcbAtLayerHeight,
                                               v17,
                                               v16);
          }
          else
          {
            v20 = CmpHashUnicodeComponent(&v24);
            KcbInHashEntryByCompressedName = CmpFindKcbInHashEntryByName(
                                               *(_QWORD *)(KcbAtLayerHeight + 32),
                                               v20 + 37 * *(_DWORD *)(KcbAtLayerHeight + 16),
                                               KcbAtLayerHeight,
                                               (__int64)&v24);
          }
          if ( KcbInHashEntryByCompressedName )
          {
            CmpPopulateKcbStack((__int64)v25, KcbInHashEntryByCompressedName);
            v21 = CmpPromoteSingleKeyFromKcbStacks(a1, v25, 0LL);
          }
          else
          {
            v21 = CmpPromoteSingleKeyFromParentKcbAndChildKeyNode(a1, &v26[4], 0LL);
          }
          started = v21;
          if ( v21 < 0 )
            goto LABEL_21;
          CmpKeyEnumStackNotifyPromotion(v26);
        }
      }
      if ( v22 == -2147483622 )
        started = 0;
    }
  }
LABEL_21:
  if ( v25[3] )
    CmSiFreeMemory(v25[3]);
  CmpKeyEnumStackCleanup((__int64)v26, v7, v9, v10);
  return (unsigned int)started;
}
