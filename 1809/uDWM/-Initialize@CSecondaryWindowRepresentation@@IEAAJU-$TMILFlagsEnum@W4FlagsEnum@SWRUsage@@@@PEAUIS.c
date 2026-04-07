/*
 * XREFs of ?Initialize@CSecondaryWindowRepresentation@@IEAAJU?$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAUISecondaryWindowRepresentationChangedListener@@PEAVCWindowData@@HW4DEVICE_SCALE_FACTOR@@@Z @ 0x180026704
 * Callers:
 *     ?Create@CSecondaryWindowRepresentation@@SAJU?$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAUISecondaryWindowRepresentationChangedListener@@PEAVCWindowData@@IW4DEVICE_SCALE_FACTOR@@PEAPEAV1@@Z @ 0x18002682C (-Create@CSecondaryWindowRepresentation@@SAJU-$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAUISeconda.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18002107C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?OnRepresentationUpdated@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x18002379C (-OnRepresentationUpdated@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 *     ?EnsureOwnedWindowVisual@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x180023F94 (-EnsureOwnedWindowVisual@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 *     ?GetStoredSnapshotNoRefByIndex@CTransitionVisualController@@QEAAJHPEAPEAVCTransitionWindowSnapshot@@@Z @ 0x180032028 (-GetStoredSnapshotNoRefByIndex@CTransitionVisualController@@QEAAJHPEAPEAVCTransitionWindowSnapsh.c)
 *     ?_GetSnapshotIndex@CTransitionVisualController@@IEAAHPEAUHWND__@@@Z @ 0x180032054 (-_GetSnapshotIndex@CTransitionVisualController@@IEAAHPEAUHWND__@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
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
  int v12; // ebx
  int v13; // eax
  int v14; // eax
  int SnapshotIndex; // eax
  CTransitionVisualController *v17; // rcx
  int v18; // r9d
  struct CTransitionWindowSnapshot *v19; // r8
  int v20; // eax
  unsigned int v21; // [rsp+20h] [rbp-28h]
  CSecondaryWindowRepresentation *v22; // [rsp+50h] [rbp+8h] BYREF
  struct CTransitionWindowSnapshot *v23; // [rsp+60h] [rbp+18h] BYREF

  v6 = 0;
  *((_DWORD *)this + 41) = a5;
  *((_DWORD *)this + 30) = a6;
  v9 = a4;
  *((_DWORD *)this + 10) = a2;
  *((_QWORD *)this + 4) = a4;
  *((_QWORD *)this + 21) = a3;
  if ( (a2 & 1) != 0 )
  {
    v14 = CSecondaryWindowRepresentation::EnsureOwnedWindowVisual(this);
    v12 = v14;
    if ( v14 < 0 )
    {
      v21 = 145;
LABEL_16:
      v18 = v14;
LABEL_18:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v18, v21);
      return (unsigned int)v12;
    }
    v9 = *((_QWORD *)this + 4);
  }
  v22 = this;
  v10 = *(_DWORD *)(v9 + 464);
  v11 = v10 + 1;
  v12 = v10 + 1 < v10 ? 0x80070216 : 0;
  if ( v10 + 1 < v10 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0xB5u);
  }
  else if ( v11 <= *(_DWORD *)(v9 + 460) )
  {
    *(_QWORD *)(*(_QWORD *)(v9 + 440) + 8LL * *(unsigned int *)(v9 + 464)) = v22;
    *(_DWORD *)(v9 + 464) = v11;
  }
  else
  {
    v13 = DynArrayImpl<0>::AddMultipleAndSet(v9 + 440, 8u, 1, &v22);
    v12 = v13;
    if ( v13 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0xC0u);
  }
  if ( v12 < 0 )
  {
    v21 = 148;
    v18 = v12;
    goto LABEL_18;
  }
  v14 = CSecondaryWindowRepresentation::OnRepresentationUpdated(this);
  v12 = v14;
  if ( v14 < 0 )
  {
    v21 = 155;
    goto LABEL_16;
  }
  if ( (*((_DWORD *)this + 10) & 0x400) != 0 )
  {
    SnapshotIndex = CTransitionVisualController::_GetSnapshotIndex(
                      *((CTransitionVisualController **)CDesktopManager::s_pDesktopManagerInstance + 31),
                      *(HWND *)(a4 + 40));
    if ( (int)CTransitionVisualController::GetStoredSnapshotNoRefByIndex(v17, SnapshotIndex, &v23) >= 0 )
    {
      v19 = v23;
      if ( *((_BYTE *)v23 + 356) )
      {
        v20 = 0;
        if ( *(_DWORD *)(*((_QWORD *)this + 4) + 56LL) - *(_DWORD *)(*((_QWORD *)this + 4) + 48LL) >= 0 )
          v20 = *(_DWORD *)(*((_QWORD *)this + 4) + 56LL) - *(_DWORD *)(*((_QWORD *)this + 4) + 48LL);
        if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v23 + 35) + 32LL) + 56LL)
           - *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v23 + 35) + 32LL) + 48LL) >= 0 )
          v6 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v23 + 35) + 32LL) + 56LL)
             - *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v23 + 35) + 32LL) + 48LL);
        if ( v6 == v20 )
        {
          *((_QWORD *)this + 68) = v23;
          _InterlockedIncrement((volatile signed __int32 *)v19 + 2);
          *((_BYTE *)this + 160) = 1;
        }
      }
    }
  }
  return (unsigned int)v12;
}
