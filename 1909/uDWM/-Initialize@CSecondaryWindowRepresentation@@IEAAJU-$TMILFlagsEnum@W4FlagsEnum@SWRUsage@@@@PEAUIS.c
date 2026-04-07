/*
 * XREFs of ?Initialize@CSecondaryWindowRepresentation@@IEAAJU?$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAUISecondaryWindowRepresentationChangedListener@@PEAVCWindowData@@HW4DEVICE_SCALE_FACTOR@@@Z @ 0x1800111A0
 * Callers:
 *     ?Create@CSecondaryWindowRepresentation@@SAJU?$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAUISecondaryWindowRepresentationChangedListener@@PEAVCWindowData@@IW4DEVICE_SCALE_FACTOR@@PEAPEAV1@@Z @ 0x1800110E8 (-Create@CSecondaryWindowRepresentation@@SAJU-$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAUISeconda.c)
 * Callees:
 *     ?OnRepresentationUpdated@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x180013190 (-OnRepresentationUpdated@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180015648 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?EnsureOwnedWindowVisual@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x18002548C (-EnsureOwnedWindowVisual@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 *     ?GetStoredSnapshotNoRefByIndex@CTransitionVisualController@@QEAAJHPEAPEAVCTransitionWindowSnapshot@@@Z @ 0x180030234 (-GetStoredSnapshotNoRefByIndex@CTransitionVisualController@@QEAAJHPEAPEAVCTransitionWindowSnapsh.c)
 *     ?_GetSnapshotIndex@CTransitionVisualController@@IEAAHPEAUHWND__@@@Z @ 0x180030260 (-_GetSnapshotIndex@CTransitionVisualController@@IEAAHPEAUHWND__@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004F8B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CSecondaryWindowRepresentation::Initialize(
        CSecondaryWindowRepresentation *this,
        int a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6)
{
  int v6; // esi
  __int64 v9; // r10
  unsigned int v10; // eax
  unsigned int v11; // edx
  int v12; // eax
  int v13; // ebx
  int v15; // eax
  int SnapshotIndex; // eax
  CTransitionVisualController *v17; // rcx
  struct CTransitionWindowSnapshot *v18; // r8
  int v19; // eax
  int v20; // r9d
  unsigned int v21; // [rsp+20h] [rbp-28h]
  void *v22; // [rsp+28h] [rbp-20h]
  CSecondaryWindowRepresentation *v23; // [rsp+50h] [rbp+8h] BYREF
  struct CTransitionWindowSnapshot *v24; // [rsp+60h] [rbp+18h] BYREF

  v6 = 0;
  *((_DWORD *)this + 41) = a5;
  *((_DWORD *)this + 30) = a6;
  v9 = a4;
  *((_DWORD *)this + 10) = a2;
  *((_QWORD *)this + 4) = a4;
  *((_QWORD *)this + 21) = a3;
  if ( (a2 & 1) != 0 )
  {
    v12 = CSecondaryWindowRepresentation::EnsureOwnedWindowVisual(this);
    v13 = v12;
    if ( v12 < 0 )
    {
      v21 = 145;
LABEL_24:
      v20 = v12;
LABEL_27:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v20, v21, v22);
      return (unsigned int)v13;
    }
    v9 = *((_QWORD *)this + 4);
  }
  v23 = this;
  v10 = *(_DWORD *)(v9 + 472);
  v11 = v10 + 1;
  if ( v10 + 1 < v10 )
  {
    v13 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0xB5u, v22);
    goto LABEL_26;
  }
  if ( v11 <= *(_DWORD *)(v9 + 468) )
  {
    *(_QWORD *)(*(_QWORD *)(v9 + 448) + 8LL * v10) = v23;
    *(_DWORD *)(v9 + 472) = v11;
    goto LABEL_5;
  }
  v15 = DynArrayImpl<0>::AddMultipleAndSet(v9 + 448, 8LL, 1LL, &v23);
  v13 = v15;
  if ( v15 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15, 0xC0u, v22);
  if ( v13 < 0 )
  {
LABEL_26:
    v21 = 148;
    v20 = v13;
    goto LABEL_27;
  }
LABEL_5:
  v12 = CSecondaryWindowRepresentation::OnRepresentationUpdated(this);
  v13 = v12;
  if ( v12 < 0 )
  {
    v21 = 155;
    goto LABEL_24;
  }
  if ( (*((_DWORD *)this + 10) & 0x400) != 0 )
  {
    SnapshotIndex = CTransitionVisualController::_GetSnapshotIndex(
                      *((CTransitionVisualController **)CDesktopManager::s_pDesktopManagerInstance + 31),
                      *(HWND *)(a4 + 40));
    if ( (int)CTransitionVisualController::GetStoredSnapshotNoRefByIndex(v17, SnapshotIndex, &v24) >= 0 )
    {
      v18 = v24;
      if ( *((_BYTE *)v24 + 356) )
      {
        v19 = 0;
        if ( *(_DWORD *)(*((_QWORD *)this + 4) + 56LL) - *(_DWORD *)(*((_QWORD *)this + 4) + 48LL) >= 0 )
          v19 = *(_DWORD *)(*((_QWORD *)this + 4) + 56LL) - *(_DWORD *)(*((_QWORD *)this + 4) + 48LL);
        if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v24 + 35) + 32LL) + 56LL)
           - *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v24 + 35) + 32LL) + 48LL) >= 0 )
          v6 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v24 + 35) + 32LL) + 56LL)
             - *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v24 + 35) + 32LL) + 48LL);
        if ( v6 == v19 )
        {
          *((_QWORD *)this + 68) = v24;
          _InterlockedIncrement((volatile signed __int32 *)v18 + 2);
          *((_BYTE *)this + 160) = 1;
        }
      }
    }
  }
  return (unsigned int)v13;
}
