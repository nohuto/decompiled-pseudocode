/*
 * XREFs of xxxRemoteConsoleShadowStart @ 0x1C01FBE90
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     memset @ 0x1C0163640 (memset.c)
 *     ?FindMirrorDriver@@YAJPEBGPEAU_DISPLAY_DEVICEW@@@Z @ 0x1C01FB534 (-FindMirrorDriver@@YAJPEBGPEAU_DISPLAY_DEVICEW@@@Z.c)
 *     bDrvReconnect @ 0x1C02A2174 (bDrvReconnect.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxRemoteConsoleShadowStart(__int64 a1, const WCHAR *a2, __int64 a3)
{
  __int64 v6; // rcx
  _QWORD *RemoteContext; // rsi
  __int64 v8; // xmm0_8
  NTSTATUS MirrorDriver; // edi
  NTSTATUS v10; // eax
  PVOID v11; // rcx
  __int64 v12; // rdx
  unsigned __int64 v13; // xmm0_8
  __int64 HDEV; // rax
  PVOID Object; // [rsp+40h] [rbp-C0h] BYREF
  PVOID v17; // [rsp+48h] [rbp-B8h] BYREF
  PVOID v18; // [rsp+50h] [rbp-B0h] BYREF
  PVOID v19; // [rsp+58h] [rbp-A8h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+60h] [rbp-A0h] BYREF
  _DWORD v21[56]; // [rsp+70h] [rbp-90h] BYREF
  _DISPLAY_DEVICEW v22; // [rsp+150h] [rbp+50h] BYREF

  memset(v21, 0, 0xDCuLL);
  memset(&v22, 0, sizeof(v22));
  RemoteContext = (_QWORD *)GreGetRemoteContext(v6);
  if ( gbConnected && !gProtocolType )
  {
    gConsoleShadowhDev = 0LL;
    gfRemotingConsole = 0;
    v8 = *(_QWORD *)(a1 + 268);
    ghConsoleShadowVideoChannel = *(HANDLE *)(a1 + 32);
    ghConsoleShadowBeepChannel = *(HANDLE *)(a1 + 40);
    ghConsoleShadowKeyboardChannel = *(HANDLE *)(a1 + 56);
    ghConsoleShadowThinwireChannel = *(HANDLE *)(a1 + 64);
    gpConsoleShadowThinWireCache = ThinWireCache;
    gRemoteClientKeyboardType = v8;
    *((_DWORD *)&gRemoteClientKeyboardType + 2) = *(_DWORD *)(a1 + 276);
    gbClientDoubleClickSupport = *(_DWORD *)(a1 + 240);
    gfEnableWindowsKey = *(_DWORD *)(a1 + 244);
    MirrorDriver = ObReferenceObjectByHandle(*(HANDLE *)(a1 + 72), 2u, (POBJECT_TYPE)ExEventObjectType, 0, &Object, 0LL);
    gpConsoleShadowDisplayChangeEvent = Object;
    if ( MirrorDriver < 0 )
      goto LABEL_16;
    MirrorDriver = ObReferenceObjectByHandle(ghConsoleShadowVideoChannel, 0, 0LL, 0, &v17, 0LL);
    if ( MirrorDriver < 0 )
      goto LABEL_16;
    gConsoleShadowVideoFileObject = v17;
    IoGetRelatedDeviceObject((PFILE_OBJECT)v17);
    v10 = ObReferenceObjectByHandle(ghConsoleShadowThinwireChannel, 0, 0LL, 0, &v18, 0LL);
    v11 = v18;
    MirrorDriver = v10;
    gConsoleShadowThinwireFileObject = v18;
    if ( v10 < 0 )
      goto LABEL_16;
    G_SaveRemoteVideoFileObject = (struct _FILE_OBJECT *)RemoteContext[1];
    G_SaveRemoteConnectionFileObject = (struct _FILE_OBJECT *)RemoteContext[2];
    G_SavePerformanceStatistics = (unsigned __int8 *)RemoteContext[4];
    G_SaveRemoteConnectionChannel = (void *)RemoteContext[3];
    RemoteContext[1] = gConsoleShadowVideoFileObject;
    RemoteContext[4] = gpConsoleShadowThinWireCache;
    RemoteContext[3] = ghConsoleShadowThinwireChannel;
    RemoteContext[2] = v11;
    MirrorDriver = ObReferenceObjectByHandle(ghConsoleShadowBeepChannel, 0, 0LL, 0, &v19, 0LL);
    gpConsoleShadowBeepDevice = v19;
    if ( MirrorDriver < 0 )
      goto LABEL_16;
    MirrorDriver = FindMirrorDriver(a2, &v22);
    if ( MirrorDriver < 0 )
      goto LABEL_16;
    RtlInitUnicodeString(&DestinationString, v22.DeviceName);
    v21[42] = *(_DWORD *)(a1 + 248);
    LOWORD(v21[17]) = 220;
    v21[18] = 1835040;
    v12 = *(_QWORD *)(*gpDispInfo + 24LL);
    v13 = _mm_srli_si128(*(__m128i *)(*gpDispInfo + 24LL), 8).m128i_u64[0];
    v21[19] = *(_OWORD *)(*gpDispInfo + 24LL);
    v21[20] = HIDWORD(v12);
    v21[44] = HIDWORD(v13) - HIDWORD(v12);
    v21[43] = v13 - v12;
    if ( (unsigned int)xxxUserChangeDisplaySettings(&DestinationString, v21, 0LL, 268435457LL, 0LL, 0, a3)
      || (unsigned int)xxxUserChangeDisplaySettings(0LL, 0LL, 0LL, 0LL, 0LL, 0, a3) )
    {
      MirrorDriver = -1073741823;
    }
    else
    {
      HDEV = DrvGetHDEV(&DestinationString);
      gConsoleShadowhDev = HDEV;
      if ( !HDEV
        || (gfRemotingConsole = 1,
            !(unsigned int)bDrvReconnect(HDEV, ghConsoleShadowThinwireChannel, gConsoleShadowThinwireFileObject, 0LL)) )
      {
        MirrorDriver = -1073741823;
        goto LABEL_16;
      }
      HDXDrvEscape(gConsoleShadowhDev, 2LL, gptmrWD, 8LL);
    }
    if ( MirrorDriver >= 0 )
      return (unsigned int)MirrorDriver;
LABEL_16:
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
    return (unsigned int)MirrorDriver;
  }
  return 3221225473LL;
}
