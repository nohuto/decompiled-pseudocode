/*
 * XREFs of RtlpHpEnvAllocVA @ 0x14000D060
 * Callers:
 *     RtlpHpVaMgrAllocAligned @ 0x14000A318 (RtlpHpVaMgrAllocAligned.c)
 *     RtlpCSparseBitmapPageCommit @ 0x14000A9E4 (RtlpCSparseBitmapPageCommit.c)
 *     RtlpHpAllocVA @ 0x14000CE68 (RtlpHpAllocVA.c)
 *     RtlCSparseBitmapStart @ 0x140170508 (RtlCSparseBitmapStart.c)
 * Callees:
 *     RtlpHpEnvFreeVA @ 0x14000D2A8 (RtlpHpEnvFreeVA.c)
 *     MmAllocatePoolMemory @ 0x140099080 (MmAllocatePoolMemory.c)
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
  int PoolMemory; // r9d
  __int64 v19; // rdx
  __int64 v20; // r8
  int v21; // eax
  int v22; // eax
  _QWORD v23[2]; // [rsp+30h] [rbp-10h] BYREF
  __int64 v24; // [rsp+70h] [rbp+30h] BYREF
  unsigned __int64 v25; // [rsp+80h] [rbp+40h] BYREF

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
    v25 = v9;
    if ( v10 > 0x200000 )
      v25 = v10 + v9;
  }
  else
  {
    v25 = *a2;
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
  v24 = *a1;
  v15 = (a9 + 1) & 0xFFFBFFFF | a4 & 0xFFEBFFFF;
  if ( !((a9 + 1) & 0x40000 | a4 & 0x40000) )
    v15 = (a9 + 1) | a4 & 0xFFEFFFFF;
  v16 = v14 | 0x80000000;
  if ( !((a9 + 1) & 0x40000 | a4 & 0x40000) )
    v16 = v14;
  PoolMemory = MmAllocatePoolMemory((unsigned int)&v24, (unsigned int)&v25, v15, a5, v16);
  if ( PoolMemory >= 0 && (v15 & 0x2000) != 0 )
  {
    v23[0] = v24;
    v19 = -(__int64)v10 & (v10 + v24 - 1);
    v24 = v19;
    v20 = v19 - v23[0];
    a8 = v19 - v23[0];
    if ( v19 != v23[0] )
    {
      v22 = RtlpHpEnvFreeVA(v23, &a8, 0x8000LL);
      v19 = v24;
      PoolMemory = v22;
      v20 = a8;
    }
    v23[0] = v19 + v9;
    a8 = v25 - v20 - v9;
    if ( v25 - v20 != v9 )
    {
      v21 = RtlpHpEnvFreeVA(v23, &a8, 0x8000LL);
      v19 = v24;
      PoolMemory = v21;
    }
    *a1 = v19;
    *a2 = v9;
  }
  return (unsigned int)PoolMemory;
}
