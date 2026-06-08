/*
 * XREFs of Display_CSD @ 0x1C0005C94
 * Callers:
 *     InitAcpiIdleDomain @ 0x1C002CF00 (InitAcpiIdleDomain.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C000138C (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C0002BEC (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_Ds @ 0x1C0003B44 (WPP_RECORDER_SF_Ds.c)
 */

void __fastcall Display_CSD(unsigned int *a1, __int64 a2, __int64 a3)
{
  unsigned int i; // edi
  __int64 v5; // rdx
  const char *v6; // rax
  int v7; // [rsp+20h] [rbp-38h]

  if ( a1 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          5u,
          2u,
          0x82u,
          (__int64)&WPP_eb7b501de93c334997b4c3503e72e86c_Traceguids);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          WPP_RECORDER_SF_(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            5u,
            2u,
            0x83u,
            (__int64)&WPP_eb7b501de93c334997b4c3503e72e86c_Traceguids);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
            WPP_RECORDER_SF_D(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              5u,
              2u,
              0x84u,
              (__int64)&WPP_eb7b501de93c334997b4c3503e72e86c_Traceguids);
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
            && LOWORD(WPP_GLOBAL_Control->DeviceType) )
          {
            WPP_RECORDER_SF_(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              5u,
              2u,
              0x85u,
              (__int64)&WPP_eb7b501de93c334997b4c3503e72e86c_Traceguids);
          }
        }
      }
    }
    for ( i = 0; i < *a1; ++i )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          WPP_RECORDER_SF_D(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            5u,
            2u,
            0x86u,
            (__int64)&WPP_eb7b501de93c334997b4c3503e72e86c_Traceguids);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
            WPP_RECORDER_SF_D(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              5u,
              2u,
              0x87u,
              (__int64)&WPP_eb7b501de93c334997b4c3503e72e86c_Traceguids);
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
              WPP_RECORDER_SF_D(
                (__int64)WPP_GLOBAL_Control->DeviceExtension,
                5u,
                2u,
                0x88u,
                (__int64)&WPP_eb7b501de93c334997b4c3503e72e86c_Traceguids);
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                WPP_RECORDER_SF_D(
                  (__int64)WPP_GLOBAL_Control->DeviceExtension,
                  5u,
                  2u,
                  0x89u,
                  (__int64)&WPP_eb7b501de93c334997b4c3503e72e86c_Traceguids);
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                {
                  switch ( a1[6 * i + 4] )
                  {
                    case 1u:
                      v6 = "MS Software All";
                      break;
                    case 0xFCu:
                      v6 = "ACPI Software All";
                      break;
                    case 0xFDu:
                      v6 = "ACPI Software Any";
                      break;
                    case 0xFEu:
                      v6 = "ACPI Hardware All";
                      break;
                    default:
                      v6 = "Unknown Coordination Type";
                      break;
                  }
                  v5 = a1[6 * i + 4];
                  WPP_RECORDER_SF_Ds((__int64)WPP_GLOBAL_Control->DeviceExtension, v5, a3, 0x8Au, v7, v5, v6);
                }
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                {
                  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                    WPP_RECORDER_SF_D(
                      (__int64)WPP_GLOBAL_Control->DeviceExtension,
                      5u,
                      2u,
                      0x8Bu,
                      (__int64)&WPP_eb7b501de93c334997b4c3503e72e86c_Traceguids);
                  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                  {
                    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                      WPP_RECORDER_SF_D(
                        (__int64)WPP_GLOBAL_Control->DeviceExtension,
                        5u,
                        2u,
                        0x8Cu,
                        (__int64)&WPP_eb7b501de93c334997b4c3503e72e86c_Traceguids);
                    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                    {
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
              }
            }
          }
        }
      }
    }
  }
}
