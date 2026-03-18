/*
 * XREFs of ?SetVisualTree@CDesktopRenderTarget@@MEAAJPEAVCVisualTree@@@Z @ 0x1800E6210
 * Callers:
 *     <none>
 * Callees:
 *     ?SetVisualTree@CRenderTarget@@MEAAJPEAVCVisualTree@@@Z @ 0x18002E3D0 (-SetVisualTree@CRenderTarget@@MEAAJPEAVCVisualTree@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddMonitorTree@CMonitorTreeAssociation@@QEAAJPEAUHMONITOR__@@PEAVCVisualTree@@@Z @ 0x1800A3964 (-AddMonitorTree@CMonitorTreeAssociation@@QEAAJPEAUHMONITOR__@@PEAVCVisualTree@@@Z.c)
 *     ?RemoveTree@CMonitorTreeAssociation@@QEAAJPEAVCVisualTree@@@Z @ 0x1800D69A0 (-RemoveTree@CMonitorTreeAssociation@@QEAAJPEAVCVisualTree@@@Z.c)
 *     ??$SAFE_DELETE@VCComposeTop@@@@YAXAEAPEAVCComposeTop@@@Z @ 0x1800D8B14 (--$SAFE_DELETE@VCComposeTop@@@@YAXAEAPEAVCComposeTop@@@Z.c)
 *     ?SetVisualDesktopId@CVisual@@QEAAXI@Z @ 0x1800E62AC (-SetVisualDesktopId@CVisual@@QEAAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDesktopRenderTarget::SetVisualTree(CDesktopRenderTarget *this, CVisual **a2)
{
  __int64 v4; // rcx
  signed int v5; // eax
  unsigned int v6; // edx
  __int64 v7; // rcx
  unsigned int v8; // edi
  unsigned int v9; // edx
  CVisual *v10; // rcx
  __int64 v11; // rbp
  __int64 v12; // rbp
  signed int v14; // eax
  __int64 v15; // rcx
  signed int v16; // eax
  __int64 v17; // rcx
  __int64 v18; // rcx
  signed int v19; // eax
  __int64 v20; // rcx

  v4 = *((_QWORD *)this + 15);
  if ( v4
    && (*(_BYTE *)(v4 + 32) = 0,
        CVisual::SetVisualDesktopId(*(CVisual **)(v4 + 24), 0),
        v14 = CMonitorTreeAssociation::RemoveTree(
                *(CMonitorTreeAssociation **)(*((_QWORD *)this + 2) + 16LL),
                *((struct CVisualTree **)this + 15)),
        v8 = v14,
        v14 < 0) )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x4D8u, 0LL);
  }
  else
  {
    v5 = CRenderTarget::SetVisualTree(this, (struct CVisualTree *)a2);
    v8 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v5, 0x4DBu, 0LL);
    }
    else if ( a2
           && (v9 = *((_DWORD *)this + 100),
               v10 = a2[3],
               *((_BYTE *)a2 + 32) = 1,
               CVisual::SetVisualDesktopId(v10, v9),
               v11 = 0LL,
               *((_DWORD *)this + 50)) )
    {
      while ( 1 )
      {
        v16 = CMonitorTreeAssociation::AddMonitorTree(
                *(CMonitorTreeAssociation **)(*((_QWORD *)this + 2) + 16LL),
                *(HMONITOR *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 22) + 8 * v11) + 168LL) + 152LL)
                            + 16LL),
                (struct CVisualTree *)a2);
        v8 = v16;
        if ( v16 < 0 )
          break;
        v11 = (unsigned int)(v11 + 1);
        if ( (unsigned int)v11 >= *((_DWORD *)this + 50) )
          goto LABEL_5;
      }
      MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0x4E9u, 0LL);
    }
    else
    {
LABEL_5:
      v12 = 0LL;
      if ( *((_DWORD *)this + 50) )
      {
        while ( 1 )
        {
          v18 = *(_QWORD *)(*((_QWORD *)this + 22) + 8 * v12);
          v19 = (*(__int64 (__fastcall **)(__int64, CVisual **))(*(_QWORD *)v18 + 336LL))(v18, a2);
          v8 = v19;
          if ( v19 < 0 )
            break;
          v12 = (unsigned int)(v12 + 1);
          if ( (unsigned int)v12 >= *((_DWORD *)this + 50) )
            goto LABEL_6;
        }
        MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, v19, 0x4F4u, 0LL);
      }
      else
      {
LABEL_6:
        SAFE_DELETE<CComposeTop>((CComposeTop **)this + 46, v6);
      }
    }
  }
  return v8;
}
