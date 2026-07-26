/*
 * XREFs of ?ndisCheckAlwaysStartFlag@@YAJAEAVKRegKey@@AEA_N@Z @ 0x1C01179E8
 * Callers:
 *     ndisPnPAddDevice @ 0x1C002D994 (ndisPnPAddDevice.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0040770 (__security_check_cookie.c)
 */

NTSTATUS __fastcall ndisCheckAlwaysStartFlag(struct KRegKey *a1, bool *a2)
{
  int v3; // edi
  const wchar_t *v4; // rax
  __int64 v5; // r9
  NTSTATUS result; // eax
  __int16 v7; // r8
  void *m_ptr; // rcx
  _UNICODE_STRING ValueName; // [rsp+30h] [rbp-40h] BYREF
  ULONG ResultLength; // [rsp+40h] [rbp-30h] BYREF
  __int64 KeyValueInformation; // [rsp+48h] [rbp-28h] BYREF
  __int64 v12; // [rsp+50h] [rbp-20h]
  int v13; // [rsp+58h] [rbp-18h]

  *(_QWORD *)&ValueName.Length = 0LL;
  ValueName.Buffer = 0LL;
  v3 = 0;
  v4 = L"AlwaysStartDevice";
  v5 = 0x7FFFLL;
  do
  {
    if ( !*v4 )
      break;
    ++v4;
    --v5;
  }
  while ( v5 );
  result = v5 == 0 ? 0xC000000D : 0;
  if ( v5 )
    v7 = 0x7FFF - v5;
  else
    v7 = 0;
  if ( v5 )
  {
    ValueName.Buffer = L"AlwaysStartDevice";
    ValueName.Length = 2 * v7;
    ValueName.MaximumLength = 2 * v7 + 2;
    m_ptr = a1->m_ptr;
    KeyValueInformation = 0LL;
    v12 = 0LL;
    v13 = 0;
    result = ZwQueryValueKey(m_ptr, &ValueName, KeyValuePartialInformation, &KeyValueInformation, 0x14u, &ResultLength);
    if ( result >= 0 )
    {
      if ( HIDWORD(KeyValueInformation) == 4 )
      {
        if ( (_DWORD)v12 == 4 )
        {
          v3 = HIDWORD(v12);
          result = 0;
        }
        else
        {
          result = -1073741789;
        }
      }
      else
      {
        result = -1073741788;
      }
    }
  }
  if ( result == -1073741772 )
  {
    *a2 = 0;
  }
  else
  {
    if ( result )
      return result;
    *a2 = v3 != 0;
  }
  return 0;
}
