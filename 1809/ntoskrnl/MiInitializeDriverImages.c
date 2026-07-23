/*
 * XREFs of MiInitializeDriverImages @ 0x1409B7BDC
 * Callers:
 *     MiInitSystem @ 0x1409BD5A8 (MiInitSystem.c)
 * Callees:
 *     MiSplitBitmapPages @ 0x1400265A8 (MiSplitBitmapPages.c)
 *     RtlClearBitsEx @ 0x140027F20 (RtlClearBitsEx.c)
 *     MiSystemVaToDynamicBitmap @ 0x1400F7280 (MiSystemVaToDynamicBitmap.c)
 *     MiBuildDynamicRegion @ 0x14017EA20 (MiBuildDynamicRegion.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     VfInitBootDriversLoaded @ 0x1409B8610 (VfInitBootDriversLoaded.c)
 *     MiMarkBootImagesNonPaged @ 0x1409B8ABC (MiMarkBootImagesNonPaged.c)
 *     MiCreateInitialSystemWsles @ 0x1409B8B7C (MiCreateInitialSystemWsles.c)
 *     MiReloadBootLoadedDrivers @ 0x1409B8C6C (MiReloadBootLoadedDrivers.c)
 *     MiInitializeBootLoadedDriverPfns @ 0x1409B9BD8 (MiInitializeBootLoadedDriverPfns.c)
 *     MxMarkActiveDriverBits @ 0x1409B9D60 (MxMarkActiveDriverBits.c)
 */

__int64 __fastcall MiInitializeDriverImages(__int64 a1)
{
  unsigned __int64 v1; // rbx
  __int64 *v3; // rax
  unsigned __int64 v4; // r8
  unsigned __int64 *v5; // rcx
  __int64 v6; // rdx
  unsigned __int64 v7; // rsi
  _DWORD *v8; // rdi
  unsigned __int64 i; // rbx
  __int64 *v10; // rax
  __int64 v11; // rdx
  __int64 result; // rax
  char *v13; // rbx
  char *v14; // r15
  __int64 v15; // r8
  unsigned __int16 v16; // cx
  char *j; // rdi
  unsigned __int16 v18; // cx
  _QWORD *PoolWithTag; // rax
  __int16 v20; // si
  _QWORD *v21; // rcx
  char v22; // [rsp+30h] [rbp-78h] BYREF
  char v23; // [rsp+38h] [rbp-70h] BYREF

  v1 = qword_14043CBE0;
  v3 = MiSystemVaToDynamicBitmap(12);
  if ( !(unsigned int)MiBuildDynamicRegion(v3, v1, 0x8000000000uLL) )
    return 0LL;
  v4 = v1 + 0x7FFFFFFFFFLL;
  v5 = (unsigned __int64 *)&v23;
  v6 = 4LL;
  do
  {
    v1 = ((v1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v4 = ((v4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    *(v5 - 1) = v1;
    *v5 = v4;
    v5 += 2;
    --v6;
  }
  while ( v6 );
  MxMarkActiveDriverBits((unsigned int)&qword_14043B320, v1, v4, (unsigned int)&v22, 3);
  v7 = qword_14043B328;
  v8 = (_DWORD *)((((unsigned __int64)qword_14043B328 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  for ( i = 0LL; i < qword_14043B320; i += 0x8000LL )
  {
    if ( (*v8 & 0x800LL) == 0 )
    {
      if ( !(unsigned int)MiSplitBitmapPages(5u, v7, 8LL) )
        return 0LL;
      RtlClearBitsEx((__int64)&qword_14043B320, i, 0x8000uLL);
    }
    v7 += 4096LL;
    v8 += 2;
  }
  qword_14043B320 = i;
  v10 = MiSystemVaToDynamicBitmap(11);
  if ( !(unsigned int)MiBuildDynamicRegion(v10, v11, 0x2000000000uLL) )
    return 0LL;
  qword_140439F90 = -1LL;
  qword_140439FC0 = 0LL;
  qword_140439FA0 = (__int64)&qword_140439F98;
  qword_140439F98 = (__int64)&qword_140439F98;
  if ( MmLargePageDriverBufferLength != -1 )
  {
    v13 = (char *)&MmLargePageDriverBuffer;
    v14 = (char *)&MmLargePageDriverBuffer
        + 2 * (((unsigned __int64)(unsigned int)MmLargePageDriverBufferLength - 2) >> 1);
    if ( &MmLargePageDriverBuffer < (_UNKNOWN *)v14 )
    {
      v15 = 0x100002601LL;
      do
      {
        v16 = *(_WORD *)v13;
        if ( *(_WORD *)v13 <= 0x20u && _bittest64(&v15, v16) || v16 == 12288 )
        {
          j = v13;
        }
        else
        {
          if ( v16 == 42 )
          {
            byte_140439F8D = 1;
            break;
          }
          for ( j = v13; j < v14; j += 2 )
          {
            v18 = *(_WORD *)j;
            if ( *(_WORD *)j <= 0x20u && _bittest64(&v15, v18) )
              break;
            if ( v18 == 12288 )
              break;
          }
          PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x20uLL, 0x704C6D4Du);
          if ( !PoolWithTag )
            break;
          v20 = 2 * ((j - v13) >> 1);
          PoolWithTag[3] = v13;
          *((_WORD *)PoolWithTag + 8) = v20;
          *((_WORD *)PoolWithTag + 9) = v20;
          v21 = (_QWORD *)qword_140439FA0;
          if ( *(__int64 **)qword_140439FA0 != &qword_140439F98 )
            __fastfail(3u);
          *PoolWithTag = &qword_140439F98;
          PoolWithTag[1] = v21;
          v15 = 0x100002601LL;
          *v21 = PoolWithTag;
          qword_140439FA0 = (__int64)PoolWithTag;
        }
        v13 = j + 2;
      }
      while ( j + 2 < v14 );
    }
  }
  if ( !(unsigned int)MiInitializeBootLoadedDriverPfns(a1)
    || !(unsigned int)MiReloadBootLoadedDrivers(a1)
    || !(unsigned int)MiCreateInitialSystemWsles() )
  {
    return 0LL;
  }
  MiMarkBootImagesNonPaged(a1);
  VfInitBootDriversLoaded(a1);
  result = 1LL;
  qword_140439FB0 = (__int64)&qword_140439FA8;
  qword_140439FA8 = &qword_140439FA8;
  return result;
}
