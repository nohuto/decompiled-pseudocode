/*
 * XREFs of ndisDeviceInternalDispatch @ 0x1C00A4E58
 * Callers:
 *     NdisWdfDeviceInternalControlIrpHandler @ 0x1C009ED20 (NdisWdfDeviceInternalControlIrpHandler.c)
 *     ndisDeviceInternalIrpDispatch @ 0x1C00A4F70 (ndisDeviceInternalIrpDispatch.c)
 * Callees:
 *     ndisReferencePackage @ 0x1C0001008 (ndisReferencePackage.c)
 *     WPP_RECORDER_SF_qq @ 0x1C00066A0 (WPP_RECORDER_SF_qq.c)
 *     ndisDummyHandler @ 0x1C0094F8C (ndisDummyHandler.c)
 */

__int64 __fastcall ndisDeviceInternalDispatch(__int64 a1, __int64 a2, _IRP *a3)
{
  __int64 v4; // rsi
  unsigned int v6; // edi
  unsigned int v7; // eax
  _DEVICE_OBJECT *v8; // rcx
  int v9; // edx

  v4 = a2;
  v6 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      1,
      53,
      (struct _GUID *)&WPP_1c97764dd9a33bffc5a8311029b1d223_Traceguids,
      a1,
      (char)a3);
  }
  ndisReferencePackage((__int64)&ndisPkgs);
  if ( *(_BYTE *)v4 == 17 )
  {
    v8 = *(_DEVICE_OBJECT **)(v4 + 3840);
    if ( !v8 )
      goto LABEL_8;
    ++a3->CurrentLocation;
    ++a3->Tail.Overlay.CurrentStackLocation;
    v7 = IofCallDriver(v8, a3);
  }
  else
  {
    v7 = ndisDummyHandler(a1, (_BYTE *)v4, a3);
  }
  v6 = v7;
LABEL_8:
  MmUnlockPagableImageSection(ImageSectionHandle);
  _InterlockedDecrement((volatile signed __int32 *)&ndisPkgs);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v9) = 4;
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v9,
      1,
      54,
      (struct _GUID *)&WPP_1c97764dd9a33bffc5a8311029b1d223_Traceguids,
      a1,
      (char)a3);
  }
  return v6;
}
