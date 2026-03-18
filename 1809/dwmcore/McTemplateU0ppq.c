/*
 * XREFs of McTemplateU0ppq @ 0x180161108
 * Callers:
 *     ??0CInteraction@@IEAA@PEAVCComposition@@@Z @ 0x1800963DC (--0CInteraction@@IEAA@PEAVCComposition@@@Z.c)
 *     ??1CInteraction@@MEAA@XZ @ 0x18009EDE8 (--1CInteraction@@MEAA@XZ.c)
 *     ?ProcessToken@CLegacySurfaceManager@@IEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAIPEA_N@Z @ 0x1800A5EF0 (-ProcessToken@CLegacySurfaceManager@@IEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAIPEA_N@Z.c)
 *     ?SendResponse@MagnifierCaptureBitsResponse@@UEAAJJ@Z @ 0x180179CF0 (-SendResponse@MagnifierCaptureBitsResponse@@UEAAJJ@Z.c)
 *     ?NotifyCapturePointer@CManipulationManager@@QEAAJPEAVCInteraction@@I@Z @ 0x1801EAA18 (-NotifyCapturePointer@CManipulationManager@@QEAAJPEAVCInteraction@@I@Z.c)
 * Callees:
 *     McGenEventWrite @ 0x1800841D4 (McGenEventWrite.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 */

ULONG McTemplateU0ppq(__int64 a1, const EVENT_DESCRIPTOR *a2, ...)
{
  struct _EVENT_DATA_DESCRIPTOR v3; // [rsp+30h] [rbp-50h] BYREF
  va_list v4; // [rsp+40h] [rbp-40h]
  __int64 v5; // [rsp+48h] [rbp-38h]
  va_list v6; // [rsp+50h] [rbp-30h]
  __int64 v7; // [rsp+58h] [rbp-28h]
  va_list v8; // [rsp+60h] [rbp-20h]
  __int64 v9; // [rsp+68h] [rbp-18h]
  va_list va; // [rsp+A0h] [rbp+20h]
  __int64 v11; // [rsp+A0h] [rbp+20h] BYREF
  __int64 v12; // [rsp+A8h] [rbp+28h] BYREF
  va_list va1; // [rsp+A8h] [rbp+28h]
  va_list va2; // [rsp+B0h] [rbp+30h] BYREF

  va_start(va2, a2);
  va_start(va1, a2);
  va_start(va, a2);
  v11 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v12 = va_arg(va2, _QWORD);
  v5 = 8LL;
  va_copy(v4, va);
  v7 = 8LL;
  va_copy(v6, va1);
  v9 = 4LL;
  va_copy(v8, va2);
  return McGenEventWrite(Microsoft_Windows_Dwm_Core_Provider_Context, a2, v11, 4u, &v3);
}
