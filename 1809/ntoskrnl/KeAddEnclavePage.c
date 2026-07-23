/*
 * XREFs of KeAddEnclavePage @ 0x14028F9A4
 * Callers:
 *     MiAddPagesToEnclave @ 0x1402BCAD4 (MiAddPagesToEnclave.c)
 *     MiCopyPagesIntoEnclave @ 0x14085A6EC (MiCopyPagesIntoEnclave.c)
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     KiEncls @ 0x1401BCE00 (KiEncls.c)
 *     memset @ 0x1401D1980 (memset.c)
 */

__int64 __fastcall KeAddEnclavePage(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5, _DWORD *a6)
{
  _DWORD *v6; // rbp
  bool v11; // zf
  unsigned int v12; // r14d
  int v13; // edx
  int v14; // ecx
  int v15; // ecx
  int v17; // ebx
  int v18; // [rsp+60h] [rbp+0h] BYREF

  v6 = (_DWORD *)((unsigned __int64)&v18 & 0xFFFFFFFFFFFFFFC0uLL);
  v11 = (KeFeatureBits & 0x10000000000LL) == 0;
  *a6 = 0;
  if ( v11 )
    return 3221225659LL;
  if ( (a5 & 0x40) != 0 )
  {
    if ( (KeFeatureBits & 0x80000000000LL) == 0 )
      return 3221225496LL;
    v12 = 13;
    if ( (a5 & 0xF) != 3 )
      return 3221225541LL;
    *(_QWORD *)(((unsigned __int64)&v18 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) = 0LL;
    *(_QWORD *)(((unsigned __int64)&v18 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) = 0LL;
  }
  else
  {
    v12 = 1;
    memset(v6 + 16, 0, 0x40uLL);
    v13 = a5 & 1 | 2;
    if ( (a5 & 2) == 0 )
      v13 = a5 & 1;
    v14 = v13 | 4;
    if ( (a5 & 4) == 0 )
      v14 = v13;
    if ( (a5 & 8) != 0 )
      v15 = v14 | 0x100;
    else
      v15 = v14 | 0x200;
    *(_DWORD *)(((unsigned __int64)&v18 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = v15;
    *(_QWORD *)(((unsigned __int64)&v18 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) = a2;
    *(_QWORD *)(((unsigned __int64)&v18 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) = ((unsigned __int64)&v18 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                         + 64;
  }
  *(_QWORD *)(((unsigned __int64)&v18 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) = a4;
  *(_QWORD *)(((unsigned __int64)&v18 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38) = a1;
  KiEncls(v12);
  if ( (a5 & 0x50) == 0 )
  {
    v17 = 4096;
    *v6 = 4096;
    do
    {
      KiEncls(6u);
      a3 += 256LL;
      *(_QWORD *)(((unsigned __int64)&v18 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = a3;
      v11 = v17 == 256;
      v17 -= 256;
      *v6 = v17;
    }
    while ( !v11 );
  }
  return 0LL;
}
