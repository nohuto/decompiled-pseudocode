/*
 * XREFs of ?QueryValueUlong@KRegKey@@QEAAJPEBU_UNICODE_STRING@@PEAK@Z @ 0x1C0107E54
 * Callers:
 *     ?QueryValueUshort@KRegKey@@QEAAJPEB_WPEAG@Z @ 0x1C01077DC (-QueryValueUshort@KRegKey@@QEAAJPEB_WPEAG@Z.c)
 *     ?QueryValueBoolean@KRegKey@@QEAAJPEB_WPEAEW4BooleanDisposition@1@@Z @ 0x1C01087AC (-QueryValueBoolean@KRegKey@@QEAAJPEB_WPEAEW4BooleanDisposition@1@@Z.c)
 *     ?ndisMAllowSilentReenumerate@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0118A9C (-ndisMAllowSilentReenumerate@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisBindReadProtocolDriverFromV2Registry@@YA_NPEAUNDIS_BIND_PROTOCOL_DRIVER@@@Z @ 0x1C01275A4 (-ndisBindReadProtocolDriverFromV2Registry@@YA_NPEAUNDIS_BIND_PROTOCOL_DRIVER@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0040760 (__security_check_cookie.c)
 */

NTSTATUS __fastcall KRegKey::QueryValueUlong(KRegKey *this, struct _UNICODE_STRING *a2, unsigned int *a3)
{
  void *m_ptr; // rcx
  NTSTATUS result; // eax
  ULONG v6; // [rsp+30h] [rbp-38h] BYREF
  __int64 v7; // [rsp+38h] [rbp-30h] BYREF
  __int64 v8; // [rsp+40h] [rbp-28h]
  int v9; // [rsp+48h] [rbp-20h]

  m_ptr = this->m_ptr;
  v7 = 0LL;
  v8 = 0LL;
  v9 = 0;
  result = ZwQueryValueKey(m_ptr, a2, KeyValuePartialInformation, &v7, 0x14u, &v6);
  if ( result >= 0 )
  {
    if ( HIDWORD(v7) == 4 )
    {
      if ( (_DWORD)v8 == 4 )
      {
        *a3 = HIDWORD(v8);
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
