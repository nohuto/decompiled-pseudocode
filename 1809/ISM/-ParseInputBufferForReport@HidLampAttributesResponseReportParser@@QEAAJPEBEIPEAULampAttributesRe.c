/*
 * XREFs of ?ParseInputBufferForReport@HidLampAttributesResponseReportParser@@QEAAJPEBEIPEAULampAttributesResponseDeviceReport@@@Z @ 0x18007F56C
 * Callers:
 *     ?ReceiveLampAttributesReport@HidLampArrayDevice@@AEAAJPEAULampAttributesResponseDeviceReport@@@Z @ 0x18007A2FC (-ReceiveLampAttributesReport@HidLampArrayDevice@@AEAAJPEAULampAttributesResponseDeviceReport@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ParseValue@HidChannelValueInfo@@QEAAJ_KPEBEPEAH@Z @ 0x18007E170 (-ParseValue@HidChannelValueInfo@@QEAAJ_KPEBEPEAH@Z.c)
 *     ?ParseValue@HidChannelValueInfo@@QEAAJ_KPEBEPEAE@Z @ 0x18007E1DC (-ParseValue@HidChannelValueInfo@@QEAAJ_KPEBEPEAE@Z.c)
 */

__int64 __fastcall HidLampAttributesResponseReportParser::ParseInputBufferForReport(
        HidLampAttributesResponseReportParser *this,
        const unsigned __int8 *a2,
        unsigned int a3,
        struct LampAttributesResponseDeviceReport *a4)
{
  unsigned __int64 v4; // rsi
  int v7; // ebp
  __int64 v8; // r9
  __int64 v9; // r11
  __int64 v10; // rdx
  __int64 v12; // r11
  __int64 v13; // r11
  __int64 v14; // r11
  __int64 v15; // r11
  __int64 v16; // r11
  _BYTE *v17; // r11
  unsigned int *v18; // r9
  unsigned __int8 *v19; // r9
  unsigned __int8 *v20; // r9
  unsigned __int8 *v21; // r9
  unsigned __int8 *v22; // r9
  int v23; // eax
  unsigned int v24; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = a3;
  v7 = HidChannelValueInfo::ParseValue(
         (HidLampAttributesResponseReportParser *)((char *)this + 24),
         a3,
         a2,
         (unsigned int *)a4);
  if ( v7 < 0 )
  {
    v10 = 179LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlampattributesresponsereportparser.cpp",
      (const char *)(unsigned int)v7);
    return (unsigned int)v7;
  }
  v7 = HidChannelValueInfo::ParseValue((HidChannelValueInfo *)(v9 + 96), v4, a2, (unsigned int *)(v8 + 4));
  if ( v7 < 0 )
  {
    v10 = 180LL;
    goto LABEL_3;
  }
  v7 = HidChannelValueInfo::ParseValue((HidChannelValueInfo *)(v12 + 168), v4, a2, (unsigned int *)a4 + 2);
  if ( v7 < 0 )
  {
    v10 = 181LL;
    goto LABEL_3;
  }
  v7 = HidChannelValueInfo::ParseValue((HidChannelValueInfo *)(v13 + 240), v4, a2, (unsigned int *)a4 + 3);
  if ( v7 < 0 )
  {
    v10 = 182LL;
    goto LABEL_3;
  }
  v7 = HidChannelValueInfo::ParseValue((HidChannelValueInfo *)(v14 + 312), v4, a2, (unsigned int *)a4 + 4);
  if ( v7 < 0 )
  {
    v10 = 183LL;
    goto LABEL_3;
  }
  v7 = HidChannelValueInfo::ParseValue((HidChannelValueInfo *)(v15 + 384), v4, a2, (unsigned int *)a4 + 5);
  if ( v7 < 0 )
  {
    v10 = 184LL;
    goto LABEL_3;
  }
  v7 = HidChannelValueInfo::ParseValue((HidChannelValueInfo *)(v16 + 456), v4, a2, (unsigned int *)a4 + 6);
  if ( v7 < 0 )
  {
    v10 = 185LL;
    goto LABEL_3;
  }
  v18 = (unsigned int *)((char *)a4 + 28);
  if ( v17[892] )
  {
    v7 = HidChannelValueInfo::ParseValue((HidChannelValueInfo *)(v17 + 528), v4, a2, v18);
    if ( v7 < 0 )
    {
      v10 = 190LL;
      goto LABEL_3;
    }
  }
  else
  {
    *v18 = 0;
  }
  v19 = (unsigned __int8 *)a4 + 32;
  if ( v17[888] )
  {
    v7 = HidChannelValueInfo::ParseValue((HidChannelValueInfo *)(v17 + 600), v4, a2, v19);
    if ( v7 < 0 )
    {
      v10 = 200LL;
      goto LABEL_3;
    }
  }
  else
  {
    *v19 = 0;
  }
  v20 = (unsigned __int8 *)a4 + 33;
  if ( v17[889] )
  {
    v7 = HidChannelValueInfo::ParseValue((HidChannelValueInfo *)(v17 + 672), v4, a2, v20);
    if ( v7 < 0 )
    {
      v10 = 209LL;
      goto LABEL_3;
    }
  }
  else
  {
    *v20 = 0;
  }
  v21 = (unsigned __int8 *)a4 + 34;
  if ( v17[890] )
  {
    v7 = HidChannelValueInfo::ParseValue((HidChannelValueInfo *)(v17 + 744), v4, a2, v21);
    if ( v7 < 0 )
    {
      v10 = 218LL;
      goto LABEL_3;
    }
  }
  else
  {
    *v21 = 0;
  }
  v22 = (unsigned __int8 *)a4 + 35;
  if ( v17[891] )
  {
    v23 = HidChannelValueInfo::ParseValue((HidChannelValueInfo *)(v17 + 816), v4, a2, v22);
    v24 = v23;
    if ( v23 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xE3,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlampattributesresponsereportparser.cpp",
        (const char *)(unsigned int)v23);
      return v24;
    }
  }
  else
  {
    *v22 = 1;
  }
  return 0LL;
}
