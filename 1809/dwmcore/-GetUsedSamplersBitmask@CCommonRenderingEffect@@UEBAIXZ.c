/*
 * XREFs of ?GetUsedSamplersBitmask@CCommonRenderingEffect@@UEBAIXZ @ 0x18005F710
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CCommonRenderingEffect::GetUsedSamplersBitmask(CCommonRenderingEffect *this)
{
  __int64 result; // rax
  _QWORD *v2; // r9
  unsigned int i; // r8d

  result = 0LL;
  v2 = (_QWORD *)((char *)this + 16);
  for ( i = 0; i < 2; ++i )
  {
    if ( *v2 )
      result = (1 << i) | (unsigned int)result;
    v2 += 3;
  }
  return result;
}
