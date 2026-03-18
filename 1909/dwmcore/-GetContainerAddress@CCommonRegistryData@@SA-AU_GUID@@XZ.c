/*
 * XREFs of ?GetContainerAddress@CCommonRegistryData@@SA?AU_GUID@@XZ @ 0x1801587D0
 * Callers:
 *     _anonymous_namespace_::TryOpenVmConsumerQueue @ 0x1801BB250 (_anonymous_namespace_--TryOpenVmConsumerQueue.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXXZ @ 0x18004CB8C (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     ?reserve@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAX_K@Z @ 0x180158948 (-reserve@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAX_K@Z.c)
 */

struct _GUID *__fastcall CCommonRegistryData::GetContainerAddress(UUID *Uuid)
{
  PVOID *pvData; // rax
  unsigned __int16 *v3; // rcx
  DWORD pcbData; // [rsp+40h] [rbp-30h] BYREF
  PVOID v6[2]; // [rsp+48h] [rbp-28h] BYREF
  __m128i si128; // [rsp+58h] [rbp-18h]

  *Uuid = GUID_NULL;
  if ( !RegGetValueW(HKEY_LOCAL_MACHINE, L"Software\\Microsoft\\Windows\\Dwm", L"ContainerId", 2u, 0LL, 0LL, &pcbData) )
  {
    ++pcbData;
    si128 = _mm_load_si128((const __m128i *)&_xmm);
    LOWORD(v6[0]) = 0;
    std::wstring::reserve(v6, pcbData);
    pvData = v6;
    if ( si128.m128i_i64[1] >= 8uLL )
      pvData = (PVOID *)v6[0];
    if ( !RegGetValueW(
            HKEY_LOCAL_MACHINE,
            L"Software\\Microsoft\\Windows\\Dwm",
            L"ContainerId",
            2u,
            0LL,
            pvData,
            &pcbData) )
    {
      v3 = (unsigned __int16 *)v6;
      if ( si128.m128i_i64[1] >= 8uLL )
        v3 = (unsigned __int16 *)v6[0];
      UuidFromStringW(v3, Uuid);
    }
    std::wstring::_Tidy_deallocate(v6);
  }
  return Uuid;
}
