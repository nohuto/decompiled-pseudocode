/*
 * XREFs of ?EndAnimation@CAnimation@@AEAAXXZ @ 0x180068CF0
 * Callers:
 *     ??1CAnimation@@UEAA@XZ @ 0x180068AA0 (--1CAnimation@@UEAA@XZ.c)
 *     ?UpdateAnimateValues@CAnimation@@UEAAXXZ @ 0x1800C80B0 (-UpdateAnimateValues@CAnimation@@UEAAXXZ.c)
 * Callees:
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180057AF0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?UnregisterAnimateResource@CBaseAnimation@@QEAAJXZ @ 0x180068D70 (-UnregisterAnimateResource@CBaseAnimation@@QEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0x @ 0x180149D54 (McTemplateU0x.c)
 */

void __fastcall CAnimation::EndAnimation(CAnimation *this)
{
  unsigned int i; // edi
  __int64 v3; // r9
  __int64 v4; // rcx

  if ( (*((_BYTE *)this + 112) & 2) == 0 )
  {
    for ( i = 0; i < *((_DWORD *)this + 22); ++i )
    {
      v4 = *(_QWORD *)(*((_QWORD *)this + 8) + 16LL * i);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
    }
    *((_DWORD *)this + 22) = 0;
    DynArrayImpl<0>::ShrinkToSize((__int64)this + 64, 0x10u);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      McTemplateU0x(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_DCOMPEVENT_END_ANIMATION, this, v3);
    *((_BYTE *)this + 112) |= 2u;
  }
  if ( *((_BYTE *)this + 96) )
    CBaseAnimation::UnregisterAnimateResource(this);
}
