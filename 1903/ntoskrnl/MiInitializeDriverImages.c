/*
 * XREFs of MiInitializeDriverImages @ 0x1409EE68C
 * Callers:
 *     MiInitSystem @ 0x1409F0E88 (MiInitSystem.c)
 * Callees:
 *     RtlImageNtHeader @ 0x14005EDB0 (RtlImageNtHeader.c)
 *     RtlClearBitsEx @ 0x1400ACE50 (RtlClearBitsEx.c)
 *     MiSystemVaToDynamicBitmap @ 0x1400ACF94 (MiSystemVaToDynamicBitmap.c)
 *     MiSplitBitmapPages @ 0x1400ACFF0 (MiSplitBitmapPages.c)
 *     MiBuildDynamicRegion @ 0x140187074 (MiBuildDynamicRegion.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     MiFreeInitializationCode @ 0x140710B2C (MiFreeInitializationCode.c)
 *     VfInitBootDriversLoaded @ 0x1409EF070 (VfInitBootDriversLoaded.c)
 *     MiCreateInitialSystemWsles @ 0x1409EF520 (MiCreateInitialSystemWsles.c)
 *     MiReloadBootLoadedDrivers @ 0x1409EF614 (MiReloadBootLoadedDrivers.c)
 *     MiInitializeBootLoadedDriverPfns @ 0x140A14BE0 (MiInitializeBootLoadedDriverPfns.c)
 *     MiInitializeDriverPtes @ 0x140A1630C (MiInitializeDriverPtes.c)
 *     MxMarkActiveDriverBits @ 0x140A176AC (MxMarkActiveDriverBits.c)
 */

__int64 __fastcall MiInitializeDriverImages(__int64 a1)
{
  unsigned __int64 v1; // rbx
  __int64 *v3; // rax
  unsigned __int64 v4; // r8
  unsigned __int64 *v5; // rcx
  __int64 v6; // rdx
  unsigned __int64 v7; // rsi
  _DWORD *v8; // rbx
  unsigned __int64 i; // rdi
  __int64 *v10; // rax
  __int64 v11; // rdx
  __int64 result; // rax
  unsigned __int16 *v13; // rbx
  char *v14; // r14
  __int64 v15; // r9
  unsigned __int16 v16; // cx
  char *v17; // rdi
  unsigned __int16 v18; // cx
  _QWORD *PoolWithTag; // rax
  __int16 v20; // si
  _QWORD *v21; // rcx
  _QWORD *j; // rdi
  PIMAGE_NT_HEADERS v23; // rax
  __int64 *v24; // rbx
  PIMAGE_NT_HEADERS v25; // r14
  int v26; // esi
  unsigned int v27; // ecx
  unsigned int v28; // ecx
  __int64 v29; // [rsp+30h] [rbp-A8h] BYREF
  unsigned int SizeOfHeaders; // [rsp+38h] [rbp-A0h]
  int v31; // [rsp+3Ch] [rbp-9Ch]
  unsigned int v32; // [rsp+40h] [rbp-98h]
  __int128 v33; // [rsp+44h] [rbp-94h]
  int v34; // [rsp+54h] [rbp-84h]
  char v35; // [rsp+60h] [rbp-78h] BYREF
  char v36; // [rsp+68h] [rbp-70h] BYREF

  v1 = qword_1404675F0;
  v3 = MiSystemVaToDynamicBitmap(12);
  if ( !(unsigned int)MiBuildDynamicRegion(v3, v1, 0x8000000000uLL) )
    return 0LL;
  v4 = v1 + 0x7FFFFFFFFFLL;
  v5 = (unsigned __int64 *)&v36;
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
  MxMarkActiveDriverBits((unsigned int)&qword_140465CA0, v1, v4, (unsigned int)&v35, 3);
  v7 = qword_140465CA8;
  v8 = (_DWORD *)((((unsigned __int64)qword_140465CA8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  for ( i = 0LL; i < qword_140465CA0; i += 0x8000LL )
  {
    if ( (*v8 & 0x800LL) == 0 )
    {
      if ( !(unsigned int)MiSplitBitmapPages(5, v7, 8LL) )
        return 0LL;
      RtlClearBitsEx((__int64)&qword_140465CA0, i, 0x8000uLL);
    }
    v7 += 4096LL;
    v8 += 2;
  }
  qword_140465CA0 = i;
  v10 = MiSystemVaToDynamicBitmap(11);
  if ( (unsigned int)MiBuildDynamicRegion(v10, v11, 0x2000000000uLL) )
  {
    qword_1404648F0 = -1LL;
    qword_140464920 = 0LL;
    qword_140464900 = (__int64)&qword_1404648F8;
    qword_1404648F8 = (__int64)&qword_1404648F8;
    if ( MmLargePageDriverBufferLength == -1 )
      goto LABEL_9;
    v13 = (unsigned __int16 *)&MmLargePageDriverBuffer;
    v14 = (char *)&MmLargePageDriverBuffer
        + 2 * (((unsigned __int64)(unsigned int)MmLargePageDriverBufferLength - 2) >> 1);
    if ( &MmLargePageDriverBuffer >= (_UNKNOWN *)v14 )
      goto LABEL_9;
    v15 = 0x100002601LL;
    while ( 1 )
    {
      v16 = *v13;
      if ( *v13 <= 0x20u && _bittest64(&v15, v16) || v16 == 12288 )
      {
        v17 = (char *)v13;
      }
      else
      {
        if ( v16 == 42 )
        {
          byte_1404648E9 = 1;
LABEL_9:
          BugCheckParameter3 = 0LL;
          if ( (unsigned int)MiInitializeBootLoadedDriverPfns(a1) && (unsigned int)MiInitializeDriverPtes(a1) )
          {
            if ( (MiFlags & 0x20000000) != 0 )
            {
              for ( j = PsNtosImageBase; ; j = PsHalImageBase )
              {
                v23 = RtlImageNtHeader(j);
                v29 = 0LL;
                v31 = 0;
                v24 = &v29;
                v25 = v23;
                v34 = 0x40000000;
                v26 = v23->FileHeader.NumberOfSections + 1;
                SizeOfHeaders = v23->OptionalHeader.SizeOfHeaders;
                v33 = 0LL;
                v32 = SizeOfHeaders;
                do
                {
                  v27 = *((_DWORD *)v24 + 4);
                  if ( v27 < *((_DWORD *)v24 + 2) )
                    v27 = *((_DWORD *)v24 + 2);
                  v28 = *((_DWORD *)v24 + 3) + ((v27 + 4095) & 0xFFFFF000);
                  if ( ((v28 + 0x1FFFFF) & 0xFFE00000) - v28 >= 0x1000 )
                    MiFreeInitializationCode(
                      j,
                      ((((unsigned __int64)j + v28) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
                      ((((unsigned __int64)j + ((v28 + 0x1FFFFF) & 0xFFE00000) - 1) >> 9) & 0x7FFFFFFFF8LL)
                    - 0x98000000000LL,
                      1);
                  if ( v24 == &v29 )
                    v24 = (__int64 *)((char *)&v25->OptionalHeader + v25->FileHeader.SizeOfOptionalHeader);
                  else
                    v24 += 5;
                  --v26;
                }
                while ( v26 );
                if ( j != PsNtosImageBase )
                  break;
              }
            }
            if ( (unsigned int)MiReloadBootLoadedDrivers(a1) && (unsigned int)MiCreateInitialSystemWsles() )
            {
              VfInitBootDriversLoaded(a1);
              result = 1LL;
              qword_140464910 = (__int64)&qword_140464908;
              qword_140464908 = &qword_140464908;
              return result;
            }
          }
          return 0LL;
        }
        v17 = (char *)v13;
        if ( v13 < (unsigned __int16 *)v14 )
        {
          do
          {
            v18 = *(_WORD *)v17;
            if ( *(_WORD *)v17 <= 0x20u && _bittest64(&v15, v18) )
              break;
            if ( v18 == 12288 )
              break;
            v17 += 2;
          }
          while ( v17 < v14 );
        }
        PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x20uLL, 0x704C6D4Du);
        if ( !PoolWithTag )
          goto LABEL_9;
        v20 = 2 * ((v17 - (char *)v13) >> 1);
        PoolWithTag[3] = v13;
        *((_WORD *)PoolWithTag + 8) = v20;
        *((_WORD *)PoolWithTag + 9) = v20;
        v21 = (_QWORD *)qword_140464900;
        if ( *(__int64 **)qword_140464900 != &qword_1404648F8 )
          __fastfail(3u);
        *PoolWithTag = &qword_1404648F8;
        PoolWithTag[1] = v21;
        *v21 = PoolWithTag;
        v15 = 0x100002601LL;
        qword_140464900 = (__int64)PoolWithTag;
      }
      v13 = (unsigned __int16 *)(v17 + 2);
      if ( v17 + 2 >= v14 )
        goto LABEL_9;
    }
  }
  return 0LL;
}
