/*
 * XREFs of EtwpEnableKeyProviders @ 0x140743BC0
 * Callers:
 *     EtwStartAutoLogger @ 0x140743058 (EtwStartAutoLogger.c)
 * Callees:
 *     RtlInitializeGenericTableAvl @ 0x140006820 (RtlInitializeGenericTableAvl.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     EtwpEnumerateKeyProviders @ 0x140724B1C (EtwpEnumerateKeyProviders.c)
 *     EtwpFreeKeyNameList @ 0x140743C7C (EtwpFreeKeyNameList.c)
 */

__int64 __fastcall EtwpEnableKeyProviders(__int64 a1, unsigned int a2, const WCHAR *a3, const WCHAR *a4, int a5)
{
  BOOLEAN v10; // [rsp+28h] [rbp-1E0h]
  BOOLEAN v11; // [rsp+28h] [rbp-1E0h]
  _RTL_AVL_TABLE Table; // [rsp+40h] [rbp-1C8h] BYREF
  unsigned int v13[72]; // [rsp+B0h] [rbp-158h] BYREF

  RtlInitializeGenericTableAvl(
    &Table,
    (PRTL_AVL_COMPARE_ROUTINE)EtwpAvlCompareKeyNames,
    (PRTL_AVL_ALLOCATE_ROUTINE)EtwpAllocateKeyNameEntry,
    (PRTL_AVL_FREE_ROUTINE)EtwpFreeKeyNameEntry,
    0LL);
  EtwpEnumerateKeyProviders(a1, a2, a3, a4, v13, v10, &Table, a5);
  if ( a4 )
    EtwpEnumerateKeyProviders(a1, a2, a4, 0LL, v13, v11, &Table, a5);
  return EtwpFreeKeyNameList(&Table);
}
