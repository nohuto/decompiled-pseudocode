/*
 * XREFs of NdisGetJobObjectCompartmentId @ 0x1C006C0D0
 * Callers:
 *     NdisGetProcessObjectCompartmentId @ 0x1C0014500 (NdisGetProcessObjectCompartmentId.c)
 *     NdisSetJobObjectCompartmentId @ 0x1C00F8008 (NdisSetJobObjectCompartmentId.c)
 *     ndisNsiGetAllJobInformation @ 0x1C00F81D0 (ndisNsiGetAllJobInformation.c)
 * Callees:
 *     NdisGetSessionCompartmentId @ 0x1C0009990 (NdisGetSessionCompartmentId.c)
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
