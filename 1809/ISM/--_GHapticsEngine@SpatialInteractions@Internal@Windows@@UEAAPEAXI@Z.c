/*
 * XREFs of ??_GHapticsEngine@SpatialInteractions@Internal@Windows@@UEAAPEAXI@Z @ 0x180129620
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIHapticsTimerCallback@SpatialInteractions@Internal@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAA@XZ @ 0x18004F25C (--1-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIHapticsTimerCallback@S.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

Windows::Internal::SpatialInteractions::HapticsEngine *__fastcall Windows::Internal::SpatialInteractions::HapticsEngine::`scalar deleting destructor'(
        Windows::Internal::SpatialInteractions::HapticsEngine *this,
        __int64 a2)
{
  char v2; // si
  char *v4; // rdi
  char *v5; // rcx
  __int64 v6; // rcx
  void *v7; // rcx

  v2 = a2;
  v4 = (char *)this + 128;
  v5 = (char *)*((_QWORD *)this + 23);
  if ( v5 )
  {
    LOBYTE(a2) = v5 != v4;
    (*(void (__fastcall **)(char *, __int64))(*(_QWORD *)v5 + 32LL))(v5, a2);
    *((_QWORD *)v4 + 7) = 0LL;
  }
  v6 = *((_QWORD *)this + 15);
  if ( v6 )
  {
    *((_QWORD *)this + 15) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  v7 = (void *)*((_QWORD *)this + 14);
  if ( v7 )
    operator delete(v7, (const struct std::nothrow_t *)0x30);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 72));
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::SpatialInteractions::IHapticsTimerCallback,Microsoft::WRL::FtmBase>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::SpatialInteractions::IHapticsTimerCallback,Microsoft::WRL::FtmBase>((__int64)this);
  if ( (v2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0xE8);
  return this;
}
