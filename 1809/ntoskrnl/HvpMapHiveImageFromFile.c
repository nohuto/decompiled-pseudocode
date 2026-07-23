/*
 * XREFs of HvpMapHiveImageFromFile @ 0x1407F8CB4
 * Callers:
 *     HvLoadHive @ 0x1405A5C9C (HvLoadHive.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     HvpMapHiveImage @ 0x1407F8B4C (HvpMapHiveImage.c)
 */

__int64 __fastcall HvpMapHiveImageFromFile(ULONG_PTR BugCheckParameter2, __int64 a2, __int64 a3, unsigned int a4)
{
  unsigned int v4; // eax
  __int64 v6; // rdx
  unsigned int v7; // r8d
  __int64 v8; // r9
  unsigned int v9; // ebx
  __int64 v11; // [rsp+30h] [rbp-30h] BYREF
  int v12; // [rsp+38h] [rbp-28h]
  int v13; // [rsp+3Ch] [rbp-24h]
  PVOID P; // [rsp+40h] [rbp-20h]
  unsigned int v15; // [rsp+48h] [rbp-18h]
  int v16; // [rsp+4Ch] [rbp-14h]
  unsigned int v17; // [rsp+50h] [rbp-10h]

  v12 = 0;
  v4 = 0x200000;
  P = 0LL;
  v16 = 0;
  v11 = BugCheckParameter2;
  v13 = 4096;
  if ( a4 < 0x200000 )
    v4 = a4;
  v17 = a4;
  v15 = v4;
  while ( 1 )
  {
    P = ExAllocatePoolWithTag(PagedPool, v4, 0x6F494D43u);
    if ( P )
      break;
    v4 = ((v15 >> 1) + 4095) & 0xFFFFF000;
    v15 = v4;
    if ( v4 < 0x10000 )
      return (unsigned int)-1073741801;
  }
  v9 = HvpMapHiveImage(BugCheckParameter2, v6, v7, v8, (__int64)&v11);
  if ( P )
    ExFreePoolWithTag(P, 0);
  return v9;
}
