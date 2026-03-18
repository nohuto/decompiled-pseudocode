/*
 * XREFs of ?AddHwndRenderTarget@CDesktopRenderTarget@@IEAAJPEAVCHwndRenderTarget@@@Z @ 0x18007E678
 * Callers:
 *     ?EnsureRenderTargets@CDesktopRenderTarget@@UEAAJXZ @ 0x1800C8740 (-EnsureRenderTargets@CDesktopRenderTarget@@UEAAJXZ.c)
 *     ?CreateFullScreenRenderTargets2@CDesktopRenderTarget@@AEAAJXZ @ 0x1800D842C (-CreateFullScreenRenderTargets2@CDesktopRenderTarget@@AEAAJXZ.c)
 *     ?CreateFullScreenRenderTargets@CDesktopRenderTarget@@AEAAJXZ @ 0x180159B38 (-CreateFullScreenRenderTargets@CDesktopRenderTarget@@AEAAJXZ.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180022680 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?Remove@?$DynArray@PEAVCHwndRenderTarget@@$0A@@@QEAAHAEBQEAVCHwndRenderTarget@@@Z @ 0x18007E59C (-Remove@-$DynArray@PEAVCHwndRenderTarget@@$0A@@@QEAAHAEBQEAVCHwndRenderTarget@@@Z.c)
 *     ?InsertAt@?$DynArray@PEAVCHwndRenderTarget@@$0A@@@QEAAJAEBQEAVCHwndRenderTarget@@I@Z @ 0x18007E5E8 (-InsertAt@-$DynArray@PEAVCHwndRenderTarget@@$0A@@@QEAAJAEBQEAVCHwndRenderTarget@@I@Z.c)
 *     ?AddMonitorTree@CMonitorTreeAssociation@@QEAAJPEAUHMONITOR__@@PEAVCVisualTree@@@Z @ 0x18007E798 (-AddMonitorTree@CMonitorTreeAssociation@@QEAAJPEAUHMONITOR__@@PEAVCVisualTree@@@Z.c)
 *     ?AddRenderTarget@CComposition@@QEAAJPEAVCRenderTarget@@@Z @ 0x18007E858 (-AddRenderTarget@CComposition@@QEAAJPEAVCRenderTarget@@@Z.c)
 *     ?IsPrimary@CDisplay@@QEBA_NXZ @ 0x180081530 (-IsPrimary@CDisplay@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDesktopRenderTarget::AddHwndRenderTarget(CDesktopRenderTarget *this, CDisplay **a2)
{
  CDisplay *v3; // rbp
  int v4; // eax
  unsigned int v5; // ecx
  int v6; // ebx
  unsigned int v7; // ecx
  unsigned int v9; // eax
  unsigned int v10; // edx
  unsigned int v11; // ecx
  int v12; // eax
  unsigned int v13; // [rsp+20h] [rbp-18h]
  struct CRenderTarget *v14; // [rsp+48h] [rbp+10h] BYREF

  v14 = (struct CRenderTarget *)a2;
  v3 = a2[21];
  (*((void (__fastcall **)(CDisplay **))*a2 + 1))(a2);
  if ( *((_QWORD *)this + 15) )
  {
    v4 = (*(__int64 (__fastcall **)(struct CRenderTarget *))(*(_QWORD *)v14 + 200LL))(v14);
    v6 = v4;
    if ( v4 < 0 )
    {
      v13 = 803;
LABEL_12:
      MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v4, v13);
      goto LABEL_9;
    }
  }
  if ( (unsigned int)DynArray<CHwndRenderTarget *,0>::Remove((__int64 *)this + 22, &v14) )
    (*(void (__fastcall **)(struct CRenderTarget *))(*(_QWORD *)v14 + 16LL))(v14);
  if ( CDisplay::IsPrimary(v3) )
  {
    v4 = DynArray<CHwndRenderTarget *,0>::InsertAt((__int64 *)this + 22, &v14, 0);
    v6 = v4;
    if ( v4 < 0 )
    {
      v13 = 815;
      goto LABEL_12;
    }
  }
  else
  {
    v9 = *((_DWORD *)this + 50);
    v10 = v9 + 1;
    v6 = v9 + 1 < v9 ? 0x80070216 : 0;
    if ( v9 + 1 < v9 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0xB5u);
    }
    else if ( v10 > *((_DWORD *)this + 49) )
    {
      v12 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 176, 8, 1, &v14);
      v6 = v12;
      if ( v12 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v12, 0xC0u);
    }
    else
    {
      v11 = *((_DWORD *)this + 50);
      *(_QWORD *)(*((_QWORD *)this + 22) + 8LL * v9) = v14;
      *((_DWORD *)this + 50) = v10;
    }
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v6, 0x333u);
      goto LABEL_9;
    }
  }
  (*(void (__fastcall **)(struct CRenderTarget *))(*(_QWORD *)v14 + 8LL))(v14);
  v4 = CMonitorTreeAssociation::AddMonitorTree(
         *(CMonitorTreeAssociation **)(*((_QWORD *)this + 2) + 16LL),
         *(HMONITOR *)(*((_QWORD *)v3 + 19) + 16LL),
         *((struct CVisualTree **)this + 15));
  v6 = v4;
  if ( v4 < 0 )
  {
    v13 = 824;
    goto LABEL_12;
  }
  v4 = CComposition::AddRenderTarget(*((CComposition **)this + 2), v14);
  v6 = v4;
  if ( v4 < 0 )
  {
    v13 = 829;
    goto LABEL_12;
  }
LABEL_9:
  (*(void (__fastcall **)(struct CRenderTarget *))(*(_QWORD *)v14 + 16LL))(v14);
  return (unsigned int)v6;
}
