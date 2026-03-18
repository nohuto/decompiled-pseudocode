/*
 * XREFs of ?ReadCommitLimitInformation@VIDMM_GLOBAL@@KAXXZ @ 0x1C008F7AC
 * Callers:
 *     ?ReadConfiguration@VIDMM_GLOBAL@@KAXXZ @ 0x1C008C690 (-ReadConfiguration@VIDMM_GLOBAL@@KAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0018050 (__security_check_cookie.c)
 *     memset @ 0x1C0018980 (memset.c)
 */

void VIDMM_GLOBAL::ReadCommitLimitInformation(void)
{
  unsigned int v0; // eax
  __int64 v1; // r9
  int v2; // r8d
  int v3; // edx
  int v4; // ecx
  unsigned int v5; // eax
  unsigned int v6; // [rsp+30h] [rbp-D0h] BYREF
  int v7; // [rsp+34h] [rbp-CCh] BYREF
  int v8; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v9; // [rsp+3Ch] [rbp-C4h] BYREF
  int v10; // [rsp+40h] [rbp-C0h] BYREF
  int v11; // [rsp+44h] [rbp-BCh] BYREF
  _QWORD v12[42]; // [rsp+50h] [rbp-B0h] BYREF

  v6 = 50;
  v10 = 0;
  qword_1C004E170 = 0LL;
  v7 = 0;
  v8 = 0;
  v11 = 80;
  v9 = 80;
  memset(v12, 0, sizeof(v12));
  v12[7] = 0LL;
  LODWORD(v12[1]) = 288;
  LODWORD(v12[4]) = 67108868;
  LODWORD(v12[6]) = 4;
  v12[2] = L"PinnedBackingStoreLimit";
  LODWORD(v12[8]) = 288;
  LODWORD(v12[15]) = 288;
  v12[3] = &qword_1C004E170;
  v12[5] = &v10;
  v12[9] = L"MinimumSystemMemoryCommitLimit";
  v12[10] = &v7;
  v12[16] = L"SmallSystemMemorySize";
  v12[17] = &v8;
  v12[23] = L"SystemPartitionCommitLimitPercentage";
  v12[24] = &v6;
  v12[26] = &v6;
  v12[30] = L"SecondaryPartitionCommitLimitPercentage";
  v12[31] = &v9;
  LODWORD(v12[22]) = 288;
  LODWORD(v12[25]) = 67108868;
  LODWORD(v12[27]) = 4;
  LODWORD(v12[29]) = 288;
  LODWORD(v12[32]) = 67108868;
  LODWORD(v12[34]) = 4;
  v12[33] = &v11;
  LODWORD(v12[11]) = 0x4000000;
  v12[12] = 0LL;
  LODWORD(v12[13]) = 0;
  v12[14] = 0LL;
  LODWORD(v12[18]) = 0x4000000;
  v12[19] = 0LL;
  LODWORD(v12[20]) = 0;
  v12[21] = 0LL;
  v12[28] = 0LL;
  RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers\\MemoryManager", v12, 0LL, 0LL);
  v0 = 100;
  v1 = qword_1C004E170 << 20;
  v2 = v7 << 20;
  qword_1C004E170 <<= 20;
  if ( (unsigned int)(v7 << 20) <= 0x4000000 )
    v2 = 0x4000000;
  v3 = v6;
  if ( v6 < 0x64 )
    v0 = v6;
  if ( v0 <= 5 )
  {
    v3 = 5;
  }
  else if ( v6 >= 0x64 )
  {
    v3 = 100;
  }
  v4 = v9;
  v5 = 100;
  if ( v9 < 0x64 )
    v5 = v9;
  if ( v5 <= 5 )
  {
    v4 = 5;
  }
  else if ( v9 >= 0x64 )
  {
    v4 = 100;
  }
  dword_1C004E470 = v2;
  dword_1C004E474 = v8 << 20;
  dword_1C004E478 = v3;
  dword_1C004E47C = v4;
  if ( !v1 )
    qword_1C004E170 = (unsigned __int64)qword_1C004E158 >> 3;
}
