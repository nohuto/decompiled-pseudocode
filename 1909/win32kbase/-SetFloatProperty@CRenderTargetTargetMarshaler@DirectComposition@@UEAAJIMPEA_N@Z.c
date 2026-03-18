/*
 * XREFs of ?SetFloatProperty@CRenderTargetTargetMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x1C00A8A60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CRenderTargetTargetMarshaler::SetFloatProperty(
        DirectComposition::CRenderTargetTargetMarshaler *this,
        int a2,
        float a3,
        bool *a4)
{
  __int64 result; // rax

  result = 0LL;
  if ( a2 != 10 )
  {
    if ( a2 == 12 )
    {
      if ( a3 == *((float *)this + 31) )
        return result;
      if ( a3 > 0.0 )
      {
        *((_DWORD *)this + 4) |= 0x200u;
        *((float *)this + 31) = a3;
LABEL_11:
        *a4 = 1;
        return result;
      }
    }
    return 3221225485LL;
  }
  if ( a3 != *((float *)this + 30) )
  {
    if ( a3 > 0.0 )
    {
      *((_DWORD *)this + 4) |= 0x100u;
      *((float *)this + 30) = a3;
      goto LABEL_11;
    }
    return 3221225485LL;
  }
  return result;
}
