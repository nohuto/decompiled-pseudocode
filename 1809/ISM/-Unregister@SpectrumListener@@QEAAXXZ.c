/*
 * XREFs of ?Unregister@SpectrumListener@@QEAAXXZ @ 0x180058CB0
 * Callers:
 *     ?OnCompositorRunningStateChanged@MPCRawInputProvider@@AEAAX_N@Z @ 0x180057A80 (-OnCompositorRunningStateChanged@MPCRawInputProvider@@AEAAX_N@Z.c)
 *     ??_GSpectrumListener@@UEAAPEAXI@Z @ 0x180058C20 (--_GSpectrumListener@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?GetInstance@MPCHeadUpdateListener@@SAPEAV1@XZ @ 0x18005ABA0 (-GetInstance@MPCHeadUpdateListener@@SAPEAV1@XZ.c)
 *     ?RemoveHeadEventOccurred@MPCHeadUpdateListener@@QEAAX_K@Z @ 0x18005B2E0 (-RemoveHeadEventOccurred@MPCHeadUpdateListener@@QEAAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

void __fastcall SpectrumListener::Unregister(SpectrumListener *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  MPCHeadUpdateListener *Instance; // rax

  if ( *((_BYTE *)this + 88) )
  {
    v2 = *((_QWORD *)this + 4);
    if ( v2 )
    {
      if ( *((_QWORD *)this + 7) )
      {
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v2 + 56LL))(v2, *((_QWORD *)this + 7));
        v2 = *((_QWORD *)this + 4);
      }
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v2 + 72LL))(v2, *((_QWORD *)this + 8));
    }
    v3 = *((_QWORD *)this + 5);
    if ( v3 )
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v3 + 56LL))(v3, *((_QWORD *)this + 9));
    AcquireSRWLockExclusive((PSRWLOCK)this + 10);
    *((_QWORD *)this + 2) = 0LL;
    if ( this != (SpectrumListener *)-80LL )
      ReleaseSRWLockExclusive((PSRWLOCK)this + 10);
    v4 = *((_QWORD *)this + 4);
    if ( v4 )
    {
      *((_QWORD *)this + 4) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
    }
    v5 = *((_QWORD *)this + 5);
    if ( v5 )
    {
      *((_QWORD *)this + 5) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    }
    Instance = MPCHeadUpdateListener::GetInstance();
    MPCHeadUpdateListener::RemoveHeadEventOccurred(Instance, *((_QWORD *)this + 6));
    *((_BYTE *)this + 88) = 0;
  }
}
