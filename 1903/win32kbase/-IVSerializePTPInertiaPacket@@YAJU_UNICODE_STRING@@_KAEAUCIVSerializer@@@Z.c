/*
 * XREFs of ?IVSerializePTPInertiaPacket@@YAJU_UNICODE_STRING@@_KAEAUCIVSerializer@@@Z @ 0x1C018A0E4
 * Callers:
 *     ?ivRootDeliverPTPInertiaInput@CHidInput@@QEAAJPEAX_KHAEBUCONTAINER_ID@@@Z @ 0x1C017FC6C (-ivRootDeliverPTPInertiaInput@CHidInput@@QEAAJPEAX_KHAEBUCONTAINER_ID@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002E6D4 (WPP_RECORDER_SF_.c)
 *     ?Serialize@CIVSerializer@@QEAAJAEAU_UNICODE_STRING@@AEBU2@_N@Z @ 0x1C018B6F8 (-Serialize@CIVSerializer@@QEAAJAEAU_UNICODE_STRING@@AEBU2@_N@Z.c)
 */

__int64 __fastcall IVSerializePTPInertiaPacket(struct _UNICODE_STRING *a1, __int64 a2, struct CIVSerializer *a3)
{
  __int64 v4; // rsi
  __int64 v6; // rdi
  int v7; // edx
  int v8; // ebx

  v4 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      12,
      116,
      (__int64)&WPP_ead607961d3c3e051bc3eba132247bd1_Traceguids);
  }
  v6 = *((_QWORD *)a3 + 2);
  v8 = CIVSerializer::Serialize(a3, (struct _UNICODE_STRING *)v6, a1, 0);
  if ( v8 >= 0 )
    *(_QWORD *)(v6 + 16) = v4;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v7) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v7,
      12,
      117,
      (__int64)&WPP_ead607961d3c3e051bc3eba132247bd1_Traceguids);
  }
  return (unsigned int)v8;
}
