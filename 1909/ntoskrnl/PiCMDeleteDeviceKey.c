/*
 * XREFs of PiCMDeleteDeviceKey @ 0x140871708
 * Callers:
 *     PiCMHandleIoctl @ 0x1405BBB60 (PiCMHandleIoctl.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140002C70 (RtlInitUnicodeStringEx.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     ZwClose @ 0x1401C0E30 (ZwClose.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     _SysCtxRegOpenKey @ 0x1405C3B48 (_SysCtxRegOpenKey.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x1405C3CAC (_PnpCtxGetCachedContextBaseKey.c)
 *     RtlUnicodeStringToInteger @ 0x1406B5920 (RtlUnicodeStringToInteger.c)
 *     PiCMReleaseObjectInputData @ 0x1406CF518 (PiCMReleaseObjectInputData.c)
 *     PiCMCaptureObjectInputData @ 0x1406CF74C (PiCMCaptureObjectInputData.c)
 *     _RegRtlEnumKey @ 0x140717270 (_RegRtlEnumKey.c)
 *     PiCMConvertDeviceKeyType @ 0x140719D10 (PiCMConvertDeviceKeyType.c)
 *     PiCMReturnBasicResultData @ 0x140721E08 (PiCMReturnBasicResultData.c)
 *     PiAuDoesClientHaveAccess @ 0x140721E80 (PiAuDoesClientHaveAccess.c)
 *     _CmDeleteDeviceRegKey @ 0x1409346CC (_CmDeleteDeviceRegKey.c)
 */

__int64 __fastcall PiCMDeleteDeviceKey(
        unsigned __int64 a1,
        unsigned int a2,
        _QWORD *a3,
        unsigned int a4,
        int a5,
        _DWORD *a6)
{
  ULONG v10; // esi
  int v11; // ebx
  int v12; // ebx
  __int16 v13; // r11
  __int64 v14; // rcx
  int inited; // edi
  unsigned int v17; // [rsp+30h] [rbp-59h] BYREF
  ULONG Value; // [rsp+34h] [rbp-55h] BYREF
  __int64 v19; // [rsp+38h] [rbp-51h] BYREF
  HANDLE Handle; // [rsp+40h] [rbp-49h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-41h] BYREF
  _QWORD v22[5]; // [rsp+58h] [rbp-31h] BYREF
  unsigned int SourceString[4]; // [rsp+80h] [rbp-9h] BYREF

  memset(v22, 0, sizeof(v22));
  v10 = 0;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  *a6 = 0;
  v19 = 0LL;
  Handle = 0LL;
  Value = 0;
  v17 = 0;
  v11 = PiCMCaptureObjectInputData(a1, a2, a5, (char *)v22);
  if ( v11 >= 0 )
  {
    if ( PiAuDoesClientHaveAccess(2u) )
    {
      if ( v22[2] && LODWORD(v22[1]) == 1 && a3 && a4 >= 8 )
      {
        v12 = PiCMConvertDeviceKeyType(SWORD2(v22[0]), (int *)&v17);
        if ( v12 >= 0 )
        {
          if ( (v13 & 0xFF00) == 0x200 && HIDWORD(v22[3]) == -1 )
          {
            if ( (int)PnpCtxGetCachedContextBaseKey(*(__int64 *)&PiPnpRtlCtx, 4, (__int64)&v19) >= 0 )
            {
              v14 = 0LL;
              if ( *(_QWORD *)&PiPnpRtlCtx )
                v14 = *(_QWORD *)(*(_QWORD *)&PiPnpRtlCtx + 224LL);
              if ( (int)SysCtxRegOpenKey(
                          v14,
                          v19,
                          (__int64)L"Control\\IDConfigDB\\Hardware Profiles",
                          0,
                          8u,
                          (__int64)&Handle) >= 0 )
              {
                do
                {
                  if ( v12 < 0 )
                    break;
                  LODWORD(v19) = 5;
                  inited = RegRtlEnumKey(Handle, v10, SourceString, (unsigned int *)&v19);
                  if ( inited >= 0 )
                  {
                    inited = RtlInitUnicodeStringEx(&DestinationString, (PCWSTR)SourceString);
                    if ( inited >= 0 )
                    {
                      inited = RtlUnicodeStringToInteger(&DestinationString, 0, &Value);
                      if ( inited >= 0 )
                      {
                        v12 = CmDeleteDeviceRegKey(*(_QWORD *)&PiPnpRtlCtx, v22[2], v17);
                        if ( v12 == -1073741772 )
                          v12 = 0;
                      }
                    }
                  }
                  ++v10;
                }
                while ( inited >= 0 );
              }
            }
          }
          else
          {
            v12 = CmDeleteDeviceRegKey(*(_QWORD *)&PiPnpRtlCtx, v22[2], v17);
          }
        }
      }
      else
      {
        v12 = -1073741811;
      }
    }
    else
    {
      v12 = -1073741790;
    }
    if ( Handle )
      ZwClose(Handle);
    v11 = PiCMReturnBasicResultData(v12, v22[4], a3, a4, a6);
  }
  PiCMReleaseObjectInputData((__int64)v22);
  return (unsigned int)v11;
}
