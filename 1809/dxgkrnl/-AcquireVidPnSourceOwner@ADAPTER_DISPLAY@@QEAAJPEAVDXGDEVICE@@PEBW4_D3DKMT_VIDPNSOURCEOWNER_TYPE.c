/*
 * XREFs of ?AcquireVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@PEBW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@PEBIIU_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@@Z @ 0x1C00CFD48
 * Callers:
 *     ?SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@PEBQEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C011D60C (-SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAG.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0005E8C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetCddInterface@ADAPTER_DISPLAY@@QEBAPEBU_CDDDXGK_INTERFACE@@I@Z @ 0x1C00112C0 (-GetCddInterface@ADAPTER_DISPLAY@@QEBAPEBU_CDDDXGK_INTERFACE@@I@Z.c)
 *     ?IsPartOfDesktop@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C0013164 (-IsPartOfDesktop@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     ?UpdateGammaRamp@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C00D2F54 (-UpdateGammaRamp@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     ?IssueCommand@BLTQUEUE@@AEAAJXZ @ 0x1C00F711C (-IssueCommand@BLTQUEUE@@AEAAJXZ.c)
 *     ?CheckSessionOwnership@DISPLAY_SOURCE@@QEAAEXZ @ 0x1C011F670 (-CheckSessionOwnership@DISPLAY_SOURCE@@QEAAEXZ.c)
 *     ?MoveContextToPendingDestroyList@OUTPUTDUPL_MGR@@QEAAXIPEAVDXGDEVICE@@HHW4_DXGK_DIAG_OUTPUTDUPL_DESTROY_REASON@@@Z @ 0x1C012B530 (-MoveContextToPendingDestroyList@OUTPUTDUPL_MGR@@QEAAXIPEAVDXGDEVICE@@HHW4_DXGK_DIAG_OUTPUTDUPL_.c)
 *     ?HasOpenGlContext@DXGDEVICE@@QEAAEXZ @ 0x1C013962C (-HasOpenGlContext@DXGDEVICE@@QEAAEXZ.c)
 *     ?ReleaseSharedVidPnSourceOwner@ADAPTER_DISPLAY@@AEAAEPEAVDXGDEVICE@@I@Z @ 0x1C01C4348 (-ReleaseSharedVidPnSourceOwner@ADAPTER_DISPLAY@@AEAAEPEAVDXGDEVICE@@I@Z.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::AcquireVidPnSourceOwner(
        PERESOURCE **this,
        struct _ERESOURCE *a2,
        const enum _D3DKMT_VIDPNSOURCEOWNER_TYPE *a3,
        char *a4,
        unsigned int a5,
        struct _D3DKMT_VIDPNSOURCEOWNER_FLAGS a6)
{
  __int64 v10; // rcx
  ERESOURCE_THREAD OwnerThread; // rax
  __int64 v12; // rbx
  unsigned int *v13; // r12
  signed __int64 i; // rax
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r15
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  PERESOURCE *v23; // r9
  __int64 v24; // r8
  struct _ERESOURCE *v25; // r10
  __int64 v26; // rdx
  struct DXGDEVICE *v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  signed __int64 v30; // rbp
  __int64 v31; // r12
  __int64 v32; // r9
  PERESOURCE *v33; // rcx
  __int64 v34; // rdx
  struct DXGDEVICE *v35; // r10
  int v36; // eax
  PERESOURCE *v37; // rcx
  __int64 v38; // rdx
  __int64 v39; // rcx
  _QWORD *v40; // rax
  int v42; // r8d
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rcx
  __int64 v47; // rcx
  _QWORD *v48; // rax
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // rax
  _QWORD *v52; // rax
  _QWORD *v53; // rax
  __int64 v54; // rcx
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // rax
  __int64 v58; // rax
  __int64 v59; // rax
  __int64 v60; // rax
  __int64 v61; // r15
  const struct _CDDDXGK_INTERFACE *CddInterface; // rax

  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this[2]) )
  {
    v43 = WdLogNewEntry5_WdAssertion(v10);
    *(_QWORD *)(v43 + 24) = 1853LL;
    WdLogEvent5_WdAssertion(v43);
  }
  if ( *((_DWORD *)this + 20) < a5 )
  {
    v52 = (_QWORD *)WdLogNewEntry5_WdError(v10);
    LODWORD(v12) = -1073741811;
    v52[4] = a5;
    v52[5] = -1073741811LL;
LABEL_85:
    v52[3] = a2;
LABEL_86:
    WdLogEvent5_WdError(v52);
    return (unsigned int)v12;
  }
  if ( !a3 || !a4 )
  {
    v52 = (_QWORD *)WdLogNewEntry5_WdError(v10);
    LODWORD(v12) = -1073741811;
    v52[4] = a3;
    v52[5] = a4;
    v52[6] = a3;
    v52[7] = -1073741811LL;
    goto LABEL_85;
  }
  OwnerThread = a2->OwnerTable[1].OwnerThread;
  if ( !OwnerThread
    || !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(*(_QWORD *)(OwnerThread + 2528) + 16LL)) )
  {
    v44 = WdLogNewEntry5_WdAssertion(v10);
    *(_QWORD *)(v44 + 24) = 1884LL;
    WdLogEvent5_WdAssertion(v44);
  }
  v12 = 0LL;
  if ( a5 )
  {
    v13 = (unsigned int *)a4;
    for ( i = (char *)a3 - a4; ; i = (char *)a3 - a4 )
    {
      v15 = *(unsigned int *)((char *)v13 + i);
      if ( v15 <= 0 )
        break;
      if ( v15 > 4 )
        break;
      v10 = *v13;
      if ( *((_DWORD *)this + 20) <= (unsigned int)v10 )
        break;
      if ( *(PERESOURCE **)&a2[16].ActiveEntries != this[2] )
      {
        v45 = WdLogNewEntry5_WdAssertion(v10);
        *(_QWORD *)(v45 + 24) = 1924LL;
        WdLogEvent5_WdAssertion(v45);
        LODWORD(v10) = *v13;
      }
      if ( !DISPLAY_SOURCE::CheckSessionOwnership((DISPLAY_SOURCE *)&this[14][470 * (unsigned int)v10]) )
      {
        v53 = (_QWORD *)WdLogNewEntry5_WdWarning(v17, v16, v18);
        v55 = *(unsigned int *)&a4[4 * v12];
        LODWORD(v12) = -1071774910;
        v53[3] = v55;
        v53[4] = -1071774910LL;
        goto LABEL_74;
      }
      v19 = 0LL;
      if ( (_DWORD)v12 )
      {
        v46 = *v13;
        while ( (_DWORD)v46 != *(_DWORD *)&a4[4 * v19] )
        {
          v19 = (unsigned int)(v19 + 1);
          if ( (unsigned int)v19 >= (unsigned int)v12 )
            goto LABEL_17;
        }
        v52 = (_QWORD *)WdLogNewEntry5_WdError(v46);
        v52[4] = (unsigned int)v12;
        v52[5] = (unsigned int)v19;
        v52[3] = a2;
        v47 = *(unsigned int *)&a4[4 * v19];
        goto LABEL_61;
      }
LABEL_17:
      if ( !ADAPTER_DISPLAY::IsPartOfDesktop((DXGADAPTER **)this, *v13) )
      {
        v53 = (_QWORD *)WdLogNewEntry5_WdWarning(v21, v20, v22);
        v53[3] = a2;
        v53[4] = (unsigned int)v12;
        v54 = *(unsigned int *)&a4[4 * v12];
        v12 = -1071774972LL;
        goto LABEL_72;
      }
      v10 = *(unsigned int *)((char *)v13 + (char *)a3 - a4);
      if ( (_DWORD)v10 == 1 && !LODWORD(a2[3].OwnerTable) || (_DWORD)v10 == 3 && LODWORD(a2[3].OwnerTable) )
        break;
      v23 = this[14];
      v24 = 470LL * *v13;
      v25 = v23[v24 + 86];
      if ( v25 )
      {
        v26 = LODWORD(v23[v24 + 87]);
        if ( v25 == a2 )
        {
          if ( (_DWORD)v26 != (_DWORD)v10 )
          {
            v52 = (_QWORD *)WdLogNewEntry5_WdError(v10);
            v52[3] = a2;
            v52[4] = *(unsigned int *)&a4[4 * v12];
            v52[5] = SLODWORD(this[14][470 * *(unsigned int *)&a4[4 * v12] + 87]);
LABEL_60:
            v47 = a3[v12];
LABEL_61:
            LODWORD(v12) = -1073741811;
            v52[6] = v47;
            v52[7] = -1073741811LL;
            goto LABEL_86;
          }
        }
        else
        {
          if ( (_DWORD)v26 != 1 )
            goto LABEL_75;
          if ( (_DWORD)v10 == 1 && *((_BYTE *)a2->ExclusiveWaiters + 322) && *((_BYTE *)v25->ExclusiveWaiters + 322) )
          {
            v48 = (_QWORD *)WdLogNewEntry5_WdWarning(v10, v26, v24 * 8);
            v48[3] = a2;
            v48[4] = SLODWORD(this[14][470 * *(unsigned int *)&a4[4 * v12] + 87]);
            v48[5] = *(unsigned int *)&a4[4 * v12];
            v49 = a3[v12];
            LODWORD(v12) = -1071774910;
            v48[7] = -1071774910LL;
            v48[6] = v49;
            WdLogEvent5_WdWarning(v48);
            LOBYTE(v50) = 1;
            if ( (unsigned __int8)WdIsDebuggerPresent(v50) )
            {
              DbgPrintEx(0x65u, 0, "Breaking in to allow debug of potential DWM swap chain leak");
              __debugbreak();
            }
            return (unsigned int)v12;
          }
          if ( (_DWORD)v10 == 1 )
          {
LABEL_75:
            v53 = (_QWORD *)WdLogNewEntry5_WdWarning(v10, v26, v24 * 8);
            v53[3] = a2;
            v53[4] = SLODWORD(this[14][470 * *(unsigned int *)&a4[4 * v12] + 87]);
            v53[5] = *(unsigned int *)&a4[4 * v12];
            v56 = a3[v12];
            LODWORD(v12) = -1071774910;
            v53[7] = -1071774910LL;
            v53[6] = v56;
            goto LABEL_74;
          }
          v27 = (struct DXGDEVICE *)v23[v24 + 88];
          if ( v27 == (struct DXGDEVICE *)a2 )
          {
            if ( (_DWORD)v10 != 4 )
            {
              v52 = (_QWORD *)WdLogNewEntry5_WdError(v10);
              v52[3] = a2;
              v52[4] = *(unsigned int *)&a4[4 * v12];
              v52[5] = 4LL;
              goto LABEL_60;
            }
          }
          else if ( v27 )
          {
            v53 = (_QWORD *)WdLogNewEntry5_WdWarning(v10, v26, v24 * 8);
            v53[3] = a2;
            v53[4] = *(unsigned int *)&a4[4 * v12];
            v54 = a3[v12];
            v12 = -1071774910LL;
LABEL_72:
            v53[5] = v54;
            v53[6] = v12;
LABEL_74:
            WdLogEvent5_WdWarning(v53);
            return (unsigned int)v12;
          }
        }
      }
      else if ( LODWORD(v23[v24 + 87]) )
      {
        v51 = WdLogNewEntry5_WdAssertion(v10);
        *(_QWORD *)(v51 + 24) = 2101LL;
        WdLogEvent5_WdAssertion(v51);
      }
      v12 = (unsigned int)(v12 + 1);
      ++v13;
      if ( (unsigned int)v12 >= a5 )
        goto LABEL_29;
    }
    v52 = (_QWORD *)WdLogNewEntry5_WdError(v10);
    v52[3] = a2;
    v52[4] = (unsigned int)v12;
    v52[5] = *(unsigned int *)&a4[4 * v12];
    goto LABEL_60;
  }
LABEL_29:
  if ( DXGDEVICE::HasOpenGlContext((DXGDEVICE *)a2) )
  {
    v57 = WdLogNewEntry5_WdEvent(v29, v28);
    *(_QWORD *)(v57 + 24) = a2;
    WdLogEvent5_WdEvent(v57);
  }
  if ( a5 )
  {
    v30 = (char *)a3 - a4;
    v31 = a5;
    while ( 1 )
    {
      v32 = *(unsigned int *)a4;
      v33 = this[14];
      v34 = 470 * v32;
      v35 = (struct DXGDEVICE *)v33[470 * v32 + 86];
      if ( !v35 )
        break;
      v36 = *(_DWORD *)&a4[v30];
      if ( v36 != 4 )
      {
        v42 = (int)v33[v34 + 87];
        if ( v35 == (struct DXGDEVICE *)a2 )
        {
          if ( v42 != v36 )
          {
            v58 = WdLogNewEntry5_WdAssertion(v33);
            *(_QWORD *)(v58 + 24) = 2140LL;
            WdLogEvent5_WdAssertion(v58);
          }
          goto LABEL_35;
        }
        if ( v42 != 1 || v36 == 1 )
        {
          v59 = WdLogNewEntry5_WdAssertion(v33);
          *(_QWORD *)(v59 + 24) = 2150LL;
          WdLogEvent5_WdAssertion(v59);
          v33 = this[14];
          LODWORD(v32) = *(_DWORD *)a4;
        }
        ADAPTER_DISPLAY::ReleaseSharedVidPnSourceOwner(
          (ADAPTER_DISPLAY *)this,
          (struct DXGDEVICE *)v33[470 * (unsigned int)v32 + 86],
          v32);
        goto LABEL_51;
      }
LABEL_35:
      if ( *(_DWORD *)&a4[v30] == 4 )
      {
        this[14][470 * *(unsigned int *)a4 + 88] = a2;
      }
      else
      {
        v37 = this[33];
        if ( v37 )
        {
          v61 = (__int64)&v37[1][26 * *(unsigned int *)a4];
          *(_QWORD *)(v61 + 416) = a2;
          *(_BYTE *)(v61 + 400) = 1;
          if ( (int)BLTQUEUE::IssueCommand((BLTQUEUE *)v61) >= 0 )
          {
            *(_QWORD *)(v61 + 200) = a2;
            memset((void *)(v61 + 160), 0, 0x20uLL);
            *(_DWORD *)(v61 + 848) &= ~4u;
          }
        }
        this[14][470 * *(unsigned int *)a4 + 86] = a2;
        LODWORD(this[14][470 * *(unsigned int *)a4 + 87]) = *(_DWORD *)&a4[v30];
        HIDWORD(this[14][470 * *(unsigned int *)a4 + 87]) = a6;
      }
      this[14][470 * *(unsigned int *)a4 + 89] = (PERESOURCE)a2->ExclusiveWaiters;
      ADAPTER_DISPLAY::UpdateGammaRamp((ADAPTER_DISPLAY *)this, *(_DWORD *)a4);
      v40 = (_QWORD *)WdLogNewEntry5_WdEvent(v39, v38);
      v40[3] = a2;
      v40[4] = *(unsigned int *)a4;
      v40[5] = *(int *)&a4[v30];
      v40[6] = a5;
      WdLogEvent5_WdEvent(v40);
      if ( *(_DWORD *)&a4[v30] == 3 )
      {
        CddInterface = ADAPTER_DISPLAY::GetCddInterface((DXGADAPTER **)this, *(_DWORD *)a4);
        if ( CddInterface )
          (*((void (__fastcall **)(_QWORD))CddInterface + 2))(*(_QWORD *)CddInterface);
      }
      a4 += 4;
      if ( !--v31 )
        return 0LL;
    }
    if ( LODWORD(v33[v34 + 87]) )
    {
      v60 = WdLogNewEntry5_WdAssertion(v33);
      *(_QWORD *)(v60 + 24) = 2160LL;
      WdLogEvent5_WdAssertion(v60);
    }
LABEL_51:
    OUTPUTDUPL_MGR::MoveContextToPendingDestroyList(this[13], *(unsigned int *)a4, 0LL, 0LL, 0, 1);
    goto LABEL_35;
  }
  return 0LL;
}
