/*
 * XREFs of ?Invoke@HapticsEngine@SpatialInteractions@Internal@Windows@@UEAAJXZ @ 0x1801663C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010F44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalUnlock@SyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x18002A3F4 (-InternalUnlock@SyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 *     ?ShiftTo@HapticsFilter@SpatialInteractions@Internal@Windows@@QEAAJ_JPEANPEA_J@Z @ 0x1801685BC (-ShiftTo@HapticsFilter@SpatialInteractions@Internal@Windows@@QEAAJ_JPEANPEA_J@Z.c)
 *     ?UpdateFeedback@HapticsEngine@SpatialInteractions@Internal@Windows@@QEAAXN_J@Z @ 0x1801691F8 (-UpdateFeedback@HapticsEngine@SpatialInteractions@Internal@Windows@@QEAAXN_J@Z.c)
 */

__int64 __fastcall Windows::Internal::SpatialInteractions::HapticsEngine::Invoke(
        Windows::Internal::SpatialInteractions::HapticsEngine *this)
{
  struct _RTL_CRITICAL_SECTION *v1; // rbx
  bool v3; // zf
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // r8
  Windows::Internal::SpatialInteractions::HapticsEngine *v8; // rcx
  Windows::Internal::SpatialInteractions::HapticsFilter *v9; // rcx
  _QWORD *v10; // rsi
  __int64 v11; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v14; // [rsp+50h] [rbp+8h] BYREF
  double v15; // [rsp+58h] [rbp+10h] BYREF
  struct _RTL_CRITICAL_SECTION *v16; // [rsp+60h] [rbp+18h] BYREF

  v1 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 64);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 64));
  v3 = *((_BYTE *)this + 223) == 0;
  v16 = v1;
  if ( v3 )
    goto LABEL_10;
  v4 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 14) + 48LL))(*((_QWORD *)this + 14), &v14);
  v5 = v4;
  if ( v4 < 0 )
  {
    v6 = 631LL;
LABEL_14:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\inc\\hapticsengine.h",
      (const char *)(unsigned int)v4);
    goto LABEL_11;
  }
  if ( *((_BYTE *)this + 221) )
  {
    v7 = v14;
    v8 = (Windows::Internal::SpatialInteractions::HapticsEngine *)((char *)this - 8);
LABEL_9:
    Windows::Internal::SpatialInteractions::HapticsEngine::UpdateFeedback(v8, 0.0, v7);
    goto LABEL_10;
  }
  v9 = (Windows::Internal::SpatialInteractions::HapticsFilter *)*((_QWORD *)this + 13);
  v10 = (_QWORD *)((char *)this + 184);
  v11 = *((_QWORD *)this + 23);
  v15 = 0.0;
  v4 = Windows::Internal::SpatialInteractions::HapticsFilter::ShiftTo(v9, v11, &v15, (__int64 *)this + 23);
  v5 = v4;
  if ( v4 < 0 )
  {
    v6 = 643LL;
    goto LABEL_14;
  }
  v8 = (Windows::Internal::SpatialInteractions::HapticsEngine *)((char *)this - 8);
  v7 = v14;
  if ( !*v10 )
    goto LABEL_9;
  Windows::Internal::SpatialInteractions::HapticsEngine::UpdateFeedback(v8, v15, v14);
  v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 14) + 64LL))(*((_QWORD *)this + 14), *v10);
  v5 = v4;
  if ( v4 < 0 )
  {
    v6 = 653LL;
    goto LABEL_14;
  }
LABEL_10:
  v5 = 0;
LABEL_11:
  Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection::InternalUnlock(&v16);
  return v5;
}
