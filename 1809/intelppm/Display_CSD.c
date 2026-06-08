/*
 * XREFs of Display_CSD @ 0x1C000AD24
 * Callers:
 *     InitAcpiIdleDomain @ 0x1C0020648 (InitAcpiIdleDomain.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0001C20 (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_ @ 0x1C0002E78 (WPP_RECORDER_SF_.c)
 *     GetCoordinationType @ 0x1C000B558 (GetCoordinationType.c)
 *     WPP_RECORDER_SF_Ds @ 0x1C000B888 (WPP_RECORDER_SF_Ds.c)
 */

void __fastcall Display_CSD(unsigned int *a1)
{
  unsigned int i; // edi
  __int64 CoordinationType; // rax
  __int64 v4; // r8
  int v5; // edx
  int v6; // [rsp+20h] [rbp-38h]

  if ( a1 )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        5u,
        2u,
        0x82u,
        (__int64)&WPP_eb7b501de93c334997b4c3503e72e86c_Traceguids);
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        5u,
        2u,
        0x83u,
        (__int64)&WPP_eb7b501de93c334997b4c3503e72e86c_Traceguids);
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_D(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        5u,
        2u,
        0x84u,
        (__int64)&WPP_eb7b501de93c334997b4c3503e72e86c_Traceguids);
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        5u,
        2u,
        0x85u,
        (__int64)&WPP_eb7b501de93c334997b4c3503e72e86c_Traceguids);
    for ( i = 0; i < *a1; ++i )
    {
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_D(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          5u,
          2u,
          0x86u,
          (__int64)&WPP_eb7b501de93c334997b4c3503e72e86c_Traceguids);
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_D(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          5u,
          2u,
          0x87u,
          (__int64)&WPP_eb7b501de93c334997b4c3503e72e86c_Traceguids);
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_D(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          5u,
          2u,
          0x88u,
          (__int64)&WPP_eb7b501de93c334997b4c3503e72e86c_Traceguids);
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_D(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          5u,
          2u,
          0x89u,
          (__int64)&WPP_eb7b501de93c334997b4c3503e72e86c_Traceguids);
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        CoordinationType = GetCoordinationType(a1[6 * i + 4]);
        WPP_RECORDER_SF_Ds(*(_QWORD *)(v4 + 64), v5, v4, 138, v6, v5, CoordinationType);
      }
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_D(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          5u,
          2u,
          0x8Bu,
          (__int64)&WPP_eb7b501de93c334997b4c3503e72e86c_Traceguids);
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_D(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          5u,
          2u,
          0x8Cu,
          (__int64)&WPP_eb7b501de93c334997b4c3503e72e86c_Traceguids);
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          5u,
          2u,
          0x8Du,
          (__int64)&WPP_eb7b501de93c334997b4c3503e72e86c_Traceguids);
    }
  }
}
