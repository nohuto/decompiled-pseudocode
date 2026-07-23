/*
 * XREFs of PopEtAggregateKeyCopyFromProcess @ 0x1406A0D98
 * Callers:
 *     PopEtProcessSnapshotCreate @ 0x1406A0ABC (PopEtProcessSnapshotCreate.c)
 * Callees:
 *     PsGetProcessId @ 0x1400A5650 (PsGetProcessId.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     PopEtAggregateKeyCopy @ 0x1406011EC (PopEtAggregateKeyCopy.c)
 */

void __fastcall PopEtAggregateKeyCopyFromProcess(__int64 *a1, struct _KPROCESS *a2, __int64 a3)
{
  unsigned __int64 v3; // rbx
  _OWORD v7[2]; // [rsp+20h] [rbp-28h] BYREF

  v3 = a2[2].ActiveProcessors.Bitmap[14];
  memset(v7, 0, sizeof(v7));
  v7[0] = *(_OWORD *)(v3 + 448);
  if ( (*(_DWORD *)(a3 + 8) & 1) != 0 )
  {
    DWORD2(v7[1]) = (unsigned int)PsGetProcessId(a2);
    *(_QWORD *)&v7[1] = a2[2].ActiveProcessors.Bitmap[16];
  }
  PopEtAggregateKeyCopy(a1, v7);
}
