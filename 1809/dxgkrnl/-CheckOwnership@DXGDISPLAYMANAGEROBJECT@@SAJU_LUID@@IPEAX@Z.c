/*
 * XREFs of ?CheckOwnership@DXGDISPLAYMANAGEROBJECT@@SAJU_LUID@@IPEAX@Z @ 0x1C011F45C
 * Callers:
 *     ?SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@PEBQEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C011D60C (-SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAG.c)
 * Callees:
 *     ?InitByLuid@DXGADAPTERREFERENCE@@QEAAPEAVDXGADAPTER@@U_LUID@@@Z @ 0x1C0004F34 (-InitByLuid@DXGADAPTERREFERENCE@@QEAAPEAVDXGADAPTER@@U_LUID@@@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0011CB0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0011D10 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0012240 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00123A4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?reset@?$auto_rc@VDXGDISPLAYMANAGEROBJECT@@@@QEAAXPEAVDXGDISPLAYMANAGEROBJECT@@@Z @ 0x1C001A3E4 (-reset@-$auto_rc@VDXGDISPLAYMANAGEROBJECT@@@@QEAAXPEAVDXGDISPLAYMANAGEROBJECT@@@Z.c)
 *     ?DmmEnumClientVidPnPathTargetsFromSource@@YAJQEAXI_KQEAI@Z @ 0x1C00E550C (-DmmEnumClientVidPnPathTargetsFromSource@@YAJQEAXI_KQEAI@Z.c)
 *     DmmDoForSpecifiedTarget__lambda_babeb6617360c1278b0dac3884c10b63___ @ 0x1C011F588 (DmmDoForSpecifiedTarget__lambda_babeb6617360c1278b0dac3884c10b63___.c)
 *     ??1?$NT_OBJECT_REFERENCE@PEAUDXGDISPLAYMANAGEROBJECT_CONTAINER@@@@QEAA@XZ @ 0x1C011F64C (--1-$NT_OBJECT_REFERENCE@PEAUDXGDISPLAYMANAGEROBJECT_CONTAINER@@@@QEAA@XZ.c)
 *     ?GetDisplayManagerObject@DXGDISPLAYMANAGERSOURCEOBJECT@@QEBAXAEAV?$auto_rc@VDXGDISPLAYMANAGEROBJECT@@@@@Z @ 0x1C0256A18 (-GetDisplayManagerObject@DXGDISPLAYMANAGERSOURCEOBJECT@@QEBAXAEAV-$auto_rc@VDXGDISPLAYMANAGEROBJ.c)
 *     ?IsValid@DXGDISPLAYMANAGERSOURCEOBJECT@@QEBA_NXZ @ 0x1C0256BB8 (-IsValid@DXGDISPLAYMANAGERSOURCEOBJECT@@QEBA_NXZ.c)
 */

__int64 __fastcall DXGDISPLAYMANAGEROBJECT::CheckOwnership(struct _LUID a1, unsigned int a2, HANDLE Handle)
{
  struct DXGADAPTER *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  DXGADAPTER *v10; // r14
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  unsigned int i; // ebx
  int v15; // eax
  NTSTATUS v16; // edi
  __int64 v17; // rcx
  __int64 v19; // rcx
  __int64 v20; // rax
  DXGDISPLAYMANAGERSOURCEOBJECT *v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  ReferenceCounted *v28; // [rsp+40h] [rbp-49h] BYREF
  ReferenceCounted *v29; // [rsp+48h] [rbp-41h] BYREF
  ReferenceCounted *v30; // [rsp+50h] [rbp-39h] BYREF
  DXGADAPTER *v31; // [rsp+58h] [rbp-31h] BYREF
  _BYTE v32[8]; // [rsp+70h] [rbp-19h] BYREF
  _BYTE v33[32]; // [rsp+78h] [rbp-11h] BYREF
  _BYTE v34[72]; // [rsp+98h] [rbp+Fh] BYREF
  LONG HighPart; // [rsp+F4h] [rbp+6Bh]
  unsigned int v36; // [rsp+100h] [rbp+77h] BYREF
  PVOID Object; // [rsp+108h] [rbp+7Fh] BYREF

  HighPart = a1.HighPart;
  Object = 0LL;
  if ( Handle )
  {
    v16 = ObReferenceObjectByHandleWithTag(
            Handle,
            0x20000u,
            g_pDxgkDisplayManagerObjectType,
            1,
            0x4B677844u,
            &Object,
            0LL);
    if ( v16 < 0 )
    {
      v20 = WdLogNewEntry5_WdError(v19);
      *(_QWORD *)(v20 + 24) = Handle;
      WdLogEvent5_WdError(v20);
      goto LABEL_16;
    }
    v21 = (DXGDISPLAYMANAGERSOURCEOBJECT *)*((_QWORD *)Object + 1);
    if ( !v21 )
    {
      v22 = WdLogNewEntry5_WdError(0LL);
      *(_QWORD *)(v22 + 24) = Object;
      WdLogEvent5_WdError(v22);
      v16 = -1073741811;
      goto LABEL_16;
    }
    if ( !DXGDISPLAYMANAGERSOURCEOBJECT::IsValid(v21) )
    {
      v24 = WdLogNewEntry5_WdError(v23);
      *(_QWORD *)(v24 + 24) = Object;
      WdLogEvent5_WdError(v24);
      v16 = -1073741790;
      goto LABEL_16;
    }
  }
  v31 = 0LL;
  v6 = DXGADAPTERREFERENCE::InitByLuid((DXGADAPTERREFERENCE *)&v31, a1);
  v10 = v6;
  if ( v6 )
  {
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v32, v6, 0LL);
    if ( (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v32) < 0 )
    {
      v26 = WdLogNewEntry5_WdWarning(v12, v11, v13);
      *(_QWORD *)(v26 + 24) = HighPart;
      *(_QWORD *)(v26 + 32) = a1.LowPart;
      WdLogEvent5_WdWarning(v26);
      v16 = -1073741275;
    }
    else
    {
      for ( i = 0; ; ++i )
      {
        v36 = -1;
        v15 = DmmEnumClientVidPnPathTargetsFromSource(v10, a2, i, &v36);
        v16 = v15;
        if ( v15 < 0 )
          break;
        if ( v15 == 1075708748 || v36 == -1 )
        {
          v16 = 0;
          break;
        }
        v29 = (ReferenceCounted *)&v30;
        v16 = DmmDoForSpecifiedTarget__lambda_babeb6617360c1278b0dac3884c10b63_(v10, v36, &v29);
        if ( v16 < 0 )
          break;
        v29 = v30;
        if ( Handle )
        {
          if ( !v30 )
            goto LABEL_31;
          v28 = 0LL;
          DXGDISPLAYMANAGERSOURCEOBJECT::GetDisplayManagerObject(*((_QWORD *)Object + 1), &v28);
          if ( v28 != v30 )
          {
            auto_rc<DXGDISPLAYMANAGEROBJECT>::reset(&v28, 0LL);
LABEL_31:
            v27 = WdLogNewEntry5_WdError(v17);
            *(_QWORD *)(v27 + 24) = 471LL;
            WdLogEvent5_WdError(v27);
            auto_rc<DXGDISPLAYMANAGEROBJECT>::reset(&v29, 0LL);
            v16 = -1073741790;
            break;
          }
          auto_rc<DXGDISPLAYMANAGEROBJECT>::reset(&v28, 0LL);
        }
        else if ( v30 && *((_BYTE *)v30 + 144) )
        {
          goto LABEL_31;
        }
        auto_rc<DXGDISPLAYMANAGEROBJECT>::reset(&v29, 0LL);
      }
    }
    COREACCESS::~COREACCESS((COREACCESS *)v34);
    COREACCESS::~COREACCESS((COREACCESS *)v33);
  }
  else
  {
    v25 = WdLogNewEntry5_WdWarning(v8, v7, v9);
    *(_QWORD *)(v25 + 24) = HighPart;
    *(_QWORD *)(v25 + 32) = a1.LowPart;
    WdLogEvent5_WdWarning(v25);
    v16 = -1073741275;
  }
  if ( v31 )
    DXGADAPTER::ReleaseReference(v31);
LABEL_16:
  NT_OBJECT_REFERENCE<DXGDISPLAYMANAGEROBJECT_CONTAINER *>::~NT_OBJECT_REFERENCE<DXGDISPLAYMANAGEROBJECT_CONTAINER *>(&Object);
  return (unsigned int)v16;
}
