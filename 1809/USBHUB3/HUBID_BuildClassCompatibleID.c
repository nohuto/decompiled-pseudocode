/*
 * XREFs of HUBID_BuildClassCompatibleID @ 0x1C0019824
 * Callers:
 *     HUBID_BuildCompatibleID @ 0x1C0019B98 (HUBID_BuildCompatibleID.c)
 * Callees:
 *     RtlUnicodeStringPrintf @ 0x1C0010EB4 (RtlUnicodeStringPrintf.c)
 *     HUBID_AssignIDString @ 0x1C0018F70 (HUBID_AssignIDString.c)
 *     HUBMISC_GenerateControllerSuffix @ 0x1C002D808 (HUBMISC_GenerateControllerSuffix.c)
 *     __security_check_cookie @ 0x1C003C520 (__security_check_cookie.c)
 */

int __fastcall HUBID_BuildClassCompatibleID(__int64 a1, __int64 a2, _QWORD *a3, _BYTE *a4)
{
  unsigned __int8 *v7; // rax
  unsigned __int16 v8; // r12
  unsigned __int16 v9; // r14
  unsigned __int16 v10; // r15
  __int64 v11; // rax
  int result; // eax
  _BYTE *v13; // r8
  struct _UNICODE_STRING DestinationString; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v15[2]; // [rsp+80h] [rbp-80h] BYREF
  struct _UNICODE_STRING v16; // [rsp+90h] [rbp-70h] BYREF
  char v17; // [rsp+A0h] [rbp-60h] BYREF
  char v18; // [rsp+B0h] [rbp-50h] BYREF

  *(_DWORD *)&DestinationString.Length = 0x1000000;
  DestinationString.Buffer = (wchar_t *)&v18;
  if ( a3 )
  {
    *a3 = 0LL;
    a3[1] = 0LL;
  }
  v7 = *(unsigned __int8 **)(a1 + 2008);
  if ( v7 )
  {
    v8 = v7[5];
    v9 = v7[6];
    v10 = v7[7];
  }
  else
  {
    v10 = 0;
    v9 = 0;
    v8 = 0;
  }
  if ( (*(_DWORD *)(a1 + 2464) & 0x20) != 0 )
  {
    v11 = *(_QWORD *)(a1 + 2496);
    a4 = (_BYTE *)(v11 + 12);
    if ( *(_BYTE *)(v11 + 12) )
    {
      if ( *(_BYTE *)(v11 + 4) )
      {
        result = RtlUnicodeStringPrintf(&DestinationString, L"USB\\MS_COMP_%.8S&MS_SUBCOMP_%.8S");
        if ( result < 0 )
          return result;
        result = HUBID_AssignIDString((const void **)&DestinationString, 2, a2, (__int64)a3);
        if ( result < 0 )
          return result;
      }
    }
    v13 = (_BYTE *)(*(_QWORD *)(a1 + 2496) + 4LL);
  }
  else
  {
    v13 = *(_BYTE **)(a1 + 2104);
    if ( !v13 )
      goto LABEL_20;
    a4 = v13 + 26;
    if ( v13[26] )
    {
      result = RtlUnicodeStringPrintf(&DestinationString, L"USB\\MS_COMP_%.8S&MS_SUBCOMP_%.8S", v13 + 18);
      if ( result < 0 )
        return result;
      result = HUBID_AssignIDString((const void **)&DestinationString, 2, a2, (__int64)a3);
      if ( result < 0 )
        return result;
    }
    v13 = (_BYTE *)(*(_QWORD *)(a1 + 2104) + 18LL);
  }
  if ( *v13 )
  {
    result = RtlUnicodeStringPrintf(&DestinationString, L"USB\\MS_COMP_%.8S");
    if ( result < 0 )
      return result;
    result = HUBID_AssignIDString((const void **)&DestinationString, 2, a2, (__int64)a3);
    if ( result < 0 )
      return result;
  }
LABEL_20:
  if ( v8 == 1 && (v10 & 0xFFDF) == 0 && (*(_DWORD *)(a1 + 1644) & 0x1000000) != 0 )
  {
    v15[0] = 0x100000LL;
    *(_QWORD *)&v16.Length = 0LL;
    v16.Buffer = 0LL;
    v15[1] = &v17;
    HUBMISC_GenerateControllerSuffix(a1, v15, v13, a4);
    if ( !LOWORD(v15[0]) )
    {
LABEL_27:
      if ( v16.Buffer )
        ExFreePoolWithTag(v16.Buffer, 0x64334855u);
      goto LABEL_29;
    }
    v16.Buffer = (wchar_t *)ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 0xC0uLL, 0x64334855u);
    if ( v16.Buffer )
    {
      v16.MaximumLength = 192;
      if ( RtlUnicodeStringPrintf(
             &v16,
             L"USB\\Class_%02X&Subclass_%02X&Prot_%02X&%wZ%cUSB\\Class_%02X&Subclass_%02X&%wZ%cUSB\\Class_%02X&%wZ") >= 0 )
        HUBID_AssignIDString((const void **)&v16, 2, a2, (__int64)a3);
      goto LABEL_27;
    }
  }
LABEL_29:
  result = RtlUnicodeStringPrintf(&DestinationString, L"USB\\Class_%02X&SubClass_%02X&Prot_%02X", v8, v9, v10);
  if ( result >= 0 )
  {
    result = HUBID_AssignIDString((const void **)&DestinationString, 2, a2, (__int64)a3);
    if ( result >= 0 )
    {
      result = RtlUnicodeStringPrintf(&DestinationString, L"USB\\Class_%02X&SubClass_%02X", v8, v9);
      if ( result >= 0 )
      {
        result = HUBID_AssignIDString((const void **)&DestinationString, 2, a2, (__int64)a3);
        if ( result >= 0 )
        {
          result = RtlUnicodeStringPrintf(&DestinationString, L"USB\\Class_%02X", v8);
          if ( result >= 0 )
            return HUBID_AssignIDString((const void **)&DestinationString, 2, a2, (__int64)a3);
        }
      }
    }
  }
  return result;
}
