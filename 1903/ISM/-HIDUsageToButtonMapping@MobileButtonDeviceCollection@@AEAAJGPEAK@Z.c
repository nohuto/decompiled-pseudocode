/*
 * XREFs of ?HIDUsageToButtonMapping@MobileButtonDeviceCollection@@AEAAJGPEAK@Z @ 0x1800A1530
 * Callers:
 *     ?CreateButtonInfo@MobileButtonDeviceCollection@@AEAAJKKT_LARGE_INTEGER@@G_NPEAUInputInfo@@@Z @ 0x1800A1414 (-CreateButtonInfo@MobileButtonDeviceCollection@@AEAAJKKT_LARGE_INTEGER@@G_NPEAUInputInfo@@@Z.c)
 *     ?OnInvalidateInput@MobileButtonDeviceCollection@@UEAAJPEAX@Z @ 0x1800A1F70 (-OnInvalidateInput@MobileButtonDeviceCollection@@UEAAJPEAX@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010FD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall MobileButtonDeviceCollection::HIDUsageToButtonMapping(
        MobileButtonDeviceCollection *this,
        unsigned __int16 a2,
        unsigned int *a3)
{
  unsigned int v3; // r9d
  __int64 v4; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = 0;
  if ( !a3 )
  {
    v4 = 552LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v4,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\mobilebuttondevicecollection.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
  if ( a2 <= 0x41u )
  {
    switch ( a2 )
    {
      case 'A':
        v3 = 10;
        goto LABEL_28;
      case ')':
      case ':':
        v3 = 2;
        goto LABEL_28;
      case ';':
        v3 = 1;
        goto LABEL_28;
      case '<':
        v3 = 3;
        goto LABEL_28;
      case '?':
        v3 = 8;
        goto LABEL_28;
      case '@':
        v3 = 7;
        goto LABEL_28;
    }
LABEL_24:
    v4 = 632LL;
    goto LABEL_3;
  }
  if ( a2 == 66 )
  {
    v3 = 5;
    goto LABEL_28;
  }
  if ( a2 == 67 )
  {
    v3 = 6;
    goto LABEL_28;
  }
  if ( a2 != 68 )
  {
    if ( a2 == 69 || a2 == 104 )
    {
      v3 = 9;
      goto LABEL_28;
    }
    v3 = 11;
    if ( a2 != 115 )
      goto LABEL_24;
  }
LABEL_28:
  *a3 = v3;
  return 0LL;
}
