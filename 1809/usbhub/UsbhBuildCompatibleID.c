/*
 * XREFs of UsbhBuildCompatibleID @ 0x1C0021150
 * Callers:
 *     UsbhSetupDevice @ 0x1C0020B00 (UsbhSetupDevice.c)
 * Callees:
 *     PdoExt @ 0x1C0010C40 (PdoExt.c)
 *     Log @ 0x1C0012D10 (Log.c)
 *     UsbhBuildClassCompatibleID @ 0x1C0023360 (UsbhBuildClassCompatibleID.c)
 *     UsbhBuildDeviceCompatibleID @ 0x1C002A898 (UsbhBuildDeviceCompatibleID.c)
 *     memset @ 0x1C002B800 (memset.c)
 */

__int64 __fastcall UsbhBuildCompatibleID(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 result; // rax
  _QWORD *PoolWithTag; // rax
  _QWORD *v10; // rdx
  _OWORD *v11; // rax
  _OWORD *v12; // rbx

  Log(a1, 4096, 1667451204, a2, 0LL);
  if ( !a2 )
  {
    PoolWithTag = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 0x1AuLL, 0x42554855u);
    v10 = PoolWithTag;
    if ( PoolWithTag )
    {
      *PoolWithTag = 0LL;
      PoolWithTag[1] = 0LL;
      PoolWithTag[2] = 0LL;
      *((_WORD *)PoolWithTag + 12) = 0;
      *(_OWORD *)PoolWithTag = *(_OWORD *)L"USB\\UNKNOWN";
      *((_DWORD *)PoolWithTag + 4) = *(_DWORD *)L"OWN";
      *((_WORD *)PoolWithTag + 10) = aUsbUnknown[10];
      result = 0LL;
      *(_QWORD *)(a3 + 8) = v10;
      *(_DWORD *)(a3 + 4) = 26;
      return result;
    }
    return 3221225626LL;
  }
  v7 = (unsigned int)PdoExt(a2)[355];
  if ( (v7 & 0x40) != 0 )
  {
    v11 = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 0x44uLL, 0x42554855u);
    v12 = v11;
    if ( v11 )
    {
      memset(v11, 0, 0x44uLL);
      *v12 = xmmword_1C0064620;
      v12[1] = xmmword_1C0064630;
      v12[2] = xmmword_1C0064640;
      v12[3] = xmmword_1C0064650;
      *((_DWORD *)v12 + 16) = 0;
      result = 0LL;
      *(_QWORD *)(a3 + 8) = v12;
      *(_DWORD *)(a3 + 4) = 68;
      return result;
    }
    return 3221225626LL;
  }
  if ( (v7 & 0x20) != 0 )
    return UsbhBuildDeviceCompatibleID(v7, v6, a3);
  else
    return UsbhBuildClassCompatibleID(a1, a2, a3);
}
