/*
 * XREFs of ?RemoveAt@?$TList@VTSSession@@@@QEAAXPEAX@Z @ 0x18002B010
 * Callers:
 *     ?TsSessionUpdateAudioProtocol@@YAXPEAVTSSession@@PEAXI@Z @ 0x180028978 (-TsSessionUpdateAudioProtocol@@YAXPEAVTSSession@@PEAXI@Z.c)
 *     ?TsSessionIdDeleteNotify@@YAJKPEAUAUDIOPROTOCOLNOTIFY@@@Z @ 0x180028BF8 (-TsSessionIdDeleteNotify@@YAJKPEAUAUDIOPROTOCOLNOTIFY@@@Z.c)
 *     ?TsSessionIdDeleteAppManagerClient@@YAXPEAVCProcess@@@Z @ 0x1800291E8 (-TsSessionIdDeleteAppManagerClient@@YAXPEAVCProcess@@@Z.c)
 *     TS_AudioProtocolNotifyRundown @ 0x18002ABD0 (TS_AudioProtocolNotifyRundown.c)
 * Callees:
 *     <none>
 */

void __fastcall TList<TSSession>::RemoveAt(__int64 a1, _QWORD *a2)
{
  if ( a2 == qword_18004FCF8 )
    qword_18004FCF8 = (void *)*a2;
  else
    *(_QWORD *)a2[1] = *a2;
  if ( a2 == (_QWORD *)qword_18004FD00 )
    qword_18004FD00 = a2[1];
  else
    *(_QWORD *)(*a2 + 8LL) = a2[1];
  --dword_18004FD08;
  *a2 = 0LL;
  a2[1] = 0LL;
  operator delete(a2, (const struct std::nothrow_t *)0x18);
}
