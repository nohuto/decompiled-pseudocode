/*
 * XREFs of PssValidateSnapshotDescriptor @ 0x18009FE18
 * Callers:
 *     PsspDuplicateSnapshotLocalToRemote @ 0x180114174 (PsspDuplicateSnapshotLocalToRemote.c)
 *     PsspDuplicateSnapshotRemoteToRemote @ 0x180114744 (PsspDuplicateSnapshotRemoteToRemote.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PssValidateSnapshotDescriptor(__int64 *a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( a1[109] < 0 || a1[112] < 0 || a1[115] < 0 || a1[118] < 0 || a1[122] < 0 || a1[126] < 0 || a1[141] < 0 )
    return 3221225480LL;
  return result;
}
