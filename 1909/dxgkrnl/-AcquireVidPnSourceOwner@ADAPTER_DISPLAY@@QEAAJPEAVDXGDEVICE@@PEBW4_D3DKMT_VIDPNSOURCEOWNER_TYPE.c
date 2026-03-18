/*
 * XREFs of ?AcquireVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@PEBW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@PEBIIU_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@@Z @ 0x1C00CB2F0
 * Callers:
 *     ?SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@PEBQEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00CBA38 (-SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAG.c)
 * Callees:
 *     ?IsPartOfDesktop@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C0001F64 (-IsPartOfDesktop@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0002778 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsAddapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z @ 0x1C000E2C4 (-IsAddapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z.c)
 *     ?GetCddInterface@ADAPTER_DISPLAY@@QEBAPEBU_CDDDXGK_INTERFACE@@I@Z @ 0x1C0017F60 (-GetCddInterface@ADAPTER_DISPLAY@@QEBAPEBU_CDDDXGK_INTERFACE@@I@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0025440 (memset.c)
 *     ?HasOpenGlContext@DXGDEVICE@@QEAAEXZ @ 0x1C00CAB20 (-HasOpenGlContext@DXGDEVICE@@QEAAEXZ.c)
 *     ?CheckSessionOwnership@DISPLAY_SOURCE@@QEAAEXZ @ 0x1C00CB054 (-CheckSessionOwnership@DISPLAY_SOURCE@@QEAAEXZ.c)
 *     ?UpdateGammaRamp@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C00D2A50 (-UpdateGammaRamp@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     ?IssueCommand@BLTQUEUE@@AEAAJXZ @ 0x1C00D3CFC (-IssueCommand@BLTQUEUE@@AEAAJXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01059F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?MoveContextToPendingDestroyList@OUTPUTDUPL_MGR@@QEAAXIPEAVDXGDEVICE@@HHW4_DXGK_DIAG_OUTPUTDUPL_DESTROY_REASON@@@Z @ 0x1C0141A60 (-MoveContextToPendingDestroyList@OUTPUTDUPL_MGR@@QEAAXIPEAVDXGDEVICE@@HHW4_DXGK_DIAG_OUTPUTDUPL_.c)
 *     ?ReleaseSharedVidPnSourceOwner@ADAPTER_DISPLAY@@AEAAEPEAVDXGDEVICE@@I@Z @ 0x1C01F388C (-ReleaseSharedVidPnSourceOwner@ADAPTER_DISPLAY@@AEAAEPEAVDXGDEVICE@@I@Z.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::AcquireVidPnSourceOwner(
        PERESOURCE **this,
        struct _ERESOURCE *a2,
        const enum _D3DKMT_VIDPNSOURCEOWNER_TYPE *a3,
        char *a4,
        unsigned int a5,
        struct _D3DKMT_VIDPNSOURCEOWNER_FLAGS a6)
{
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r13
  __int64 v14; // rdx
  __int64 v15; // rcx
  struct DXGPROCESS *Current; // rbx
  struct _LUID *v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rbx
  __int64 v20; // r8
  bool IsAddapterSessionized; // al
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  _BOOL8 v25; // r15
  ERESOURCE_THREAD OwnerThread; // rax
  __int64 v27; // r8
  __int64 v28; // rbx
  unsigned int *v29; // r12
  signed __int64 v30; // rax
  int v31; // eax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r15
  __int64 v36; // rcx
  PERESOURCE *v37; // r9
  struct _ERESOURCE *v38; // r10
  struct DXGDEVICE *v39; // rax
  struct _D3DKMT_VIDPNSOURCEOWNER_FLAGS::$E3CFEB816EDED244F3F6DA55B10CA063::$8A2F5ADB3529A3A021294BA5D3A2A057 v40; // ebx
  signed __int64 v41; // rbp
  __int64 v42; // r12
  __int64 v43; // r9
  PERESOURCE *v44; // rcx
  __int64 v45; // rdx
  struct DXGDEVICE *v46; // r10
  int v47; // eax
  PERESOURCE *v48; // rcx
  _QWORD *v49; // rax
  __int64 v51; // rax
  int v52; // r8d
  __int64 v53; // rax
  __int64 v54; // rax
  _QWORD *v55; // rax
  __int64 v56; // rcx
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // eax
  __int64 v59; // r8
  __int64 v60; // rax
  __int64 v61; // rcx
  __int64 v62; // rbx
  __int64 v63; // rax
  __int64 v64; // rcx
  _QWORD *v65; // rax
  __int64 v66; // rcx
  __int64 v67; // rax
  __int64 v68; // rax
  __int64 v69; // rcx
  _QWORD *v70; // rax
  __int64 v71; // rcx
  __int64 v72; // rcx
  __int64 v73; // rax
  _QWORD *v74; // rax
  _QWORD *v75; // rax
  __int64 v76; // rcx
  __int64 v77; // rdx
  __int64 v78; // rcx
  __int64 v79; // rax
  __int64 v80; // rax
  __int64 v81; // rax
  __int64 v82; // rax
  __int64 v83; // r15
  const struct _CDDDXGK_INTERFACE *CddInterface; // rax
  int v85; // [rsp+30h] [rbp-38h] BYREF
  char v86[12]; // [rsp+34h] [rbp-34h] BYREF
  signed __int64 i; // [rsp+70h] [rbp+8h] BYREF

  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this[2]) )
  {
    v53 = WdLogNewEntry5_WdAssertion(v11, v10);
    *(_QWORD *)(v53 + 24) = 1930LL;
    WdLogEvent5_WdAssertion(v53);
  }
  v13 = a5;
  if ( *((_DWORD *)this + 20) < a5 )
  {
    v74 = (_QWORD *)WdLogNewEntry5_WdError(v11, v10, v12);
    LODWORD(v28) = -1073741811;
    v74[4] = v13;
    v74[5] = -1073741811LL;
LABEL_100:
    v74[3] = a2;
    goto LABEL_101;
  }
  if ( !a3 || !a4 )
  {
    v74 = (_QWORD *)WdLogNewEntry5_WdError(v11, v10, v12);
    LODWORD(v28) = -1073741811;
    v74[4] = a3;
    v74[5] = a4;
    v74[6] = a3;
    v74[7] = -1073741811LL;
    goto LABEL_100;
  }
  Current = DXGPROCESS::GetCurrent();
  if ( !Current )
  {
    v54 = WdLogNewEntry5_WdAssertion(v15, v14);
    *(_QWORD *)(v54 + 24) = 1965LL;
    WdLogEvent5_WdAssertion(v54);
  }
  v19 = (*(int (__fastcall **)(int *, _QWORD, char *))(*((_QWORD *)Current + 12) + 224LL))(&v85, 0LL, v86);
  if ( !v85 )
  {
    v51 = WdLogNewEntry5_WdWarning(v18, v17, v20);
    *(_QWORD *)(v51 + 24) = a2;
    *(_QWORD *)(v51 + 32) = -1073741790LL;
    WdLogEvent5_WdWarning(v51);
    return 3221225506LL;
  }
  IsAddapterSessionized = DXGADAPTER::IsAddapterSessionized((DXGADAPTER *)this[2], v17, (unsigned int *)&i, 0LL);
  v25 = IsAddapterSessionized;
  if ( IsAddapterSessionized )
  {
    if ( (_DWORD)v19 )
    {
      CurrentProcess = PsGetCurrentProcess();
      ProcessSessionId = PsGetProcessSessionId(CurrentProcess);
      if ( (_DWORD)i == ProcessSessionId )
        goto LABEL_11;
      v60 = WdLogNewEntry5_WdError(v23, v22, v59);
      v61 = (unsigned int)i;
      v62 = v60;
      *(_QWORD *)(v60 + 24) = a2;
      *(_QWORD *)(v60 + 32) = v61;
      v63 = PsGetCurrentProcess();
      *(_QWORD *)(v62 + 40) = (unsigned int)PsGetProcessSessionId(v63);
      *(_QWORD *)(v62 + 48) = -1073741790LL;
      WdLogEvent5_WdError(v62);
      LOBYTE(v64) = 1;
      if ( !(unsigned __int8)WdIsDebuggerPresent(v64) )
        return 3221225506LL;
      DbgPrintEx(
        0x65u,
        0,
        "Breaking in so rcoote can check why remote app is trying to take ownership of a remote session ouput");
    }
    else
    {
      v55 = (_QWORD *)WdLogNewEntry5_WdError(v23, v22, v24);
      v55[4] = 0LL;
      v55[5] = v25;
      v55[6] = (unsigned int)i;
      v55[3] = a2;
      v55[7] = -1073741790LL;
      WdLogEvent5_WdError(v55);
      LOBYTE(v56) = 1;
      if ( !(unsigned __int8)WdIsDebuggerPresent(v56) )
        return 3221225506LL;
      DbgPrintEx(0x65u, 0, "Breaking in so rcoote can check why console app is taking sessionized output ownership");
    }
LABEL_68:
    __debugbreak();
    return 3221225506LL;
  }
  if ( (_DWORD)v19 )
  {
    v65 = (_QWORD *)WdLogNewEntry5_WdWarning(v23, v22, v24);
    v65[6] = (unsigned int)i;
    v65[3] = a2;
    v65[4] = v19;
    v65[5] = v25;
    v65[7] = -1073741790LL;
    WdLogEvent5_WdWarning(v65);
    LOBYTE(v66) = 1;
    if ( (unsigned __int8)WdIsDebuggerPresent(v66) )
    {
      DbgPrintEx(0x65u, 0, "Breaking in so rcoote can check why remote app is taking console output ownership");
      goto LABEL_68;
    }
    return 3221225506LL;
  }
LABEL_11:
  OwnerThread = a2->OwnerTable[1].OwnerThread;
  if ( !OwnerThread
    || !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(*(_QWORD *)(OwnerThread + 2560) + 16LL)) )
  {
    v67 = WdLogNewEntry5_WdAssertion(v23, v22);
    *(_QWORD *)(v67 + 24) = 2056LL;
    WdLogEvent5_WdAssertion(v67);
  }
  v28 = 0LL;
  if ( !(_DWORD)v13 )
  {
LABEL_34:
    if ( DXGDEVICE::HasOpenGlContext((DXGDEVICE *)a2) )
    {
      v79 = WdLogNewEntry5_WdEvent();
      *(_QWORD *)(v79 + 24) = a2;
      WdLogEvent5_WdEvent(v79);
    }
    if ( !(_DWORD)v13 )
      return 0LL;
    v40 = a6.0;
    v41 = (char *)a3 - a4;
    v42 = v13;
    while ( 1 )
    {
      v43 = *(unsigned int *)a4;
      v44 = this[14];
      v45 = 3968 * v43;
      v46 = (struct DXGDEVICE *)v44[496 * v43 + 86];
      if ( !v46 )
        break;
      v47 = *(_DWORD *)&a4[v41];
      if ( v47 != 4 )
      {
        v52 = (int)v44[(unsigned __int64)v45 / 8 + 87];
        if ( v46 == (struct DXGDEVICE *)a2 )
        {
          if ( v52 != v47 )
          {
            v80 = WdLogNewEntry5_WdAssertion(v44, v45);
            *(_QWORD *)(v80 + 24) = 2312LL;
            WdLogEvent5_WdAssertion(v80);
          }
          goto LABEL_40;
        }
        if ( v52 != 1 || v47 == 1 )
        {
          v81 = WdLogNewEntry5_WdAssertion(v44, v45);
          *(_QWORD *)(v81 + 24) = 2322LL;
          WdLogEvent5_WdAssertion(v81);
          v44 = this[14];
          LODWORD(v43) = *(_DWORD *)a4;
        }
        ADAPTER_DISPLAY::ReleaseSharedVidPnSourceOwner(
          (ADAPTER_DISPLAY *)this,
          (struct DXGDEVICE *)v44[496 * (unsigned int)v43 + 86],
          v43);
        goto LABEL_51;
      }
LABEL_40:
      if ( *(_DWORD *)&a4[v41] == 4 )
      {
        this[14][496 * *(unsigned int *)a4 + 88] = a2;
      }
      else
      {
        v48 = this[46];
        if ( v48 )
        {
          v83 = (__int64)v48[1] + 2760 * *(unsigned int *)a4;
          *(_QWORD *)(v83 + 416) = a2;
          *(_BYTE *)(v83 + 400) = 1;
          if ( (int)BLTQUEUE::IssueCommand((BLTQUEUE *)v83) >= 0 )
          {
            *(_QWORD *)(v83 + 200) = a2;
            memset((void *)(v83 + 160), 0, 0x20uLL);
            *(_DWORD *)(v83 + 848) &= ~4u;
          }
        }
        this[14][496 * *(unsigned int *)a4 + 86] = a2;
        LODWORD(this[14][496 * *(unsigned int *)a4 + 87]) = *(_DWORD *)&a4[v41];
        HIDWORD(this[14][496 * *(unsigned int *)a4 + 87]) = v40;
      }
      this[14][496 * *(unsigned int *)a4 + 89] = (PERESOURCE)a2->ExclusiveWaiters;
      ADAPTER_DISPLAY::UpdateGammaRamp((ADAPTER_DISPLAY *)this, *(_DWORD *)a4);
      v49 = (_QWORD *)WdLogNewEntry5_WdEvent();
      v49[3] = a2;
      v49[4] = *(unsigned int *)a4;
      v49[5] = *(int *)&a4[v41];
      v49[6] = v13;
      WdLogEvent5_WdEvent(v49);
      if ( *(_DWORD *)&a4[v41] == 3 )
      {
        CddInterface = ADAPTER_DISPLAY::GetCddInterface((DXGADAPTER **)this, *(_DWORD *)a4);
        if ( CddInterface )
          (*((void (__fastcall **)(_QWORD))CddInterface + 2))(*(_QWORD *)CddInterface);
      }
      a4 += 4;
      if ( !--v42 )
        return 0LL;
    }
    if ( LODWORD(v44[(unsigned __int64)v45 / 8 + 87]) )
    {
      v82 = WdLogNewEntry5_WdAssertion(v44, v45);
      *(_QWORD *)(v82 + 24) = 2332LL;
      WdLogEvent5_WdAssertion(v82);
    }
LABEL_51:
    OUTPUTDUPL_MGR::MoveContextToPendingDestroyList(this[13], *(unsigned int *)a4, 0LL, 0LL, 0, 1);
    goto LABEL_40;
  }
  v29 = (unsigned int *)a4;
  v30 = (char *)a3 - a4;
  for ( i = (char *)a3 - a4; ; v30 = i )
  {
    v31 = *(unsigned int *)((char *)v29 + v30);
    if ( v31 <= 0 )
      goto LABEL_74;
    if ( v31 > 4 )
      goto LABEL_74;
    v23 = *v29;
    if ( *((_DWORD *)this + 20) <= (unsigned int)v23 )
      goto LABEL_74;
    if ( *(PERESOURCE **)&a2[16].ActiveEntries != this[2] )
    {
      v68 = WdLogNewEntry5_WdAssertion(v23, v22);
      *(_QWORD *)(v68 + 24) = 2096LL;
      WdLogEvent5_WdAssertion(v68);
      LODWORD(v23) = *v29;
    }
    if ( !DISPLAY_SOURCE::CheckSessionOwnership((DISPLAY_SOURCE *)&this[14][496 * (unsigned int)v23], v22) )
    {
      v75 = (_QWORD *)WdLogNewEntry5_WdWarning(v33, v32, v34);
      v77 = *(unsigned int *)&a4[4 * v28];
      LODWORD(v28) = -1071774910;
      v75[3] = v77;
      v75[4] = -1071774910LL;
      goto LABEL_89;
    }
    v35 = 0LL;
    if ( !(_DWORD)v28 )
      goto LABEL_22;
    do
    {
      if ( *v29 == *(_DWORD *)&a4[4 * v35] )
      {
        v74 = (_QWORD *)WdLogNewEntry5_WdError(v33, v32, v34);
        v74[4] = (unsigned int)v28;
        v74[5] = (unsigned int)v35;
        v74[3] = a2;
        v69 = *(unsigned int *)&a4[4 * v35];
        goto LABEL_76;
      }
      v35 = (unsigned int)(v35 + 1);
    }
    while ( (unsigned int)v35 < (unsigned int)v28 );
    v13 = a5;
LABEL_22:
    if ( !ADAPTER_DISPLAY::IsPartOfDesktop((DXGADAPTER **)this, *v29) )
    {
      v75 = (_QWORD *)WdLogNewEntry5_WdWarning(v36, v22, v27);
      v75[3] = a2;
      v75[4] = (unsigned int)v28;
      v76 = *(unsigned int *)&a4[4 * v28];
      v28 = -1071774972LL;
      goto LABEL_87;
    }
    v23 = *(unsigned int *)((char *)v29 + i);
    if ( (_DWORD)v23 == 1 && !LODWORD(a2[3].OwnerTable) || (_DWORD)v23 == 3 && LODWORD(a2[3].OwnerTable) )
    {
LABEL_74:
      v74 = (_QWORD *)WdLogNewEntry5_WdError(v23, v22, v27);
      v74[3] = a2;
      v74[4] = (unsigned int)v28;
      v74[5] = *(unsigned int *)&a4[4 * v28];
      goto LABEL_75;
    }
    v37 = this[14];
    v27 = 3968LL * *v29;
    v38 = v37[(unsigned __int64)v27 / 8 + 86];
    if ( !v38 )
    {
      if ( LODWORD(v37[(unsigned __int64)v27 / 8 + 87]) )
      {
        v73 = WdLogNewEntry5_WdAssertion(v23, v22);
        *(_QWORD *)(v73 + 24) = 2273LL;
        WdLogEvent5_WdAssertion(v73);
      }
      goto LABEL_33;
    }
    v22 = LODWORD(v37[(unsigned __int64)v27 / 8 + 87]);
    if ( v38 == a2 )
    {
      if ( (_DWORD)v22 != (_DWORD)v23 )
      {
        v74 = (_QWORD *)WdLogNewEntry5_WdError(v23, v22, v27);
        v74[3] = a2;
        v74[4] = *(unsigned int *)&a4[4 * v28];
        v74[5] = SLODWORD(this[14][496 * *(unsigned int *)&a4[4 * v28] + 87]);
        goto LABEL_75;
      }
      goto LABEL_33;
    }
    if ( (_DWORD)v22 != 1 )
      goto LABEL_90;
    if ( (_DWORD)v23 == 1 && *((_BYTE *)a2->ExclusiveWaiters + 298) && *((_BYTE *)v38->ExclusiveWaiters + 298) )
      break;
    if ( (_DWORD)v23 == 1 )
    {
LABEL_90:
      v75 = (_QWORD *)WdLogNewEntry5_WdWarning(v23, v22, v27);
      v75[3] = a2;
      v75[4] = SLODWORD(this[14][496 * *(unsigned int *)&a4[4 * v28] + 87]);
      v75[5] = *(unsigned int *)&a4[4 * v28];
      v78 = a3[v28];
      LODWORD(v28) = -1071774910;
      v75[7] = -1071774910LL;
      v75[6] = v78;
      goto LABEL_89;
    }
    v39 = (struct DXGDEVICE *)v37[(unsigned __int64)v27 / 8 + 88];
    if ( v39 != (struct DXGDEVICE *)a2 )
    {
      if ( !v39 )
        goto LABEL_33;
      v75 = (_QWORD *)WdLogNewEntry5_WdWarning(v23, v22, v27);
      v75[3] = a2;
      v75[4] = *(unsigned int *)&a4[4 * v28];
      v76 = a3[v28];
      v28 = -1071774910LL;
LABEL_87:
      v75[5] = v76;
      v75[6] = v28;
LABEL_89:
      WdLogEvent5_WdWarning(v75);
      return (unsigned int)v28;
    }
    if ( (_DWORD)v23 != 4 )
    {
      v74 = (_QWORD *)WdLogNewEntry5_WdError(v23, v22, v27);
      v74[3] = a2;
      v74[4] = *(unsigned int *)&a4[4 * v28];
      v74[5] = 4LL;
LABEL_75:
      v69 = a3[v28];
LABEL_76:
      LODWORD(v28) = -1073741811;
      v74[6] = v69;
      v74[7] = -1073741811LL;
LABEL_101:
      WdLogEvent5_WdError(v74);
      return (unsigned int)v28;
    }
LABEL_33:
    v28 = (unsigned int)(v28 + 1);
    ++v29;
    if ( (unsigned int)v28 >= (unsigned int)v13 )
      goto LABEL_34;
  }
  v70 = (_QWORD *)WdLogNewEntry5_WdWarning(v23, v22, v27);
  v70[3] = a2;
  v70[4] = SLODWORD(this[14][496 * *(unsigned int *)&a4[4 * v28] + 87]);
  v70[5] = *(unsigned int *)&a4[4 * v28];
  v71 = a3[v28];
  LODWORD(v28) = -1071774910;
  v70[6] = v71;
  v70[7] = -1071774910LL;
  WdLogEvent5_WdWarning(v70);
  LOBYTE(v72) = 1;
  if ( (unsigned __int8)WdIsDebuggerPresent(v72) )
  {
    DbgPrintEx(0x65u, 0, "Breaking in to allow debug of potential DWM swap chain leak");
    __debugbreak();
  }
  return (unsigned int)v28;
}
