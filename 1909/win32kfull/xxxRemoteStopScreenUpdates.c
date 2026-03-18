/*
 * XREFs of xxxRemoteStopScreenUpdates @ 0x1C010E33C
 * Callers:
 *     xxxRemoteDisconnect @ 0x1C010DF50 (xxxRemoteDisconnect.c)
 *     xxxRemoteReconnect @ 0x1C015FF30 (xxxRemoteReconnect.c)
 *     xxxRemotePassthruEnable @ 0x1C0213520 (xxxRemotePassthruEnable.c)
 *     xxxRemoteShadowSetup @ 0x1C0213690 (xxxRemoteShadowSetup.c)
 *     xxxRemoteShadowStop @ 0x1C0213710 (xxxRemoteShadowStop.c)
 *     NtUserRemoteStopScreenUpdates @ 0x1C0233550 (NtUserRemoteStopScreenUpdates.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002D084 (WPP_RECORDER_SF_.c)
 *     RemoteDisableScreen @ 0x1C010E540 (RemoteDisableScreen.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     memset @ 0x1C0168440 (memset.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxRemoteStopScreenUpdates(int a1, __int16 a2)
{
  __int16 v2; // di
  unsigned __int16 v3; // dx
  unsigned int v4; // edi
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v8; // r8
  _QWORD v9[10]; // [rsp+38h] [rbp-D0h] BYREF
  int v10; // [rsp+88h] [rbp-80h] BYREF
  __int64 v11; // [rsp+8Ch] [rbp-7Ch]
  __int64 v12; // [rsp+94h] [rbp-74h]
  __int64 v13; // [rsp+9Ch] [rbp-6Ch]
  int v14; // [rsp+A4h] [rbp-64h]
  int v15; // [rsp+A8h] [rbp-60h]
  __int64 v16; // [rsp+ACh] [rbp-5Ch]
  __int64 v17; // [rsp+B4h] [rbp-54h]
  __int64 v18; // [rsp+BCh] [rbp-4Ch]
  int v19; // [rsp+C4h] [rbp-44h]
  int v20; // [rsp+C8h] [rbp-40h]
  __int64 v21; // [rsp+CCh] [rbp-3Ch]
  __int64 v22; // [rsp+D4h] [rbp-34h]
  __int64 v23; // [rsp+DCh] [rbp-2Ch]
  int v24; // [rsp+E4h] [rbp-24h]
  int v25; // [rsp+E8h] [rbp-20h]
  __int64 v26; // [rsp+ECh] [rbp-1Ch]
  __int64 v27; // [rsp+F4h] [rbp-14h]
  __int64 v28; // [rsp+FCh] [rbp-Ch]
  int v29; // [rsp+104h] [rbp-4h]
  int v30; // [rsp+108h] [rbp+0h]
  __int64 v31; // [rsp+10Ch] [rbp+4h]
  __int64 v32; // [rsp+114h] [rbp+Ch]
  __int64 v33; // [rsp+11Ch] [rbp+14h]
  int v34; // [rsp+124h] [rbp+1Ch]
  int v35; // [rsp+128h] [rbp+20h]
  __int64 v36; // [rsp+12Ch] [rbp+24h]
  __int64 v37; // [rsp+134h] [rbp+2Ch]
  __int64 v38; // [rsp+13Ch] [rbp+34h]
  int v39; // [rsp+144h] [rbp+3Ch]

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_(a1, a2, 9, 19, (__int64)&WPP_2f4edc7644973dcb8f37e7bb2394e69d_Traceguids);
  }
  if ( !gbFreezeScreenUpdates )
  {
    if ( (unsigned int)UserRemoteConnectedSessionUsingWddm() )
    {
      memset(v9, 0, 0x48uLL);
      EtwActivityIdControl(3u, (LPGUID)&v9[1]);
      LOBYTE(v8) = 1;
      v9[8] = MEMORY[0xFFFFF78000000014];
      LODWORD(v9[3]) = 65;
      LOBYTE(v9[6]) = -1;
      DrvSetMonitorPowerState(*(_QWORD *)(gpDispInfo + 16LL), 4LL, v8, v9);
    }
    else
    {
      KeSetEvent(gpRemoteSessionOcclusionEvent, 1, 0);
    }
    if ( gspdeskDisconnect )
    {
      v2 = gwMKButtonState & ~gwMKCurrentButton;
      v3 = (v2 ^ gwMKButtonState) & 1 | 2;
      if ( (((unsigned __int8)v2 ^ gwMKButtonState) & 2) == 0 )
        v3 = (v2 ^ gwMKButtonState) & 1;
      if ( v3 )
        ReleaseMouseButton(v3);
      v10 = -2136735560;
      v15 = -2119892808;
      v20 = -2136866659;
      gwMKButtonState &= ~gwMKCurrentButton;
      v11 = 0LL;
      v4 = 0;
      v12 = 0LL;
      v13 = 0LL;
      v14 = 0;
      v16 = 0LL;
      v17 = 0LL;
      v18 = 0LL;
      v19 = 0;
      v21 = 0LL;
      v22 = 0LL;
      v23 = 0LL;
      v24 = 0;
      v26 = 0LL;
      v27 = 0LL;
      v28 = 0LL;
      v29 = 0;
      v31 = 0LL;
      v32 = 0LL;
      v33 = 0LL;
      v34 = 0;
      v36 = 0LL;
      v37 = 0LL;
      v38 = 0LL;
      v39 = 0;
      v25 = -2120023907;
      v30 = -2136997718;
      v35 = -2120154954;
      do
        xxxProcessKeyEvent(&v10 + 8 * (int)v4++, 0LL, 1LL, 0LL, 0LL, 0LL, v9[0], v9[1], v9[2], v9[3]);
      while ( v4 < 6 );
      UpdateKeyLights(1LL);
      RemoteDisableScreen(grpdeskRitInput, v5, v6, gbDesktopLocked);
      gbFreezeScreenUpdates = 1;
    }
  }
  return 0LL;
}
