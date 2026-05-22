/*
 * XREFs of ?Stop@DisplayChangedHandler@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@QEAAXXZ @ 0x1800E5008
 * Callers:
 *     ?OnFinalRelease@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@UEAAJXZ @ 0x1800E38D0 (-OnFinalRelease@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@U.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::DisplayChangedHandler::Stop(
        Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::DisplayChangedHandler *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  __int64 *v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rax

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 48);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 48));
  *((_QWORD *)this + 4) = 0LL;
  v3 = (__int64 *)*((_QWORD *)this + 3);
  v4 = *((_QWORD *)this + 5);
  v5 = *v3;
  if ( *((_BYTE *)this + 16) )
    (*(void (__fastcall **)(__int64 *, __int64))(v5 + 64))(v3, v4);
  else
    (*(void (__fastcall **)(__int64 *, __int64))(v5 + 80))(v3, v4);
  if ( v2 )
    LeaveCriticalSection(v2);
}
