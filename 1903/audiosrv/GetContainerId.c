/*
 * XREFs of GetContainerId @ 0x1800437E0
 * Callers:
 *     IsInternalFormFactorOf @ 0x1800054B4 (IsInternalFormFactorOf.c)
 *     ?OnPropertyChange@SpatialPolicy@@SAJPEAUIMMDevice@@AEBU_tagpropertykey@@@Z @ 0x18001C728 (-OnPropertyChange@SpatialPolicy@@SAJPEAUIMMDevice@@AEBU_tagpropertykey@@@Z.c)
 *     ?DetectComboEndpoint@SpatialPolicy@@SAJPEAUIMMDevice@@@Z @ 0x180062434 (-DetectComboEndpoint@SpatialPolicy@@SAJPEAUIMMDevice@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005A38 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
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
    (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\spatialpolicy.cpp",
    (const char *)(unsigned int)v4);
  return (unsigned int)v4;
}
