/*
 * XREFs of GetContainerId @ 0x18005641C
 * Callers:
 *     ?OnPropertyChange@SpatialPolicy@@SAJPEAUIMMDevice@@AEBU_tagpropertykey@@@Z @ 0x18001E45C (-OnPropertyChange@SpatialPolicy@@SAJPEAUIMMDevice@@AEBU_tagpropertykey@@@Z.c)
 *     ?DetectComboEndpoint@SpatialPolicy@@SAJPEAUIMMDevice@@@Z @ 0x180056328 (-DetectComboEndpoint@SpatialPolicy@@SAJPEAUIMMDevice@@@Z.c)
 *     IsInternalFormFactorOf @ 0x18010FFC0 (IsInternalFormFactorOf.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005F87C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GetContainerId(__int64 a1, __int64 a2, _OWORD *a3)
{
  int v4; // ebx
  char v5; // bl
  __int64 v7; // rdx
  PROPVARIANT pvar; // [rsp+20h] [rbp-28h] BYREF
  _OWORD *v9; // [rsp+28h] [rbp-20h]
  __int64 v10; // [rsp+30h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  pvar = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64, const PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)a2 + 40LL))(
         a2,
         &PKEY_Device_ContainerId,
         &pvar);
  if ( v4 < 0 )
  {
    v7 = 91LL;
  }
  else
  {
    if ( (_WORD)pvar == 72 )
    {
      v5 = 1;
      *a3 = *v9;
    }
    else
    {
      v5 = 0;
    }
    PropVariantClear(&pvar);
    if ( v5 )
      return 0LL;
    v4 = -2147024894;
    v7 = 99LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v7,
    (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\spatialpolicy.cpp",
    (const char *)(unsigned int)v4,
    (int)pvar);
  return (unsigned int)v4;
}
