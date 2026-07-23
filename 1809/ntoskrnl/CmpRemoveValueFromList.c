/*
 * XREFs of CmpRemoveValueFromList @ 0x1405B04E8
 * Callers:
 *     CmDeleteValueKey @ 0x1405B7634 (CmDeleteValueKey.c)
 *     CmSetValueKey @ 0x1405CCE28 (CmSetValueKey.c)
 *     CmpLightWeightPrepareDeleteValueKeyUoW @ 0x140805610 (CmpLightWeightPrepareDeleteValueKeyUoW.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     HvReallocateCell @ 0x1405AE9CC (HvReallocateCell.c)
 *     HvFreeCell @ 0x1405AEBD8 (HvFreeCell.c)
 */

__int64 __fastcall CmpRemoveValueFromList(ULONG_PTR a1, unsigned int a2, unsigned int *a3)
{
  __int64 v4; // rbx
  ULONG_PTR v6; // rdx
  unsigned int v7; // edi
  __int64 v8; // rax
  _DWORD *v9; // rdx
  ULONG_PTR v10; // rdx
  int v11; // r14d
  __int64 result; // rax
  __int64 v13; // [rsp+60h] [rbp+18h] BYREF
  __int64 v14; // [rsp+68h] [rbp+20h] BYREF

  v4 = a2;
  v6 = a3[1];
  v7 = *a3 - 1;
  if ( *a3 == 1 )
  {
    HvFreeCell(a1, v6);
    v11 = -1;
LABEL_7:
    a3[1] = v11;
    result = 0LL;
    *a3 = v7;
    return result;
  }
  v13 = 0xFFFFFFFFLL;
  v8 = (*(__int64 (__fastcall **)(ULONG_PTR, ULONG_PTR, __int64 *))(a1 + 8))(a1, v6, &v13);
  if ( v8 )
  {
    if ( (unsigned int)v4 < v7 )
    {
      v9 = (_DWORD *)(v8 + 4 * v4);
      do
      {
        v4 = (unsigned int)(v4 + 1);
        *v9++ = *(_DWORD *)(v8 + 4 * v4);
      }
      while ( (unsigned int)v4 < v7 );
    }
    (*(void (__fastcall **)(ULONG_PTR, __int64 *))(a1 + 16))(a1, &v13);
    v10 = a3[1];
    v14 = 0LL;
    v11 = HvReallocateCell(a1, v10, 4 * v7, 1, &v14, &v13);
    (*(void (__fastcall **)(ULONG_PTR, __int64 *))(a1 + 16))(a1, &v13);
    goto LABEL_7;
  }
  return 3221225626LL;
}
