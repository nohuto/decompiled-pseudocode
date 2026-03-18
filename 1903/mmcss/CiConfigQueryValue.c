/*
 * XREFs of CiConfigQueryValue @ 0x1C000DB30
 * Callers:
 *     CiConfigQueryTaskFromRegistry @ 0x1C000DA40 (CiConfigQueryTaskFromRegistry.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0002EE0 (__security_check_cookie.c)
 *     __report_rangecheckfailure @ 0x1C0002F20 (__report_rangecheckfailure.c)
 *     memmove @ 0x1C00030C0 (memmove.c)
 *     WPP_SF_Zd @ 0x1C000449C (WPP_SF_Zd.c)
 *     WPP_SF_L @ 0x1C0004A40 (WPP_SF_L.c)
 */

__int64 __fastcall CiConfigQueryValue(HANDLE KeyHandle, __int64 a2, _QWORD *a3)
{
  const WCHAR *v4; // rdx
  __int64 v7; // rsi
  __int64 v8; // rdx
  NTSTATUS v9; // ebx
  __int64 v10; // r8
  _QWORD *v11; // rax
  unsigned __int64 v13; // rbx
  unsigned __int64 v14; // rbx
  unsigned int v15; // r15d
  __int64 Length; // [rsp+20h] [rbp-F8h]
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-E8h] BYREF
  ULONG ResultLength[4]; // [rsp+40h] [rbp-D8h] BYREF
  _BYTE KeyValueInformation[8]; // [rsp+50h] [rbp-C8h] BYREF
  unsigned int Src; // [rsp+58h] [rbp-C0h]
  unsigned int Src_4; // [rsp+5Ch] [rbp-BCh] BYREF
  wchar_t Str1[32]; // [rsp+A0h] [rbp-78h] BYREF

  v4 = *(const WCHAR **)a2;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  RtlInitUnicodeStringEx(&DestinationString, v4);
  LODWORD(v7) = *(_DWORD *)(a2 + 8);
  v9 = ZwQueryValueKey(
         KeyHandle,
         &DestinationString,
         KeyValuePartialInformation,
         KeyValueInformation,
         0x50u,
         ResultLength);
  if ( v9 < 0 )
  {
    if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u )
    {
      LODWORD(Length) = v9;
      WPP_SF_Zd(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        0xAu,
        (__int64)&WPP_1d5a60252b7d3a9c2ed54ac3501c653e_Traceguids,
        &DestinationString.Length,
        Length);
    }
    goto LABEL_9;
  }
  if ( (*(_DWORD *)(a2 + 24) & 0x1F) == 1 )
  {
    if ( Src >= 0x40 )
    {
      v9 = -1073741562;
      goto LABEL_31;
    }
    v13 = Src;
    memmove(Str1, &Src_4, Src);
    v14 = v13 >> 1;
    if ( v14 >= 32 )
      _report_rangecheckfailure();
    v15 = 0;
    Str1[v14] = 0;
    v9 = -1073741811;
    if ( !*(_DWORD *)(a2 + 36) )
      goto LABEL_31;
    while ( _wcsicmp(Str1, *(const wchar_t **)(*(_QWORD *)(a2 + 16) + 16LL * v15)) )
    {
      if ( ++v15 >= *(_DWORD *)(a2 + 36) )
        goto LABEL_31;
    }
    v7 = *(_QWORD *)(*(_QWORD *)(a2 + 16) + 16LL * v15 + 8);
LABEL_9:
    v9 = 0;
LABEL_10:
    *a3 = (unsigned int)v7;
    goto LABEL_11;
  }
  if ( (*(_DWORD *)(a2 + 24) & 0x1F) != 2 )
  {
    if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
      WPP_SF_L((__int64)WPP_GLOBAL_Control->AttachedDevice, v8, v10, *(_DWORD *)(a2 + 24) & 0x1F);
    goto LABEL_28;
  }
  if ( Src != 4 || (v11 = *(_QWORD **)(a2 + 16), LODWORD(v7) = Src_4, (unsigned __int64)Src_4 < *v11) )
  {
LABEL_28:
    v9 = -1073741811;
    goto LABEL_31;
  }
  if ( (unsigned __int64)Src_4 <= v11[1] )
    goto LABEL_10;
  v9 = -1073741811;
LABEL_31:
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
  {
    LODWORD(Length) = v9;
    WPP_SF_Zd(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      0xCu,
      (__int64)&WPP_1d5a60252b7d3a9c2ed54ac3501c653e_Traceguids,
      &DestinationString.Length,
      Length);
  }
LABEL_11:
  if ( v9 >= 0 && (*(_BYTE *)(a2 + 28) & 1) != 0 )
    --*a3;
  return (unsigned int)v9;
}
