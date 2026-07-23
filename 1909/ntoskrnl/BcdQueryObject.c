/*
 * XREFs of BcdQueryObject @ 0x14073E940
 * Callers:
 *     PopBcdSetPendingResume @ 0x140728C24 (PopBcdSetPendingResume.c)
 *     PopBcdEstablishResumeObject @ 0x14073D8C0 (PopBcdEstablishResumeObject.c)
 *     PopBcdRegenerateResumeObject @ 0x1408B60EC (PopBcdRegenerateResumeObject.c)
 *     BiUpdateObjectReferenceInEfiEntry @ 0x1409324CC (BiUpdateObjectReferenceInEfiEntry.c)
 * Callees:
 *     BiIsOfflineHandle @ 0x140178184 (BiIsOfflineHandle.c)
 *     BiGetObjectDescription @ 0x14073D60C (BiGetObjectDescription.c)
 *     BiReleaseBcdSyncMutant @ 0x14073FD94 (BiReleaseBcdSyncMutant.c)
 *     BiGetObjectIdentifier @ 0x14073FDBC (BiGetObjectIdentifier.c)
 *     BiAcquireBcdSyncMutant @ 0x14073FF50 (BiAcquireBcdSyncMutant.c)
 */

NTSTATUS __cdecl BcdQueryObject(
        HANDLE BcdObjectHandle,
        ULONG BcdVersion,
        BCD_OBJECT_DESCRIPTION Description,
        PGUID Identifier)
{
  __int64 v7; // rcx
  char v8; // r14
  NTSTATUS result; // eax
  __int64 v10; // rcx
  NTSTATUS ObjectIdentifier; // ebx

  if ( Description )
  {
    if ( BcdVersion == 1 )
      goto LABEL_3;
    return -1073741811;
  }
  if ( !Identifier )
    return -1073741811;
LABEL_3:
  LOBYTE(v7) = BiIsOfflineHandle((char)BcdObjectHandle);
  v8 = v7;
  result = BiAcquireBcdSyncMutant(v7);
  if ( result >= 0 )
  {
    ObjectIdentifier = 0;
    if ( !*(_QWORD *)&Description
      || (ObjectIdentifier = BiGetObjectDescription((__int64)BcdObjectHandle, *(_DWORD **)&Description),
          ObjectIdentifier >= 0) )
    {
      if ( Identifier )
        ObjectIdentifier = BiGetObjectIdentifier(BcdObjectHandle, Identifier);
    }
    LOBYTE(v10) = v8;
    BiReleaseBcdSyncMutant(v10);
    return ObjectIdentifier;
  }
  return result;
}
