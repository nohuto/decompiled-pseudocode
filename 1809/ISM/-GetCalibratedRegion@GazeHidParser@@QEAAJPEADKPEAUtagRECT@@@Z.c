/*
 * XREFs of ?GetCalibratedRegion@GazeHidParser@@QEAAJPEADKPEAUtagRECT@@@Z @ 0x1800C10E4
 * Callers:
 *     ?TryUpdateDisplayMapping@GazeHidDevice@@QEAAJXZ @ 0x18006A378 (-TryUpdateDisplayMapping@GazeHidDevice@@QEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetPropertyValue@GazeHidParser@@QEAAJW4GazeProperty@@PEADKW4_HIDP_REPORT_TYPE@@PEAXK@Z @ 0x1800C0CE8 (-GetPropertyValue@GazeHidParser@@QEAAJW4GazeProperty@@PEADKW4_HIDP_REPORT_TYPE@@PEAXK@Z.c)
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 */

__int64 __fastcall GazeHidParser::GetCalibratedRegion(GazeHidParser *this, char *a2, ULONG a3, struct tagRECT *a4)
{
  LONG v6; // eax
  LONG LogicalMax; // eax
  __int64 *v9; // rdx
  __int64 *v10; // rcx
  __int64 *v11; // rax
  USHORT v12; // r14
  NTSTATUS SpecificValueCaps; // edi
  __int64 v14; // rdx
  USHORT ValueCapsLength; // [rsp+40h] [rbp-39h] BYREF
  __int64 v16; // [rsp+48h] [rbp-31h] BYREF
  struct _HIDP_VALUE_CAPS ValueCaps; // [rsp+50h] [rbp-29h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]

  v16 = 0LL;
  if ( a2 && (int)GazeHidParser::GetPropertyValue((__int64)this, 4, a2, a3, HidP_Feature, (PCHAR)&v16, 8u) >= 0 )
  {
    v6 = v16;
    a4->left = 0;
    a4->top = 0;
    a4->right = v6;
    LogicalMax = HIDWORD(v16);
LABEL_4:
    a4->bottom = LogicalMax;
    return 0LL;
  }
  memset_0(&ValueCaps, 0, sizeof(ValueCaps));
  v9 = (__int64 *)*((_QWORD *)this + 9);
  ValueCapsLength = 1;
  v10 = v9;
  v11 = (__int64 *)v9[1];
  if ( *((_BYTE *)v11 + 25) )
    goto LABEL_18;
  do
  {
    if ( *((int *)v11 + 7) >= 6 )
    {
      v10 = v11;
      v11 = (__int64 *)*v11;
    }
    else
    {
      v11 = (__int64 *)v11[2];
    }
  }
  while ( !*((_BYTE *)v11 + 25) );
  if ( v10 == v9 || *((int *)v10 + 7) > 6 )
  {
LABEL_18:
    std::_Xout_of_range("invalid map<K, T> key");
    JUMPOUT(0x1800C1287LL);
  }
  v12 = *((_WORD *)v10 + 16);
  SpecificValueCaps = HidP_GetSpecificValueCaps(
                        HidP_Input,
                        0x12u,
                        v12,
                        0x21u,
                        &ValueCaps,
                        &ValueCapsLength,
                        *((PHIDP_PREPARSED_DATA *)this + 8));
  if ( SpecificValueCaps >= 0 )
  {
    a4->left = ValueCaps.LogicalMin;
    a4->right = ValueCaps.LogicalMax;
    SpecificValueCaps = HidP_GetSpecificValueCaps(
                          HidP_Input,
                          0x12u,
                          v12,
                          0x22u,
                          &ValueCaps,
                          &ValueCapsLength,
                          *((PHIDP_PREPARSED_DATA *)this + 8));
    if ( SpecificValueCaps >= 0 )
    {
      a4->top = ValueCaps.LogicalMin;
      LogicalMax = ValueCaps.LogicalMax;
      goto LABEL_4;
    }
    v14 = 534LL;
  }
  else
  {
    v14 = 522LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v14,
    (__int64)"onecoreuap\\windows\\input\\gaze\\hid\\lib\\gazehidparser.cpp",
    (const char *)(unsigned int)SpecificValueCaps);
  return (unsigned int)SpecificValueCaps;
}
