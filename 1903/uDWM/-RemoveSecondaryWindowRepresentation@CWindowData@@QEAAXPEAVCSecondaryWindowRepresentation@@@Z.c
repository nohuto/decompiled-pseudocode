/*
 * XREFs of ?RemoveSecondaryWindowRepresentation@CWindowData@@QEAAXPEAVCSecondaryWindowRepresentation@@@Z @ 0x180010E90
 * Callers:
 *     ??1CSecondaryWindowRepresentation@@MEAA@XZ @ 0x180010B54 (--1CSecondaryWindowRepresentation@@MEAA@XZ.c)
 *     ?ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x180012BE4 (-ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?Remove@?$DynArray@PEAVCSecondaryWindowRepresentation@@$0A@@@QEAAHAEBQEAVCSecondaryWindowRepresentation@@@Z @ 0x180010FD4 (-Remove@-$DynArray@PEAVCSecondaryWindowRepresentation@@$0A@@@QEAAHAEBQEAVCSecondaryWindowReprese.c)
 *     McTemplateU0pp @ 0x18008B47C (McTemplateU0pp.c)
 */

void __fastcall CWindowData::RemoveSecondaryWindowRepresentation(
        CWindowData *this,
        struct CSecondaryWindowRepresentation *a2,
        __int64 a3,
        __int64 a4)
{
  __int128 v6; // [rsp+20h] [rbp-18h]
  struct CSecondaryWindowRepresentation *v7; // [rsp+48h] [rbp+10h] BYREF

  v7 = a2;
  v6 = *((_OWORD *)a2 + 4);
  if ( (CWindowData *)v6 != this )
  {
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
      McTemplateU0pp(this, &RemoveSecondaryWindowRepresentation_WR, a2, *((_QWORD *)this + 5));
    DynArray<CSecondaryWindowRepresentation *,0>::Remove((char *)this + 448, &v7);
  }
  LOBYTE(a4) = 1;
  CWindowData::RemoveSecondaryWindowRepresentation(v6, a2, DWORD2(v6), a4);
}
