/*
 * XREFs of RtlpHpEnvAllocVA @ 0x140022940
 * Callers:
 *     RtlpHpAllocVA @ 0x14002275C (RtlpHpAllocVA.c)
 *     RtlpCSparseBitmapPageCommit @ 0x14010F3D8 (RtlpCSparseBitmapPageCommit.c)
 *     RtlpHpVaMgrAllocAligned @ 0x14010F5FC (RtlpHpVaMgrAllocAligned.c)
 *     RtlCSparseBitmapStart @ 0x14017A274 (RtlCSparseBitmapStart.c)
 * Callees:
 *     MmAllocatePoolMemory @ 0x140022AFC (MmAllocatePoolMemory.c)
 *     RtlpHpEnvFreeVA @ 0x14010DB68 (RtlpHpEnvFreeVA.c)
 */

__int64 __fastcall RtlpHpEnvAllocVA(
        __int64 *a1,
        __int64 *a2,
        unsigned __int64 a3,
        int a4,
        int a5,
        int a6,
        int a7,
        __int64 a8,
        int a9)
{
  __int64 v9; // rbx
  unsigned __int64 v10; // rdi
  int v13; // r8d
  int v14; // edx
  unsigned int v15; // esi
  unsigned int v16; // eax
  int PoolMemory; // eax
  __int64 v18; // r9
  __int64 v20; // rdx
  __int64 v21; // r8
  int v22; // eax
  unsigned int v23; // eax
  _QWORD v24[2]; // [rsp+30h] [rbp-10h] BYREF
  __int64 v25; // [rsp+70h] [rbp+30h] BYREF
  unsigned __int64 v26; // [rsp+80h] [rbp+40h] BYREF

  v9 = *a2;
  v10 = 1LL;
  if ( a3 )
    v10 = a3;
  v13 = 2;
  if ( (a4 & 0x20001000) != 0x20001000 )
    v13 = a7;
  if ( (a9 + 1) & 0x2000 | a4 & 0x2000 )
  {
    v9 = v9 - ((v9 - 1) & 0x1FFFFF) + 0x1FFFFF;
    v26 = v9;
    if ( v10 > 0x200000 )
      v26 = v10 + v9;
  }
  else
  {
    v26 = *a2;
  }
  if ( v13 )
  {
    v14 = 512;
  }
  else
  {
    v14 = 33;
    if ( a6 == 1 )
      v14 = 1;
  }
  if ( (a5 & 0x60) != 0 && v14 == 512 )
    v14 = 0;
  v25 = *a1;
  v15 = (a9 + 1) & 0xFFFBFFFF | a4 & 0xFFEBFFFF;
  if ( !((a9 + 1) & 0x40000 | a4 & 0x40000) )
    v15 = (a9 + 1) | a4 & 0xFFEFFFFF;
  v16 = v14 | 0x80000000;
  if ( !((a9 + 1) & 0x40000 | a4 & 0x40000) )
    v16 = v14;
  PoolMemory = MmAllocatePoolMemory((unsigned int)&v25, (unsigned int)&v26, v15, a5, v16);
  v18 = (unsigned int)PoolMemory;
  if ( PoolMemory >= 0 && (v15 & 0x2000) != 0 )
  {
    v24[0] = v25;
    v20 = -(__int64)v10 & (v10 + v25 - 1);
    v25 = v20;
    v21 = v20 - v24[0];
    a8 = v20 - v24[0];
    if ( v20 != v24[0] )
    {
      v23 = RtlpHpEnvFreeVA(v24, &a8, 0x8000LL, (unsigned int)PoolMemory);
      v20 = v25;
      v18 = v23;
      v21 = a8;
    }
    v24[0] = v20 + v9;
    a8 = v26 - v21 - v9;
    if ( v26 - v21 != v9 )
    {
      v22 = RtlpHpEnvFreeVA(v24, &a8, 0x8000LL, v18);
      v20 = v25;
      LODWORD(v18) = v22;
    }
    *a1 = v20;
    *a2 = v9;
  }
  return (unsigned int)v18;
}
