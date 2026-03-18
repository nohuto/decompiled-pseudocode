/*
 * XREFs of ?SetIntegerProperty@CInteractionTrackerMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C01AB5F0
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

  v5 = 0;
  if ( a3 > 0x15 )
  {
    switch ( a3 )
    {
      case 0x1Fu:
        *((_DWORD *)this + 4) &= ~0x20000u;
        *((_DWORD *)this + 39) = a4;
        *a5 = 1;
        return v5;
      case 0x21u:
        *((_BYTE *)this + 416) &= ~2u;
        *((_DWORD *)this + 4) &= ~0x40000u;
        *((_DWORD *)this + 40) = a4;
        goto LABEL_21;
      case 0x2Eu:
        *((_DWORD *)this + 4) &= ~0x40u;
        *((_DWORD *)this + 17) = a4;
        goto LABEL_21;
      case 0x32u:
        *((_DWORD *)this + 4) &= ~0x80u;
        *((_DWORD *)this + 21) = a4;
        goto LABEL_21;
    }
    return (unsigned int)-1073741811;
  }
  if ( a3 == 21 )
  {
    if ( *((_DWORD *)this + 46) != a4 )
    {
      *((_DWORD *)this + 4) &= ~0x1000u;
      *((_DWORD *)this + 46) = a4;
      goto LABEL_21;
    }
    return v5;
  }
  v6 = a3 - 10;
  if ( !v6 )
  {
    if ( a4 > 1 )
      return (unsigned int)-1073741811;
    if ( *((_DWORD *)this + 47) == (_DWORD)a4 )
      return v5;
    *((_DWORD *)this + 47) = a4;
LABEL_15:
    *((_DWORD *)this + 4) &= ~0x200u;
    goto LABEL_21;
  }
  v7 = v6 - 1;
  if ( !v7 )
  {
    *((_DWORD *)this + 28) = a4;
    goto LABEL_15;
  }
  v8 = v7 - 4;
  if ( v8 )
  {
    v9 = v8 - 1;
    if ( v9 )
    {
      if ( v9 == 2 )
      {
        *((_DWORD *)this + 4) &= ~0x400u;
        *((_DWORD *)this + 32) = a4;
LABEL_21:
        *a5 = 1;
        return v5;
      }
      return (unsigned int)-1073741811;
    }
    *((_DWORD *)this + 31) = a4;
LABEL_10:
    *((_DWORD *)this + 4) &= ~0x100u;
    goto LABEL_21;
  }
  if ( a4 > 1 )
    return (unsigned int)-1073741811;
  if ( *((_DWORD *)this + 48) != (_DWORD)a4 )
  {
    *((_DWORD *)this + 48) = a4;
    goto LABEL_10;
  }
  return v5;
}
