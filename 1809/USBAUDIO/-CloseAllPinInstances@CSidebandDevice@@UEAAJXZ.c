/*
 * XREFs of ?CloseAllPinInstances@CSidebandDevice@@UEAAJXZ @ 0x1C0009F00
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001008 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C00010CC (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall CSidebandDevice::CloseAllPinInstances(CSidebandDevice *this, __int64 a2)
{
  _QWORD *v3; // rdi
  _QWORD *v4; // rbx
  void *v5; // rcx
  __int64 v6; // rdx
  int v8; // [rsp+28h] [rbp-10h]

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      a2,
      9u,
      0x53u,
      (__int64)&WPP_9cb122de025331014e173ee6737c9890_Traceguids);
  v3 = (_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 4) + 16LL) + 104LL);
  v4 = (_QWORD *)*v3;
  while ( v4 != v3 )
  {
    v5 = (void *)v4[6];
    v4 = (_QWORD *)*v4;
    ObfDereferenceObject(v5);
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v6,
      9u,
      0x54u,
      (__int64)&WPP_9cb122de025331014e173ee6737c9890_Traceguids);
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v8 = 0;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      a2,
      9u,
      0x55u,
      (__int64)&WPP_9cb122de025331014e173ee6737c9890_Traceguids,
      v8);
  }
  return 0LL;
}
