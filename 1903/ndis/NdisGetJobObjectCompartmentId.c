/*
 * XREFs of NdisGetJobObjectCompartmentId @ 0x1C00ABB30
 * Callers:
 *     NdisGetProcessObjectCompartmentId @ 0x1C0021060 (NdisGetProcessObjectCompartmentId.c)
 *     ndisNsiGetAllJobInformation @ 0x1C00ABE80 (ndisNsiGetAllJobInformation.c)
 *     ?NdisSetJobObjectCompartmentId@@YAJPEAU_EJOB@@I@Z @ 0x1C011A27C (-NdisSetJobObjectCompartmentId@@YAJPEAU_EJOB@@I@Z.c)
 * Callees:
 *     NdisGetSessionCompartmentId @ 0x1C00120E0 (NdisGetSessionCompartmentId.c)
 */

__int64 __fastcall NdisGetJobObjectCompartmentId(__int64 a1)
{
  unsigned int *JobProperty; // rax
  unsigned int v3; // ebx
  unsigned int JobSessionId; // eax

  JobProperty = (unsigned int *)PsGetJobProperty(a1, 1833133134LL);
  if ( JobProperty )
  {
    v3 = *JobProperty;
    ObfDereferenceObject(JobProperty);
  }
  else
  {
    JobSessionId = PsGetJobSessionId(a1);
    return (unsigned int)NdisGetSessionCompartmentId(JobSessionId);
  }
  return v3;
}
