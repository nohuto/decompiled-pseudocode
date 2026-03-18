/*
 * XREFs of NtDCompositionCreateSharedVisualHandle @ 0x1C01661F0
 * Callers:
 *     <none>
 * Callees:
 *     CreateSharedResourceObject @ 0x1C0013170 (CreateSharedResourceObject.c)
 *     ?CreateHandle@CompositionObject@@QEBAJK_NDPEAPEAX@Z @ 0x1C007A3A0 (-CreateHandle@CompositionObject@@QEBAJK_NDPEAPEAX@Z.c)
 */

__int64 __fastcall NtDCompositionCreateSharedVisualHandle(_QWORD *a1)
{
  int SharedResourceObject; // edi
  HANDLE Handle; // [rsp+48h] [rbp+10h] BYREF
  PVOID Object; // [rsp+50h] [rbp+18h] BYREF

  Object = 0LL;
  Handle = 0LL;
  SharedResourceObject = CreateSharedResourceObject(157LL, (struct DirectComposition::ResourceObject **)&Object);
  if ( SharedResourceObject >= 0 )
  {
    SharedResourceObject = CompositionObject::CreateHandle((CompositionObject *)Object, 1u, 0, 1, &Handle);
    ObfDereferenceObject(Object);
    if ( SharedResourceObject >= 0 )
    {
      if ( (unsigned __int64)a1 >= MmUserProbeAddress )
        a1 = (_QWORD *)MmUserProbeAddress;
      *a1 = Handle;
    }
  }
  return (unsigned int)SharedResourceObject;
}
