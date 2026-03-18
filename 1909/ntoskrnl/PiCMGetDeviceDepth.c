/*
 * XREFs of PiCMGetDeviceDepth @ 0x1408723C0
 * Callers:
 *     PiCMHandleIoctl @ 0x1405BBB60 (PiCMHandleIoctl.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140002C70 (RtlInitUnicodeStringEx.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     _CmValidateDeviceName @ 0x1405C3710 (_CmValidateDeviceName.c)
 *     PiCMReleaseObjectInputData @ 0x1406CF518 (PiCMReleaseObjectInputData.c)
 *     PiCMCaptureObjectInputData @ 0x1406CF74C (PiCMCaptureObjectInputData.c)
 *     PiGetDeviceDepth @ 0x1406EADA0 (PiGetDeviceDepth.c)
 *     PiCMReturnDepthResultData @ 0x140872F48 (PiCMReturnDepthResultData.c)
 */

__int64 __fastcall PiCMGetDeviceDepth(
        unsigned __int64 a1,
        unsigned int a2,
        __int64 a3,
        unsigned int a4,
        int a5,
        _DWORD *a6)
{
  _DWORD *v10; // r12
  unsigned int v11; // esi
  __int64 v12; // rcx
  int v13; // ebx
  const WCHAR *v14; // rbx
  int inited; // eax
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-40h] BYREF
  PCWSTR v18[6]; // [rsp+40h] [rbp-30h] BYREF

  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  memset(v18, 0, 0x28uLL);
  v10 = a6;
  v11 = 0;
  LODWORD(a6) = 0;
  *v10 = 0;
  v13 = PiCMCaptureObjectInputData(a1, a2, a5, (char *)v18);
  if ( v13 >= 0 )
  {
    v14 = v18[2];
    if ( v18[2] && *(PCWSTR *)((char *)v18 + 4) == (PCWSTR)0x100000000LL && !HIDWORD(v18[3]) && a3 && a4 >= 0xC )
    {
      inited = CmValidateDeviceName(v12, v18[2]);
      if ( inited >= 0 )
      {
        inited = RtlInitUnicodeStringEx(&DestinationString, v14);
        if ( inited >= 0 )
        {
          inited = PiGetDeviceDepth((__int64)&DestinationString, &a6);
          v11 = (unsigned int)a6;
        }
      }
    }
    else
    {
      inited = -1073741811;
    }
    v13 = PiCMReturnDepthResultData(
            (unsigned int)inited,
            v11,
            LODWORD(v18[4]),
            a3,
            a4,
            v10,
            *(_QWORD *)&DestinationString.Length,
            DestinationString.Buffer);
  }
  PiCMReleaseObjectInputData((__int64)v18);
  return (unsigned int)v13;
}
