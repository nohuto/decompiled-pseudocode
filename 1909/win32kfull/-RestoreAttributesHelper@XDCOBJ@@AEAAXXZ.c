/*
 * XREFs of ?RestoreAttributesHelper@XDCOBJ@@AEAAXXZ @ 0x1C00AD64C
 * Callers:
 *     GreStretchDIBitsInternal @ 0x1C00A2EB4 (GreStretchDIBitsInternal.c)
 *     GreSetDIBitsToDeviceInternal @ 0x1C00A8DA0 (GreSetDIBitsToDeviceInternal.c)
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C00AC2F0 (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C00AD000 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     NtGdiPatBlt @ 0x1C00BB170 (NtGdiPatBlt.c)
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C00C06B0 (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     ?GreStartDocInternal@@YAHPEAUHDC__@@PEAU_DOCINFOW@@PEAHH@Z @ 0x1C00F8214 (-GreStartDocInternal@@YAHPEAUHDC__@@PEAU_DOCINFOW@@PEAHH@Z.c)
 *     ?vInit@RESTORESAVEDCATTRS@@QEAAXPEAVXDCOBJ@@@Z @ 0x1C00F8430 (-vInit@RESTORESAVEDCATTRS@@QEAAXPEAVXDCOBJ@@@Z.c)
 *     NtGdiStartPage @ 0x1C00F8470 (NtGdiStartPage.c)
 *     NtGdiEndPage @ 0x1C0279D00 (NtGdiEndPage.c)
 * Callees:
 *     <none>
 */

void __fastcall XDCOBJ::RestoreAttributesHelper(XDCOBJ *this)
{
  struct _DC_ATTR *UserAttr; // rax

  if ( !*((_DWORD *)this + 3) )
  {
    UserAttr = XDCOBJ::GetUserAttr(this);
    if ( UserAttr )
      DC::RestoreAttributes(*(DC **)this, UserAttr);
  }
}
