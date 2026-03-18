/*
 * XREFs of ?Clear@CLightStack@@QEAAXXZ @ 0x180046E28
 * Callers:
 *     ??1CLightStack@@QEAA@XZ @ 0x180046DF0 (--1CLightStack@@QEAA@XZ.c)
 * Callees:
 *     ??$ReleaseInterface@VCDisplay@@@@YAXAEAPEAVCDisplay@@@Z @ 0x18002B298 (--$ReleaseInterface@VCDisplay@@@@YAXAEAPEAVCDisplay@@@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800B8A58 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CLightStack::Clear(CLightStack *this)
{
  unsigned int i; // edi
  __int64 v3; // rcx

  for ( i = 0; i < *((_DWORD *)this + 6); ++i )
  {
    v3 = *(_QWORD *)(*(_QWORD *)this + 16LL * i);
    if ( v3 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  *((_DWORD *)this + 6) = 0;
  DynArrayImpl<0>::ShrinkToSize(this, 16LL);
  ReleaseInterface<CDisplay>((__int64 *)this + 13);
  *((_DWORD *)this + 52) = 0;
  DynArrayImpl<0>::ShrinkToSize((char *)this + 184, 8LL);
}
