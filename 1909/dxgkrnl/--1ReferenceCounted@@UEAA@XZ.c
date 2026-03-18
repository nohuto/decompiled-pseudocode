/*
 * XREFs of ??1ReferenceCounted@@UEAA@XZ @ 0x1C00051A8
 * Callers:
 *     ??_GDXGK_GAMMA_RAMP@@UEAAPEAXI@Z @ 0x1C00025B0 (--_GDXGK_GAMMA_RAMP@@UEAAPEAXI@Z.c)
 *     ??_E?$rc_buffer@U?$AlpcRequest@$07@DispBroker@@@@UEAAPEAXI@Z @ 0x1C0035E50 (--_E-$rc_buffer@U-$AlpcRequest@$07@DispBroker@@@@UEAAPEAXI@Z.c)
 *     ??1DMMVIDEOPRESENTSOURCESET@@UEAA@XZ @ 0x1C005361C (--1DMMVIDEOPRESENTSOURCESET@@UEAA@XZ.c)
 *     ??1DMMVIDEOPRESENTTARGETSET@@UEAA@XZ @ 0x1C0053690 (--1DMMVIDEOPRESENTTARGETSET@@UEAA@XZ.c)
 *     ??1DXGDISPLAYMANAGEROBJECT@@UEAA@XZ @ 0x1C00C68F8 (--1DXGDISPLAYMANAGEROBJECT@@UEAA@XZ.c)
 *     ??1DMMVIDPN@@UEAA@XZ @ 0x1C00E5AF8 (--1DMMVIDPN@@UEAA@XZ.c)
 *     ??1DMMVIDEOPRESENTTARGET@@UEAA@XZ @ 0x1C02BB0F4 (--1DMMVIDEOPRESENTTARGET@@UEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall ReferenceCounted::~ReferenceCounted(ReferenceCounted *this, __int64 a2, __int64 a3)
{
  __int64 v4; // rax

  *(_QWORD *)this = &ReferenceCounted::`vftable';
  if ( *((_DWORD *)this + 2) )
  {
    v4 = WdLogNewEntry5_WdError(this, a2, a3);
    *(_QWORD *)(v4 + 24) = *((int *)this + 2);
    WdLogEvent5_WdError(v4);
  }
}
