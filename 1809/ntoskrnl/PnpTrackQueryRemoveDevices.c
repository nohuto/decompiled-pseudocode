/*
 * XREFs of PnpTrackQueryRemoveDevices @ 0x140834958
 * Callers:
 *     PnpProcessQueryRemoveAndEject @ 0x1406F0A30 (PnpProcessQueryRemoveAndEject.c)
 *     PnpProcessCompletedEject @ 0x140829480 (PnpProcessCompletedEject.c)
 * Callees:
 *     PipClearDevNodeUserFlags @ 0x1406EB03C (PipClearDevNodeUserFlags.c)
 *     IopEnumerateRelations @ 0x1406EF354 (IopEnumerateRelations.c)
 *     PipSetDevNodeUserFlags @ 0x14070F4E0 (PipSetDevNodeUserFlags.c)
 */

bool __fastcall PnpTrackQueryRemoveDevices(unsigned int **a1, char a2)
{
  bool result; // al
  __int64 v5; // rcx
  int v6; // [rsp+50h] [rbp+18h] BYREF
  int v7; // [rsp+54h] [rbp+1Ch]
  __int64 v8; // [rsp+58h] [rbp+20h] BYREF

  v6 = 0;
  v7 = 0;
  while ( 1 )
  {
    result = IopEnumerateRelations(a1, &v6, &v8, 0LL, 0LL);
    if ( !result )
      break;
    if ( v8 )
      v5 = *(_QWORD *)(*(_QWORD *)(v8 + 312) + 40LL);
    else
      v5 = 0LL;
    if ( a2 )
      PipSetDevNodeUserFlags(v5, 256);
    else
      PipClearDevNodeUserFlags(v5, 256);
  }
  return result;
}
