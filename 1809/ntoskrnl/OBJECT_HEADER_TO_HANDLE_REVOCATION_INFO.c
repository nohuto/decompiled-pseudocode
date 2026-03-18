/*
 * XREFs of OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO @ 0x14010DFA4
 * Callers:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x140059B50 (NtWaitForWorkViaWorkerFactory.c)
 *     NtSetInformationFile @ 0x140100E70 (NtSetInformationFile.c)
 *     NtSetInformationWorkerFactory @ 0x1401060E0 (NtSetInformationWorkerFactory.c)
 *     ObpCreateHandle @ 0x1405E12B0 (ObpCreateHandle.c)
 *     ObpProcessRemoveObjectQueue @ 0x1406919E0 (ObpProcessRemoveObjectQueue.c)
 *     ObHandleRevocationBlockAddObject @ 0x1408611C0 (ObHandleRevocationBlockAddObject.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO(__int64 a1)
{
  __int64 *v1; // rcx
  __int64 result; // rax

  if ( (*(_BYTE *)(a1 + 26) & 0x40) == 0 )
    return 0LL;
  v1 = (__int64 *)(a1 - ObpInfoMaskToOffset[*(_BYTE *)(a1 + 26) & 0x7F]);
  result = *v1;
  if ( !*(_BYTE *)(*v1 + 24) )
    return 0LL;
  return result;
}
