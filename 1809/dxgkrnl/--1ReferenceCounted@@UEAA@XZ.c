/*
 * XREFs of ??1ReferenceCounted@@UEAA@XZ @ 0x1C000B194
 * Callers:
 *     ??_GDXGK_GAMMA_RAMP@@UEAAPEAXI@Z @ 0x1C0006040 (--_GDXGK_GAMMA_RAMP@@UEAAPEAXI@Z.c)
 *     ??1DMMVIDPNSOURCEMODESET@@UEAA@XZ @ 0x1C000AB60 (--1DMMVIDPNSOURCEMODESET@@UEAA@XZ.c)
 *     ??_GReferenceCounted@@UEAAPEAXI@Z @ 0x1C0030510 (--_GReferenceCounted@@UEAAPEAXI@Z.c)
 *     ??1DMMVIDEOPRESENTSOURCESET@@UEAA@XZ @ 0x1C004C3A4 (--1DMMVIDEOPRESENTSOURCESET@@UEAA@XZ.c)
 *     ??1DMMVIDEOPRESENTTARGETSET@@UEAA@XZ @ 0x1C004C418 (--1DMMVIDEOPRESENTTARGETSET@@UEAA@XZ.c)
 *     ??1DMMVIDPN@@UEAA@XZ @ 0x1C00C2A74 (--1DMMVIDPN@@UEAA@XZ.c)
 *     ??1DXGDISPLAYMANAGEROBJECT@@UEAA@XZ @ 0x1C0140B78 (--1DXGDISPLAYMANAGEROBJECT@@UEAA@XZ.c)
 *     ??1DMMVIDEOPRESENTTARGET@@UEAA@XZ @ 0x1C0282D80 (--1DMMVIDEOPRESENTTARGET@@UEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall ReferenceCounted::~ReferenceCounted(ReferenceCounted *this)
{
  __int64 v2; // rax

  *(_QWORD *)this = &ReferenceCounted::`vftable';
  if ( *((_DWORD *)this + 2) )
  {
    v2 = WdLogNewEntry5_WdError(this);
    *(_QWORD *)(v2 + 24) = *((int *)this + 2);
    WdLogEvent5_WdError(v2);
  }
}
