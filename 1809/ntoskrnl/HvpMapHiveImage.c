/*
 * XREFs of HvpMapHiveImage @ 0x1407F8B4C
 * Callers:
 *     HvpMapHiveImageFromFile @ 0x1407F8CB4 (HvpMapHiveImageFromFile.c)
 * Callees:
 *     memmove @ 0x1401D1640 (memmove.c)
 *     SetFailureLocation @ 0x14026BD48 (SetFailureLocation.c)
 *     HvpAllocateBin @ 0x1405A3540 (HvpAllocateBin.c)
 *     HvpProtectBin @ 0x1405A3584 (HvpProtectBin.c)
 *     HvpPointMapEntriesToBuffer @ 0x1405A4F90 (HvpPointMapEntriesToBuffer.c)
 *     HvpFreeBin @ 0x1406D1230 (HvpFreeBin.c)
 *     HvpReadHiveDataFromFile @ 0x1407F92DC (HvpReadHiveDataFromFile.c)
 */

__int64 __fastcall HvpMapHiveImage(ULONG_PTR BugCheckParameter2, __int64 a2, unsigned int a3, __int64 a4, __int64 a5)
{
  __int64 v6; // r15
  int v7; // r14d
  int v8; // eax
  int Bin; // ebx
  unsigned int v10; // esi
  const void *v11; // r12
  __int64 v12; // rcx
  int v13; // eax
  __int64 v15; // [rsp+60h] [rbp+8h] BYREF
  unsigned int v16; // [rsp+70h] [rbp+18h] BYREF
  void *v17; // [rsp+78h] [rbp+20h] BYREF

  v16 = a3;
  v17 = 0LL;
  v6 = *(_QWORD *)(BugCheckParameter2 + 56);
  v7 = 0;
  do
  {
LABEL_2:
    v8 = HvpReadHiveDataFromFile(a5, &v15, &v16);
    Bin = v8;
    if ( v8 < 0 )
    {
      if ( v8 == -1073741807 )
        return 0;
      else
        SetFailureLocation(v6, 0, 7, v8, 0);
      return (unsigned int)Bin;
    }
    v10 = 0;
  }
  while ( !v16 );
  while ( 1 )
  {
    v11 = (const void *)(v15 + v10);
    Bin = HvpAllocateBin(BugCheckParameter2, 4096LL, 0, 0x31334D43u, (__int64 *)&v17);
    if ( Bin < 0 )
      break;
    memmove(v17, v11, 0x1000uLL);
    Bin = HvpProtectBin(v12, 0x1000u, (__int64)v17, 0);
    if ( Bin < 0 )
    {
      v13 = 32;
      goto LABEL_10;
    }
    HvpPointMapEntriesToBuffer(BugCheckParameter2, (__int64)v17, 0x1000u, v7, 1, 0LL);
    v17 = 0LL;
    v7 += 4096;
    v10 += 4096;
    if ( v10 >= v16 )
      goto LABEL_2;
  }
  v13 = 16;
LABEL_10:
  SetFailureLocation(v6, 0, 7, Bin, v13);
  if ( v17 )
    HvpFreeBin(BugCheckParameter2, 0x1000u, (unsigned __int64)v17);
  return (unsigned int)Bin;
}
