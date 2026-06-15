/*
 * XREFs of ??1SpatialAudioIO@@UEAA@XZ @ 0x1801318BC
 * Callers:
 *     ??_ESpatialAudioDeviceStateWriter@@UEAAPEAXI@Z @ 0x180131930 (--_ESpatialAudioDeviceStateWriter@@UEAAPEAXI@Z.c)
 *     ??_GSpatialAudioIO@@UEAAPEAXI@Z @ 0x1801319C0 (--_GSpatialAudioIO@@UEAAPEAXI@Z.c)
 *     ??_GSpatialAudioStateIO@@UEAAPEAXI@Z @ 0x180131A00 (--_GSpatialAudioStateIO@@UEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 */

void __fastcall SpatialAudioIO::~SpatialAudioIO(SpatialAudioIO *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  *(_QWORD *)this = &SpatialAudioIO::`vftable';
  v2 = *((_QWORD *)this + 67);
  if ( v2 )
  {
    *((_QWORD *)this + 67) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  v3 = *((_QWORD *)this + 66);
  if ( v3 )
  {
    *((_QWORD *)this + 66) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
}
