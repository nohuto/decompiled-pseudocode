/*
 * XREFs of PerfReadWrappingCounter @ 0x1C0001160
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0004C70 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PerfReadWrappingCounter(__int64 a1, char a2, _QWORD *a3, _QWORD *a4)
{
  __int64 v8; // rax
  __int64 v9; // r10
  __int64 v10; // rdx
  unsigned __int64 v11; // rcx
  __int64 v12; // rax
  __int64 result; // rax
  unsigned __int64 v14; // [rsp+50h] [rbp+8h] BYREF
  unsigned __int64 v15; // [rsp+60h] [rbp+18h] BYREF

  (*(void (__fastcall **)(_QWORD, _QWORD, unsigned __int64 *, unsigned __int64 *))(a1 + 48))(
    *(_QWORD *)(a1 + 56),
    0LL,
    &v15,
    &v14);
  v8 = *(_QWORD *)(a1 + 32);
  v9 = *(_QWORD *)(a1 + 40);
  v10 = v14;
  if ( a2 )
  {
    if ( v8 )
      v10 = v8 & v14;
    v11 = v15;
    if ( v9 )
      v11 = v9 & v15;
  }
  else
  {
    if ( v8 )
    {
      v10 = v8 & v14;
      if ( (v8 & v14) < *(_QWORD *)a1 )
        *(_QWORD *)(a1 + 16) += v8 + 1;
    }
    v11 = v15;
    *(_QWORD *)(a1 + 16) += v10 - *(_QWORD *)a1;
    if ( v9 )
    {
      v11 &= v9;
      if ( v11 < *(_QWORD *)(a1 + 8) )
        *(_QWORD *)(a1 + 24) += v9 + 1;
    }
    *(_QWORD *)(a1 + 24) += v11 - *(_QWORD *)(a1 + 8);
  }
  v12 = *(_QWORD *)(a1 + 24);
  *(_QWORD *)a1 = v10;
  *(_QWORD *)(a1 + 8) = v11;
  *a3 = v12;
  result = *(_QWORD *)(a1 + 16);
  *a4 = result;
  return result;
}
