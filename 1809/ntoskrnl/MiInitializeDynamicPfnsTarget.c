/*
 * XREFs of MiInitializeDynamicPfnsTarget @ 0x1402A6CB0
 * Callers:
 *     <none>
 * Callees:
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     MiInitializeUnusablePfns @ 0x14017F18C (MiInitializeUnusablePfns.c)
 */

__int64 __fastcall MiInitializeDynamicPfnsTarget(__int64 a1, __int64 a2, volatile signed __int32 *a3, __int64 a4)
{
  unsigned __int32 v7; // r14d
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // r14
  signed __int32 v10; // eax
  unsigned int v11; // esi
  BOOL v12; // esi
  __int64 v13; // r8
  signed __int32 v14; // eax
  unsigned int v15; // edi
  __int64 result; // rax
  int v17; // [rsp+78h] [rbp+10h] BYREF
  int i; // [rsp+88h] [rbp+20h] BYREF

  v7 = _InterlockedExchangeAdd((volatile signed __int32 *)(a2 + 36), 1u);
  v8 = *(_QWORD *)(a2 + 16);
  v9 = *(_QWORD *)a2 + v8 * v7;
  v10 = _InterlockedDecrement((volatile signed __int32 *)a4);
  v11 = ~v10 & 0x80000000;
  if ( (v10 & 0x7FFFFFFF) != 0 )
  {
    v17 = 0;
    while ( (*(_DWORD *)a4 & 0x80000000) != v11 )
      KeYieldProcessorEx(&v17, a2, (__int64)a3);
    v12 = 0;
  }
  else
  {
    *(_DWORD *)a4 = v11 | *(_DWORD *)(a4 + 4);
    v12 = *(_QWORD *)(a2 + 24) != 0LL;
  }
  v13 = 0xFFFFFA8000000000uLL;
  if ( v8 )
  {
    MiInitializeUnusablePfns(
      (_OWORD *)(48 * v9 - 0x58000000000LL),
      v8,
      *(_WORD *)(a2 + 32),
      *(_DWORD *)(a2 + 40),
      0LL,
      0LL,
      0);
    v13 = 0xFFFFFA8000000000uLL;
  }
  if ( v12 )
    MiInitializeUnusablePfns(
      (_OWORD *)(48LL * (*(_QWORD *)a2 + *(_QWORD *)(a2 + 8) - *(_QWORD *)(a2 + 24)) - 0x58000000000LL),
      *(_QWORD *)(a2 + 24),
      *(_WORD *)(a2 + 32),
      *(_DWORD *)(a2 + 40),
      0LL,
      0LL,
      0);
  v14 = _InterlockedDecrement((volatile signed __int32 *)a4);
  v15 = ~v14 & 0x80000000;
  if ( (v14 & 0x7FFFFFFF) != 0 )
  {
    for ( i = 0; ; KeYieldProcessorEx(&i, a2, v13) )
    {
      result = *(_DWORD *)a4 & 0x80000000;
      if ( (_DWORD)result == v15 )
        break;
    }
  }
  else
  {
    result = v15 | *(_DWORD *)(a4 + 4);
    *(_DWORD *)a4 = result;
  }
  _InterlockedDecrement(a3);
  return result;
}
