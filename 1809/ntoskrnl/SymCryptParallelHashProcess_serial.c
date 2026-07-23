/*
 * XREFs of SymCryptParallelHashProcess_serial @ 0x1401B2A04
 * Callers:
 *     SymCryptParallelSha256Process @ 0x1401B2318 (SymCryptParallelSha256Process.c)
 * Callees:
 *     SymCryptWipe @ 0x1401B2744 (SymCryptWipe.c)
 *     _guard_dispatch_icall_nop @ 0x1401B7FF0 (_guard_dispatch_icall_nop.c)
 *     SymCryptFatal @ 0x14028F97C (SymCryptFatal.c)
 */

unsigned __int64 __fastcall SymCryptParallelHashProcess_serial(
        __int64 *a1,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        unsigned __int64 a5,
        __int64 a6,
        unsigned __int64 a7)
{
  __int64 v7; // r10
  __int64 v10; // rbp
  unsigned __int64 v12; // rbx
  unsigned __int64 result; // rax
  unsigned __int64 v14; // rdx
  _QWORD *v15; // rdi
  unsigned __int64 v16; // rdx

  v7 = *((unsigned int *)a1 + 2);
  v10 = *a1;
  if ( a7 < 56 * a3 + v7 )
    SymCryptFatal(1886597747LL);
  v12 = 0LL;
  result = 56 * a3 + (unsigned int)v7;
  if ( result <= 0x40 )
  {
    if ( (result & 1) != 0 )
      *(_BYTE *)(--result + a6) = 0;
    if ( (result & 2) != 0 )
    {
      result -= 2LL;
      *(_WORD *)(result + a6) = 0;
    }
    if ( (result & 4) != 0 )
    {
      result -= 4LL;
      *(_DWORD *)(result + a6) = 0;
    }
    if ( (result & 8) != 0 )
    {
      result -= 8LL;
      *(_QWORD *)(result + a6) = 0LL;
    }
    if ( (result & 0x10) != 0 )
    {
      result -= 16LL;
      *(_QWORD *)(result + a6) = 0LL;
      *(_QWORD *)(result + a6 + 8) = 0LL;
    }
    v14 = result;
    if ( (result & 0x20) != 0 )
    {
      result -= 32LL;
      *(_QWORD *)(result + a6) = 0LL;
      *(_QWORD *)(result + a6 + 8) = 0LL;
      *(_QWORD *)(a6 + v14 - 16) = 0LL;
      *(_QWORD *)(a6 + v14 - 8) = 0LL;
    }
    if ( (result & 0x40) != 0 )
    {
      *(_QWORD *)(result + a6 - 64) = 0LL;
      *(_QWORD *)(result + a6 - 56) = 0LL;
      *(_QWORD *)(result + a6 - 48) = 0LL;
      *(_QWORD *)(result + a6 - 40) = 0LL;
      *(_QWORD *)(result + a6 - 32) = 0LL;
      *(_QWORD *)(result + a6 - 24) = 0LL;
      *(_QWORD *)(result + a6 - 16) = 0LL;
      *(_QWORD *)(result + a6 - 8) = 0LL;
    }
  }
  else
  {
    result = SymCryptWipe();
  }
  if ( a5 )
  {
    v15 = (_QWORD *)(a4 + 24);
    do
    {
      v16 = *(v15 - 3);
      if ( v16 >= a3 )
        SymCryptFatal(1886597737LL);
      if ( *((_DWORD *)v15 - 4) == 1 )
      {
        result = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, _QWORD))(v10 + 8))(
                   a2 + v16 * *(unsigned int *)(v10 + 32),
                   *(v15 - 1),
                   *v15);
      }
      else
      {
        if ( *((_DWORD *)v15 - 4) != 2 )
          SymCryptFatal(1886597743LL);
        if ( *v15 != *(_DWORD *)(v10 + 36) )
          SymCryptFatal(1886597746LL);
        result = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD))(v10 + 16))(
                   a2 + v16 * *(unsigned int *)(v10 + 32),
                   *(v15 - 1));
      }
      v15 += 5;
      ++v12;
    }
    while ( v12 < a5 );
  }
  return result;
}
