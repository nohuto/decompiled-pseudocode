/*
 * XREFs of ??1CSpatialProperties@@QEAA@XZ @ 0x18012DD44
 * Callers:
 *     ??1CEndpointCharacteristics@@MEAA@XZ @ 0x180115430 (--1CEndpointCharacteristics@@MEAA@XZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 *     ?FreeTopologyList@CSpatialAudioTechnologies@@QEAAXXZ @ 0x18012F0B8 (-FreeTopologyList@CSpatialAudioTechnologies@@QEAAXXZ.c)
 */

void __fastcall CSpatialProperties::~CSpatialProperties(CSpatialProperties *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx

  if ( *((_BYTE *)this + 75) )
    CSpatialAudioTechnologies::FreeTopologyList(this);
  v2 = *((_QWORD *)this + 8);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  v3 = *((_QWORD *)this + 7);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  v4 = *((_QWORD *)this + 6);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  v5 = *((_QWORD *)this + 5);
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  DeleteCriticalSection((LPCRITICAL_SECTION)this);
}
