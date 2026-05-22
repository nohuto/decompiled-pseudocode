/*
 * XREFs of ?ButtonToGPIOButtonMapping@MobileButtonDeviceCollection@@AEAAJW4_Button@@PEAW4GPIOBUTTONS_BUTTON_TYPE@@@Z @ 0x1800A109C
 * Callers:
 *     ?SendIOCTLMessage@MobileButtonDeviceCollection@@AEAAXW4_Button@@_N@Z @ 0x1800A20A8 (-SendIOCTLMessage@MobileButtonDeviceCollection@@AEAAXW4_Button@@_N@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010F44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall MobileButtonDeviceCollection::ButtonToGPIOButtonMapping(__int64 a1, int a2, int *a3)
{
  int v4; // ecx
  int v5; // edx
  int v6; // edx
  int v7; // edx
  int v8; // edx
  int v9; // edx
  int v10; // edx
  int v11; // edx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !a3 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x317,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\mobilebuttondevicecollection.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
  v4 = 8;
  if ( a2 > 8 )
  {
    v4 = 9;
    v8 = a2 - 9;
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
            if ( v11 != 1 )
              return 2147942487LL;
            v4 = 15;
          }
          else
          {
            v4 = 14;
          }
        }
        else
        {
          v4 = 13;
        }
      }
    }
    else
    {
      v4 = 0;
    }
  }
  else if ( a2 == 8 )
  {
    v4 = 7;
  }
  else if ( a2 )
  {
    v5 = a2 - 2;
    if ( v5 )
    {
      v6 = v5 - 3;
      if ( v6 )
      {
        v7 = v6 - 1;
        if ( v7 )
        {
          if ( v7 != 1 )
            return 2147942487LL;
        }
        else
        {
          v4 = 3;
        }
      }
      else
      {
        v4 = 2;
      }
    }
    else
    {
      v4 = 5;
    }
  }
  else
  {
    v4 = 10;
  }
  *a3 = v4;
  return 0LL;
}
