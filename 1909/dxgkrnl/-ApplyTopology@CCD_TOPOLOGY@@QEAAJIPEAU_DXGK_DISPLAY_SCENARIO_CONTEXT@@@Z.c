/*
 * XREFs of ?ApplyTopology@CCD_TOPOLOGY@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00CE7A8
 * Callers:
 *     DxgkApplyPathsModality @ 0x1C00CB700 (DxgkApplyPathsModality.c)
 *     ?DisableDWMVirtualModeOnVidPnSource@@YAJII@Z @ 0x1C0154990 (-DisableDWMVirtualModeOnVidPnSource@@YAJII@Z.c)
 * Callees:
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C0003974 (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     ?ApplyTopologyWorker@CCD_TOPOLOGY@@AEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00CEB9C (-ApplyTopologyWorker@CCD_TOPOLOGY@@AEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?AddActiveNonDesktopPathsToTopology@CCD_TOPOLOGY@@AEAAJPEAV1@_N@Z @ 0x1C00D0B84 (-AddActiveNonDesktopPathsToTopology@CCD_TOPOLOGY@@AEAAJPEAV1@_N@Z.c)
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1C00D73F8 (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     ??0CCD_TOPOLOGY@@QEAA@GG@Z @ 0x1C00DAE0C (--0CCD_TOPOLOGY@@QEAA@GG@Z.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x1C00FC8A0 (DxgkReleaseSessionModeChangeLock.c)
 *     ?CopyTopology@CCD_TOPOLOGY@@AEAAJPEBV1@@Z @ 0x1C02C04BC (-CopyTopology@CCD_TOPOLOGY@@AEAAJPEBV1@@Z.c)
 *     ?RemoveAllNonDesktopPaths@CCD_TOPOLOGY@@QEAAJPEAE@Z @ 0x1C02C0F00 (-RemoveAllNonDesktopPaths@CCD_TOPOLOGY@@QEAAJPEAE@Z.c)
 */

__int64 __fastcall CCD_TOPOLOGY::ApplyTopology(
        CCD_TOPOLOGY *this,
        unsigned int a2,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a3)
{
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rbx
  int active; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rax
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // r8
  __int16 v28; // ax
  __int64 v29; // rax
  unsigned int i; // r9d
  __int64 v31; // rax
  __int64 v32; // rdx
  int v33; // eax
  __int64 v34; // rax
  _BYTE v35[16]; // [rsp+20h] [rbp-29h] BYREF
  _BYTE v36[64]; // [rsp+30h] [rbp-19h] BYREF
  __int64 v37; // [rsp+70h] [rbp+27h]
  unsigned __int8 v38; // [rsp+C8h] [rbp+7Fh] BYREF

  v35[0] = 0;
  v6 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)v35, 1);
  v10 = v6;
  if ( v6 >= 0 )
  {
    CCD_TOPOLOGY::CCD_TOPOLOGY((CCD_TOPOLOGY *)v36, 8u, 0);
    if ( (*((_DWORD *)this + 21) & 1) == 0 )
    {
      active = CCD_TOPOLOGY::AddActiveNonDesktopPathsToTopology(this, (struct CCD_TOPOLOGY *)v36, 1);
      v10 = active;
      if ( active >= 0 )
      {
        if ( active == 255 )
          goto LABEL_5;
        if ( v37 )
          v17 = *(unsigned __int16 *)(v37 + 20);
        else
          v17 = 0LL;
        v18 = *((_QWORD *)this + 8);
        if ( v18 )
          v19 = *(unsigned __int16 *)(v18 + 20);
        else
          v19 = 0LL;
        if ( (unsigned __int16)v17 <= (unsigned __int16)v19 )
        {
          v20 = WdLogNewEntry5_WdAssertion(v17, v19);
          WdLogEvent5_WdAssertion(v20);
        }
        v21 = CCD_TOPOLOGY::ApplyTopologyWorker((CCD_TOPOLOGY *)v36, a2, a3);
        v10 = v21;
        if ( v21 >= 0 )
        {
          v38 = 0;
          CCD_TOPOLOGY::RemoveAllNonDesktopPaths((CCD_TOPOLOGY *)v36, &v38);
          if ( !v38 )
          {
            v24 = WdLogNewEntry5_WdAssertion(v23, v22);
            WdLogEvent5_WdAssertion(v24);
          }
          v25 = *((_QWORD *)this + 8);
          if ( v25 )
            v26 = *(unsigned __int16 *)(v25 + 20);
          else
            v26 = 0LL;
          v27 = v37;
          if ( v37 )
            v28 = *(_WORD *)(v37 + 20);
          else
            v28 = 0;
          if ( (_WORD)v26 != v28 )
          {
            v29 = WdLogNewEntry5_WdAssertion(v26, v22);
            WdLogEvent5_WdAssertion(v29);
            v27 = v37;
          }
          for ( i = 0;
                i < *(_DWORD *)(v27 + 36);
                *(_DWORD *)(v32 + *(_QWORD *)(v27 + 40) + 80) &= ~*(_DWORD *)(332 * v31 + *(_QWORD *)(v27 + 40) + 228) )
          {
            v31 = i++;
            v32 = 332 * v31;
            *(_DWORD *)(v32 + *(_QWORD *)(v27 + 40) + 84) &= ~*(_DWORD *)(332 * v31 + *(_QWORD *)(v27 + 40) + 228);
          }
          v33 = CCD_TOPOLOGY::CopyTopology(this, (const struct CCD_TOPOLOGY *)v36);
          v10 = v33;
          if ( v33 >= 0 )
            goto LABEL_6;
        }
      }
      v34 = WdLogNewEntry5_WdError(v13, v12, v14);
      *(_QWORD *)(v34 + 24) = v10;
      WdLogEvent5_WdError(v34);
      goto LABEL_6;
    }
LABEL_5:
    LODWORD(v10) = CCD_TOPOLOGY::ApplyTopologyWorker(this, a2, a3);
LABEL_6:
    CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)v36);
    goto LABEL_7;
  }
  v16 = WdLogNewEntry5_WdError(v8, v7, v9);
  *(_QWORD *)(v16 + 24) = v10;
  WdLogEvent5_WdError(v16);
LABEL_7:
  if ( v35[0] )
    DxgkReleaseSessionModeChangeLock();
  return (unsigned int)v10;
}
