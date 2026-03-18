/*
 * XREFs of DrvGetDeviceFromName @ 0x1C0045200
 * Callers:
 *     DrvEnumDisplayDevices @ 0x1C0041AD0 (DrvEnumDisplayDevices.c)
 *     DrvEnumDisplaySettings @ 0x1C0043200 (DrvEnumDisplaySettings.c)
 *     DrvGetHDEV @ 0x1C0045110 (DrvGetHDEV.c)
 *     DrvChangeDisplaySettings @ 0x1C004BCC8 (DrvChangeDisplaySettings.c)
 *     ?CheckAndNotifyDualView@@YA?AW4_DUALVIEW_STATE@@PEAU_UNICODE_STRING@@PEAU_MDEV@@@Z @ 0x1C0068034 (-CheckAndNotifyDualView@@YA-AW4_DUALVIEW_STATE@@PEAU_UNICODE_STRING@@PEAU_MDEV@@@Z.c)
 *     NtGdiDdDDIQueryRemoteVidPnSourceFromGdiDisplayName @ 0x1C00CA880 (NtGdiDdDDIQueryRemoteVidPnSourceFromGdiDisplayName.c)
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C00CD344 (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GET.c)
 *     ?DrvGetDeviceFromNameAndValidateDevice@@YAJPEAU_UNICODE_STRING@@W4_MODE@@PEAPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C00CFDD0 (-DrvGetDeviceFromNameAndValidateDevice@@YAJPEAU_UNICODE_STRING@@W4_MODE@@PEAPEAUtagGRAPHICS_DEVI.c)
 *     DrvSetPruneFlag @ 0x1C00D5C30 (DrvSetPruneFlag.c)
 *     DrvSetVideoParameters @ 0x1C00D5D64 (DrvSetVideoParameters.c)
 * Callees:
 *     <none>
 */

wchar_t *__fastcall DrvGetDeviceFromName(UNICODE_STRING *a1, int a2)
{
  PWSTR Buffer; // r8
  wchar_t *i; // rbx
  USHORT Length; // ax
  ULONG64 v5; // rdx
  UNICODE_STRING String1; // [rsp+28h] [rbp-30h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-20h] BYREF

  Buffer = 0LL;
  *(_QWORD *)&String1.Length = 0LL;
  String1.Buffer = 0LL;
  if ( a2 == 1 )
  {
    Length = 0;
    String1.Length = 0;
    if ( a1 )
    {
      String1 = *a1;
      Buffer = String1.Buffer;
      Length = String1.Length;
    }
    if ( Length )
    {
      v5 = (ULONG64)Buffer + Length;
      if ( v5 > MmUserProbeAddress || v5 < (unsigned __int64)Buffer )
        *(_BYTE *)MmUserProbeAddress = 0;
    }
  }
  else
  {
    String1 = *a1;
  }
  for ( i = gpGraphicsDeviceList; i; i = (wchar_t *)*((_QWORD *)i + 16) )
  {
    RtlInitUnicodeString(&DestinationString, i + 32);
    if ( RtlEqualUnicodeString(&String1, &DestinationString, 1u) )
      break;
  }
  return i;
}
