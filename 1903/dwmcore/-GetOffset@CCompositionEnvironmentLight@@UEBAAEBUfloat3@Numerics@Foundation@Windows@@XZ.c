/*
 * XREFs of ?GetOffset@CCompositionEnvironmentLight@@UEBAAEBUfloat3@Numerics@Foundation@Windows@@XZ @ 0x18020F430
 * Callers:
 *     <none>
 * Callees:
 *     _Init_thread_footer @ 0x1800E8500 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x1800E8568 (_Init_thread_header.c)
 */

const struct Windows::Foundation::Numerics::float3 *__fastcall CCompositionEnvironmentLight::GetOffset(
        CCompositionEnvironmentLight *this)
{
  if ( dword_180340CE8 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 4LL) )
  {
    Init_thread_header(&dword_180340CE8);
    if ( dword_180340CE8 == -1 )
    {
      dword_180340CF0 = 0;
      dword_180340CF4 = 0;
      dword_180340CF8 = 0;
      Init_thread_footer(&dword_180340CE8);
    }
  }
  return (const struct Windows::Foundation::Numerics::float3 *)&dword_180340CF0;
}
