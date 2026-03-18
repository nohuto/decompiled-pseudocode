/*
 * XREFs of RIMFindSiblingMouseDevice @ 0x1C0141150
 * Callers:
 *     RIMAllocateHidDesc @ 0x1C005D02C (RIMAllocateHidDesc.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C0031380 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_q @ 0x1C00378D4 (WPP_RECORDER_SF_q.c)
 *     ?UnLockExclusive@CInpPushLock@@QEAAXXZ @ 0x1C00595E0 (-UnLockExclusive@CInpPushLock@@QEAAXXZ.c)
 *     RawInputManagerDeviceObjectReference @ 0x1C0062540 (RawInputManagerDeviceObjectReference.c)
 *     RIMIsParentCommon @ 0x1C0141574 (RIMIsParentCommon.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMFindSiblingMouseDevice(int a1, __int64 a2, _QWORD *a3)
{
  __int64 v4; // rbp
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 *v9; // rdi
  unsigned int v10; // ebx
  __int64 v11; // rdx
  int v12; // eax
  char v14; // [rsp+28h] [rbp-20h]

  v4 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v14 = a2;
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_q((_DWORD)gRimLog, a2, 1, 65, (__int64)&WPP_9fa14f927df6353817215e33bf2b608e_Traceguids, v14);
  }
  RIMLockExclusive((__int64)&gObListLock);
  if ( (*(_DWORD *)(v4 + 200) & 0x80u) == 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v7, v6, v8);
  v9 = (__int64 *)gObRimDevList;
  v10 = 0;
  *a3 = 0LL;
  while ( v9 != &gObRimDevList )
  {
    if ( !*(_BYTE *)(((unsigned __int64)(v9 + 9) & ((unsigned __int128)-(__int128)(unsigned __int64)(v9 - 2) >> 64))
                   + 0x30) )
    {
      v12 = *(_DWORD *)(((unsigned __int64)(v9 + 9) & ((unsigned __int128)-(__int128)(unsigned __int64)(v9 - 2) >> 64))
                      + 0xB8);
      if ( (v12 & 0x2000) == 0 && (v12 & 0x400) == 0 )
      {
        v11 = (unsigned __int64)(v9 + 9) & ((unsigned __int128)-(__int128)(unsigned __int64)(v9 - 2) >> 64);
        if ( (unsigned int)RIMIsParentCommon(v4, v11, a1, *(unsigned __int16 *)(v11 + 890), *(_WORD *)(v11 + 892)) )
        {
          RawInputManagerDeviceObjectReference(v9 - 2);
          *a3 = v9 - 2;
          v10 = 1;
          break;
        }
      }
    }
    v9 = (__int64 *)*v9;
  }
  CInpPushLock::UnLockExclusive((CInpPushLock *)&gObListLock);
  return v10;
}
