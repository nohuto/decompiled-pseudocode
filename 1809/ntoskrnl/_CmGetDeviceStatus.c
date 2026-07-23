/*
 * XREFs of _CmGetDeviceStatus @ 0x14059F508
 * Callers:
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x14059D504 (_CmGetDeviceMappedPropertyFromComposite.c)
 *     PiCMGetDeviceStatus @ 0x14059F358 (PiCMGetDeviceStatus.c)
 *     PiCMValidateDeviceInstance @ 0x1405A0414 (PiCMValidateDeviceInstance.c)
 *     _CmIsDeviceSafeRemovalRequired @ 0x1406DAC64 (_CmIsDeviceSafeRemovalRequired.c)
 *     PpDevCfgProcessDevices @ 0x14073B67C (PpDevCfgProcessDevices.c)
 *     PiCMDeleteDevice @ 0x1408383E8 (PiCMDeleteDevice.c)
 *     PiCMDeviceAction @ 0x140838BD8 (PiCMDeviceAction.c)
 *     PiCMGenerateDeviceInstance @ 0x140839064 (PiCMGenerateDeviceInstance.c)
 *     PiCMQueryRemove @ 0x140839894 (PiCMQueryRemove.c)
 *     PiCMSetProblem @ 0x14083A018 (PiCMSetProblem.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140015EB0 (RtlInitUnicodeStringEx.c)
 *     _NtPlugPlayGetDeviceStatus @ 0x14059F640 (_NtPlugPlayGetDeviceStatus.c)
 *     _CmGetDeviceRegProp @ 0x1405C799C (_CmGetDeviceRegProp.c)
 */

__int64 __fastcall CmGetDeviceStatus(int a1, const WCHAR *a2, int a3, int *a4, _DWORD *a5, _DWORD *a6, unsigned int a7)
{
  _DWORD *v7; // r14
  char v8; // bl
  _DWORD *v9; // r15
  int v13; // r12d
  NTSTATUS inited; // esi
  int v15; // edx
  UNICODE_STRING v17; // [rsp+40h] [rbp-38h] BYREF
  int v18; // [rsp+98h] [rbp+20h] BYREF

  v7 = a5;
  v8 = 0;
  v9 = a6;
  *a4 = 0;
  v18 = 0;
  *v7 = 0;
  *v9 = 0;
  v13 = (int)a2;
  inited = RtlInitUnicodeStringEx(&v17, a2);
  if ( inited >= 0 )
  {
    inited = NtPlugPlayGetDeviceStatus(a1, (unsigned int)&v17, (_DWORD)a4, (_DWORD)v7, (__int64)v9);
    if ( inited >= 0 )
    {
      a7 = 4;
      if ( !(unsigned int)CmGetDeviceRegProp(a1, v13, a3, 11, (__int64)&a5, (__int64)&v18, (__int64)&a7, 0)
        && a7 >= 4
        && (_DWORD)a5 == 4 )
      {
        v8 = v18;
      }
      v15 = *a4;
      if ( (v8 & 4) != 0 )
      {
        v15 |= 0x10u;
        *a4 = v15;
      }
      if ( (v15 & 0x400) == 0 && (v8 & 0x40) != 0 )
      {
        *a4 = v15 | 0x400;
        *v7 = 28;
      }
    }
  }
  return (unsigned int)inited;
}
