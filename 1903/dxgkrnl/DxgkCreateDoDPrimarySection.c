/*
 * XREFs of DxgkCreateDoDPrimarySection @ 0x1C01F1770
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PVOID __fastcall DxgkCreateDoDPrimarySection(__int64 a1, unsigned int a2)
{
  __int64 v2; // rax
  int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rdi
  __int64 v9; // rax
  PVOID v11; // rcx
  PVOID Object; // [rsp+50h] [rbp+8h] BYREF
  __int64 v13; // [rsp+60h] [rbp+18h] BYREF

  v2 = *(unsigned int *)(a1 + 4);
  if ( (unsigned int)v2 <= a2 )
    v2 = a2;
  *(_DWORD *)a1 = v2;
  v13 = v2;
  v4 = MmCreateSection(&Object, 0LL, 0LL, &v13, 4, 0x8000000, 0LL, 0LL);
  v8 = v4;
  if ( v4 >= 0 )
  {
    v11 = Object;
    *(_QWORD *)(a1 + 8) = Object;
    ObfReferenceObject(v11);
    return Object;
  }
  else
  {
    v9 = WdLogNewEntry5_WdError(v6, v5, v7);
    *(_QWORD *)(v9 + 24) = v8;
    WdLogEvent5_WdError(v9);
    return 0LL;
  }
}
