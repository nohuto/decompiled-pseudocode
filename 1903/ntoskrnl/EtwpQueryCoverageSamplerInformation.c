/*
 * XREFs of EtwpQueryCoverageSamplerInformation @ 0x14090667C
 * Callers:
 *     EtwQueryPerformanceTraceInformation @ 0x1408F5EB8 (EtwQueryPerformanceTraceInformation.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x1405FA460 (ObReferenceObjectByHandle.c)
 *     ExCheckFullProcessInformationAccess @ 0x140680204 (ExCheckFullProcessInformationAccess.c)
 *     EtwpCoverageSamplerQuery @ 0x140905304 (EtwpCoverageSamplerQuery.c)
 */

__int64 __fastcall EtwpQueryCoverageSamplerInformation(_OWORD *a1, unsigned int a2, char a3, unsigned int *a4)
{
  PVOID v8; // rdi
  int v9; // ebx
  PVOID Object; // [rsp+30h] [rbp-38h] BYREF
  HANDLE Handle[2]; // [rsp+38h] [rbp-30h]

  v8 = 0LL;
  Object = 0LL;
  if ( a2 < 0x10 )
  {
    v9 = -1073741820;
    goto LABEL_12;
  }
  *(_OWORD *)Handle = *a1;
  if ( BYTE5(Handle[0]) != 0xCF )
    goto LABEL_4;
  if ( BYTE4(Handle[0]) == 1 )
  {
    if ( !a3 )
    {
LABEL_4:
      v9 = -1073741637;
      goto LABEL_12;
    }
    v9 = ExCheckFullProcessInformationAccess(a3);
    if ( v9 >= 0 )
    {
      v9 = ObReferenceObjectByHandle(Handle[1], 1u, qword_140432570, a3, &Object, 0LL);
      v8 = Object;
      if ( v9 >= 0 )
      {
        v9 = EtwpCoverageSamplerQuery((ULONG_PTR)Object, (__int64)a1, a2, a4);
        if ( v9 >= 0 )
          v9 = 0;
      }
    }
  }
  else
  {
    v9 = -1073741821;
  }
LABEL_12:
  if ( v8 )
    ObfDereferenceObject(v8);
  return (unsigned int)v9;
}
