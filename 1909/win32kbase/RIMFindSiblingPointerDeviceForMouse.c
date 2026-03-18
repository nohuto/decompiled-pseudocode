/*
 * XREFs of RIMFindSiblingPointerDeviceForMouse @ 0x1C00BD3F8
 * Callers:
 *     RIMCreateDev @ 0x1C0057C10 (RIMCreateDev.c)
 *     RIMVirtCreateDev @ 0x1C014B864 (RIMVirtCreateDev.c)
 *     RIMApplyPTPConfigRemedy @ 0x1C015AC70 (RIMApplyPTPConfigRemedy.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C0031380 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_q @ 0x1C00378D4 (WPP_RECORDER_SF_q.c)
 *     ?UnLockExclusive@CInpPushLock@@QEAAXXZ @ 0x1C00595E0 (-UnLockExclusive@CInpPushLock@@QEAAXXZ.c)
 *     RawInputManagerDeviceObjectReference @ 0x1C0062540 (RawInputManagerDeviceObjectReference.c)
 *     RIMIsParentCommon @ 0x1C0141574 (RIMIsParentCommon.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMFindSiblingPointerDeviceForMouse(__int64 a1, _QWORD *a2, __int64 a3)
{
  _QWORD *v3; // r14
  unsigned int v5; // ebx
  __int64 *v6; // rdi
  __int64 v7; // rdx
  int v8; // eax

  v3 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_q((_DWORD)gRimLog, (_DWORD)a2, 1, 66, (__int64)&WPP_9fa14f927df6353817215e33bf2b608e_Traceguids, a1);
  }
  v5 = 0;
  if ( *(_BYTE *)(a1 + 48) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  RIMLockExclusive((__int64)&gObListLock);
  v6 = (__int64 *)gObRimDevList;
  *v3 = 0LL;
  while ( v6 != &gObRimDevList )
  {
    if ( *(_BYTE *)(((unsigned __int64)(v6 + 9) & ((unsigned __int128)-(__int128)(unsigned __int64)(v6 - 2) >> 64))
                  + 0x30) == 2 )
    {
      v8 = *(_DWORD *)(((unsigned __int64)(v6 + 9) & ((unsigned __int128)-(__int128)(unsigned __int64)(v6 - 2) >> 64))
                     + 0xB8);
      if ( (v8 & 0x2000) == 0
        && (v8 & 0x400) == 0
        && (*(_DWORD *)(((unsigned __int64)(v6 + 9) & ((unsigned __int128)-(__int128)(unsigned __int64)(v6 - 2) >> 64))
                      + 0xC8) & 0x80u) != 0 )
      {
        v7 = (unsigned __int64)(v6 + 9) & ((unsigned __int128)-(__int128)(unsigned __int64)(v6 - 2) >> 64);
        if ( (unsigned int)RIMIsParentCommon(
                             a1,
                             v7,
                             *(_QWORD *)(v7 + 464),
                             *(unsigned __int16 *)(*(_QWORD *)(v7 + 464) + 110LL),
                             *(_WORD *)(*(_QWORD *)(v7 + 464) + 112LL)) )
        {
          RawInputManagerDeviceObjectReference(v6 - 2);
          *v3 = v6 - 2;
          v5 = 1;
          break;
        }
      }
    }
    v6 = (__int64 *)*v6;
  }
  CInpPushLock::UnLockExclusive((CInpPushLock *)&gObListLock);
  return v5;
}
