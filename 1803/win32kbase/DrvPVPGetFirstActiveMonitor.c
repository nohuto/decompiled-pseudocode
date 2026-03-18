/*
 * XREFs of DrvPVPGetFirstActiveMonitor @ 0x1C00D5814
 * Callers:
 *     GetCertificateLengthAndMonitorPDO @ 0x1C00C5A64 (GetCertificateLengthAndMonitorPDO.c)
 * Callees:
 *     UpdateMonitorDevices @ 0x1C0052A00 (UpdateMonitorDevices.c)
 *     _guard_dispatch_icall_nop @ 0x1C0079B40 (_guard_dispatch_icall_nop.c)
 *     ?DrvGetDeviceFromNameAndValidateDevice@@YAJPEAU_UNICODE_STRING@@W4_MODE@@PEAPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C00CFDD0 (-DrvGetDeviceFromNameAndValidateDevice@@YAJPEAU_UNICODE_STRING@@W4_MODE@@PEAPEAUtagGRAPHICS_DEVI.c)
 */

__int64 __fastcall DrvPVPGetFirstActiveMonitor(struct _UNICODE_STRING *a1, __int64 a2, PVOID *a3)
{
  __int64 result; // rax
  _QWORD *v6; // rdi
  unsigned int v7; // ebx
  _DWORD *v8; // rdx
  PVOID Object; // [rsp+58h] [rbp+20h] BYREF

  UpdateMonitorDevices();
  result = DrvGetDeviceFromNameAndValidateDevice(a1, 1, (struct tagGRAPHICS_DEVICE **)&Object);
  if ( (int)result >= 0 )
  {
    v6 = Object;
    v7 = 0;
    if ( *((_DWORD *)Object + 54) )
    {
      while ( 1 )
      {
        v8 = (_DWORD *)(v6[28] + 32LL * v7);
        if ( (*v8 & 1) != 0
          && (int)((__int64 (__fastcall *)(_DWORD *, _QWORD, PVOID *, PVOID *))qword_1C01A1BE0)(
                    v8 + 2,
                    (unsigned int)v8[1],
                    &Object,
                    a3) >= 0 )
        {
          break;
        }
        if ( ++v7 >= *((_DWORD *)v6 + 54) )
          return 3223193061LL;
      }
      ObfReferenceObject(*a3);
      ObfDereferenceObject(Object);
      return 0LL;
    }
    else
    {
      return 3223193061LL;
    }
  }
  return result;
}
