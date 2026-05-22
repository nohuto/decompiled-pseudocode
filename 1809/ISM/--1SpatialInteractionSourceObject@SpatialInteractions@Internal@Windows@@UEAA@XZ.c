/*
 * XREFs of ??1SpatialInteractionSourceObject@SpatialInteractions@Internal@Windows@@UEAA@XZ @ 0x1800BB008
 * Callers:
 *     ??_GSpatialInteractionSourceObject@SpatialInteractions@Internal@Windows@@UEAAPEAXI@Z @ 0x1800BAF70 (--_GSpatialInteractionSourceObject@SpatialInteractions@Internal@Windows@@UEAAPEAXI@Z.c)
 *     ??_GSpatialInteractionSourceHand@SpatialInteractions@Internal@Windows@@UEAAPEAXI@Z @ 0x1800BD6D0 (--_GSpatialInteractionSourceHand@SpatialInteractions@Internal@Windows@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Instance@SpatialInteractionTrace@SpatialInteractionDevices@@KAPEAV12@XZ @ 0x1800A2798 (-Instance@SpatialInteractionTrace@SpatialInteractionDevices@@KAPEAV12@XZ.c)
 *     ?SpatialObjectStateStatistics_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXAEBU_GUID@@II@Z @ 0x1800BAA00 (-SpatialObjectStateStatistics_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXAEBU_GUID.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

void __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionSourceObject::~SpatialInteractionSourceObject(
        Windows::Internal::SpatialInteractions::SpatialInteractionSourceObject *this)
{
  const struct _GUID *v2; // rdi
  _DWORD *v3; // rcx
  SpatialInteractionDevices::SpatialInteractionTrace *v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  _BYTE v10[16]; // [rsp+28h] [rbp-20h] BYREF

  *(_QWORD *)this = &Windows::Internal::SpatialInteractions::SpatialInteractionSourceObject::`vftable';
  v2 = (const struct _GUID *)(*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 15) + 48LL))(
                               *((_QWORD *)this + 15),
                               v10);
  v3 = (_DWORD *)*((_QWORD *)SpatialInteractionDevices::SpatialInteractionTrace::Instance() + 1);
  if ( v3 && *v3 )
  {
    SpatialInteractionDevices::SpatialInteractionTrace::Instance();
    SpatialInteractionDevices::SpatialInteractionTrace::SpatialObjectStateStatistics_(
      v4,
      v2,
      *((_DWORD *)this + 36),
      *((_DWORD *)this + 37));
  }
  v5 = *((_QWORD *)this + 17);
  if ( v5 )
  {
    *((_QWORD *)this + 17) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  v6 = *((_QWORD *)this + 16);
  if ( v6 )
  {
    *((_QWORD *)this + 16) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  v7 = *((_QWORD *)this + 15);
  if ( v7 )
  {
    *((_QWORD *)this + 15) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  v8 = *((_QWORD *)this + 14);
  if ( v8 )
  {
    *((_QWORD *)this + 14) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  WindowsDeleteString(*((HSTRING *)this + 12));
  *((_QWORD *)this + 12) = 0LL;
  v9 = *((_QWORD *)this + 11);
  if ( v9 )
  {
    *((_QWORD *)this + 11) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  WindowsDeleteString(*((HSTRING *)this + 5));
  *((_QWORD *)this + 5) = 0LL;
}
