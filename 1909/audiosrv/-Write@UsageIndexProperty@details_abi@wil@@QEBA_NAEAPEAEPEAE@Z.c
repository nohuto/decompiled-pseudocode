/*
 * XREFs of ?Write@UsageIndexProperty@details_abi@wil@@QEBA_NAEAPEAEPEAE@Z @ 0x1800459E4
 * Callers:
 *     ?RecordUsageInternal@RawUsageIndex@details_abi@wil@@AEAA_NPEAX_K01I@Z @ 0x180022130 (-RecordUsageInternal@RawUsageIndex@details_abi@wil@@AEAA_NPEAX_K01I@Z.c)
 * Callees:
 *     memcpy_s @ 0x180039174 (memcpy_s.c)
 *     memset_0 @ 0x180065BEE (memset_0.c)
 *     _invalid_parameter_noinfo @ 0x180065CBA (_invalid_parameter_noinfo.c)
 *     memcpy_0 @ 0x18006C963 (memcpy_0.c)
 */

bool __fastcall wil::details_abi::UsageIndexProperty::Write(
        wil::details_abi::UsageIndexProperty *this,
        unsigned __int8 **a2,
        unsigned __int8 *a3)
{
  char v3; // al
  _WORD *v4; // rbx
  unsigned __int64 v8; // r14
  __int64 v9; // rbp
  unsigned __int8 *v10; // rdi
  bool result; // al
  _WORD *v12; // rbp

  v3 = *((_BYTE *)this + 2);
  v4 = *a2;
  if ( v3 == 1 )
  {
    v12 = v4 + 1;
    if ( v4 + 1 > (_WORD *)a3 )
      return 0;
    if ( v4 )
    {
      *v4 = *((_WORD *)this + 2);
    }
    else
    {
      *(_DWORD *)_o__errno(this) = 22;
      invalid_parameter_noinfo();
    }
    goto LABEL_14;
  }
  if ( v3 == 2 )
  {
    v12 = v4 + 2;
    if ( v4 + 2 > (_WORD *)a3 )
      return 0;
    memcpy_s(v4, 4uLL, (char *)this + 4, 4uLL);
LABEL_14:
    v4 = v12;
  }
  if ( !*(_WORD *)this )
  {
    if ( v4 + 1 > (_WORD *)a3 )
      return 0;
    memcpy_s(v4, a3 - (unsigned __int8 *)v4, (char *)this + 8, 2uLL);
    ++v4;
  }
  v8 = *((unsigned __int16 *)this + 4);
  if ( (unsigned __int8 *)((char *)v4 + v8) <= a3 )
  {
    v9 = *((_QWORD *)this + 3);
    v10 = (unsigned __int8 *)(a3 - (unsigned __int8 *)v4);
    if ( *((_WORD *)this + 4) )
    {
      if ( !v4 )
        goto LABEL_21;
      if ( v9 && (unsigned __int64)v10 >= v8 )
      {
        memcpy_0(v4, *((const void **)this + 3), *((unsigned __int16 *)this + 4));
        goto LABEL_10;
      }
      memset_0(v4, 0, (size_t)v10);
      if ( v9 )
      {
        if ( (unsigned __int64)v10 >= v8 )
          goto LABEL_10;
        *(_DWORD *)_o__errno(this) = 34;
      }
      else
      {
LABEL_21:
        *(_DWORD *)_o__errno(this) = 22;
      }
      invalid_parameter_noinfo();
    }
LABEL_10:
    result = 1;
    *a2 = (unsigned __int8 *)v4 + *((unsigned __int16 *)this + 4);
    return result;
  }
  return 0;
}
