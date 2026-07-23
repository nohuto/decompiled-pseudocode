/*
 * XREFs of PopCloneRange @ 0x14056CA60
 * Callers:
 *     PopSetRange @ 0x140144A6C (PopSetRange.c)
 * Callees:
 *     RtlSetBits @ 0x140076D70 (RtlSetBits.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

_QWORD *__fastcall PopCloneRange(__int64 a1, unsigned __int64 a2, __int64 a3, int a4)
{
  unsigned __int64 v7; // rsi
  _QWORD *v8; // rdi
  _QWORD *v9; // rbx
  unsigned __int64 v10; // r14
  _QWORD *v11; // rcx
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rax
  __int64 v14; // rdx
  _QWORD *v15; // rax
  _QWORD *result; // rax

  v7 = a2;
  RtlSetBits((PRTL_BITMAP)(a1 + 32), a2, a3);
  v8 = 0LL;
  v9 = *(_QWORD **)(a1 + 64);
  v10 = v7 + a3;
  if ( v9 == (_QWORD *)(a1 + 64) )
    goto LABEL_22;
  while ( 1 )
  {
    v11 = v9;
    v9 = (_QWORD *)*v9;
    v12 = v11[3];
    if ( (v7 < v12 || v7 > v11[4]) && (v10 < v12 || v10 > v11[4]) )
    {
      if ( v7 > v12 )
        goto LABEL_18;
      if ( v12 > v10 )
        break;
    }
    if ( v7 <= v12 )
      v12 = v7;
    v7 = v12;
    v13 = v11[4];
    if ( v10 >= v13 )
      v13 = v10;
    --*(_DWORD *)(a1 + 80);
    v14 = *v11;
    v10 = v13;
    if ( *(_QWORD **)(*v11 + 8LL) != v11 )
      goto LABEL_26;
    v15 = (_QWORD *)v11[1];
    if ( (_QWORD *)*v15 != v11 )
      goto LABEL_26;
    *v15 = v14;
    *(_QWORD *)(v14 + 8) = v15;
    if ( v8 )
      ExFreePoolWithTag(v11, 0x70616D48u);
    else
      v8 = v11;
LABEL_18:
    if ( v9 == (_QWORD *)(a1 + 64) )
      goto LABEL_21;
  }
  if ( v7 >= v12 )
    goto LABEL_18;
  v9 = (_QWORD *)v9[1];
LABEL_21:
  if ( !v8 )
  {
LABEL_22:
    result = ExAllocatePoolWithTag(NonPagedPoolNx, 0x30uLL, 0x70616D48u);
    v8 = result;
    if ( !result )
    {
      if ( *(int *)(a1 + 188) >= 0 )
        *(_DWORD *)(a1 + 188) = -1073741670;
      return result;
    }
  }
  memset(v8, 0, 0x30uLL);
  *((_DWORD *)v8 + 4) = a4;
  v8[3] = v7;
  v8[4] = v10;
  result = (_QWORD *)v9[1];
  if ( (_QWORD *)*result != v9 )
LABEL_26:
    __fastfail(3u);
  *v8 = v9;
  v8[1] = result;
  *result = v8;
  v9[1] = v8;
  ++*(_DWORD *)(a1 + 80);
  return result;
}
