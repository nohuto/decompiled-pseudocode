/*
 * XREFs of VrpPreFlushKey @ 0x14080B690
 * Callers:
 *     VrpRegistryCallback @ 0x140807FF0 (VrpRegistryCallback.c)
 * Callees:
 *     _TlgWrite @ 0x140012EE4 (_TlgWrite.c)
 *     EtwActivityIdControl @ 0x1400A3B50 (EtwActivityIdControl.c)
 *     __security_check_cookie @ 0x140194010 (__security_check_cookie.c)
 */

__int64 __fastcall VrpPreFlushKey(__int64 a1, __int64 a2)
{
  GUID ActivityId; // [rsp+30h] [rbp-68h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-58h] BYREF
  EVENT_DATA_DESCRIPTOR v6; // [rsp+60h] [rbp-38h] BYREF

  *(_QWORD *)&ActivityId.Data1 = 0LL;
  *(_QWORD *)ActivityId.Data4 = 0LL;
  EtwActivityIdControl(3u, &ActivityId);
  if ( (*(_DWORD *)(a2 + 80) & 1) != 0 )
  {
    if ( stru_1403FFAD8.LevelPlus1 > 5 )
      TlgWrite(&stru_1403FFAD8, &unk_14036CA1A, &ActivityId, 0LL, 2u, &pData);
    return 3221226755LL;
  }
  else
  {
    if ( stru_1403FFAD8.LevelPlus1 > 5 )
      TlgWrite(&stru_1403FFAD8, &unk_14036CCB4, &ActivityId, 0LL, 2u, &v6);
    return 0LL;
  }
}
