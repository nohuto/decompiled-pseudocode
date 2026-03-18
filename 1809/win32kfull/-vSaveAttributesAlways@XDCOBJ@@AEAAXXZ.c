/*
 * XREFs of ?vSaveAttributesAlways@XDCOBJ@@AEAAXXZ @ 0x1C00E3398
 * Callers:
 *     ?GreStartDocInternal@@YAHPEAUHDC__@@PEAU_DOCINFOW@@PEAHH@Z @ 0x1C00E2D90 (-GreStartDocInternal@@YAHPEAUHDC__@@PEAU_DOCINFOW@@PEAHH@Z.c)
 *     NtGdiStartPage @ 0x1C00E3160 (NtGdiStartPage.c)
 *     ?vDone@RESTORESAVEDCATTRS@@QEAAXXZ @ 0x1C00E3370 (-vDone@RESTORESAVEDCATTRS@@QEAAXXZ.c)
 *     ??1RESTORESAVEDCATTRS@@QEAA@XZ @ 0x1C0136D70 (--1RESTORESAVEDCATTRS@@QEAA@XZ.c)
 *     NtGdiEndPage @ 0x1C0260D10 (NtGdiEndPage.c)
 * Callees:
 *     ?SaveAttributesHelper@XDCOBJ@@AEAAHXZ @ 0x1C00E33C0 (-SaveAttributesHelper@XDCOBJ@@AEAAHXZ.c)
 */

void __fastcall XDCOBJ::vSaveAttributesAlways(XDCOBJ *this)
{
  if ( (unsigned int)XDCOBJ::SaveAttributesHelper(this) )
    *(_DWORD *)(*(_QWORD *)this + 44LL) |= 2u;
}
