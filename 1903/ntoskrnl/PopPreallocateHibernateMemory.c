/*
 * XREFs of PopPreallocateHibernateMemory @ 0x14074AEA4
 * Callers:
 *     PopEnableHiberFile @ 0x14074AAD0 (PopEnableHiberFile.c)
 * Callees:
 *     MmGetHighestPhysicalPage @ 0x140005ED8 (MmGetHighestPhysicalPage.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     MmObtainChargesToLockPagedPool @ 0x14074B0A0 (MmObtainChargesToLockPagedPool.c)
 *     HvlpPreallocatePageListResources @ 0x140851668 (HvlpPreallocatePageListResources.c)
 */

__int64 PopPreallocateHibernateMemory()
{
  __int64 v0; // rsi
  unsigned __int64 HighestPhysicalPage; // rax
  unsigned int v2; // r8d
  int v3; // r9d
  unsigned __int64 v4; // rdi
  unsigned int v5; // r8d
  unsigned int v6; // eax
  __int64 v7; // r14
  __int64 v8; // r15
  __int64 v9; // r12
  SIZE_T v10; // rbp
  char *PoolWithTag; // rax
  char *v12; // rbx
  __int64 result; // rax
  __int64 v14; // [rsp+30h] [rbp-98h]
  __int64 v15; // [rsp+58h] [rbp-70h]
  __int64 v16; // [rsp+D0h] [rbp+8h]
  __int64 v17; // [rsp+D8h] [rbp+10h]
  __int64 v18; // [rsp+E0h] [rbp+18h]
  __int64 v19; // [rsp+E8h] [rbp+20h]

  if ( dword_1404324F0 == 2 )
    v0 = 102400LL;
  else
    v0 = v14;
  HighestPhysicalPage = MmGetHighestPhysicalPage(0);
  v4 = (HighestPhysicalPage + 32) & 0xFFFFFFFFFFFFFFE0uLL;
  if ( v4 < HighestPhysicalPage || v4 > 0xFFFFFFFF )
    return 3221225626LL;
  v16 = v2;
  v5 = ((unsigned int)v4 >> 3) + v2;
  v17 = v5;
  v18 = (v5 + ((unsigned int)v4 >> 3) + 7) & 0xFFFFFFF8;
  v6 = ((((v5 + ((unsigned int)v4 >> 3) + 7) & 0xFFFFFFF8) + 247) & 0xFFFFFFF8) + 176;
  v19 = (((v5 + ((unsigned int)v4 >> 3) + 7) & 0xFFFFFFF8) + 247) & 0xFFFFFFF8;
  if ( v3 == 2 )
  {
    v7 = ((((v5 + ((unsigned int)v4 >> 3) + 7) & 0xFFFFFFF8) + 247) & 0xFFFFFFF8) + 176;
    v6 = ((((v5 + ((unsigned int)v4 >> 3) + 7) & 0xFFFFFFF8) + 247) & 0xFFFFFFF8) + 232;
  }
  else
  {
    v7 = v15;
  }
  v8 = v6;
  v9 = (v6 + 135) & 0xFFFFFFF8;
  if ( (HvlpFlags & 2) == 0
    || (result = HvlpPreallocatePageListResources(((((v5 + ((unsigned int)v4 >> 3) + 7) & 0xFFFFFFF8) + 247) & 0xFFFFFFF8) + 176),
        (int)result >= 0) )
  {
    v10 = ((((_DWORD)v9 + 4159) & 0xFFFFF000) + 0x3FFF) & 0xFFFFF000;
    PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, v10, 0x72626968u);
    v12 = PoolWithTag;
    if ( PoolWithTag )
    {
      if ( (unsigned int)MmObtainChargesToLockPagedPool(PoolWithTag, v10) )
      {
        qword_140443468 = (__int64)(v12 + 4096);
        Length = v10;
        qword_140443450 = v12;
        qword_140443460 = (__int64)v12;
        if ( dword_1404324F0 == 2 )
          qword_1404434B8 = (__int64)&v12[v0];
        else
          qword_1404434B8 = 0LL;
        LODWORD(xmmword_140443480) = v4;
        *((_QWORD *)&xmmword_140443480 + 1) = &v12[v16];
        LODWORD(xmmword_140443470) = v4;
        *((_QWORD *)&xmmword_140443470 + 1) = &v12[v17];
        qword_140443490 = (__int64)&v12[v18];
        if ( dword_1404324F0 == 2 )
          qword_1404434C0 = (__int64)&v12[v7];
        else
          qword_1404434C0 = 0LL;
        qword_140443498 = &v12[v9];
        qword_1404434A0 = &v12[((_DWORD)v9 + 4159) & 0xFFFFF000];
        qword_1404434A8 = &v12[v8];
        qword_1404434B0 = (__int64)&v12[v19];
        return 0LL;
      }
      ExFreePoolWithTag(v12, 0x72626968u);
    }
    return 3221225626LL;
  }
  return result;
}
