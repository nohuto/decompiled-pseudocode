/*
 * XREFs of ?RemoveAt@?$TList@VTSSession@@@@QEAAXPEAX@Z @ 0x180027944
 * Callers:
 *     ?TsSessionUpdateAudioProtocol@@YAXPEAVTSSession@@PEAXI@Z @ 0x180025244 (-TsSessionUpdateAudioProtocol@@YAXPEAVTSSession@@PEAXI@Z.c)
 *     ?TsSessionIdDeleteNotify@@YAJKPEAUAUDIOPROTOCOLNOTIFY@@@Z @ 0x1800254DC (-TsSessionIdDeleteNotify@@YAJKPEAUAUDIOPROTOCOLNOTIFY@@@Z.c)
 *     ?TsSessionIdDeleteAppManagerClient@@YAXPEAVCProcess@@@Z @ 0x180025AE8 (-TsSessionIdDeleteAppManagerClient@@YAXPEAVCProcess@@@Z.c)
 *     TS_AudioProtocolNotifyRundown @ 0x1800274C0 (TS_AudioProtocolNotifyRundown.c)
 * Callees:
 *     <none>
 */

void __fastcall TList<TSSession>::RemoveAt(__int64 a1, _QWORD *a2)
{
  if ( a2 == qword_18004DC78 )
    qword_18004DC78 = (void *)*a2;
  else
    *(_QWORD *)a2[1] = *a2;
  if ( a2 == (_QWORD *)qword_18004DC80 )
    qword_18004DC80 = a2[1];
  else
    *(_QWORD *)(*a2 + 8LL) = a2[1];
  --dword_18004DC88;
  *a2 = 0LL;
  a2[1] = 0LL;
  operator delete(a2, (const struct std::nothrow_t *)0x18);
}
