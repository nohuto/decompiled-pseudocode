/*
 * XREFs of DrvPVPGetFirstActiveMonitor @ 0x1C0105038
 * Callers:
 *     GetCertificateLengthAndMonitorPDO @ 0x1C00FA270 (GetCertificateLengthAndMonitorPDO.c)
 * Callees:
 *     UpdateMonitorDevices @ 0x1C0041C40 (UpdateMonitorDevices.c)
 *     ?DrvGetDeviceFromNameAndValidateDevice@@YAJPEAU_UNICODE_STRING@@W4_MODE@@PEAPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C007CFC8 (-DrvGetDeviceFromNameAndValidateDevice@@YAJPEAU_UNICODE_STRING@@W4_MODE@@PEAPEAUtagGRAPHICS_DEVI.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AF730 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DrvPVPGetFirstActiveMonitor(struct _UNICODE_STRING *a1, __int64 a2, PVOID *a3)
{
  __int64 result; // rax
  _QWORD *v6; // rdi
  __int64 v7; // rbx
  __int64 v8; // r10
  PVOID Object; // [rsp+58h] [rbp+20h] BYREF

  UpdateMonitorDevices();
  result = DrvGetDeviceFromNameAndValidateDevice(a1, UserMode, (wchar_t **)&Object);
  if ( (int)result >= 0 )
  {
    v6 = Object;
    v7 = 0LL;
    if ( *((_DWORD *)Object + 54) )
    {
      while ( 1 )
      {
        v8 = v6[28];
        if ( (*(_DWORD *)(v8 + 20 * v7) & 1) != 0
          && (int)((__int64 (__fastcall *)(__int64, _QWORD, PVOID *, PVOID *))qword_1C01CDA80)(
                    v8 + 8 + 20 * v7,
                    *(unsigned int *)(v8 + 20 * v7 + 4),
                    &Object,
                    a3) >= 0 )
        {
          break;
        }
        v7 = (unsigned int)(v7 + 1);
        if ( (unsigned int)v7 >= *((_DWORD *)v6 + 54) )
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
