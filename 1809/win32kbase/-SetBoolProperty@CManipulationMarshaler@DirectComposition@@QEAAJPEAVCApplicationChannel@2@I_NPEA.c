/*
 * XREFs of ?SetBoolProperty@CManipulationMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@I_NPEA_N@Z @ 0x1C016B188
 * Callers:
 *     ?SetIntegerProperty@CManipulationMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C016B4B0 (-SetIntegerProperty@CManipulationMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_J.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CManipulationMarshaler::SetBoolProperty(
        DirectComposition::CManipulationMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        char a4,
        bool *a5)
{
  unsigned int v5; // r10d
  int v7; // r8d
  int v8; // r8d
  char v9; // al
  char v10; // cl
  char v11; // al
  char v12; // cl
  char v13; // al
  char v14; // al
  char v15; // cl
  char v16; // al
  char v17; // r8

  v5 = 0;
  v7 = a3 - 4;
  if ( !v7 )
  {
    v16 = *((_BYTE *)this + 92);
    v17 = v16 & 1;
    if ( (v16 & 1) != a4 )
    {
      v17 = a4;
      *a5 = 1;
      *((_DWORD *)this + 4) |= 0x40u;
      v16 = *((_BYTE *)this + 92);
    }
    v13 = v17 | v16 & 0xFE;
    goto LABEL_15;
  }
  v8 = v7 - 1;
  if ( !v8 )
  {
    v14 = *((_BYTE *)this + 92);
    v15 = (v14 & 2) != 0;
    if ( v15 != a4 )
    {
      v15 = a4;
      *a5 = 1;
      *((_DWORD *)this + 4) |= 0x40u;
      v14 = *((_BYTE *)this + 92);
    }
    v11 = v14 & 0xFD;
    v12 = 2 * v15;
    goto LABEL_8;
  }
  if ( v8 == 1 )
  {
    v9 = *((_BYTE *)this + 92);
    v10 = (v9 & 4) != 0;
    if ( v10 != a4 )
    {
      v10 = a4;
      *a5 = 1;
      *((_DWORD *)this + 4) |= 0x40u;
      v9 = *((_BYTE *)this + 92);
    }
    v11 = v9 & 0xFB;
    v12 = 4 * v10;
LABEL_8:
    v13 = v12 | v11;
LABEL_15:
    *((_BYTE *)this + 92) = v13;
    return v5;
  }
  return (unsigned int)-1073741811;
}
