/*
 * XREFs of ?GetOffset@CCompositionEnvironmentLight@@UEBAAEBUfloat3@Numerics@Foundation@Windows@@XZ @ 0x18020DD20
 * Callers:
 *     <none>
 * Callees:
 *     _Init_thread_footer @ 0x1800E93B0 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x1800E9418 (_Init_thread_header.c)
 */

const struct Windows::Foundation::Numerics::float3 *__fastcall CCompositionEnvironmentLight::GetOffset(
        CCompositionEnvironmentLight *this)
{
  if ( dword_18033DDA8 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 4LL) )
  {
    Init_thread_header(&dword_18033DDA8);
    if ( dword_18033DDA8 == -1 )
    {
      dword_18033DDB0 = 0;
      dword_18033DDB4 = 0;
      dword_18033DDB8 = 0;
      Init_thread_footer(&dword_18033DDA8);
    }
  }
  return (const struct Windows::Foundation::Numerics::float3 *)&dword_18033DDB0;
}
