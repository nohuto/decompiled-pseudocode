/*
 * XREFs of ?EndAnimation@CAnimation@@AEAAXXZ @ 0x1800B5740
 * Callers:
 *     ?UpdateAnimateValues@CAnimation@@UEAAXXZ @ 0x1800B32D0 (-UpdateAnimateValues@CAnimation@@UEAAXXZ.c)
 *     ??1CAnimation@@UEAA@XZ @ 0x1800B5540 (--1CAnimation@@UEAA@XZ.c)
 * Callees:
 *     ?UnregisterAnimateResource@CBaseAnimation@@QEAAJXZ @ 0x1800B57C0 (-UnregisterAnimateResource@CBaseAnimation@@QEAAJXZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800BB688 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0x @ 0x18015D5EC (McTemplateU0x.c)
 */

void __fastcall CAnimation::EndAnimation(CAnimation *this)
{
  unsigned int i; // edi
  __int64 v3; // rcx

  if ( (*((_BYTE *)this + 112) & 2) == 0 )
  {
    for ( i = 0; i < *((_DWORD *)this + 22); ++i )
    {
      v3 = *(_QWORD *)(*((_QWORD *)this + 8) + 16LL * i);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
    }
    *((_DWORD *)this + 22) = 0;
    DynArrayImpl<0>::ShrinkToSize((char *)this + 64, 16LL);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      McTemplateU0x(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_DCOMPEVENT_END_ANIMATION, this);
    *((_BYTE *)this + 112) |= 2u;
  }
  if ( *((_BYTE *)this + 96) )
    CBaseAnimation::UnregisterAnimateResource(this);
}
