/*
 * XREFs of KiInitializeXSave @ 0x1405A2930
 * Callers:
 *     KiSystemStartup @ 0x140595010 (KiSystemStartup.c)
 * Callees:
 *     KiGetIptInfo @ 0x140195AF0 (KiGetIptInfo.c)
 *     KiGetXSaveSupportedFeatures @ 0x140195B70 (KiGetXSaveSupportedFeatures.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     KiUpdateXSaveSizeAndVolatileFeatures @ 0x1405A2B8C (KiUpdateXSaveSizeAndVolatileFeatures.c)
 *     KiIntersectFeaturesWithPolicy @ 0x1405A2C34 (KiIntersectFeaturesWithPolicy.c)
 *     KiParseLoadOptions @ 0x1405A2E78 (KiParseLoadOptions.c)
 */

__int64 __fastcall KiInitializeXSave(__int64 a1, int a2)
{
  __int64 result; // rax
  __int64 v5; // rax
  int v6; // edx
  __int64 v7; // rax
  ULONG_PTR v8; // rcx
  unsigned int v9; // eax
  __int64 v10; // rcx
  ULONG_PTR *v11; // rax
  _OWORD *v12; // r8
  __int128 v13; // xmm1
  unsigned int BugCheckParameter3; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int BugCheckParameter3_4; // [rsp+34h] [rbp-CCh] BYREF
  ULONG_PTR BugCheckParameter1[104]; // [rsp+40h] [rbp-C0h] BYREF

  if ( !a2 )
    KiParseLoadOptions(*(_QWORD *)(a1 + 216));
  memset(BugCheckParameter1, 0, 0x338uLL);
  KiGetXSaveSupportedFeatures((__int64)BugCheckParameter1);
  KiGetIptInfo(&BugCheckParameter3_4, &BugCheckParameter3);
  if ( a2 )
  {
    if ( (BugCheckParameter1[0] & MEMORY[0xFFFFF780000003D8]) != MEMORY[0xFFFFF780000003D8]
      || (BugCheckParameter1[67] & MEMORY[0xFFFFF780000005F0]) != MEMORY[0xFFFFF780000005F0]
      || (BugCheckParameter1[2] & 0x100000000LL) == 0 && (MEMORY[0xFFFFF780000003EC] & 1) != 0
      || (BugCheckParameter1[2] & 0x200000000LL) == 0 && (MEMORY[0xFFFFF780000003EC] & 2) != 0 )
    {
      KeBugCheckEx(0x3Eu, (ULONG_PTR)BugCheckParameter1, 0xFFFFF780000003D8uLL, 1uLL, 0LL);
    }
    result = BugCheckParameter3 & (unsigned int)KiIptMsrMask;
    if ( (_DWORD)result != (_DWORD)KiIptMsrMask )
      KeBugCheckEx(
        0x3Eu,
        (unsigned int)KiIptSaveAreaLength,
        (unsigned int)KiIptMsrMask,
        BugCheckParameter3_4,
        BugCheckParameter3);
  }
  else
  {
    v5 = *(_QWORD *)(a1 + 240);
    v6 = *(_DWORD *)(v5 + 2824);
    if ( BugCheckParameter1[0] )
    {
      v7 = *(_QWORD *)(v5 + 2816);
      BugCheckParameter1[67] &= v7;
      v8 = v7 & BugCheckParameter1[0];
      v9 = HIDWORD(BugCheckParameter1[2]);
      BugCheckParameter1[0] = v8;
      if ( (v6 & 0x10) == 0 )
      {
        v9 = HIDWORD(BugCheckParameter1[2]) & 0xFFFFFFFD;
        HIDWORD(BugCheckParameter1[2]) &= ~2u;
      }
      if ( (v6 & 8) == 0 )
        HIDWORD(BugCheckParameter1[2]) = v9 & 0xFFFFFFFE;
    }
    KiIntersectFeaturesWithPolicy(a1, BugCheckParameter1);
    if ( KeTestRemovedFeatureMask )
    {
      BugCheckParameter1[0] &= ~KeTestRemovedFeatureMask;
      BugCheckParameter1[67] &= ~KeTestRemovedFeatureMask;
    }
    if ( KeTestDisableXSave )
    {
      BugCheckParameter1[0] = 0LL;
      BugCheckParameter1[67] = 0LL;
      HIDWORD(BugCheckParameter1[2]) &= 0xFFFFFFFC;
    }
    KiUpdateXSaveSizeAndVolatileFeatures(BugCheckParameter1);
    v10 = 6LL;
    v11 = BugCheckParameter1;
    v12 = (_OWORD *)0xFFFFF780000003D8LL;
    do
    {
      *v12 = *(_OWORD *)v11;
      v12[1] = *((_OWORD *)v11 + 1);
      v12[2] = *((_OWORD *)v11 + 2);
      v12[3] = *((_OWORD *)v11 + 3);
      v12[4] = *((_OWORD *)v11 + 4);
      v12[5] = *((_OWORD *)v11 + 5);
      v12[6] = *((_OWORD *)v11 + 6);
      v12 += 8;
      v13 = *((_OWORD *)v11 + 7);
      v11 += 16;
      *(v12 - 1) = v13;
      --v10;
    }
    while ( v10 );
    *v12 = *(_OWORD *)v11;
    v12[1] = *((_OWORD *)v11 + 1);
    v12[2] = *((_OWORD *)v11 + 2);
    *((_QWORD *)v12 + 6) = v11[6];
    if ( BugCheckParameter1[0] )
    {
      KeXStateLength = MEMORY[0xFFFFF78000000600];
      KiXSaveAreaLength = MEMORY[0xFFFFF78000000600];
    }
    result = *(_QWORD *)(a1 + 240);
    if ( (*(_DWORD *)(result + 2824) & 0x20) != 0 )
    {
      result = BugCheckParameter3;
      KiXSaveAreaLength += BugCheckParameter3_4;
      LODWORD(KiIptSaveAreaLength) = BugCheckParameter3_4;
      LODWORD(KiIptMsrMask) = BugCheckParameter3;
    }
  }
  return result;
}
