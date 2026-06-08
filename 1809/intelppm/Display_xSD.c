/*
 * XREFs of Display_xSD @ 0x1C0001D14
 * Callers:
 *     InitAcpiPerfDomain @ 0x1C00206CC (InitAcpiPerfDomain.c)
 *     InitAcpiThrottleDomain @ 0x1C002F808 (InitAcpiThrottleDomain.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0001C20 (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_s @ 0x1C0002D8C (WPP_RECORDER_SF_s.c)
 *     WPP_RECORDER_SF_ @ 0x1C0002E78 (WPP_RECORDER_SF_.c)
 *     GetCoordinationType @ 0x1C000B558 (GetCoordinationType.c)
 *     WPP_RECORDER_SF_Ds @ 0x1C000B888 (WPP_RECORDER_SF_Ds.c)
 */

void __fastcall Display_xSD(unsigned int *a1, __int64 a2)
{
  __int64 v2; // rdi
  unsigned int i; // edi
  __int64 CoordinationType; // rax
  __int64 v6; // r8
  int v7; // edx
  int v8; // [rsp+20h] [rbp-38h]

  if ( a1 )
  {
    v2 = a2;
    if ( a2 )
    {
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        LOBYTE(a2) = 5;
        WPP_RECORDER_SF_(
          WPP_GLOBAL_Control->DeviceExtension,
          a2,
          2,
          109,
          (__int64)&WPP_eb7b501de93c334997b4c3503e72e86c_Traceguids);
      }
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        LOBYTE(a2) = 5;
        WPP_RECORDER_SF_s(
          WPP_GLOBAL_Control->DeviceExtension,
          a2,
          2,
          110,
          (__int64)&WPP_eb7b501de93c334997b4c3503e72e86c_Traceguids,
          v2);
      }
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_D(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          5u,
          2u,
          0x6Fu,
          (__int64)&WPP_eb7b501de93c334997b4c3503e72e86c_Traceguids);
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        LOBYTE(a2) = 5;
        WPP_RECORDER_SF_(
          WPP_GLOBAL_Control->DeviceExtension,
          a2,
          2,
          112,
          (__int64)&WPP_eb7b501de93c334997b4c3503e72e86c_Traceguids);
      }
      for ( i = 0; i < *a1; ++i )
      {
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          WPP_RECORDER_SF_D(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            5u,
            2u,
            0x71u,
            (__int64)&WPP_eb7b501de93c334997b4c3503e72e86c_Traceguids);
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          WPP_RECORDER_SF_D(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            5u,
            2u,
            0x72u,
            (__int64)&WPP_eb7b501de93c334997b4c3503e72e86c_Traceguids);
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          WPP_RECORDER_SF_D(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            5u,
            2u,
            0x73u,
            (__int64)&WPP_eb7b501de93c334997b4c3503e72e86c_Traceguids);
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          WPP_RECORDER_SF_D(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            5u,
            2u,
            0x74u,
            (__int64)&WPP_eb7b501de93c334997b4c3503e72e86c_Traceguids);
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          CoordinationType = GetCoordinationType(a1[5 * i + 4]);
          WPP_RECORDER_SF_Ds(*(_QWORD *)(v6 + 64), v7, v6, 117, v8, v7, CoordinationType);
        }
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          WPP_RECORDER_SF_D(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            5u,
            2u,
            0x76u,
            (__int64)&WPP_eb7b501de93c334997b4c3503e72e86c_Traceguids);
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          LOBYTE(a2) = 5;
          WPP_RECORDER_SF_(
            WPP_GLOBAL_Control->DeviceExtension,
            a2,
            2,
            119,
            (__int64)&WPP_eb7b501de93c334997b4c3503e72e86c_Traceguids);
        }
      }
    }
  }
}
