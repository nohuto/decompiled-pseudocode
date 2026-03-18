/*
 * XREFs of ?IVDeSerializeIVPTPInertiaPacket@@YAJPEAU_IVPTPInertiaPacket@@AEAUCIVSerializer@@@Z @ 0x1C0187228
 * Callers:
 *     ?ivHandlePTPInertiaPacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x1C018ABF0 (-ivHandlePTPInertiaPacket@CBaseInput@@AEAA-AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002D584 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall IVDeSerializeIVPTPInertiaPacket(struct _IVPTPInertiaPacket *a1, struct CIVSerializer *a2)
{
  struct CIVSerializer *v2; // rdi

  v2 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)a2,
      12,
      118,
      (__int64)&WPP_ead607961d3c3e051bc3eba132247bd1_Traceguids);
  }
  *((_QWORD *)a1 + 1) = *((_QWORD *)v2 + 2) + (*((_QWORD *)a1 + 1) & 0xFFFFFFFFFFFFFFFEuLL);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)a2,
      12,
      119,
      (__int64)&WPP_ead607961d3c3e051bc3eba132247bd1_Traceguids);
  }
  return 0LL;
}
