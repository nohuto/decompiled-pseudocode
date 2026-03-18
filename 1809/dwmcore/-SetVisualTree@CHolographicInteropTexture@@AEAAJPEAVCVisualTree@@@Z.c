/*
 * XREFs of ?SetVisualTree@CHolographicInteropTexture@@AEAAJPEAVCVisualTree@@@Z @ 0x18020E860
 * Callers:
 *     ?SetRootVisual@CHolographicInteropTexture@@AEAAJPEAVCVisual@@@Z @ 0x18020E7BC (-SetRootVisual@CHolographicInteropTexture@@AEAAJPEAVCVisual@@@Z.c)
 * Callees:
 *     ?SetVisualDesktopId@CVisual@@QEAAXI@Z @ 0x180077868 (-SetVisualDesktopId@CVisual@@QEAAXI@Z.c)
 *     ?AddTreeClient@CVisualTree@@QEAAJPEAVIVisualTreeClient@@@Z @ 0x180077A14 (-AddTreeClient@CVisualTree@@QEAAJPEAVIVisualTreeClient@@@Z.c)
 *     ?AddMonitorTree@CMonitorTreeAssociation@@QEAAJPEAUHMONITOR__@@PEAVCVisualTree@@@Z @ 0x18007E798 (-AddMonitorTree@CMonitorTreeAssociation@@QEAAJPEAUHMONITOR__@@PEAVCVisualTree@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?GetPrimaryHMonitor@CHolographicInteropTexture@@AEAAJAEAPEAUHMONITOR__@@@Z @ 0x18020DF8C (-GetPrimaryHMonitor@CHolographicInteropTexture@@AEAAJAEAPEAUHMONITOR__@@@Z.c)
 *     ?ReleaseVisualTree@CHolographicInteropTexture@@AEAAXXZ @ 0x18020E6F4 (-ReleaseVisualTree@CHolographicInteropTexture@@AEAAXXZ.c)
 */

__int64 __fastcall CHolographicInteropTexture::SetVisualTree(CHolographicInteropTexture **this, struct CVisualTree *a2)
{
  unsigned int v2; // ebx
  int v5; // eax
  __int64 v6; // rcx
  CHolographicInteropTexture *v7; // rcx
  __int64 v8; // rbp
  __int64 v9; // r14
  __int64 v10; // rcx
  int PrimaryHMonitor; // eax
  __int64 v12; // rcx
  int v13; // eax
  __int64 v14; // rcx
  HMONITOR v16; // [rsp+50h] [rbp+8h] BYREF

  v2 = 0;
  if ( a2 != this[10] )
  {
    CHolographicInteropTexture::ReleaseVisualTree((CHolographicInteropTexture *)this);
    if ( a2 )
    {
      v5 = CVisualTree::AddTreeClient(a2, (struct IVisualTreeClient *)(this + 7));
      v2 = v5;
      if ( v5 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0x104u);
      }
      else
      {
        *((_BYTE *)this + 135) = 1;
        this[10] = a2;
        _InterlockedIncrement((volatile signed __int32 *)a2 + 2);
        *((_BYTE *)a2 + 32) = 1;
        CVisual::SetVisualDesktopId(*((CVisual **)a2 + 3), 0);
        v7 = this[2];
        v8 = 0LL;
        v9 = *((_QWORD *)v7 + 8);
        if ( !*(_DWORD *)(v9 + 80) )
          goto LABEL_9;
        while ( 1 )
        {
          v10 = *(_QWORD *)(*(_QWORD *)(v9 + 56) + 8 * v8);
          if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v10 + 264LL))(v10) )
            break;
          v8 = (unsigned int)(v8 + 1);
          if ( (unsigned int)v8 >= *(_DWORD *)(v9 + 80) )
            goto LABEL_9;
        }
        if ( !*(_QWORD *)(*(_QWORD *)(v9 + 56) + 8 * v8) )
        {
LABEL_9:
          v16 = 0LL;
          PrimaryHMonitor = CHolographicInteropTexture::GetPrimaryHMonitor(v7, &v16);
          v2 = PrimaryHMonitor;
          if ( PrimaryHMonitor < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, PrimaryHMonitor, 0x10Fu);
          }
          else
          {
            v13 = CMonitorTreeAssociation::AddMonitorTree(*((CMonitorTreeAssociation **)this[2] + 2), v16, a2);
            v2 = v13;
            if ( v13 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x110u);
          }
        }
      }
    }
  }
  return v2;
}
