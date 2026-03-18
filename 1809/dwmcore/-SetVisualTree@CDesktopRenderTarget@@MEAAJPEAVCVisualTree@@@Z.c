/*
 * XREFs of ?SetVisualTree@CDesktopRenderTarget@@MEAAJPEAVCVisualTree@@@Z @ 0x180077790
 * Callers:
 *     <none>
 * Callees:
 *     ??$SAFE_DELETE@VCComposeTop@@@@YAXAEAPEAVCComposeTop@@@Z @ 0x180077844 (--$SAFE_DELETE@VCComposeTop@@@@YAXAEAPEAVCComposeTop@@@Z.c)
 *     ?SetVisualDesktopId@CVisual@@QEAAXI@Z @ 0x180077868 (-SetVisualDesktopId@CVisual@@QEAAXI@Z.c)
 *     ?SetVisualTree@CRenderTarget@@MEAAJPEAVCVisualTree@@@Z @ 0x180077950 (-SetVisualTree@CRenderTarget@@MEAAJPEAVCVisualTree@@@Z.c)
 *     ?RemoveTree@CMonitorTreeAssociation@@QEAAJPEAVCVisualTree@@@Z @ 0x1800784B8 (-RemoveTree@CMonitorTreeAssociation@@QEAAJPEAVCVisualTree@@@Z.c)
 *     ?AddMonitorTree@CMonitorTreeAssociation@@QEAAJPEAUHMONITOR__@@PEAVCVisualTree@@@Z @ 0x18007E798 (-AddMonitorTree@CMonitorTreeAssociation@@QEAAJPEAUHMONITOR__@@PEAVCVisualTree@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDesktopRenderTarget::SetVisualTree(CDesktopRenderTarget *this, CVisual **a2)
{
  __int64 v4; // rcx
  int v5; // eax
  unsigned int v6; // ecx
  unsigned int v7; // edi
  unsigned int v8; // edx
  CVisual *v9; // rcx
  __int64 v10; // rbp
  __int64 v11; // rbp
  int v13; // eax
  unsigned int v14; // ecx
  int v15; // eax
  unsigned int v16; // ecx
  __int64 v17; // rcx
  int v18; // eax
  unsigned int v19; // ecx

  v4 = *((_QWORD *)this + 15);
  if ( v4
    && (*(_BYTE *)(v4 + 32) = 0,
        CVisual::SetVisualDesktopId(*(CVisual **)(v4 + 24), 0),
        v13 = CMonitorTreeAssociation::RemoveTree(
                *(CMonitorTreeAssociation **)(*((_QWORD *)this + 2) + 16LL),
                *((struct CVisualTree **)this + 15)),
        v7 = v13,
        v13 < 0) )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x4A2u);
  }
  else
  {
    v5 = CRenderTarget::SetVisualTree(this, (struct CVisualTree *)a2);
    v7 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0x4A5u);
    }
    else if ( a2
           && (v8 = *((_DWORD *)this + 88),
               v9 = a2[3],
               *((_BYTE *)a2 + 32) = 1,
               CVisual::SetVisualDesktopId(v9, v8),
               v10 = 0LL,
               *((_DWORD *)this + 50)) )
    {
      while ( 1 )
      {
        v15 = CMonitorTreeAssociation::AddMonitorTree(
                *(CMonitorTreeAssociation **)(*((_QWORD *)this + 2) + 16LL),
                *(HMONITOR *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 22) + 8 * v10) + 168LL) + 152LL)
                            + 16LL),
                (struct CVisualTree *)a2);
        v7 = v15;
        if ( v15 < 0 )
          break;
        v10 = (unsigned int)(v10 + 1);
        if ( (unsigned int)v10 >= *((_DWORD *)this + 50) )
          goto LABEL_5;
      }
      MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0x4B3u);
    }
    else
    {
LABEL_5:
      v11 = 0LL;
      if ( *((_DWORD *)this + 50) )
      {
        while ( 1 )
        {
          v17 = *(_QWORD *)(*((_QWORD *)this + 22) + 8 * v11);
          v18 = (*(__int64 (__fastcall **)(__int64, CVisual **))(*(_QWORD *)v17 + 200LL))(v17, a2);
          v7 = v18;
          if ( v18 < 0 )
            break;
          v11 = (unsigned int)(v11 + 1);
          if ( (unsigned int)v11 >= *((_DWORD *)this + 50) )
            goto LABEL_6;
        }
        MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v18, 0x4BEu);
      }
      else
      {
LABEL_6:
        SAFE_DELETE<CComposeTop>((char *)this + 320);
      }
    }
  }
  return v7;
}
