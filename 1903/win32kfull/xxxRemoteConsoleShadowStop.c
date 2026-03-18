/*
 * XREFs of xxxRemoteConsoleShadowStop @ 0x1C0213770
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0026C14 (WPP_RECORDER_SF_.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     memset @ 0x1C0166840 (memset.c)
 *     DrvReleaseHDEV @ 0x1C0271334 (DrvReleaseHDEV.c)
 *     bDrvDisconnect @ 0x1C02B8A44 (bDrvDisconnect.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 xxxRemoteConsoleShadowStop()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  _QWORD *RemoteContext; // rbx
  __int64 v3; // r8
  __int64 v4; // r9
  int v6; // edx
  int v7; // ecx
  unsigned int v8; // ebx
  struct _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-C0h] BYREF
  _QWORD v10[10]; // [rsp+58h] [rbp-B0h] BYREF
  _DWORD v11[268]; // [rsp+A8h] [rbp-60h] BYREF

  memset(v10, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v10[1]);
  v10[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v10[3]) = 23;
  LOBYTE(v10[6]) = -1;
  memset(v11, 0, 0xDCuLL);
  memset(&v11[56], 0, 0x348uLL);
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  RemoteContext = (_QWORD *)GreGetRemoteContext();
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v0) = 4;
    WPP_RECORDER_SF_(v1, v0, 9, 10, (__int64)&WPP_2f4edc7644973dcb8f37e7bb2394e69d_Traceguids);
  }
  if ( PsGetCurrentProcess(v1, v0, v3, v4) != gpepCSRSS )
    return 3221225506LL;
  if ( !gConsoleShadowhDev )
    return 3221225473LL;
  bDrvDisconnect();
  DrvGetHdevName(gConsoleShadowhDev, &v11[57]);
  RtlInitUnicodeString(&DestinationString, (PCWSTR)&v11[57]);
  DrvReleaseHDEV();
  gfRemotingConsole = 0;
  LOWORD(v11[17]) = 220;
  v11[18] = 1572896;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v6) = 4;
    WPP_RECORDER_SF_(v7, v6, 9, 11, (__int64)&WPP_2f4edc7644973dcb8f37e7bb2394e69d_Traceguids);
  }
  if ( (unsigned int)xxxUserChangeDisplaySettings(&DestinationString, v11, 0LL, 268435457LL, 0LL, 0, v10) )
  {
    v8 = -1073741823;
  }
  else
  {
    xxxUserChangeDisplaySettings(0LL, 0LL, 0LL, 0LL, 0LL, 0, v10);
    RemoteContext[1] = G_SaveRemoteVideoFileObject;
    RemoteContext[2] = G_SaveRemoteConnectionFileObject;
    RemoteContext[4] = G_SavePerformanceStatistics;
    RemoteContext[3] = G_SaveRemoteConnectionChannel;
    v8 = 0;
  }
  if ( gConsoleShadowVideoFileObject )
  {
    ObfDereferenceObject(gConsoleShadowVideoFileObject);
    gConsoleShadowVideoFileObject = 0LL;
  }
  if ( gConsoleShadowThinwireFileObject )
  {
    ObfDereferenceObject(gConsoleShadowThinwireFileObject);
    gConsoleShadowThinwireFileObject = 0LL;
  }
  if ( gpConsoleShadowBeepDevice )
  {
    ObfDereferenceObject(gpConsoleShadowBeepDevice);
    gpConsoleShadowBeepDevice = 0LL;
  }
  if ( gpConsoleShadowDisplayChangeEvent )
  {
    ObfDereferenceObject(gpConsoleShadowDisplayChangeEvent);
    gpConsoleShadowDisplayChangeEvent = 0LL;
  }
  gConsoleShadowhDev = 0LL;
  return v8;
}
