/*
 * XREFs of ?SetIntegerProperty@CDesktopTargetMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C0092C30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CDesktopTargetMarshaler::SetIntegerProperty(
        DirectComposition::CDesktopTargetMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        __int64 a4,
        bool *a5)
{
  unsigned int v5; // edx
  int v6; // r8d
  int v7; // r8d
  int v8; // r8d

  v5 = 0;
  if ( !a3 )
  {
    *((_DWORD *)this + 4) |= 0x20u;
    *((_QWORD *)this + 5) = a4;
    *a5 = 1;
    return v5;
  }
  v6 = a3 - 1;
  if ( v6 )
  {
    v7 = v6 - 3;
    if ( v7 )
    {
      v8 = v7 - 1;
      if ( v8 )
      {
        if ( v8 != 3 )
          return (unsigned int)-1073741811;
        *((_DWORD *)this + 4) |= 0x1000u;
        *((_BYTE *)this + 54) = a4 != 0;
      }
      else
      {
        *((_DWORD *)this + 4) |= 0x200u;
        *((_BYTE *)this + 53) = a4 != 0;
      }
    }
    else
    {
      *((_DWORD *)this + 4) |= 0x100u;
      *((_BYTE *)this + 52) = a4 != 0;
    }
  }
  else
  {
    *((_DWORD *)this + 4) |= 0x20u;
    *((_DWORD *)this + 12) = a4;
  }
  *a5 = 1;
  return v5;
}
