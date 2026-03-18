/*
 * XREFs of VrpDestroyNamespaceNodeList @ 0x140843CF0
 * Callers:
 *     VrpCleanupNamespace @ 0x140841254 (VrpCleanupNamespace.c)
 * Callees:
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ULongLongMult @ 0x1402812BC (ULongLongMult.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     VrpDestroyNamespaceNode @ 0x140843A54 (VrpDestroyNamespaceNode.c)
 */

void *__fastcall VrpDestroyNamespaceNodeList(ULONGLONG *a1)
{
  ULONGLONG i; // rax
  ULONGLONG v3; // rcx
  __int64 *v4; // rdx
  void *v5; // rcx
  ULONGLONG pullResult; // [rsp+30h] [rbp+8h] BYREF

  for ( i = a1[6]; i; i = a1[6] )
  {
    if ( ULongLongMult(a1[5], 0LL, &pullResult) < 0
      || (v3 = a1[9], v4 = (__int64 *)(v3 + pullResult), v3 + pullResult < v3) )
    {
      v4 = 0LL;
    }
    VrpDestroyNamespaceNode(a1, *v4);
  }
  v5 = (void *)a1[9];
  if ( v5 )
    ExFreePoolWithTag(v5, 0x72615452u);
  return memset(a1 + 4, 0, 0x30uLL);
}
