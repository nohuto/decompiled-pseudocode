/*
 * XREFs of KeAddEnclavePage @ 0x1402A61B4
 * Callers:
 *     MiAddPagesToEnclave @ 0x1402D3228 (MiAddPagesToEnclave.c)
 *     MiCopyPagesIntoEnclave @ 0x140893384 (MiCopyPagesIntoEnclave.c)
 * Callees:
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     KiEncls @ 0x1401C49A0 (KiEncls.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 */

__int64 __fastcall KeAddEnclavePage(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5, _DWORD *a6)
{
  _DWORD *v6; // rbp
  unsigned int v11; // r10d
  int v12; // edx
  int v13; // ecx
  int v14; // ecx
  int v16; // ebx
  bool v17; // zf
  int v18; // [rsp+60h] [rbp+0h] BYREF

  v6 = (_DWORD *)((unsigned __int64)&v18 & 0xFFFFFFFFFFFFFFC0uLL);
  memset((void *)(((unsigned __int64)&v18 & 0xFFFFFFFFFFFFFFC0uLL) + 64), 0, 0x40uLL);
  if ( (KeFeatureBits & 0x10000000000LL) != 0 )
  {
    *a6 = 0;
    if ( (a5 & 0x40) != 0 )
    {
      if ( (KeFeatureBits & 0x80000000000LL) == 0 )
        return 3221225496LL;
      v11 = 13;
      if ( (a5 & 0xF) != 3 )
        return 3221225541LL;
      *(_QWORD *)(((unsigned __int64)&v18 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) = 0LL;
      *(_QWORD *)(((unsigned __int64)&v18 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) = 0LL;
    }
    else
    {
      v11 = 1;
      v12 = a5 & 1 | 2;
      if ( (a5 & 2) == 0 )
        v12 = a5 & 1;
      v13 = v12 | 4;
      if ( (a5 & 4) == 0 )
        v13 = v12;
      if ( (a5 & 8) != 0 )
        v14 = v13 | 0x100;
      else
        v14 = v13 | 0x200;
      *(_DWORD *)(((unsigned __int64)&v18 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = v14;
      *(_QWORD *)(((unsigned __int64)&v18 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) = a2;
      *(_QWORD *)(((unsigned __int64)&v18 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) = ((unsigned __int64)&v18 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                           + 64;
    }
    *(_QWORD *)(((unsigned __int64)&v18 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) = a4;
    *(_QWORD *)(((unsigned __int64)&v18 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38) = a1;
    KiEncls(v11);
    if ( (a5 & 0x50) == 0 )
    {
      v16 = 4096;
      *v6 = 4096;
      do
      {
        KiEncls(6u);
        a3 += 256LL;
        *(_QWORD *)(((unsigned __int64)&v18 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = a3;
        v17 = v16 == 256;
        v16 -= 256;
        *v6 = v16;
      }
      while ( !v17 );
    }
    return 0LL;
  }
  else
  {
    *a6 = 0;
    return 3221225659LL;
  }
}
