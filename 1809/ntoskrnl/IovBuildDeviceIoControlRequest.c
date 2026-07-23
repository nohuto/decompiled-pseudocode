/*
 * XREFs of IovBuildDeviceIoControlRequest @ 0x140924B80
 * Callers:
 *     <none>
 * Callees:
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     VfSetIoBuildRequest @ 0x1409316F0 (VfSetIoBuildRequest.c)
 */

__int64 __fastcall IovBuildDeviceIoControlRequest(unsigned int a1)
{
  __int64 v1; // rax
  __int64 v2; // rbx

  v1 = ((__int64 (__fastcall *)(_QWORD))pXdvIoBuildDeviceIoControlRequest)(a1);
  v2 = v1;
  if ( v1 )
    VfSetIoBuildRequest(v1);
  return v2;
}
