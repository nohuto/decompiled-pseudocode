/*
 * XREFs of DisplayGenAddr @ 0x1C0007C04
 * Callers:
 *     Display_PCT_PTC @ 0x1C0006F9C (Display_PCT_PTC.c)
 *     Display_CST @ 0x1C00075B8 (Display_CST.c)
 *     Display_CPC @ 0x1C0007A7C (Display_CPC.c)
 *     Display_LPI @ 0x1C0007E48 (Display_LPI.c)
 * Callees:
 *     WPP_RECORDER_SF_s @ 0x1C0003D18 (WPP_RECORDER_SF_s.c)
 *     WPP_RECORDER_SF_sD @ 0x1C000606C (WPP_RECORDER_SF_sD.c)
 *     WPP_RECORDER_SF_sDs @ 0x1C00061F4 (WPP_RECORDER_SF_sDs.c)
 *     WPP_RECORDER_SF_si @ 0x1C00064F4 (WPP_RECORDER_SF_si.c)
 */

unsigned __int8 __fastcall DisplayGenAddr(char *a1, const char *a2, __int64 a3, __int64 a4)
{
  unsigned __int8 result; // al
  __int64 v7; // rdx
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  const char *v13; // rax
  PDEVICE_OBJECT v14; // rcx
  unsigned __int16 v15; // r9
  int v16; // [rsp+20h] [rbp-28h]
  __int64 v17; // [rsp+30h] [rbp-18h]

  result = *a1;
  if ( *a1 == 126 )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      return WPP_RECORDER_SF_sD(
               (__int64)WPP_GLOBAL_Control->DeviceExtension,
               5u,
               2u,
               0x94u,
               (__int64)&WPP_eb7b501de93c334997b4c3503e72e86c_Traceguids,
               a2,
               *((_DWORD *)a1 + 1));
    return result;
  }
  if ( !result && !*(_QWORD *)(a1 + 4) )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      return WPP_RECORDER_SF_s(
               (__int64)WPP_GLOBAL_Control->DeviceExtension,
               5u,
               2u,
               0x95u,
               (__int64)&WPP_eb7b501de93c334997b4c3503e72e86c_Traceguids,
               a2);
    return result;
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v7 = result;
    if ( result )
    {
      v8 = result - 1;
      if ( v8 )
      {
        v9 = v8 - 1;
        if ( v9 )
        {
          v10 = v9 - 1;
          if ( v10 )
          {
            v11 = v10 - 1;
            if ( v11 )
            {
              v12 = v11 - 6;
              if ( v12 )
              {
                if ( v12 == 117 )
                  v13 = "FFH";
                else
                  v13 = "Unknown";
              }
              else
              {
                v13 = "PCC";
              }
            }
            else
            {
              v13 = "SM Bus";
            }
          }
          else
          {
            v13 = "EC Space";
          }
        }
        else
        {
          v13 = "Pci Config";
        }
      }
      else
      {
        v13 = "I/O";
      }
    }
    else
    {
      v13 = "Memory";
    }
    result = WPP_RECORDER_SF_sDs((__int64)WPP_GLOBAL_Control->DeviceExtension, v7, a3, a4, v16, a2, v7, (__int64)v13);
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LODWORD(v17) = (unsigned __int8)a1[1];
    result = WPP_RECORDER_SF_sD(
               (__int64)WPP_GLOBAL_Control->DeviceExtension,
               5u,
               2u,
               0x97u,
               (__int64)&WPP_eb7b501de93c334997b4c3503e72e86c_Traceguids,
               a2,
               v17);
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LODWORD(v17) = (unsigned __int8)a1[2];
    result = WPP_RECORDER_SF_sD(
               (__int64)WPP_GLOBAL_Control->DeviceExtension,
               5u,
               2u,
               0x98u,
               (__int64)&WPP_eb7b501de93c334997b4c3503e72e86c_Traceguids,
               a2,
               v17);
  }
  if ( *a1 == 10 )
  {
    v14 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      goto LABEL_35;
    v15 = 153;
  }
  else
  {
    v14 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      goto LABEL_35;
    v15 = 154;
  }
  LODWORD(v17) = (unsigned __int8)a1[3];
  result = WPP_RECORDER_SF_sD(
             (__int64)v14->DeviceExtension,
             5u,
             2u,
             v15,
             (__int64)&WPP_eb7b501de93c334997b4c3503e72e86c_Traceguids,
             a2,
             v17);
LABEL_35:
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    return WPP_RECORDER_SF_si((__int64)WPP_GLOBAL_Control->DeviceExtension, (__int64)a2, a3, a4, v16, a2);
  return result;
}
