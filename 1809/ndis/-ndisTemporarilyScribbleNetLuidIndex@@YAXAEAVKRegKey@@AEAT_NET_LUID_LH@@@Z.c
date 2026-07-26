/*
 * XREFs of ?ndisTemporarilyScribbleNetLuidIndex@@YAXAEAVKRegKey@@AEAT_NET_LUID_LH@@@Z @ 0x1C00C9160
 * Callers:
 *     ndisPnPAddDevice @ 0x1C00C7EC0 (ndisPnPAddDevice.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0026050 (__security_check_cookie.c)
 *     ?NdisTraceLoggingTemporarilyScribbleNetLuidIndex@@YAXAEAT_NET_LUID_LH@@@Z @ 0x1C0103374 (-NdisTraceLoggingTemporarilyScribbleNetLuidIndex@@YAXAEAT_NET_LUID_LH@@@Z.c)
 */

void __fastcall ndisTemporarilyScribbleNetLuidIndex(struct KRegKey *a1, union _NET_LUID_LH *a2)
{
  int v2; // ebx
  const wchar_t *v5; // rax
  __int64 v6; // rcx
  __int16 v7; // ax
  void *m_ptr; // rcx
  int v9; // eax
  const wchar_t *v10; // rdx
  ULONG64 v11; // rcx
  __int64 v12; // rax
  __int16 v13; // di
  ULONG Data; // [rsp+30h] [rbp-58h] BYREF
  _UNICODE_STRING ValueName; // [rsp+38h] [rbp-50h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+48h] [rbp-40h] BYREF
  int v17; // [rsp+4Ch] [rbp-3Ch]
  int v18; // [rsp+50h] [rbp-38h]
  int v19; // [rsp+54h] [rbp-34h]

  v2 = 0;
  *(_QWORD *)&ValueName.Length = 0LL;
  ValueName.Buffer = 0LL;
  v5 = L"NetLuidIndex";
  v6 = 0x7FFFLL;
  while ( *v5 )
  {
    ++v5;
    if ( !--v6 )
      goto LABEL_14;
  }
  ValueName.Buffer = L"NetLuidIndex";
  v7 = 0x7FFF - v6;
  m_ptr = a1->m_ptr;
  ValueName.Length = 2 * v7;
  ValueName.MaximumLength = 2 * v7 + 2;
  if ( ZwQueryValueKey(m_ptr, &ValueName, KeyValuePartialInformation, KeyValueInformation, 0x14u, &Data) < 0
    || (v17 != 4 ? (v9 = -1073741788) : v18 != 4 ? (v9 = -1073741789) : (v2 = v19, v9 = 0),
        v9 < 0 || v2 != ((a2->Value >> 24) & 0xFFFFFF)) )
  {
LABEL_14:
    v10 = L"NetLuidIndex";
    v11 = (a2->Value >> 24) & 0xFFFFFF;
    *(_QWORD *)&ValueName.Length = 0LL;
    ValueName.Buffer = 0LL;
    v12 = 0x7FFFLL;
    do
    {
      if ( !*v10 )
        break;
      ++v10;
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
      Data = v11;
      ZwSetValueKey(a1->m_ptr, &ValueName, 0, 4u, &Data, 4u);
    }
    NdisTraceLoggingTemporarilyScribbleNetLuidIndex(a2);
  }
}
