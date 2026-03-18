/*
 * XREFs of ?GetOffset@CCompositionAmbientLight@@UEBAAEBUfloat3@Numerics@Foundation@Windows@@XZ @ 0x1801CE280
 * Callers:
 *     <none>
 * Callees:
 *     _Init_thread_footer @ 0x1800E93B0 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x1800E9418 (_Init_thread_header.c)
 */

const struct Windows::Foundation::Numerics::float3 *__fastcall CCompositionAmbientLight::GetOffset(
        CCompositionAmbientLight *this)
{
  if ( dword_18033DD7C > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 4LL) )
  {
    Init_thread_header(&dword_18033DD7C);
    if ( dword_18033DD7C == -1 )
    {
      dword_18033DD80 = 0;
      dword_18033DD84 = 0;
      dword_18033DD88 = 0;
      Init_thread_footer(&dword_18033DD7C);
    }
  }
  return (const struct Windows::Foundation::Numerics::float3 *)&dword_18033DD80;
}
