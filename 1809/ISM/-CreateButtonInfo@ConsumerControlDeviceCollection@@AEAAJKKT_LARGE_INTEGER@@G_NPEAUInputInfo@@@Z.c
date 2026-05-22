/*
 * XREFs of ?CreateButtonInfo@ConsumerControlDeviceCollection@@AEAAJKKT_LARGE_INTEGER@@G_NPEAUInputInfo@@@Z @ 0x180067514
 * Callers:
 *     ?OnDeviceRemoval@ConsumerControlDeviceCollection@@MEAAJK@Z @ 0x180066FC0 (-OnDeviceRemoval@ConsumerControlDeviceCollection@@MEAAJK@Z.c)
 *     ?OnInputReport@ConsumerControlDeviceCollection@@MEAAJKPEAXK@Z @ 0x180067170 (-OnInputReport@ConsumerControlDeviceCollection@@MEAAJKPEAXK@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall ConsumerControlDeviceCollection::CreateButtonInfo(
        ConsumerControlDeviceCollection *this,
        LONG a2,
        DWORD a3,
        union _LARGE_INTEGER a4,
        unsigned __int16 a5,
        bool a6,
        union _LARGE_INTEGER *a7)
{
  int v7; // eax
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a5 > 0xE9u )
  {
    if ( a5 > 0x223u )
    {
      switch ( a5 )
      {
        case 0x224u:
          v7 = 2;
          goto LABEL_52;
        case 0x225u:
          v7 = 35;
          goto LABEL_52;
        case 0x226u:
          v7 = 36;
          goto LABEL_52;
        case 0x227u:
          v7 = 37;
          goto LABEL_52;
        case 0x22Au:
          v7 = 38;
          goto LABEL_52;
      }
    }
    else
    {
      switch ( a5 )
      {
        case 0x223u:
          v7 = 34;
          goto LABEL_52;
        case 0xEAu:
          v7 = 6;
          goto LABEL_52;
        case 0x183u:
          v7 = 30;
          goto LABEL_52;
        case 0x18Au:
          v7 = 31;
          goto LABEL_52;
        case 0x192u:
          v7 = 32;
          goto LABEL_52;
        case 0x194u:
          v7 = 33;
          goto LABEL_52;
      }
    }
    goto LABEL_46;
  }
  if ( a5 == 233 )
  {
    v7 = 5;
    goto LABEL_52;
  }
  if ( a5 > 0xB4u )
  {
    switch ( a5 )
    {
      case 0xB5u:
        v7 = 22;
        goto LABEL_52;
      case 0xB6u:
        v7 = 23;
        goto LABEL_52;
      case 0xB7u:
        v7 = 24;
        goto LABEL_52;
      case 0xCDu:
        v7 = 25;
        goto LABEL_52;
      case 0xE2u:
        v7 = 26;
        goto LABEL_52;
    }
    goto LABEL_46;
  }
  switch ( a5 )
  {
    case 0xB4u:
      v7 = 21;
      goto LABEL_52;
    case 0x9Cu:
      v7 = 15;
      goto LABEL_52;
    case 0x9Du:
      v7 = 16;
      goto LABEL_52;
  }
  v7 = 19;
  if ( a5 == 176 )
  {
    v7 = 17;
    goto LABEL_52;
  }
  if ( a5 == 177 )
  {
    v7 = 18;
    goto LABEL_52;
  }
  if ( a5 != 178 )
  {
    if ( a5 == 179 )
    {
      v7 = 20;
      goto LABEL_52;
    }
LABEL_46:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x165,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\consumercontroldevicecollection.cpp",
      (const char *)0x80004001LL);
    return 2147500033LL;
  }
LABEL_52:
  a7[65].LowPart = v7;
  BYTE4(a7[65].QuadPart) = a6;
  result = 0LL;
  a7->HighPart = a2;
  a7->LowPart = 128;
  a7[1].LowPart = a3;
  a7[2] = a4;
  BYTE5(a7[64].QuadPart) = 1;
  return result;
}
