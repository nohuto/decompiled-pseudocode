/*
 * XREFs of NewNameSpaceObject @ 0x1C0006CA4
 * Callers:
 *     InitializeNativeNamespace @ 0x1C00067B8 (InitializeNativeNamespace.c)
 *     CreateNameSpaceObject @ 0x1C0017B60 (CreateNameSpaceObject.c)
 *     AMLIInitialize @ 0x1C00BC5B4 (AMLIInitialize.c)
 * Callees:
 *     HeapAlloc @ 0x1C0003960 (HeapAlloc.c)
 *     memset @ 0x1C0031D40 (memset.c)
 */

_QWORD *__fastcall NewNameSpaceObject(struct _SLIST_ENTRY *a1)
{
  _QWORD *v1; // rax
  _QWORD *v2; // rbx

  v1 = (_QWORD *)HeapAlloc(a1, 1330859592, 0xA0u);
  v2 = v1;
  if ( v1 )
  {
    memset(v1, 0, 0xA0uLL);
    v2[4] = v2 + 3;
    v2[3] = v2 + 3;
    v2[18] = 0LL;
    v2[19] = -1LL;
    *((_DWORD *)v2 + 28) = 2;
    *((_DWORD *)v2 + 32) = 1;
    v2[15] = v2;
  }
  return v2;
}
