/*
 * XREFs of ?SetIntegerProperty@CCursorVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C01AA970
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CCursorVisualMarshaler::SetIntegerProperty(
        DirectComposition::CCursorVisualMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        __int64 a4,
        bool *a5)
{
  unsigned int v5; // edx
  int v6; // r8d
  int v7; // r8d

  v5 = 0;
  if ( a3 )
  {
    v6 = a3 - 1;
    if ( v6 )
    {
      v7 = v6 - 1;
      if ( v7 )
      {
        if ( v7 != 2 )
          return (unsigned int)-1073741811;
        if ( (_DWORD)a4 == *((_DWORD *)this + 89) )
          return v5;
        *((_DWORD *)this + 92) |= 0x10u;
        *((_DWORD *)this + 89) = a4;
      }
      else
      {
        if ( (a4 != 0) == *((_BYTE *)this + 352) )
          return v5;
        *((_DWORD *)this + 92) |= 4u;
        *((_BYTE *)this + 352) = a4 != 0;
      }
    }
    else
    {
      if ( (_DWORD)a4 == *((_DWORD *)this + 87) )
        return v5;
      *((_DWORD *)this + 92) |= 2u;
      *((_DWORD *)this + 87) = a4;
    }
    *a5 = 1;
    return v5;
  }
  if ( (_DWORD)a4 != *((_DWORD *)this + 86) )
  {
    *((_DWORD *)this + 92) |= 1u;
    *((_DWORD *)this + 86) = a4;
    *a5 = 1;
  }
  return v5;
}
