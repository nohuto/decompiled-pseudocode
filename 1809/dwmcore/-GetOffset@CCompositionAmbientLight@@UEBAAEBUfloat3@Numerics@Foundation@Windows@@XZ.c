/*
 * XREFs of ?GetOffset@CCompositionAmbientLight@@UEBAAEBUfloat3@Numerics@Foundation@Windows@@XZ @ 0x18018E290
 * Callers:
 *     <none>
 * Callees:
 *     _Init_thread_footer @ 0x1800EC020 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x1800EC088 (_Init_thread_header.c)
 */

const struct Windows::Foundation::Numerics::float3 *__fastcall CCompositionAmbientLight::GetOffset(
        CCompositionAmbientLight *this)
{
  if ( dword_18030C5D0 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 4LL) )
  {
    Init_thread_header(&dword_18030C5D0);
    if ( dword_18030C5D0 == -1 )
    {
      dword_18030C5D8 = 0;
      dword_18030C5DC = 0;
      dword_18030C5E0 = 0;
      Init_thread_footer(&dword_18030C5D0);
    }
  }
  return (const struct Windows::Foundation::Numerics::float3 *)&dword_18030C5D8;
}
