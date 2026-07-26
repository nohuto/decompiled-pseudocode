/*
 * XREFs of ?ndisTemporarilyScribbleNetLuidIndex@@YAXAEAVKRegKey@@AEAT_NET_LUID_LH@@@Z @ 0x1C0107574
 * Callers:
 *     ndisPnPAddDevice @ 0x1C002D994 (ndisPnPAddDevice.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0040770 (__security_check_cookie.c)
 *     ?NdisTraceLoggingTemporarilyScribbleNetLuidIndex@@YAXAEAT_NET_LUID_LH@@@Z @ 0x1C01237D4 (-NdisTraceLoggingTemporarilyScribbleNetLuidIndex@@YAXAEAT_NET_LUID_LH@@@Z.c)
 */

void __fastcall ndisTemporarilyScribbleNetLuidIndex(struct KRegKey *a1, union _NET_LUID_LH *a2)
{
  const wchar_t *v4; // rax
  int v5; // esi
  __int64 v6; // rdx
  NTSTATUS v7; // eax
  __int16 v8; // cx
  void *m_ptr; // rcx
  ULONG64 v10; // rdx
  const wchar_t *v11; // rcx
  __int64 v12; // rax
  __int16 v13; // bx
  void *v14; // rcx
  ULONG Data; // [rsp+30h] [rbp-40h] BYREF
  _UNICODE_STRING ValueName; // [rsp+38h] [rbp-38h] BYREF
  __int64 KeyValueInformation; // [rsp+48h] [rbp-28h] BYREF
  __int64 v18; // [rsp+50h] [rbp-20h]
  int v19; // [rsp+58h] [rbp-18h]

  *(_QWORD *)&ValueName.Length = 0LL;
  ValueName.Buffer = 0LL;
  v4 = L"NetLuidIndex";
  v5 = 0;
  v6 = 0x7FFFLL;
  do
  {
    if ( !*v4 )
      break;
    ++v4;
    --v6;
  }
  while ( v6 );
  v7 = v6 == 0 ? 0xC000000D : 0;
  if ( v6 )
    v8 = 0x7FFF - v6;
  else
    v8 = 0;
  if ( v6 )
  {
    ValueName.Buffer = L"NetLuidIndex";
    ValueName.Length = 2 * v8;
    ValueName.MaximumLength = 2 * v8 + 2;
    m_ptr = a1->m_ptr;
    KeyValueInformation = 0LL;
    v18 = 0LL;
    v19 = 0;
    v7 = ZwQueryValueKey(m_ptr, &ValueName, KeyValuePartialInformation, &KeyValueInformation, 0x14u, &Data);
    if ( v7 >= 0 )
    {
      if ( HIDWORD(KeyValueInformation) == 4 )
      {
        if ( (_DWORD)v18 == 4 )
        {
          v5 = HIDWORD(v18);
          v7 = 0;
        }
        else
        {
          v7 = -1073741789;
        }
      }
      else
      {
        v7 = -1073741788;
      }
    }
  }
  if ( v7 < 0 || v5 != ((a2->Value >> 24) & 0xFFFFFF) )
  {
    v10 = (a2->Value >> 24) & 0xFFFFFF;
    v11 = L"NetLuidIndex";
    *(_QWORD *)&ValueName.Length = 0LL;
    ValueName.Buffer = 0LL;
    v12 = 0x7FFFLL;
    do
    {
      if ( !*v11 )
        break;
      ++v11;
      --v12;
    }
    while ( v12 );
    if ( v12 )
      v13 = 0x7FFF - v12;
    else
      v13 = 0;
    if ( v12 )
    {
      ValueName.Buffer = L"NetLuidIndex";
      ValueName.Length = 2 * v13;
      ValueName.MaximumLength = 2 * v13 + 2;
      v14 = a1->m_ptr;
      Data = v10;
      ZwSetValueKey(v14, &ValueName, 0, 4u, &Data, 4u);
    }
    NdisTraceLoggingTemporarilyScribbleNetLuidIndex(a2);
  }
}
