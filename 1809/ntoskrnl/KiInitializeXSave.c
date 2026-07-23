/*
 * XREFs of KiInitializeXSave @ 0x1405742C0
 * Callers:
 *     KiSystemStartup @ 0x140566010 (KiSystemStartup.c)
 * Callees:
 *     KiGetXSaveSupportedFeatures @ 0x14018BC60 (KiGetXSaveSupportedFeatures.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     KiGetIptInfo @ 0x140294728 (KiGetIptInfo.c)
 *     KiUpdateXSaveSizeAndVolatileFeatures @ 0x14057457C (KiUpdateXSaveSizeAndVolatileFeatures.c)
 *     KiIntersectFeaturesWithPolicy @ 0x140574624 (KiIntersectFeaturesWithPolicy.c)
 *     KiParseLoadOptions @ 0x14057485C (KiParseLoadOptions.c)
 */

__int64 __fastcall KiInitializeXSave(__int64 a1, int a2)
{
  __int64 v4; // rax
  int v5; // edx
  __int64 v6; // rax
  ULONG_PTR v7; // rcx
  unsigned int v8; // eax
  __int64 v9; // rcx
  ULONG_PTR *v10; // rax
  _OWORD *v11; // r8
  __int128 v12; // xmm1
  __int64 result; // rax
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
    v4 = *(_QWORD *)(a1 + 240);
    v5 = *(_DWORD *)(v4 + 2800);
    if ( BugCheckParameter1[0] )
    {
      v6 = *(_QWORD *)(v4 + 2792);
      BugCheckParameter1[67] &= v6;
      v7 = v6 & BugCheckParameter1[0];
      v8 = HIDWORD(BugCheckParameter1[2]);
      BugCheckParameter1[0] = v7;
      if ( (v5 & 0x10) == 0 )
      {
        v8 = HIDWORD(BugCheckParameter1[2]) & 0xFFFFFFFD;
        HIDWORD(BugCheckParameter1[2]) &= ~2u;
      }
      if ( (v5 & 8) == 0 )
        HIDWORD(BugCheckParameter1[2]) = v8 & 0xFFFFFFFE;
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
    v9 = 6LL;
    v10 = BugCheckParameter1;
    v11 = (_OWORD *)0xFFFFF780000003D8LL;
    do
    {
      *v11 = *(_OWORD *)v10;
      v11[1] = *((_OWORD *)v10 + 1);
      v11[2] = *((_OWORD *)v10 + 2);
      v11[3] = *((_OWORD *)v10 + 3);
      v11[4] = *((_OWORD *)v10 + 4);
      v11[5] = *((_OWORD *)v10 + 5);
      v11[6] = *((_OWORD *)v10 + 6);
      v11 += 8;
      v12 = *((_OWORD *)v10 + 7);
      v10 += 16;
      *(v11 - 1) = v12;
      --v9;
    }
    while ( v9 );
    *v11 = *(_OWORD *)v10;
    v11[1] = *((_OWORD *)v10 + 1);
    v11[2] = *((_OWORD *)v10 + 2);
    *((_QWORD *)v11 + 6) = v10[6];
    if ( BugCheckParameter1[0] )
    {
      KeXStateLength = MEMORY[0xFFFFF78000000600];
      KiXSaveAreaLength = MEMORY[0xFFFFF78000000600];
    }
    result = *(_QWORD *)(a1 + 240);
    if ( (*(_DWORD *)(result + 2800) & 0x20) != 0 )
    {
      result = BugCheckParameter3;
      KiXSaveAreaLength += BugCheckParameter3_4;
      LODWORD(KiIptSaveAreaLength) = BugCheckParameter3_4;
      LODWORD(KiIptMsrMask) = BugCheckParameter3;
    }
  }
  return result;
}
