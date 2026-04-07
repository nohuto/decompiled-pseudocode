/*
 * XREFs of ?RemoveSecondaryWindowRepresentation@CWindowData@@QEAAXPEAVCSecondaryWindowRepresentation@@@Z @ 0x180026BA0
 * Callers:
 *     ?ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x180020430 (-ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ??1CSecondaryWindowRepresentation@@MEAA@XZ @ 0x180026AB4 (--1CSecondaryWindowRepresentation@@MEAA@XZ.c)
 * Callees:
 *     ?Remove@?$DynArray@PEAVCAnimationComponent@@$0A@@@QEAAHAEBQEAVCAnimationComponent@@@Z @ 0x180026CA8 (-Remove@-$DynArray@PEAVCAnimationComponent@@$0A@@@QEAAHAEBQEAVCAnimationComponent@@@Z.c)
 *     McTemplateU0pp @ 0x18008481C (McTemplateU0pp.c)
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
    DynArray<CAnimationComponent *,0>::Remove((char *)this + 440, &v7);
  }
  LOBYTE(a4) = 1;
  CWindowData::RemoveSecondaryWindowRepresentation(v6, a2, DWORD2(v6), a4);
}
