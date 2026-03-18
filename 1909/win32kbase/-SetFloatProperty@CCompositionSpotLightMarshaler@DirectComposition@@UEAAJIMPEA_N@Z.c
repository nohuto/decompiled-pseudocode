/*
 * XREFs of ?SetFloatProperty@CCompositionSpotLightMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x1C00A0810
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CCompositionSpotLightMarshaler::SetFloatProperty(
        DirectComposition::CCompositionSpotLightMarshaler *this,
        unsigned int a2,
        float a3,
        bool *a4)
{
  __int64 result; // rax
  unsigned int v5; // edx
  unsigned int v6; // edx
  unsigned int v7; // edx
  unsigned int v8; // edx
  unsigned int v9; // edx
  unsigned int v10; // edx
  unsigned int v11; // edx
  unsigned int v12; // edx

  result = 0LL;
  *a4 = 0;
  if ( a2 > 0xB )
  {
    v9 = a2 - 13;
    if ( v9 )
    {
      v10 = v9 - 1;
      if ( v10 )
      {
        v11 = v10 - 2;
        if ( !v11 )
        {
          if ( *((float *)this + 43) != a3 )
          {
            *((_DWORD *)this + 4) |= 0x80000u;
            *((float *)this + 43) = a3;
            goto LABEL_9;
          }
          return result;
        }
        v12 = v11 - 1;
        if ( !v12 )
        {
          if ( *((float *)this + 44) != a3 )
          {
            *((_DWORD *)this + 4) |= 0x100000u;
            *((float *)this + 44) = a3;
            goto LABEL_9;
          }
          return result;
        }
        if ( v12 == 1 )
        {
          if ( *((float *)this + 45) != a3 )
          {
            *((_DWORD *)this + 4) |= 0x200000u;
            *((float *)this + 45) = a3;
            goto LABEL_9;
          }
          return result;
        }
        return 3221225485LL;
      }
      if ( *((float *)this + 33) == a3 )
        return result;
      a3 = a3 * 0.017453292;
    }
    else if ( *((float *)this + 33) == a3 )
    {
      return result;
    }
    *((_DWORD *)this + 4) |= 0x20000u;
    *((float *)this + 33) = a3;
    goto LABEL_9;
  }
  if ( a2 == 11 )
  {
    if ( *((float *)this + 42) != a3 )
    {
      *((_DWORD *)this + 4) |= 0x8000u;
      *((float *)this + 42) = a3;
      goto LABEL_9;
    }
    return result;
  }
  v5 = a2 - 3;
  if ( !v5 )
  {
    if ( *((float *)this + 20) != a3 )
    {
      *((_DWORD *)this + 4) |= 0x100u;
      *((float *)this + 20) = a3;
      goto LABEL_9;
    }
    return result;
  }
  v6 = v5 - 1;
  if ( !v6 )
  {
    if ( *((float *)this + 21) != a3 )
    {
      *((_DWORD *)this + 4) |= 0x200u;
      *((float *)this + 21) = a3;
      goto LABEL_9;
    }
    return result;
  }
  v7 = v6 - 1;
  if ( !v7 )
  {
    if ( *((float *)this + 22) != a3 )
    {
      *((_DWORD *)this + 4) |= 0x400u;
      *((float *)this + 22) = a3;
      goto LABEL_9;
    }
    return result;
  }
  v8 = v7 - 3;
  if ( !v8 )
  {
    if ( *((float *)this + 32) == a3 )
      return result;
    goto LABEL_8;
  }
  if ( v8 != 1 )
    return 3221225485LL;
  if ( *((float *)this + 32) != a3 )
  {
    a3 = a3 * 0.017453292;
LABEL_8:
    *((_DWORD *)this + 4) |= 0x2000u;
    *((float *)this + 32) = a3;
LABEL_9:
    *a4 = 1;
  }
  return result;
}
