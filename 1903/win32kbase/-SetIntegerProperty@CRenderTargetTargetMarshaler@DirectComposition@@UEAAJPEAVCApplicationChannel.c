/*
 * XREFs of ?SetIntegerProperty@CRenderTargetTargetMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C00A4B30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CRenderTargetTargetMarshaler::SetIntegerProperty(
        DirectComposition::CRenderTargetTargetMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        int a4,
        bool *a5)
{
  unsigned int v5; // edx
  int v6; // r8d
  int v7; // r8d
  int v8; // r8d
  int v9; // r8d
  int v10; // r8d

  v5 = 0;
  if ( !a3 )
  {
    *((_DWORD *)this + 4) |= 0x20u;
    *((_DWORD *)this + 10) = a4;
    *a5 = 1;
    return v5;
  }
  v6 = a3 - 2;
  if ( v6 )
  {
    v7 = v6 - 1;
    if ( v7 )
    {
      v8 = v7 - 1;
      if ( v8 )
      {
        v9 = v8 - 1;
        if ( v9 )
        {
          v10 = v9 - 3;
          if ( v10 )
          {
            if ( v10 != 3 )
              return (unsigned int)-1073741811;
            *((_DWORD *)this + 4) |= 0x400u;
            *((_DWORD *)this + 32) = a4;
          }
          else
          {
            *((_DWORD *)this + 4) |= 0x40u;
            *((_DWORD *)this + 29) = a4;
          }
          goto LABEL_8;
        }
        *((_DWORD *)this + 20) = a4;
      }
      else
      {
        *((_DWORD *)this + 18) = a4;
      }
    }
    else
    {
      *((_DWORD *)this + 17) = a4;
    }
    *((_DWORD *)this + 4) |= 0x20u;
  }
  else
  {
    *((_DWORD *)this + 4) |= 0x80u;
    *((_DWORD *)this + 16) = a4;
  }
LABEL_8:
  *a5 = 1;
  return v5;
}
