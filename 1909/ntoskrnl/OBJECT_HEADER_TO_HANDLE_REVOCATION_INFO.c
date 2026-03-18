/*
 * XREFs of OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO @ 0x140108A40
 * Callers:
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     NtSetInformationFile @ 0x14009B240 (NtSetInformationFile.c)
 *     ObpCreateHandle @ 0x1405F3B50 (ObpCreateHandle.c)
 *     ObpProcessRemoveObjectQueue @ 0x1406B64E0 (ObpProcessRemoveObjectQueue.c)
 *     ObHandleRevocationBlockAddObject @ 0x14089D450 (ObHandleRevocationBlockAddObject.c)
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
