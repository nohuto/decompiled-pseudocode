/*
 * XREFs of ndisNotifyBindFailure @ 0x1C003A814
 * Callers:
 *     ?ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1C0104790 (-ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 *     ndisNotifyBindFailureOnUnboundProtocols @ 0x1C010A30C (ndisNotifyBindFailureOnUnboundProtocols.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C00066A0 (WPP_RECORDER_SF_qq.c)
 *     ndisInitializeNetPnPEvent @ 0x1C001BF38 (ndisInitializeNetPnPEvent.c)
 *     __security_check_cookie @ 0x1C0040770 (__security_check_cookie.c)
 *     memset @ 0x1C0041440 (memset.c)
 *     ndisDeliverNetPnPEventSynchronously @ 0x1C00FC974 (ndisDeliverNetPnPEventSynchronously.c)
 */

unsigned __int8 __fastcall ndisNotifyBindFailure(__int64 a1, __int64 a2)
{
  int v4; // edx
  unsigned __int8 result; // al
  int v7; // edx
  struct _KEVENT v8; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v9[22]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v10; // [rsp+110h] [rbp+10h] BYREF
  __int64 v11; // [rsp+118h] [rbp+18h]

  memset(v9, 0, sizeof(v9));
  v10 = 0LL;
  v11 = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v4) = 3;
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v4,
      6,
      89,
      (struct _GUID *)&WPP_8eff094606dc365e3cd879b7a6c5bbc9_Traceguids,
      a1,
      a2);
  }
  result = *(_BYTE *)(a2 + 56);
  if ( result > 6u || result == 6 && *(_BYTE *)(a2 + 57) >= 0x1Eu )
  {
    ndisInitializeNetPnPEvent(v9, &v8);
    v11 = *(_QWORD *)(a1 + 4024);
    LODWORD(v9[1]) = 16;
    LODWORD(v9[3]) = 16;
    v9[2] = &v10;
    v10 = 1048960LL;
    KeWaitForSingleObject((PVOID)(a2 + 360), Executive, 0, 0, 0LL);
    ++*(_DWORD *)(a2 + 424);
    *(_QWORD *)(a2 + 416) = KeGetCurrentThread();
    ndisDeliverNetPnPEventSynchronously(a2, 0);
    if ( (*(_DWORD *)(a2 + 424))-- == 1 )
      *(_QWORD *)(a2 + 416) = 0LL;
    result = KeReleaseMutex((PRKMUTEX)(a2 + 360), 0);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v7) = 3;
      return WPP_RECORDER_SF_qq(
               *((_QWORD *)WPP_GLOBAL_Control + 8),
               v7,
               6,
               90,
               (struct _GUID *)&WPP_8eff094606dc365e3cd879b7a6c5bbc9_Traceguids,
               a1,
               a2);
    }
  }
  return result;
}
