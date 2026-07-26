/*
 * XREFs of ?QueryValueUlong@KRegKey@@QEAAJPEB_WPEAK@Z @ 0x1C0107D40
 * Callers:
 *     ndisPnPAddDevice @ 0x1C002D994 (ndisPnPAddDevice.c)
 *     ?ndisPcwEnableAlwaysOnCounterSet@@YAXPEAU_NDIS_MINIPORT_BLOCK@@AEAVKRegKey@@W4_NDIS_COUNTER_SET_ID@@KPEB_W@Z @ 0x1C0107948 (-ndisPcwEnableAlwaysOnCounterSet@@YAXPEAU_NDIS_MINIPORT_BLOCK@@AEAVKRegKey@@W4_NDIS_COUNTER_SET_.c)
 *     ?ndisCheckNetworkInterfaceDataMismatch@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEBU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES@@@Z @ 0x1C0107998 (-ndisCheckNetworkInterfaceDataMismatch@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEBU_NDIS_MINIPORT_ADAPTER_.c)
 *     ?ndisReadRegistryKnobs@@YAJPEAU_DRIVER_OBJECT@@PEBUNDIS_REGISTRY_KNOB@@_K@Z @ 0x1C0107B90 (-ndisReadRegistryKnobs@@YAJPEAU_DRIVER_OBJECT@@PEBUNDIS_REGISTRY_KNOB@@_K@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0040770 (__security_check_cookie.c)
 */

NTSTATUS __fastcall KRegKey::QueryValueUlong(KRegKey *this, wchar_t *a2, unsigned int *a3)
{
  wchar_t *v6; // rax
  __int64 v7; // rcx
  NTSTATUS result; // eax
  __int16 v9; // dx
  void *m_ptr; // rcx
  _UNICODE_STRING ValueName; // [rsp+30h] [rbp-40h] BYREF
  ULONG ResultLength; // [rsp+40h] [rbp-30h] BYREF
  __int64 KeyValueInformation; // [rsp+48h] [rbp-28h] BYREF
  __int64 v14; // [rsp+50h] [rbp-20h]
  int v15; // [rsp+58h] [rbp-18h]

  *(_QWORD *)&ValueName.Length = 0LL;
  ValueName.Buffer = 0LL;
  if ( !a2 )
  {
LABEL_9:
    m_ptr = this->m_ptr;
    KeyValueInformation = 0LL;
    v14 = 0LL;
    v15 = 0;
    result = ZwQueryValueKey(m_ptr, &ValueName, KeyValuePartialInformation, &KeyValueInformation, 0x14u, &ResultLength);
    if ( result >= 0 )
    {
      if ( HIDWORD(KeyValueInformation) == 4 )
      {
        if ( (_DWORD)v14 == 4 )
        {
          *a3 = HIDWORD(v14);
          return 0;
        }
        else
        {
          return -1073741789;
        }
      }
      else
      {
        return -1073741788;
      }
    }
    return result;
  }
  v6 = a2;
  v7 = 0x7FFFLL;
  do
  {
    if ( !*v6 )
      break;
    ++v6;
    --v7;
  }
  while ( v7 );
  result = v7 == 0 ? 0xC000000D : 0;
  if ( v7 )
    v9 = 0x7FFF - v7;
  else
    v9 = 0;
  if ( v7 )
  {
    ValueName.Buffer = a2;
    ValueName.Length = 2 * v9;
    ValueName.MaximumLength = 2 * v9 + 2;
    goto LABEL_9;
  }
  return result;
}
