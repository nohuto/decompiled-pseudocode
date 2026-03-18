/*
 * XREFs of ?DmmNeedTargetModeWireformatOrColorspaceChange@@YA_NPEAXIW4_D3DDDIFORMAT@@@Z @ 0x1C0136398
 * Callers:
 *     ?SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_D3DDDI_ROTATION@@U_D3DKMT_SETDISPLAYMODE_FLAGS@@PEAIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00D4904 (-SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_.c)
 * Callees:
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C000E1D8 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E3CC (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1C000EAA4 (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C000F554 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C000F9D0 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0011E50 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z @ 0x1C00D4444 (-GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z.c)
 *     ?EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z @ 0x1C00E5618 (-EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z.c)
 */

char __fastcall DmmNeedTargetModeWireformatOrColorspaceChange(DXGADAPTER *this, unsigned int a2, enum _D3DDDIFORMAT a3)
{
  __int64 v4; // r15
  DXGADAPTER *v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rdi
  __int64 v9; // rdi
  __int64 v10; // rax
  char v11; // si
  __int64 v12; // rdx
  __int64 v13; // rcx
  char **v14; // r13
  int NumPathsFromSource; // eax
  __int64 v16; // rcx
  __int64 v17; // rbx
  __int64 v18; // r12
  int v19; // eax
  __int64 v20; // rcx
  __int64 v21; // rdi
  struct DMMVIDPNPRESENTPATH *Path; // rax
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rbx
  __int64 v26; // rax
  unsigned int v27; // edx
  int v28; // eax
  unsigned int v29; // r8d
  unsigned int v30; // r9d
  unsigned int v31; // ecx
  unsigned int v32; // edx
  __int64 v34; // rax
  _QWORD *v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  unsigned int v38; // r8d
  unsigned int v39; // ecx
  __int64 v40; // [rsp+20h] [rbp-20h] BYREF
  unsigned __int64 v41; // [rsp+28h] [rbp-18h] BYREF
  __int64 v42; // [rsp+30h] [rbp-10h] BYREF
  __int64 v43; // [rsp+38h] [rbp-8h] BYREF
  unsigned int v44; // [rsp+88h] [rbp+48h] BYREF

  v4 = a2;
  v5 = this;
  if ( *((_BYTE *)DXGGLOBAL::GetGlobal((__int64)this) + 20315) )
    return 0;
  if ( !v5 )
  {
    v34 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v34 + 24) = 0LL;
LABEL_35:
    WdLogEvent5_WdError(v34);
    return 0;
  }
  DXGADAPTER::IsCoreResourceSharedOwner(v5);
  v8 = *((_QWORD *)v5 + 315);
  if ( !v8 || (v9 = *(_QWORD *)(v8 + 88)) == 0 )
  {
    v34 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v34 + 24) = v5;
    goto LABEL_35;
  }
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v43, v9);
  v10 = *(_QWORD *)(v9 + 88);
  v11 = 1;
  v40 = 0LL;
  if ( v10 )
  {
    _InterlockedAdd((volatile signed __int32 *)(v10 + 32), 1u);
    v12 = *(_QWORD *)(v9 + 88);
  }
  else
  {
    v12 = 0LL;
  }
  auto_rc<DMMVIDPN const>::reset(&v40, v12);
  if ( v40 )
  {
    v41 = 0LL;
    v14 = (char **)(v40 + 96);
    NumPathsFromSource = DMMVIDPNTOPOLOGY::GetNumPathsFromSource((DMMVIDPNTOPOLOGY *)(v40 + 96), v4, &v41);
    v17 = NumPathsFromSource;
    if ( NumPathsFromSource < 0 )
    {
      v35 = (_QWORD *)WdLogNewEntry5_WdError(v16);
      v35[3] = v4;
      v35[4] = v14;
    }
    else
    {
      v18 = 0LL;
      if ( !v41 )
        goto LABEL_32;
      while ( 1 )
      {
        v44 = -1;
        v19 = DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource(v14, v4, v18, &v44);
        v17 = v19;
        if ( v19 < 0 )
          break;
        v21 = v44;
        if ( v44 == -1 )
        {
          v36 = WdLogNewEntry5_WdAssertion(v20);
          *(_QWORD *)(v36 + 24) = 15140LL;
          WdLogEvent5_WdAssertion(v36);
        }
        Path = DMMVIDPNTOPOLOGY::FindPath((DMMVIDPNTOPOLOGY *)v14, v4, v21);
        v5 = Path;
        if ( !Path )
        {
          v35 = (_QWORD *)WdLogNewEntry5_WdError(v13);
          v35[3] = v40;
          v35[4] = v4;
          v35[5] = v21;
          goto LABEL_50;
        }
        v23 = *((_QWORD *)Path + 12);
        if ( !v23 )
          goto LABEL_39;
        v24 = *(_QWORD *)(v23 + 104);
        if ( v24 )
        {
          _InterlockedAdd((volatile signed __int32 *)(v24 + 96), 1u);
          v25 = *(_QWORD *)(v23 + 104);
        }
        else
        {
          v25 = 0LL;
        }
        v26 = *(_QWORD *)(v25 + 144);
        v42 = v25;
        if ( !v26 )
        {
          v37 = WdLogNewEntry5_WdAssertion(v24);
          *(_QWORD *)(v37 + 24) = 15164LL;
          WdLogEvent5_WdAssertion(v37);
          v26 = *(_QWORD *)(v25 + 144);
        }
        v27 = *(_DWORD *)(v26 + 132);
        v28 = *(_DWORD *)(v26 + 136);
        if ( (a3 == D3DDDIFMT_A16B16G16R16 || a3 == D3DDDIFMT_A16B16G16R16F) && v28 != 12 && v28 != 32
          || a3 != D3DDDIFMT_A16B16G16R16 && a3 != D3DDDIFMT_A16B16G16R16F && (v28 == 12 || v28 == 32) )
        {
          goto LABEL_46;
        }
        if ( a3 == D3DDDIFMT_A2B10G10R10 || a3 == D3DDDIFMT_A2R10G10B10 )
        {
          v38 = v27;
          v39 = v27;
          v30 = v27 >> 8;
          v32 = v27 >> 20;
          v31 = v39 >> 14;
          v29 = v38 >> 2;
          if ( (((unsigned __int8)v29 | (unsigned __int8)(v30 | v31 | v32)) & 0xC) == 0 )
            goto LABEL_46;
        }
        else
        {
          v29 = v27 >> 2;
          v30 = v27 >> 8;
          v31 = v27 >> 14;
          v32 = v27 >> 20;
        }
        if ( a3 != D3DDDIFMT_A2B10G10R10
          && a3 != D3DDDIFMT_A2R10G10B10
          && (((unsigned __int8)v29 | (unsigned __int8)(v30 | v32 | v31)) & 0xC) != 0 )
        {
LABEL_46:
          auto_rc<DMMVIDPNTARGETMODESET>::reset(&v42, 0LL);
          goto LABEL_33;
        }
        auto_rc<DMMVIDPNTARGETMODESET>::reset(&v42, 0LL);
        if ( ++v18 >= v41 )
          goto LABEL_32;
      }
      v35 = (_QWORD *)WdLogNewEntry5_WdError(v20);
      v35[3] = v18;
      v35[4] = v4;
    }
    v35[5] = v17;
  }
  else
  {
LABEL_39:
    v35 = (_QWORD *)WdLogNewEntry5_WdError(v13);
    v35[3] = v5;
  }
LABEL_50:
  WdLogEvent5_WdError(v35);
LABEL_32:
  v11 = 0;
LABEL_33:
  auto_rc<DMMVIDPN const>::reset(&v40, 0LL);
  DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v43 + 40));
  return v11;
}
