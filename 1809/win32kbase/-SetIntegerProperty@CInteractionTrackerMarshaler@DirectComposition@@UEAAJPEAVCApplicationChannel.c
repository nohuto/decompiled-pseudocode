/*
 * XREFs of ?SetIntegerProperty@CInteractionTrackerMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C0170840
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CInteractionTrackerMarshaler::SetIntegerProperty(
        DirectComposition::CInteractionTrackerMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        unsigned int a3,
        unsigned __int64 a4,
        bool *a5)
{
  unsigned int v5; // edx
  unsigned int v6; // r8d
  unsigned int v7; // r8d
  unsigned int v8; // r8d
  unsigned int v9; // r8d
  unsigned int v10; // r8d

  v5 = 0;
  if ( a3 > 0x1F )
  {
    switch ( a3 )
    {
      case '!':
        *((_BYTE *)this + 436) &= ~2u;
        *((_DWORD *)this + 4) &= ~0x40000u;
        *((_DWORD *)this + 39) = a4;
        *a5 = 1;
        return v5;
      case '.':
        *((_DWORD *)this + 4) &= ~0x40u;
        *((_DWORD *)this + 16) = a4;
        goto LABEL_11;
      case '2':
        *((_DWORD *)this + 4) &= ~0x80u;
        *((_DWORD *)this + 20) = a4;
        goto LABEL_11;
      case 'H':
        *((_DWORD *)this + 49) = a4;
        *((_DWORD *)this + 110) &= ~2u;
        goto LABEL_11;
      case 'L':
        *((_DWORD *)this + 53) = a4;
        *((_DWORD *)this + 110) &= ~4u;
        goto LABEL_11;
    }
    return (unsigned int)-1073741811;
  }
  if ( a3 == 31 )
  {
    *((_DWORD *)this + 4) &= ~0x20000u;
    *((_DWORD *)this + 38) = a4;
    goto LABEL_11;
  }
  v6 = a3 - 10;
  if ( !v6 )
  {
    if ( a4 > 1 )
      return (unsigned int)-1073741811;
    if ( *((_DWORD *)this + 55) == (_DWORD)a4 )
      return v5;
    *((_DWORD *)this + 55) = a4;
LABEL_19:
    *((_DWORD *)this + 4) &= ~0x200u;
    goto LABEL_11;
  }
  v7 = v6 - 1;
  if ( !v7 )
  {
    *((_DWORD *)this + 27) = a4;
    goto LABEL_19;
  }
  v8 = v7 - 4;
  if ( !v8 )
  {
    if ( a4 > 1 )
      return (unsigned int)-1073741811;
    if ( *((_DWORD *)this + 56) == (_DWORD)a4 )
      return v5;
    *((_DWORD *)this + 56) = a4;
LABEL_14:
    *((_DWORD *)this + 4) &= ~0x100u;
    goto LABEL_11;
  }
  v9 = v8 - 1;
  if ( !v9 )
  {
    *((_DWORD *)this + 30) = a4;
    goto LABEL_14;
  }
  v10 = v9 - 2;
  if ( !v10 )
  {
    *((_DWORD *)this + 4) &= ~0x400u;
    *((_DWORD *)this + 31) = a4;
    goto LABEL_11;
  }
  if ( v10 != 3 )
    return (unsigned int)-1073741811;
  if ( *((_DWORD *)this + 54) != a4 )
  {
    *((_DWORD *)this + 4) &= ~0x1000u;
    *((_DWORD *)this + 54) = a4;
LABEL_11:
    *a5 = 1;
  }
  return v5;
}
