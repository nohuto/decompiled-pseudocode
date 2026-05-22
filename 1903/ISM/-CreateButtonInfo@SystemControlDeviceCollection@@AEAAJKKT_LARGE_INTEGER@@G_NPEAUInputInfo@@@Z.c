/*
 * XREFs of ?CreateButtonInfo@SystemControlDeviceCollection@@AEAAJKKT_LARGE_INTEGER@@G_NPEAUInputInfo@@@Z @ 0x1800A3AB4
 * Callers:
 *     ?OnDeviceRemoval@SystemControlDeviceCollection@@MEAAJK@Z @ 0x1800A3CE0 (-OnDeviceRemoval@SystemControlDeviceCollection@@MEAAJK@Z.c)
 *     ?OnInputReport@SystemControlDeviceCollection@@MEAAJKPEAXK@Z @ 0x1800A3E70 (-OnInputReport@SystemControlDeviceCollection@@MEAAJKPEAXK@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010FD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?__private_IsEnabled@?$Feature@U__WilFeatureTraits_Feature_SupportFnKey@@@wil@@SA_NXZ @ 0x180035318 (-__private_IsEnabled@-$Feature@U__WilFeatureTraits_Feature_SupportFnKey@@@wil@@SA_NXZ.c)
 */

__int64 __fastcall SystemControlDeviceCollection::CreateButtonInfo(
        SystemControlDeviceCollection *this,
        LONG a2,
        DWORD a3,
        union _LARGE_INTEGER a4,
        unsigned __int16 a5,
        bool a6,
        union _LARGE_INTEGER *a7)
{
  int v10; // eax
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !wil::Feature<__WilFeatureTraits_Feature_SupportFnKey>::__private_IsEnabled((__int64)this) )
  {
    if ( a5 != 129 )
      goto LABEL_12;
LABEL_10:
    v10 = 9;
    goto LABEL_11;
  }
  switch ( a5 )
  {
    case 0x81u:
      goto LABEL_10;
    case 0x97u:
      v10 = 237;
      goto LABEL_11;
    case 0x98u:
      v10 = 238;
      goto LABEL_11;
    case 0x99u:
      v10 = 239;
LABEL_11:
      a7[8].LowPart = v10;
      BYTE4(a7[8].QuadPart) = a6;
      result = 0LL;
      a7->HighPart = a2;
      a7->LowPart = 128;
      a7[1].LowPart = a3;
      a7[2] = a4;
      BYTE1(a7[6].LowPart) = 1;
      return result;
  }
LABEL_12:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x149,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\systemcontroldevicecollection.cpp",
    (const char *)0x80004001LL);
  return 2147500033LL;
}
