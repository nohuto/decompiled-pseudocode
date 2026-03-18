/*
 * XREFs of VrpPreFlushKey @ 0x1408446A4
 * Callers:
 *     VrpRegistryCallback @ 0x140840F00 (VrpRegistryCallback.c)
 * Callees:
 *     _TlgWrite @ 0x14008BA00 (_TlgWrite.c)
 *     EtwActivityIdControl @ 0x14010A760 (EtwActivityIdControl.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
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
    if ( stru_140425BF8.LevelPlus1 > 5 )
      TlgWrite(&stru_140425BF8, &unk_14038C6DC, &ActivityId, 0LL, 2u, &pData);
    return 3221226755LL;
  }
  else
  {
    if ( stru_140425BF8.LevelPlus1 > 5 )
      TlgWrite(&stru_140425BF8, &unk_14038CA35, &ActivityId, 0LL, 2u, &v6);
    return 0LL;
  }
}
