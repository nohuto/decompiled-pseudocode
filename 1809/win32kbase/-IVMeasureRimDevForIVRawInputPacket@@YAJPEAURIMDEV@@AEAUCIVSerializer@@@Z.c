/*
 * XREFs of ?IVMeasureRimDevForIVRawInputPacket@@YAJPEAURIMDEV@@AEAUCIVSerializer@@@Z @ 0x1C0154654
 * Callers:
 *     ?ivRootDeliverRawInput@CHidInput@@MEAAJPEAX@Z @ 0x1C014D9C0 (-ivRootDeliverRawInput@CHidInput@@MEAAJPEAX@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 *     ?Serialize@CIVSerializer@@QEAAJAEAU_UNICODE_STRING@@0_N@Z @ 0x1C0155974 (-Serialize@CIVSerializer@@QEAAJAEAU_UNICODE_STRING@@0_N@Z.c)
 *     ?Serialize@CIVSerializer@@QEAAJPEAPEAXPEAX_K_N@Z @ 0x1C0155E20 (-Serialize@CIVSerializer@@QEAAJPEAPEAXPEAX_K_N@Z.c)
 */

__int64 __fastcall IVMeasureRimDevForIVRawInputPacket(struct RIMDEV *a1, struct CIVSerializer *a2)
{
  __int64 v4; // rsi
  int v5; // ebx

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0x11u,
      0x46u,
      (__int64)&WPP_b138f43e013f30a363c7800c3f92de43_Traceguids);
  v4 = *(_QWORD *)a2;
  v5 = CIVSerializer::Serialize(
         a2,
         (struct _UNICODE_STRING *)(*(_QWORD *)a2 + 16LL),
         (struct _UNICODE_STRING *)a1 + 13,
         1);
  if ( v5 >= 0 )
  {
    v5 = CIVSerializer::Serialize(
           a2,
           (void **)(v4 + 40),
           *(void **)(*((_QWORD *)a1 + 58) + 24LL),
           *((_QWORD *)a1 + 33),
           1);
    if ( v5 >= 0 )
      *(_DWORD *)(v4 + 32) = *((_DWORD *)a1 + 66);
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0x11u,
      0x47u,
      (__int64)&WPP_b138f43e013f30a363c7800c3f92de43_Traceguids);
  return (unsigned int)v5;
}
