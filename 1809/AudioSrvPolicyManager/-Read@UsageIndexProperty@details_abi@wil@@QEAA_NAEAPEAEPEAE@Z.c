/*
 * XREFs of ?Read@UsageIndexProperty@details_abi@wil@@QEAA_NAEAPEAEPEAE@Z @ 0x1800048F0
 * Callers:
 *     ?FindInsertionPointOrIncrement@RawUsageIndex@details_abi@wil@@AEAAPEAEAEAUUsageIndexProperty@23@PEAEPEAX_KI@Z @ 0x180004D94 (-FindInsertionPointOrIncrement@RawUsageIndex@details_abi@wil@@AEAAPEAEAEAUUsageIndexProperty@23@.c)
 *     ?RecordUsageInternal@RawUsageIndex@details_abi@wil@@AEAA_NPEAX_K01I@Z @ 0x18000507C (-RecordUsageInternal@RawUsageIndex@details_abi@wil@@AEAA_NPEAX_K01I@Z.c)
 *     ?RecordWnfUsageIndex@details_abi@wil@@YAXPEBU__WIL__WNF_STATE_NAME@@_KAEBVRawUsageIndex@12@@Z @ 0x180005480 (-RecordWnfUsageIndex@details_abi@wil@@YAXPEBU__WIL__WNF_STATE_NAME@@_KAEBVRawUsageIndex@12@@Z.c)
 * Callees:
 *     memcpy_s @ 0x180001654 (memcpy_s.c)
 *     _invalid_parameter_noinfo @ 0x180037752 (_invalid_parameter_noinfo.c)
 */

bool __fastcall wil::details_abi::UsageIndexProperty::Read(
        wil::details_abi::UsageIndexProperty *this,
        unsigned __int8 **a2,
        unsigned __int8 *a3)
{
  char v3; // al
  unsigned __int16 *v5; // r8
  unsigned __int16 *v8; // rsi
  unsigned __int16 v9; // bp
  unsigned __int16 v10; // ax
  unsigned __int16 *v11; // rsi
  unsigned __int8 *v12; // rcx
  bool result; // al

  v3 = *((_BYTE *)this + 2);
  v5 = (unsigned __int16 *)*a2;
  if ( v3 == 1 )
  {
    v8 = v5 + 1;
    if ( v5 + 1 > (unsigned __int16 *)a3 )
      return 0;
    *((_QWORD *)this + 2) = v5;
    if ( v5 )
    {
      v9 = *v5;
    }
    else
    {
      v9 = 0;
      *(_DWORD *)_o__errno() = 22;
      invalid_parameter_noinfo();
    }
    *((_DWORD *)this + 1) = v9;
  }
  else
  {
    if ( v3 != 2 )
      goto LABEL_11;
    v8 = v5 + 2;
    if ( v5 + 2 > (unsigned __int16 *)a3 )
      return 0;
    *((_QWORD *)this + 2) = v5;
    memcpy_s((char *)this + 4, 4uLL, v5, 4uLL);
  }
  v5 = v8;
LABEL_11:
  v10 = *(_WORD *)this;
  *((_WORD *)this + 4) = *(_WORD *)this;
  if ( v10 )
    goto LABEL_14;
  v11 = v5 + 1;
  if ( v5 + 1 > (unsigned __int16 *)a3 )
    return 0;
  memcpy_s((char *)this + 8, 2uLL, v5, 2uLL);
  v10 = *((_WORD *)this + 4);
  v5 = v11;
LABEL_14:
  v12 = (unsigned __int8 *)v5 + v10;
  if ( v12 > a3 )
    return 0;
  *((_QWORD *)this + 3) = v5;
  result = 1;
  *a2 = v12;
  return result;
}
