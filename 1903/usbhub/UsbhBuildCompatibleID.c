/*
 * XREFs of UsbhBuildCompatibleID @ 0x1C0021DFC
 * Callers:
 *     UsbhSetupDevice @ 0x1C0021740 (UsbhSetupDevice.c)
 * Callees:
 *     PdoExt @ 0x1C0011270 (PdoExt.c)
 *     Log @ 0x1C0013360 (Log.c)
 *     UsbhBuildClassCompatibleID @ 0x1C0023EA8 (UsbhBuildClassCompatibleID.c)
 *     UsbhBuildDeviceCompatibleID @ 0x1C002BA48 (UsbhBuildDeviceCompatibleID.c)
 *     memset @ 0x1C002CA00 (memset.c)
 */

__int64 __fastcall UsbhBuildCompatibleID(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // r9
  __int64 v7; // rdx
  __int64 v8; // rcx
  _QWORD *PoolWithTag; // rax
  _OWORD *v11; // rax
  _OWORD *v12; // rdi

  Log(a1, 4096, 1667451204, a2, 0LL);
  if ( !v6 )
  {
    PoolWithTag = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 0x1AuLL, 0x42554855u);
    if ( !PoolWithTag )
      return 3221225626LL;
    *PoolWithTag = 0LL;
    PoolWithTag[1] = 0LL;
    PoolWithTag[2] = 0LL;
    *((_WORD *)PoolWithTag + 12) = 0;
    *(_OWORD *)PoolWithTag = *(_OWORD *)L"USB\\UNKNOWN";
    *((_DWORD *)PoolWithTag + 4) = *(_DWORD *)L"OWN";
    *((_WORD *)PoolWithTag + 10) = aUsbUnknown[10];
    *(_QWORD *)(a3 + 8) = PoolWithTag;
    *(_DWORD *)(a3 + 4) = 26;
    return 0LL;
  }
  v8 = (unsigned int)PdoExt(v6)[355];
  if ( (v8 & 0x40) != 0 )
  {
    v11 = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 0x44uLL, 0x42554855u);
    v12 = v11;
    if ( !v11 )
      return 3221225626LL;
    memset(v11, 0, 0x44uLL);
    *v12 = xmmword_1C0066610;
    v12[1] = xmmword_1C0066620;
    v12[2] = xmmword_1C0066630;
    v12[3] = xmmword_1C0066640;
    *((_DWORD *)v12 + 16) = 0;
    *(_QWORD *)(a3 + 8) = v12;
    *(_DWORD *)(a3 + 4) = 68;
    return 0LL;
  }
  if ( (v8 & 0x20) != 0 )
    return UsbhBuildDeviceCompatibleID(v8, v7, a3);
  else
    return UsbhBuildClassCompatibleID(a1, a2, a3);
}
