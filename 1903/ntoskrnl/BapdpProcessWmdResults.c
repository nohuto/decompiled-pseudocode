/*
 * XREFs of BapdpProcessWmdResults @ 0x140A09774
 * Callers:
 *     BootApplicationPersistentDataProcess @ 0x140A098F0 (BootApplicationPersistentDataProcess.c)
 * Callees:
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     BapdpQueryData @ 0x140A09EBC (BapdpQueryData.c)
 *     BapdpRegisterWmdResult @ 0x140A3EB48 (BapdpRegisterWmdResult.c)
 */

void BapdpProcessWmdResults()
{
  unsigned __int64 v0; // rdi
  __int64 v1; // r14
  unsigned __int64 v2; // rcx
  char *PoolWithTag; // rbx
  unsigned int v4; // esi
  unsigned int v5; // r15d
  char v6; // r12
  unsigned int v7; // r13d
  int Data; // r8d
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // xmm0_8
  _DWORD v12[4]; // [rsp+30h] [rbp-40h] BYREF
  __int128 v13; // [rsp+40h] [rbp-30h]
  _DWORD v14[4]; // [rsp+50h] [rbp-20h] BYREF

  v14[0] = 1421354843;
  v0 = 0LL;
  v14[1] = 1195365425;
  v14[2] = 921041836;
  v14[3] = -1550547808;
  v1 = 0LL;
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x10000uLL, 0x64506142u);
  if ( !PoolWithTag )
    return;
  v4 = 0;
  v12[0] = 0x10000;
  v5 = 0;
  v6 = 0;
  do
  {
    v7 = v4;
    Data = BapdpQueryData(v2, v14, v4, PoolWithTag, v12);
    if ( Data < 0 )
      goto LABEL_4;
    if ( !v6 )
    {
      v6 = 1;
      v13 = *(_OWORD *)(PoolWithTag + 28);
LABEL_24:
      v0 = v13;
      v5 = v4;
      v1 = *((_QWORD *)&v13 + 1);
      goto LABEL_4;
    }
    v9 = *(_QWORD *)(PoolWithTag + 28);
    if ( (__int16)v9 > (__int16)v0
      || (__int16)v9 >= (__int16)v0
      && ((v2 = v9 >> 16, SWORD1(v9) > SWORD1(v0))
       || SWORD1(v9) >= SWORD1(v0)
       && ((v2 = HIDWORD(v9), SWORD2(v9) > SWORD2(v0))
        || SWORD2(v9) >= SWORD2(v0)
        && ((v10 = HIWORD(v9), v2 = HIWORD(v0), (__int16)v10 > SHIWORD(v0))
         || (__int16)v10 >= SHIWORD(v0)
         && ((v11 = _mm_srli_si128(*(__m128i *)(PoolWithTag + 28), 8).m128i_u64[0], v2 = v11, (__int16)v11 > (__int16)v1)
          || (__int16)v11 >= (__int16)v1
          && (SWORD1(v11) > SWORD1(v1) || SWORD1(v11) >= SWORD1(v1) && (v2 = HIDWORD(v11), SWORD2(v11) > SWORD2(v1))))))) )
    {
      v13 = *(_OWORD *)(PoolWithTag + 28);
      goto LABEL_24;
    }
LABEL_4:
    ++v4;
  }
  while ( Data >= 0 );
  if ( v6 == 1 && (v5 == v7 || (int)BapdpQueryData(v2, v14, v5, PoolWithTag, v12) >= 0) )
    BapdpRegisterWmdResult(PoolWithTag);
  ExFreePoolWithTag(PoolWithTag, 0);
}
