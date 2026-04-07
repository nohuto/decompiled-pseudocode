/*
 * XREFs of ?ValidateVisual@CTopLevelWindow3D@@UEAAJXZ @ 0x180014A70
 * Callers:
 *     <none>
 * Callees:
 *     ?StartAnimation@CTopLevelWindow3D@@AEAAJW4WindowAnimationType@1@@Z @ 0x180012FC0 (-StartAnimation@CTopLevelWindow3D@@AEAAJW4WindowAnimationType@1@@Z.c)
 *     ?ValidateVisual@CVisual@@UEAAJXZ @ 0x180014C30 (-ValidateVisual@CVisual@@UEAAJXZ.c)
 *     ?EnsureRenderData@CTopLevelWindow3D@@AEAAJXZ @ 0x180014D1C (-EnsureRenderData@CTopLevelWindow3D@@AEAAJXZ.c)
 *     ?UpdateAnimatedResources@CTopLevelWindow3D@@AEAAJXZ @ 0x180016410 (-UpdateAnimatedResources@CTopLevelWindow3D@@AEAAJXZ.c)
 *     ?StopAnimation@CTopLevelWindow3D@@QEAAJXZ @ 0x1800198B0 (-StopAnimation@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ?ShowWindow@CTopLevelWindow@@QEAAJ_N@Z @ 0x180019C10 (-ShowWindow@CTopLevelWindow@@QEAAJ_N@Z.c)
 *     ?Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z @ 0x18001EB90 (-Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?Create@CSecondaryWindowRepresentation@@SAJU?$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAUISecondaryWindowRepresentationChangedListener@@PEAVCWindowData@@IW4DEVICE_SCALE_FACTOR@@PEAPEAV1@@Z @ 0x18002682C (-Create@CSecondaryWindowRepresentation@@SAJU-$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAUISeconda.c)
 *     ?Validate@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x180036ED8 (-Validate@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 *     ?UnregisterForGlobalTimeChangeNotification@CDesktopManager@@SA_NPEAVCVisual@@@Z @ 0x180037974 (-UnregisterForGlobalTimeChangeNotification@CDesktopManager@@SA_NPEAVCVisual@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CTopLevelWindow3D::ValidateVisual(CSecondaryWindowRepresentation **this)
{
  CSecondaryWindowRepresentation *v2; // rax
  int started; // eax
  int v4; // ebx
  int v5; // eax
  int v6; // eax
  int v8; // eax
  CSecondaryWindowRepresentation *v9; // rcx
  int v10; // eax
  int v11; // r9d
  int v12; // eax
  unsigned int v13; // [rsp+20h] [rbp-18h]
  unsigned int v14; // [rsp+20h] [rbp-18h]

  if ( ((_DWORD)this[10] & 0x1000) != 0 )
  {
    if ( *((_BYTE *)this + 480) && CDesktopManager::UnregisterForGlobalTimeChangeNotification((struct CVisual *)this) )
    {
      if ( this[45] )
      {
        started = CTopLevelWindow3D::StopAnimation((CTopLevelWindow3D *)this);
        v4 = started;
        if ( started < 0 )
        {
          v14 = 590;
          goto LABEL_36;
        }
      }
      started = CTopLevelWindow3D::StartAnimation((__int64)this, 5u);
      v4 = started;
      if ( started < 0 )
      {
        v14 = 592;
        goto LABEL_36;
      }
      *((_BYTE *)this + 480) = 0;
    }
    v2 = this[45];
    if ( !v2 || *((_BYTE *)v2 + 72) )
    {
      started = CTopLevelWindow3D::StopAnimation((CTopLevelWindow3D *)this);
      v4 = started;
      if ( started < 0 )
      {
        v14 = 611;
LABEL_36:
        v11 = started;
LABEL_39:
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, v14);
        return (unsigned int)v4;
      }
LABEL_13:
      *((_DWORD *)this + 20) &= ~0x1000u;
      goto LABEL_14;
    }
    started = CTopLevelWindow::ShowWindow(*((CTopLevelWindow **)this[41] + 49), 0);
    v4 = started;
    if ( started < 0 )
    {
      v14 = 601;
      goto LABEL_36;
    }
    v4 = 0;
    if ( !this[42] )
    {
      v12 = CSecondaryWindowRepresentation::Create(160LL, this + 35, this[41]);
      v4 = v12;
      if ( v12 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0x287u);
    }
    if ( v4 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x292u);
    }
    else
    {
      if ( this[44] || (v10 = CResource::Create(32LL, *((_QWORD *)this[2] + 2), this + 44), v4 = v10, v10 >= 0) )
      {
        if ( this[43] )
          goto LABEL_10;
        v10 = CResource::Create(21LL, *((_QWORD *)this[2] + 2), this + 43);
        v4 = v10;
        if ( v10 >= 0 )
          goto LABEL_10;
        v13 = 667;
      }
      else
      {
        v13 = 662;
      }
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, v13);
    }
LABEL_10:
    if ( v4 < 0 )
    {
      v14 = 603;
LABEL_38:
      v11 = v4;
      goto LABEL_39;
    }
    started = CTopLevelWindow3D::UpdateAnimatedResources((CTopLevelWindow3D *)this);
    v4 = started;
    if ( started < 0 )
    {
      v14 = 605;
      goto LABEL_36;
    }
    started = CTopLevelWindow3D::EnsureRenderData((CTopLevelWindow3D *)this);
    v4 = started;
    if ( started < 0 )
    {
      v14 = 607;
      goto LABEL_36;
    }
    goto LABEL_13;
  }
LABEL_14:
  v5 = CVisual::ValidateVisual((CVisual *)this);
  v4 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x94u);
  }
  else if ( ((_BYTE)this[10] & 4) != 0 )
  {
    v8 = (*((__int64 (__fastcall **)(CSecondaryWindowRepresentation **))*this + 24))(this);
    v4 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x98u);
    else
      *((_DWORD *)this + 20) &= ~4u;
  }
  if ( v4 < 0 )
  {
    v14 = 617;
    goto LABEL_38;
  }
  v6 = *((_DWORD *)this + 20);
  if ( (v6 & 0x80u) != 0 )
  {
    v9 = this[42];
    if ( v9 )
    {
      started = CSecondaryWindowRepresentation::Validate(v9);
      v4 = started;
      if ( started < 0 )
      {
        v14 = 624;
        goto LABEL_36;
      }
      v6 = *((_DWORD *)this + 20);
    }
    *((_DWORD *)this + 20) = v6 & 0xFFFFFF7F;
  }
  return (unsigned int)v4;
}
