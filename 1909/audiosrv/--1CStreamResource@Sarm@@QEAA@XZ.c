/*
 * XREFs of ??1CStreamResource@Sarm@@QEAA@XZ @ 0x18011EFBC
 * Callers:
 *     _util::InterfaceMap_IAudioStreamInfo_Sarm::CStreamResource_::Add_::_1_::dtor$1 @ 0x18011F3D6 (_util--InterfaceMap_IAudioStreamInfo_Sarm--CStreamResource_--Add_--_1_--dtor$1.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 *     ?Reclaim@CStreamResource@Sarm@@QEAAXXZ @ 0x1801247FC (-Reclaim@CStreamResource@Sarm@@QEAAXXZ.c)
 */

void __fastcall Sarm::CStreamResource::~CStreamResource(Sarm::CStreamResource *this)
{
  Sarm::CStreamResource::Reclaim(this);
  if ( *(_QWORD *)this )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)this + 16LL))(*(_QWORD *)this);
}
