/*
 * XREFs of EtwpEnableTrace @ 0x1407190F4
 * Callers:
 *     EtwEnableTrace @ 0x140719030 (EtwEnableTrace.c)
 *     EtwpEnableAutoLoggerProvider @ 0x140724C98 (EtwpEnableAutoLoggerProvider.c)
 * Callees:
 *     memmove @ 0x1401D1640 (memmove.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     EtwpEnableGuid @ 0x1406570F8 (EtwpEnableGuid.c)
 */

__int64 __fastcall EtwpEnableTrace(
        __int64 a1,
        __int128 *a2,
        _OWORD *a3,
        __int16 a4,
        int a5,
        char a6,
        __int64 a7,
        __int64 a8,
        int a9,
        const void **a10,
        const void **a11,
        void *Src,
        size_t Size,
        void *a14,
        size_t a15,
        void *a16,
        size_t a17,
        __int64 a18)
{
  const void **v18; // r15
  int v21; // r11d
  int v22; // r10d
  unsigned int v23; // r9d
  __int64 v24; // r8
  unsigned __int16 v25; // ax
  const void **v26; // r12
  unsigned int v27; // edx
  __int64 v28; // rcx
  unsigned __int16 v29; // ax
  int v30; // eax
  int v31; // ecx
  int v32; // edx
  int v33; // eax
  int v34; // ecx
  int v35; // edx
  int v36; // ebx
  int v37; // esi
  unsigned int v38; // esi
  char *PoolWithTag; // rax
  char *v40; // r14
  unsigned int v41; // ebx
  __int128 v42; // xmm0
  char *v43; // rdi
  unsigned int v44; // ebp
  char *v45; // rsi
  unsigned int i; // r13d
  __int64 v47; // rbx
  size_t v48; // r8
  __int64 v49; // rax
  unsigned int j; // r15d
  __int64 v51; // rbx
  int v52; // ecx
  unsigned int v53; // ecx
  __int64 v54; // rax
  __int64 v55; // rbx
  __int64 v56; // rbx
  __int64 v57; // rbx
  __int64 v58; // rcx

  v18 = a10;
  v21 = 0;
  v22 = 120;
  if ( a10 )
  {
    v23 = 0;
    v24 = (__int64)a10;
    do
    {
      v25 = *(_WORD *)v24;
      if ( *(_WORD *)v24 && *(_QWORD *)(v24 + 8) )
      {
        if ( v25 > 0x400u )
          return (unsigned int)-1073741811;
        ++v21;
        v22 += v25 + 2;
      }
      ++v23;
      v24 += 16LL;
    }
    while ( v23 < 4 );
  }
  v26 = a11;
  if ( a11 )
  {
    v27 = 0;
    v28 = (__int64)a11;
    do
    {
      if ( *(_QWORD *)v28 )
      {
        v29 = *(_WORD *)(*(_QWORD *)v28 + 2LL);
        if ( v29 )
        {
          if ( v29 > 0x40u )
            return (unsigned int)-1073741811;
          ++v21;
          v22 += 2 * v29 + 4;
        }
      }
      ++v27;
      v28 += 8LL;
    }
    while ( v27 < 2 );
  }
  v30 = v21 + 1;
  if ( !(_DWORD)Size )
    v30 = v21;
  v31 = v22 + Size;
  if ( !(_DWORD)Size )
    v31 = v22;
  v32 = v30 + 1;
  if ( !(_DWORD)a15 )
    v32 = v30;
  v33 = v31 + a15;
  if ( !(_DWORD)a15 )
    v33 = v31;
  v34 = v32 + 1;
  if ( !(_DWORD)a17 )
    v34 = v32;
  v35 = v33 + a17;
  if ( !(_DWORD)a17 )
    v35 = v33;
  v36 = v34 + 1;
  if ( !a18 )
    v36 = v34;
  v37 = v35 + 24;
  if ( !a18 )
    v37 = v35;
  v38 = 16 * v36 + v37;
  PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, v38, 0x74777445u);
  v40 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, v38);
    *(_DWORD *)v40 = 3;
    *((_DWORD *)v40 + 1) = v38;
    if ( a3 )
      *(_OWORD *)(v40 + 56) = *a3;
    v42 = *a2;
    *((_DWORD *)v40 + 18) = a5;
    v40[76] = a6;
    *((_QWORD *)v40 + 12) = a8;
    *((_QWORD *)v40 + 11) = a7;
    *((_DWORD *)v40 + 20) = a9;
    *((_WORD *)v40 + 39) = a4;
    *((_DWORD *)v40 + 29) = v36;
    *(_OWORD *)(v40 + 40) = v42;
    if ( v36 )
    {
      v43 = v40 + 120;
      v44 = 0;
      v45 = &v40[16 * v36 + 120];
      for ( i = 0; i < 4; ++i )
      {
        if ( *(_WORD *)v18 && v18[1] )
        {
          if ( i )
          {
            if ( i == 1 )
            {
              *(_DWORD *)&v43[16 * v44 + 12] = -2147483632;
            }
            else if ( i == 2 )
            {
              *(_DWORD *)&v43[16 * v44 + 12] = -2147483616;
            }
            else
            {
              *(_DWORD *)&v43[16 * v44 + 12] = -2147450880;
            }
          }
          else
          {
            *(_DWORD *)&v43[16 * v44 + 12] = -2147483640;
          }
          v47 = 2LL * v44;
          v48 = (unsigned int)*(unsigned __int16 *)v18 + 2;
          *(_DWORD *)&v43[8 * v47 + 8] = v48;
          *(_QWORD *)&v43[8 * v47] = v45 - v40;
          memmove(v45, v18[1], v48);
          v49 = *(unsigned int *)&v43[16 * v44++ + 8];
          v45 += v49;
        }
        v18 += 2;
      }
      for ( j = 0; j < 2; ++j )
      {
        if ( *v26 && *((_WORD *)*v26 + 1) )
        {
          if ( j )
            *(_DWORD *)&v43[16 * v44 + 12] = -2147479552;
          else
            *(_DWORD *)&v43[16 * v44 + 12] = -2147483136;
          v51 = 2LL * v44;
          v52 = *((unsigned __int16 *)*v26 + 1);
          *(_QWORD *)&v43[8 * v51] = v45 - v40;
          v53 = 2 * v52 + 4;
          *(_DWORD *)&v43[8 * v51 + 8] = v53;
          memmove(v45, *v26, v53);
          v54 = *(unsigned int *)&v43[16 * v44++ + 8];
          v45 += v54;
        }
        ++v26;
      }
      if ( (_DWORD)Size )
      {
        v55 = 2LL * v44;
        *(_DWORD *)&v43[8 * v55 + 8] = Size;
        *(_DWORD *)&v43[8 * v55 + 12] = -2147482624;
        *(_QWORD *)&v43[8 * v55] = v45 - v40;
        memmove(v45, Src, (unsigned int)Size);
        v45 += *(unsigned int *)&v43[16 * v44++ + 8];
      }
      if ( (_DWORD)a15 )
      {
        v56 = 2LL * v44;
        *(_DWORD *)&v43[8 * v56 + 8] = a15;
        *(_DWORD *)&v43[8 * v56 + 12] = -2147475456;
        *(_QWORD *)&v43[8 * v56] = v45 - v40;
        memmove(v45, a14, (unsigned int)a15);
        v45 += *(unsigned int *)&v43[16 * v44++ + 8];
      }
      if ( (_DWORD)a17 )
      {
        v57 = 2LL * v44;
        *(_DWORD *)&v43[8 * v57 + 8] = a17;
        *(_DWORD *)&v43[8 * v57 + 12] = 0x80000000;
        *(_QWORD *)&v43[8 * v57] = v45 - v40;
        memmove(v45, a16, (unsigned int)a17);
        v45 += *(unsigned int *)&v43[16 * v44++ + 8];
      }
      if ( a18 )
      {
        v58 = 2LL * v44;
        *(_DWORD *)&v43[8 * v58 + 12] = -2147467264;
        *(_DWORD *)&v43[8 * v58 + 8] = 24;
        *(_QWORD *)&v43[8 * v58] = v45 - v40;
        *(_OWORD *)v45 = *(_OWORD *)a18;
        *((_QWORD *)v45 + 2) = *(_QWORD *)(a18 + 16);
      }
    }
    v41 = EtwpEnableGuid(a1, (__int64)v40, 0);
    ExFreePoolWithTag(v40, 0);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v41;
}
