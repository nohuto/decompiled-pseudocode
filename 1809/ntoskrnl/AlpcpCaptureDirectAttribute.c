/*
 * XREFs of AlpcpCaptureDirectAttribute @ 0x1406A6690
 * Callers:
 *     AlpcpCaptureAttributes @ 0x140637400 (AlpcpCaptureAttributes.c)
 * Callees:
 *     ObReferenceObjectByHandle @ 0x1405E9350 (ObReferenceObjectByHandle.c)
 */

__int64 __fastcall AlpcpCaptureDirectAttribute(HANDLE *a1, void *a2, __int64 a3, int a4, int a5)
{
  char v6; // dl
  NTSTATUS v7; // r9d
  unsigned __int64 v8; // rax
  PVOID Object; // [rsp+58h] [rbp+10h] BYREF

  Object = a2;
  v6 = _bittest(&a5, 0x1Du) & ((a4 & 0x10010) == 0);
  v7 = v6 == 0 ? 0xC000000D : 0;
  if ( v6 )
  {
    if ( !KeGetCurrentThread()->PreviousMode )
    {
      v8 = (unsigned __int64)*a1;
      goto LABEL_5;
    }
    v7 = ObReferenceObjectByHandle(*a1, 2u, (POBJECT_TYPE)ExEventObjectType, 1, &Object, 0LL);
    if ( v7 >= 0 )
    {
      v8 = (unsigned __int64)Object | 1;
LABEL_5:
      *(_QWORD *)(a3 + 56) = v8;
    }
  }
  return (unsigned int)v7;
}
