/*
 * XREFs of ?DmmNeedTargetModeWireformatOrColorspaceChange@@YA_NPEAXIW4_D3DDDIFORMAT@@@Z @ 0x1C00C9E34
 * Callers:
 *     ?SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_D3DDDI_ROTATION@@U_D3DKMT_SETDISPLAYMODE_FLAGS@@PEAIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00CA428 (-SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_.c)
 * Callees:
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C00044DC (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C0005814 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000753C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C00078E0 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000897C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1C00098BC (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C510 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z @ 0x1C00EDB7C (-EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z.c)
 *     ?GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z @ 0x1C012CC00 (-GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z.c)
 */

char __fastcall DmmNeedTargetModeWireformatOrColorspaceChange(DXGADAPTER *this, __int64 a2, enum _D3DDDIFORMAT a3)
{
  __int64 v4; // r15
  DXGADAPTER *v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rdi
  __int64 v13; // rdi
  __int64 v14; // r8
  __int64 v15; // rax
  char v16; // si
  __int64 v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  DMMVIDPNTOPOLOGY *v21; // r13
  int NumPathsFromSource; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rbx
  unsigned __int64 v27; // r12
  int v28; // eax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // rdi
  struct DMMVIDPNPRESENTPATH *Path; // rax
  __int64 v34; // rax
  __int64 v35; // rcx
  __int64 v36; // rbx
  __int64 v37; // rax
  unsigned int v38; // edx
  int v39; // eax
  unsigned int v40; // ecx
  unsigned int v41; // r8d
  unsigned int v42; // r9d
  unsigned int v43; // edx
  __int64 v45; // rax
  _QWORD *v46; // rax
  __int64 v47; // rax
  __int64 v48; // rax
  unsigned int v49; // ecx
  unsigned int v50; // r9d
  __int64 v51; // [rsp+20h] [rbp-20h] BYREF
  unsigned __int64 v52; // [rsp+28h] [rbp-18h] BYREF
  __int64 v53; // [rsp+30h] [rbp-10h] BYREF
  __int64 v54; // [rsp+38h] [rbp-8h] BYREF
  unsigned int v55; // [rsp+88h] [rbp+48h] BYREF

  v4 = (unsigned int)a2;
  v5 = this;
  if ( *((_BYTE *)DXGGLOBAL::GetGlobal((__int64)this, a2) + 303985) )
    return 0;
  if ( !v5 )
  {
    v45 = WdLogNewEntry5_WdError(v7, v6, v8);
    *(_QWORD *)(v45 + 24) = 0LL;
LABEL_36:
    WdLogEvent5_WdError(v45);
    return 0;
  }
  DXGADAPTER::IsCoreResourceSharedOwner(v5);
  v12 = *((_QWORD *)v5 + 319);
  if ( !v12 || (v13 = *(_QWORD *)(v12 + 88)) == 0 )
  {
    v45 = WdLogNewEntry5_WdError(v10, v9, v11);
    *(_QWORD *)(v45 + 24) = v5;
    goto LABEL_36;
  }
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v54, v13);
  v15 = *(_QWORD *)(v13 + 88);
  v16 = 1;
  v51 = 0LL;
  if ( v15 )
  {
    _InterlockedAdd((volatile signed __int32 *)(v15 + 32), 1u);
    v17 = *(_QWORD *)(v13 + 88);
  }
  else
  {
    v17 = 0LL;
  }
  auto_rc<DMMVIDPN const>::reset(&v51, v17, v14);
  if ( v51 )
  {
    v52 = 0LL;
    v21 = (DMMVIDPNTOPOLOGY *)(v51 + 96);
    NumPathsFromSource = DMMVIDPNTOPOLOGY::GetNumPathsFromSource((DMMVIDPNTOPOLOGY *)(v51 + 96), v4, &v52);
    v26 = NumPathsFromSource;
    if ( NumPathsFromSource < 0 )
    {
      v46 = (_QWORD *)WdLogNewEntry5_WdError(v24, v23, v25);
      v46[3] = v4;
      v46[4] = v21;
    }
    else
    {
      v27 = 0LL;
      if ( !v52 )
        goto LABEL_34;
      while ( 1 )
      {
        v55 = -1;
        v28 = DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource(v21, v4, v27, &v55);
        v26 = v28;
        if ( v28 < 0 )
          break;
        v32 = v55;
        if ( v55 == -1 )
        {
          v47 = WdLogNewEntry5_WdAssertion(v30, v29);
          *(_QWORD *)(v47 + 24) = 14857LL;
          WdLogEvent5_WdAssertion(v47);
        }
        Path = DMMVIDPNTOPOLOGY::FindPath(v21, v4, v32);
        v5 = Path;
        if ( !Path )
        {
          v46 = (_QWORD *)WdLogNewEntry5_WdError(v19, v18, v20);
          v46[3] = v51;
          v46[4] = v4;
          v46[5] = v32;
          goto LABEL_51;
        }
        v34 = *((_QWORD *)Path + 12);
        if ( !v34 )
          goto LABEL_40;
        v35 = *(_QWORD *)(v34 + 104);
        if ( v35 )
        {
          _InterlockedAdd((volatile signed __int32 *)(v35 + 96), 1u);
          v36 = *(_QWORD *)(v34 + 104);
        }
        else
        {
          v36 = 0LL;
        }
        v37 = *(_QWORD *)(v36 + 144);
        v53 = v36;
        if ( !v37 )
        {
          v48 = WdLogNewEntry5_WdAssertion(v35, v18);
          *(_QWORD *)(v48 + 24) = 14881LL;
          WdLogEvent5_WdAssertion(v48);
          v37 = *(_QWORD *)(v36 + 144);
        }
        v38 = *(_DWORD *)(v37 + 132);
        v39 = *(_DWORD *)(v37 + 136);
        if ( (a3 == D3DDDIFMT_A16B16G16R16 || a3 == D3DDDIFMT_A16B16G16R16F) && v39 != 12 && v39 != 32
          || a3 != D3DDDIFMT_A16B16G16R16 && a3 != D3DDDIFMT_A16B16G16R16F && (v39 == 12 || v39 == 32) )
        {
          goto LABEL_31;
        }
        if ( a3 == D3DDDIFMT_A2B10G10R10 || a3 == D3DDDIFMT_A2R10G10B10 )
        {
          v49 = v38;
          v50 = v38;
          v41 = v38 >> 8;
          v43 = v38 >> 20;
          v42 = v50 >> 14;
          v40 = v49 >> 2;
          if ( (((unsigned __int8)v40 | (unsigned __int8)(v41 | v42 | v43)) & 0xC) == 0 )
            goto LABEL_31;
        }
        else
        {
          v40 = v38 >> 2;
          v41 = v38 >> 8;
          v42 = v38 >> 14;
          v43 = v38 >> 20;
        }
        if ( a3 != D3DDDIFMT_A2B10G10R10
          && a3 != D3DDDIFMT_A2R10G10B10
          && (((unsigned __int8)v43 | (unsigned __int8)(v42 | v41 | v40)) & 0xC) != 0 )
        {
LABEL_31:
          auto_rc<DMMVIDPNTARGETMODESET>::reset(&v53, 0LL);
          goto LABEL_32;
        }
        auto_rc<DMMVIDPNTARGETMODESET>::reset(&v53, 0LL);
        if ( ++v27 >= v52 )
          goto LABEL_34;
      }
      v46 = (_QWORD *)WdLogNewEntry5_WdError(v30, v29, v31);
      v46[3] = v27;
      v46[4] = v4;
    }
    v46[5] = v26;
  }
  else
  {
LABEL_40:
    v46 = (_QWORD *)WdLogNewEntry5_WdError(v19, v18, v20);
    v46[3] = v5;
  }
LABEL_51:
  WdLogEvent5_WdError(v46);
LABEL_34:
  v16 = 0;
LABEL_32:
  auto_rc<DMMVIDPN const>::reset(&v51, 0LL, v25);
  DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v54 + 40));
  return v16;
}
