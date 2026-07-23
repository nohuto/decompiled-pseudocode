/*
 * XREFs of _TlgCreateSid @ 0x140012F98
 * Callers:
 *     EtwpWriteProcessStarted @ 0x1405B3408 (EtwpWriteProcessStarted.c)
 *     MiLogHotPatchManagement @ 0x140857204 (MiLogHotPatchManagement.c)
 * Callees:
 *     <none>
 */

void __stdcall TlgCreateSid(PEVENT_DATA_DESCRIPTOR pDesc, const SID *pSid)
{
  UCHAR SubAuthorityCount; // r8
  int v3; // eax

  SubAuthorityCount = pSid->SubAuthorityCount;
  v3 = 15;
  if ( SubAuthorityCount <= 0xFu )
    v3 = SubAuthorityCount;
  pDesc->Reserved = 0;
  pDesc->Size = 4 * v3 + 8;
  pDesc->Ptr = (ULONGLONG)pSid;
}
