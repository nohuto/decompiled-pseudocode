/*
 * XREFs of VrpDestroyNamespaceNodeList @ 0x14080B640
 * Callers:
 *     VrpCleanupNamespace @ 0x140808BB0 (VrpCleanupNamespace.c)
 * Callees:
 *     memset @ 0x1401D1980 (memset.c)
 *     ULongLongMult @ 0x14026D9D8 (ULongLongMult.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     VrpDestroyNamespaceNode @ 0x14080B39C (VrpDestroyNamespaceNode.c)
 */

void *__fastcall VrpDestroyNamespaceNodeList(ULONGLONG *a1)
{
  ULONGLONG i; // rax
  ULONGLONG v3; // rdx
  __int64 *v4; // r8
  void *v5; // rcx
  ULONGLONG pullResult; // [rsp+30h] [rbp+8h] BYREF

  for ( i = a1[6]; i; i = a1[6] )
  {
    if ( ULongLongMult(a1[5], 0LL, &pullResult) < 0 || (v3 = a1[9], v3 + pullResult < v3) )
      v4 = 0LL;
    else
      v4 = (__int64 *)(v3 + pullResult);
    VrpDestroyNamespaceNode(a1, *v4);
  }
  v5 = (void *)a1[9];
  if ( v5 )
    ExFreePoolWithTag(v5, 0x72615452u);
  return memset(a1 + 4, 0, 0x30uLL);
}
