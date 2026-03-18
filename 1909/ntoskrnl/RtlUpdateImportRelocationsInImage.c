/*
 * XREFs of RtlUpdateImportRelocationsInImage @ 0x140187DDC
 * Callers:
 *     MiApplyRetpolineFixupsToKernelAndHal @ 0x1409F00AC (MiApplyRetpolineFixupsToKernelAndHal.c)
 *     MiApplyImportOptimizationToBootDrivers @ 0x1409F0318 (MiApplyImportOptimizationToBootDrivers.c)
 * Callees:
 *     RtlCaptureRetpolineImportRvas @ 0x140158738 (RtlCaptureRetpolineImportRvas.c)
 *     RtlApplyImportRelocationToImage @ 0x140187FEC (RtlApplyImportRelocationToImage.c)
 *     RtlpCaptureRetpolineBinaryInfoForImage @ 0x14018814C (RtlpCaptureRetpolineBinaryInfoForImage.c)
 *     RtlpCaptureDynamicRelocationTableRva @ 0x140188284 (RtlpCaptureDynamicRelocationTableRva.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall RtlUpdateImportRelocationsInImage(
        char *BaseAddress,
        __int64 a2,
        unsigned int a3,
        unsigned int (*a4)(void),
        __int64 a5,
        __int64 a6,
        char a7,
        unsigned __int8 a8)
{
  _DWORD *v8; // rdi
  int v13; // ebx
  int v14; // eax
  char *v15; // rcx
  unsigned __int64 v16; // rdx
  char *i; // rcx
  _DWORD *v18; // rbx
  unsigned __int64 v19; // r14
  unsigned __int64 v20; // r12
  _DWORD *v21; // rsi
  SIZE_T NumberOfBytes; // [rsp+40h] [rbp-40h] BYREF
  _DWORD *PoolWithTag; // [rsp+48h] [rbp-38h]
  _QWORD v25[6]; // [rsp+50h] [rbp-30h] BYREF

  v8 = 0LL;
  LODWORD(NumberOfBytes) = 0;
  PoolWithTag = 0LL;
  memset(v25, 0, sizeof(v25));
  v13 = RtlpCaptureRetpolineBinaryInfoForImage(BaseAddress, a6, v25);
  if ( v13 < 0 )
    return (unsigned int)v13;
  if ( a7 )
  {
    if ( LODWORD(v25[1]) )
    {
      v25[4] = a2;
      v25[3] = &BaseAddress[LODWORD(v25[1])];
      v25[5] = a4;
      goto LABEL_8;
    }
    return 0;
  }
  v14 = RtlCaptureRetpolineImportRvas((unsigned __int64)BaseAddress, a2, a3, a4, 0LL, (unsigned int *)&NumberOfBytes);
  v13 = v14;
  if ( v14 >= 0 )
    return 0;
  if ( v14 != -1073741789 )
    return (unsigned int)v13;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x496C7052u);
  v8 = PoolWithTag;
  if ( !PoolWithTag )
    return (unsigned int)-1073741801;
  v13 = RtlCaptureRetpolineImportRvas(
          (unsigned __int64)BaseAddress,
          a2,
          a3,
          a4,
          PoolWithTag,
          (unsigned int *)&NumberOfBytes);
  if ( v13 < 0 )
    goto LABEL_20;
  v25[2] = v8;
LABEL_8:
  v13 = RtlpCaptureDynamicRelocationTableRva(BaseAddress, a3);
  if ( v13 >= 0 )
  {
    v15 = &BaseAddress[(unsigned int)NumberOfBytes];
    v16 = (unsigned __int64)&v15[*((unsigned int *)v15 + 1) + 8];
    for ( i = v15 + 8; ; i += *((unsigned int *)i + 2) + 12 )
    {
      if ( (unsigned __int64)i >= v16 )
      {
        v13 = -1073741637;
        goto LABEL_20;
      }
      if ( *(_QWORD *)i == 3LL )
        break;
    }
    v18 = i + 12;
    v19 = (unsigned __int64)&i[*((unsigned int *)i + 2) + 12];
    NumberOfBytes = v19;
    if ( (unsigned __int64)(i + 12) < v19 )
    {
      do
      {
        v20 = (unsigned __int64)v18 + (unsigned int)v18[1];
        v21 = v18 + 2;
        if ( (unsigned __int64)(v18 + 2) < v20 )
        {
          do
          {
            if ( (*v21 & 0xFFF) == 0 && v21 != v18 + 2 )
              break;
            RtlApplyImportRelocationToImage((_DWORD)BaseAddress, a3, (unsigned int)v25, a6, *v18, (__int64)v21++, 1, a8);
          }
          while ( (unsigned __int64)v21 < v20 );
          v19 = NumberOfBytes;
        }
        v18 = (_DWORD *)((char *)v18 + (unsigned int)v18[1]);
      }
      while ( (unsigned __int64)v18 < v19 );
      v8 = PoolWithTag;
    }
    v13 = 0;
  }
LABEL_20:
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
  return (unsigned int)v13;
}
