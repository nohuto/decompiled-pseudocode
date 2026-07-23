/*
 * XREFs of CmpPartialPromoteSubkeys @ 0x1408065F0
 * Callers:
 *     CmpSetKeySecurity @ 0x1405B9548 (CmpSetKeySecurity.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140013000 (CmSiFreeMemory.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     CmpHashUnicodeComponent @ 0x1405B02C4 (CmpHashUnicodeComponent.c)
 *     CmpFindKcbInHashEntryByName @ 0x1405D739C (CmpFindKcbInHashEntryByName.c)
 *     CmpGetKcbAtLayerHeight @ 0x1405D9AC0 (CmpGetKcbAtLayerHeight.c)
 *     CmpStartKcbStack @ 0x140644FF0 (CmpStartKcbStack.c)
 *     CmpPopulateKcbStack @ 0x1406450B0 (CmpPopulateKcbStack.c)
 *     CmpHashCompressedComponent @ 0x1406F967C (CmpHashCompressedComponent.c)
 *     CmpFindKcbInHashEntryByCompressedName @ 0x1407F2250 (CmpFindKcbInHashEntryByCompressedName.c)
 *     CmpKeyNodeStackGetEntryAtLayerHeight @ 0x1407FB218 (CmpKeyNodeStackGetEntryAtLayerHeight.c)
 *     CmpKeyEnumStackAdvance @ 0x1408000AC (CmpKeyEnumStackAdvance.c)
 *     CmpKeyEnumStackCleanup @ 0x140800380 (CmpKeyEnumStackCleanup.c)
 *     CmpKeyEnumStackInitialize @ 0x140800A94 (CmpKeyEnumStackInitialize.c)
 *     CmpKeyEnumStackNotifyPromotion @ 0x140800AE4 (CmpKeyEnumStackNotifyPromotion.c)
 *     CmpKeyEnumStackStartFromKcbStack @ 0x140800C90 (CmpKeyEnumStackStartFromKcbStack.c)
 *     CmpPromoteSingleKeyFromKcbStacks @ 0x140806AC0 (CmpPromoteSingleKeyFromKcbStacks.c)
 *     CmpPromoteSingleKeyFromParentKcbAndChildKeyNode @ 0x140806C2C (CmpPromoteSingleKeyFromParentKcbAndChildKeyNode.c)
 */

__int64 __fastcall CmpPartialPromoteSubkeys(__int64 a1)
{
  __int16 v2; // dx
  __int64 KcbAtLayerHeight; // rsi
  __int16 v4; // dx
  int started; // ebx
  __int16 v6; // r8
  __int64 v7; // r9
  __int16 v8; // dx
  __int64 EntryAtLayerHeight; // rax
  __int64 v10; // rax
  unsigned __int16 v11; // bx
  unsigned __int8 *v12; // r14
  int v13; // eax
  __int64 KcbInHashEntryByCompressedName; // rax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  __m128i v19; // [rsp+30h] [rbp-D0h] BYREF
  PPRIVILEGE_SET v20[4]; // [rsp+40h] [rbp-C0h] BYREF
  __int16 v21; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v22[344]; // [rsp+68h] [rbp-98h] BYREF

  CmpKeyEnumStackInitialize((char *)&v21);
  memset(v20, 0, sizeof(v20));
  v2 = *(_WORD *)(a1 + 2);
  WORD1(v20[0]) = -1;
  KcbAtLayerHeight = CmpGetKcbAtLayerHeight(a1, v2);
  started = CmpStartKcbStack((__int64)v20, v4);
  if ( started >= 0 )
  {
    started = CmpKeyEnumStackStartFromKcbStack((__int64)&v21, a1, 0LL, 0LL);
    if ( started >= 0 )
    {
      while ( 1 )
      {
        v17 = CmpKeyEnumStackAdvance(&v21);
        started = v17;
        if ( v17 < 0 )
          break;
        v6 = *(_WORD *)(KcbAtLayerHeight + 58);
        v7 = 0LL;
        v8 = v6;
        if ( v6 >= 0 )
        {
          while ( 1 )
          {
            EntryAtLayerHeight = CmpKeyNodeStackGetEntryAtLayerHeight((__int64)v22, v8);
            if ( *(_QWORD *)(EntryAtLayerHeight + 16) )
              break;
            if ( --v8 < 0 )
              goto LABEL_9;
          }
          v7 = EntryAtLayerHeight;
        }
LABEL_9:
        if ( v8 != v6 )
        {
          v10 = *(_QWORD *)(v7 + 16);
          v11 = *(_WORD *)(v10 + 72);
          v12 = (unsigned __int8 *)(v10 + 76);
          LOBYTE(v10) = *(_BYTE *)(v10 + 2);
          v19.m128i_i64[1] = (__int64)v12;
          v19.m128i_i16[0] = v11;
          v19.m128i_i16[1] = v11;
          if ( (v10 & 0x20) != 0 )
          {
            v13 = CmpHashCompressedComponent(v12, v11);
            KcbInHashEntryByCompressedName = CmpFindKcbInHashEntryByCompressedName(
                                               *(_QWORD *)(KcbAtLayerHeight + 24),
                                               v13 + 37 * *(_DWORD *)(KcbAtLayerHeight + 8),
                                               KcbAtLayerHeight,
                                               v12,
                                               v11);
          }
          else
          {
            v15 = CmpHashUnicodeComponent(&v19);
            KcbInHashEntryByCompressedName = CmpFindKcbInHashEntryByName(
                                               *(_QWORD *)(KcbAtLayerHeight + 24),
                                               v15 + 37 * *(_DWORD *)(KcbAtLayerHeight + 8),
                                               KcbAtLayerHeight,
                                               (__int64)&v19);
          }
          if ( KcbInHashEntryByCompressedName )
          {
            CmpPopulateKcbStack((__int64)v20, KcbInHashEntryByCompressedName);
            v16 = CmpPromoteSingleKeyFromKcbStacks(a1, v20, 0LL);
          }
          else
          {
            v16 = CmpPromoteSingleKeyFromParentKcbAndChildKeyNode(a1, v22, 0LL);
          }
          started = v16;
          if ( v16 < 0 )
            goto LABEL_21;
          CmpKeyEnumStackNotifyPromotion(&v21);
        }
      }
      if ( v17 == -2147483622 )
        started = 0;
    }
  }
LABEL_21:
  if ( v20[3] )
    CmSiFreeMemory(v20[3]);
  CmpKeyEnumStackCleanup((__int64)&v21);
  return (unsigned int)started;
}
