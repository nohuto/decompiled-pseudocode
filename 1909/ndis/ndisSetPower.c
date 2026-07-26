/*
 * XREFs of ndisSetPower @ 0x1C0013948
 * Callers:
 *     ndisPowerDispatch @ 0x1C0019F10 (ndisPowerDispatch.c)
 *     ndisPowerIrpWorker @ 0x1C00A6E60 (ndisPowerIrpWorker.c)
 * Callees:
 *     ndisReferencePackage @ 0x1C0001008 (ndisReferencePackage.c)
 *     WPP_RECORDER_SF_qL @ 0x1C0006320 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_qq @ 0x1C00066A0 (WPP_RECORDER_SF_qq.c)
 *     ndisSetSystemPower @ 0x1C00131C8 (ndisSetSystemPower.c)
 *     ndisSetDevicePower @ 0x1C00134B4 (ndisSetDevicePower.c)
 */

__int64 __fastcall ndisSetPower(PIRP Irp, __int64 a2, __int64 a3)
{
  unsigned int v4; // ebx
  int v7; // edx
  int v8; // ecx
  unsigned int v9; // eax

  v4 = 0;
  ndisReferencePackage((__int64)&ndisPkgs);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v7) = 4;
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v7,
      14,
      112,
      (struct _GUID *)&WPP_5bf3b773190d331e3fb83968fcc6c54c_Traceguids,
      a3,
      (char)Irp);
  }
  v8 = *(_DWORD *)(a2 + 16);
  if ( v8 )
  {
    if ( v8 != 1 )
      goto LABEL_7;
    v9 = ndisSetDevicePower(Irp, a2, (enum _DEVICE_POWER_STATE)*(_DWORD *)(a2 + 24), a3);
  }
  else
  {
    v9 = ndisSetSystemPower((_IO_STATUS_BLOCK *)Irp, a2, a3);
  }
  v4 = v9;
LABEL_7:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v7) = 4;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v7,
      14,
      113,
      (struct _GUID *)&WPP_5bf3b773190d331e3fb83968fcc6c54c_Traceguids,
      a3,
      v4);
  }
  MmUnlockPagableImageSection(ImageSectionHandle);
  _InterlockedDecrement((volatile signed __int32 *)&ndisPkgs);
  return v4;
}
