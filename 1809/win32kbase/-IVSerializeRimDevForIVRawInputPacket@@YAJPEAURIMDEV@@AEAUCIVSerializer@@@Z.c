/*
 * XREFs of ?IVSerializeRimDevForIVRawInputPacket@@YAJPEAURIMDEV@@AEAUCIVSerializer@@@Z @ 0x1C0154A0C
 * Callers:
 *     ?ivRootDeliverRawInput@CHidInput@@MEAAJPEAX@Z @ 0x1C014D9C0 (-ivRootDeliverRawInput@CHidInput@@MEAAJPEAX@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 *     ?Serialize@CIVSerializer@@QEAAJAEAU_UNICODE_STRING@@0_N@Z @ 0x1C0155974 (-Serialize@CIVSerializer@@QEAAJAEAU_UNICODE_STRING@@0_N@Z.c)
 *     ?Serialize@CIVSerializer@@QEAAJPEAPEAXPEAX_K_N@Z @ 0x1C0155E20 (-Serialize@CIVSerializer@@QEAAJPEAPEAXPEAX_K_N@Z.c)
 */

__int64 __fastcall IVSerializeRimDevForIVRawInputPacket(struct RIMDEV *a1, struct _UNICODE_STRING **a2)
{
  struct _UNICODE_STRING *v4; // rbx
  struct _UNICODE_STRING *v5; // rdx
  int v6; // edi

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0x11u,
      0x48u,
      (__int64)&WPP_b138f43e013f30a363c7800c3f92de43_Traceguids);
  v4 = *a2;
  v5 = *a2 + 1;
  *(_DWORD *)(&v4->MaximumLength + 1) = 1;
  v4->Buffer = (PWSTR)6;
  v6 = CIVSerializer::Serialize((CIVSerializer *)a2, v5, (struct _UNICODE_STRING *)a1 + 13, 0);
  if ( v6 >= 0 )
  {
    v6 = CIVSerializer::Serialize(
           (CIVSerializer *)a2,
           (void **)&v4[2].Buffer,
           *(void **)(*((_QWORD *)a1 + 58) + 24LL),
           *((_QWORD *)a1 + 33),
           0);
    if ( v6 >= 0 )
      *(_DWORD *)&v4[2].Length = *((_DWORD *)a1 + 66);
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0x11u,
      0x49u,
      (__int64)&WPP_b138f43e013f30a363c7800c3f92de43_Traceguids);
  return (unsigned int)v6;
}
