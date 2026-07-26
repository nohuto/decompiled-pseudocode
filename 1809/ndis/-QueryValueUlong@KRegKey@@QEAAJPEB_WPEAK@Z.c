/*
 * XREFs of ?QueryValueUlong@KRegKey@@QEAAJPEB_WPEAK@Z @ 0x1C00C8E08
 * Callers:
 *     ?ndisPcwEnableAlwaysOnCounterSet@@YAXPEAU_NDIS_MINIPORT_BLOCK@@AEAVKRegKey@@W4_NDIS_COUNTER_SET_ID@@KPEB_W@Z @ 0x1C00C8A50 (-ndisPcwEnableAlwaysOnCounterSet@@YAXPEAU_NDIS_MINIPORT_BLOCK@@AEAVKRegKey@@W4_NDIS_COUNTER_SET_.c)
 *     ndisCheckNetworkInterfaceDataMismatch @ 0x1C00C8AA0 (ndisCheckNetworkInterfaceDataMismatch.c)
 *     ?ndisReadRegistryKnobs@@YAJPEAU_DRIVER_OBJECT@@PEBUNDIS_REGISTRY_KNOB@@_K@Z @ 0x1C00C8C90 (-ndisReadRegistryKnobs@@YAJPEAU_DRIVER_OBJECT@@PEBUNDIS_REGISTRY_KNOB@@_K@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0026050 (__security_check_cookie.c)
 */

NTSTATUS __fastcall KRegKey::QueryValueUlong(KRegKey *this, wchar_t *a2, unsigned int *a3)
{
  wchar_t *v5; // rax
  __int64 v6; // rdx
  NTSTATUS result; // eax
  __int16 v8; // r8
  _UNICODE_STRING ValueName; // [rsp+30h] [rbp-48h] BYREF
  ULONG ResultLength; // [rsp+40h] [rbp-38h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+48h] [rbp-30h] BYREF
  int v12; // [rsp+4Ch] [rbp-2Ch]
  int v13; // [rsp+50h] [rbp-28h]
  unsigned int v14; // [rsp+54h] [rbp-24h]

  *(_QWORD *)&ValueName.Length = 0LL;
  ValueName.Buffer = 0LL;
  if ( !a2 )
  {
LABEL_9:
    result = ZwQueryValueKey(
               this->m_ptr,
               &ValueName,
               KeyValuePartialInformation,
               KeyValueInformation,
               0x14u,
               &ResultLength);
    if ( result >= 0 )
    {
      if ( v12 == 4 )
      {
        if ( v13 == 4 )
        {
          *a3 = v14;
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
  v5 = a2;
  v6 = 0x7FFFLL;
  do
  {
    if ( !*v5 )
      break;
    ++v5;
    --v6;
  }
  while ( v6 );
  result = v6 == 0 ? 0xC000000D : 0;
  if ( v6 )
    v8 = 0x7FFF - v6;
  else
    v8 = 0;
  if ( v6 )
  {
    ValueName.Buffer = a2;
    ValueName.Length = 2 * v8;
    ValueName.MaximumLength = 2 * v8 + 2;
    goto LABEL_9;
  }
  return result;
}
