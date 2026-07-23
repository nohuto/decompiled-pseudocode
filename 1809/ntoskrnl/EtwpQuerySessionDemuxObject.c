/*
 * XREFs of EtwpQuerySessionDemuxObject @ 0x1408C12E4
 * Callers:
 *     NtTraceControl @ 0x1405C3F40 (NtTraceControl.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x1405E9350 (ObReferenceObjectByHandle.c)
 */

__int64 __fastcall EtwpQuerySessionDemuxObject(void *a1, _WORD *a2)
{
  NTSTATUS v3; // eax
  PVOID v4; // rcx
  unsigned int v5; // ebx
  __int16 v6; // ax
  PVOID Object; // [rsp+50h] [rbp+18h] BYREF

  v3 = ObReferenceObjectByHandle(a1, 0, EtwpSessionDemuxObjectType, 1, &Object, 0LL);
  v4 = Object;
  v5 = v3;
  if ( v3 >= 0 )
  {
    v6 = *((_WORD *)Object + 9);
    if ( v6 )
    {
      *a2 = v6;
      v5 = 0;
    }
    else
    {
      v5 = -1073741162;
    }
  }
  if ( v4 )
    ObfDereferenceObject(v4);
  return v5;
}
