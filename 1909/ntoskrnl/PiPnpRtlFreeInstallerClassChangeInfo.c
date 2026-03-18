/*
 * XREFs of PiPnpRtlFreeInstallerClassChangeInfo @ 0x140717174
 * Callers:
 *     PiPnpRtlCmActionCallback @ 0x1405BDF50 (PiPnpRtlCmActionCallback.c)
 *     PiPnpRtlGatherInstallerClassChangeInfo @ 0x1406FC7A4 (PiPnpRtlGatherInstallerClassChangeInfo.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     PiDmObjectRelease @ 0x1405BF214 (PiDmObjectRelease.c)
 *     PiDmRemoveCacheReferenceForObject @ 0x1407171D8 (PiDmRemoveCacheReferenceForObject.c)
 */

void __fastcall PiPnpRtlFreeInstallerClassChangeInfo(unsigned int **P)
{
  unsigned int *v2; // rcx
  unsigned int *v3; // rcx
  unsigned int *v4; // rax

  if ( P )
  {
    v2 = *P;
    if ( v2 )
      PiDmObjectRelease(v2);
    v3 = P[1];
    if ( v3 )
      PiDmObjectRelease(v3);
    v4 = P[2];
    if ( v4 )
    {
      PiDmRemoveCacheReferenceForObject(v4[7], *((_QWORD *)v4 + 2));
      PiDmObjectRelease(P[2]);
    }
    ExFreePoolWithTag(P, 0x47706E50u);
  }
}
