/*
 * XREFs of ?CheckOwnership@DXGDISPLAYMANAGEROBJECT@@SAJU_LUID@@IPEAX@Z @ 0x1C00CB098
 * Callers:
 *     ?SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@PEBQEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00CBA38 (-SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAG.c)
 * Callees:
 *     ?AssignByLuid@DXGADAPTER_REFERENCE@@QEAA_NAEAU_LUID@@@Z @ 0x1C00038C0 (-AssignByLuid@DXGADAPTER_REFERENCE@@QEAA_NAEAU_LUID@@@Z.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C000BE40 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000BF70 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C000C0A0 (-AcquireShared@COREADAPTERACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000C1D0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?reset@?$auto_rc@V?$rc_buffer@U?$AlpcRequest@$07@DispBroker@@@@@@QEAAXPEAV?$rc_buffer@U?$AlpcRequest@$07@DispBroker@@@@@Z @ 0x1C001B40C (-reset@-$auto_rc@V-$rc_buffer@U-$AlpcRequest@$07@DispBroker@@@@@@QEAAXPEAV-$rc_buffer@U-$AlpcReq.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     DmmDoForSpecifiedTarget__lambda_faea55654f1a9ab00e317b5a4ca43765___ @ 0x1C00CB1F8 (DmmDoForSpecifiedTarget__lambda_faea55654f1a9ab00e317b5a4ca43765___.c)
 *     ??1?$NT_OBJECT_REFERENCE@PEAUDXGDISPLAYMANAGEROBJECT_CONTAINER@@@@QEAA@XZ @ 0x1C00CB2BC (--1-$NT_OBJECT_REFERENCE@PEAUDXGDISPLAYMANAGEROBJECT_CONTAINER@@@@QEAA@XZ.c)
 *     ?DmmEnumClientVidPnPathTargetsFromSource@@YAJQEAXI_KQEAI@Z @ 0x1C00EDA60 (-DmmEnumClientVidPnPathTargetsFromSource@@YAJQEAXI_KQEAI@Z.c)
 *     ?GetDisplayManagerObject@DXGDISPLAYMANAGERSOURCEOBJECT@@QEBAXAEAV?$auto_rc@VDXGDISPLAYMANAGEROBJECT@@@@@Z @ 0x1C028D0D4 (-GetDisplayManagerObject@DXGDISPLAYMANAGERSOURCEOBJECT@@QEBAXAEAV-$auto_rc@VDXGDISPLAYMANAGEROBJ.c)
 *     ?IsValid@DXGDISPLAYMANAGERSOURCEOBJECT@@QEBA_NXZ @ 0x1C028D278 (-IsValid@DXGDISPLAYMANAGERSOURCEOBJECT@@QEBA_NXZ.c)
 */

__int64 __fastcall DXGDISPLAYMANAGEROBJECT::CheckOwnership(struct _LUID a1, unsigned int a2, void *a3)
{
  DWORD LowPart; // ebx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  unsigned int i; // ebx
  int v14; // eax
  NTSTATUS v15; // edi
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rax
  DXGDISPLAYMANAGERSOURCEOBJECT *v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // r8
  __int64 v33; // rax
  __int64 v34; // r8
  struct _LUID v35; // [rsp+40h] [rbp-C0h] BYREF
  PVOID Object; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v37; // [rsp+50h] [rbp-B0h] BYREF
  ReferenceCounted *v38; // [rsp+58h] [rbp-A8h] BYREF
  struct DXGADAPTER *v39[2]; // [rsp+60h] [rbp-A0h] BYREF
  ReferenceCounted *v40; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v41[8]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v42[64]; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v43[72]; // [rsp+C8h] [rbp-38h] BYREF

  Object = 0LL;
  v35 = a1;
  LowPart = a1.LowPart;
  if ( a3 )
  {
    v15 = ObReferenceObjectByHandleWithTag(a3, 0x20000u, g_pDxgkDisplayManagerObjectType, 1, 0x4B677844u, &Object, 0LL);
    if ( v15 < 0 )
    {
      v23 = WdLogNewEntry5_WdError(v21, v20, v22);
      *(_QWORD *)(v23 + 24) = a3;
      WdLogEvent5_WdError(v23);
      goto LABEL_15;
    }
    v24 = (DXGDISPLAYMANAGERSOURCEOBJECT *)*((_QWORD *)Object + 1);
    if ( !v24 )
    {
      v25 = WdLogNewEntry5_WdError(0LL, v20, v22);
      *(_QWORD *)(v25 + 24) = Object;
      WdLogEvent5_WdError(v25);
      v15 = -1073741811;
      goto LABEL_15;
    }
    if ( !DXGDISPLAYMANAGERSOURCEOBJECT::IsValid(v24) )
    {
      v29 = WdLogNewEntry5_WdError(v27, v26, v28);
      *(_QWORD *)(v29 + 24) = Object;
      WdLogEvent5_WdError(v29);
      v15 = -1073741790;
      goto LABEL_15;
    }
  }
  v39[0] = 0LL;
  DXGADAPTER_REFERENCE::AssignByLuid((DXGADAPTER_REFERENCE *)v39, &v35);
  if ( v39[0] )
  {
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v41, v39[0], 0LL);
    if ( (int)COREADAPTERACCESS::AcquireShared((__int64)v41, 0xFFFFFFFFLL, v9) < 0 )
    {
      v31 = WdLogNewEntry5_WdWarning(v11, v10, v12);
      *(_QWORD *)(v31 + 24) = v35.HighPart;
      *(_QWORD *)(v31 + 32) = LowPart;
      WdLogEvent5_WdWarning(v31);
      v15 = -1073741275;
    }
    else
    {
      for ( i = 0; ; ++i )
      {
        v37 = -1;
        v14 = DmmEnumClientVidPnPathTargetsFromSource(v39[0], a2, i, &v37);
        v15 = v14;
        if ( v14 < 0 )
          break;
        if ( v14 == 1075708748 || v37 == -1 )
        {
          v15 = 0;
          break;
        }
        v38 = (ReferenceCounted *)&v40;
        v15 = DmmDoForSpecifiedTarget__lambda_faea55654f1a9ab00e317b5a4ca43765_(v39[0], v37, &v38);
        if ( v15 < 0 )
          break;
        v38 = v40;
        if ( a3 )
        {
          if ( !v40 )
            goto LABEL_30;
          v35 = 0LL;
          DXGDISPLAYMANAGERSOURCEOBJECT::GetDisplayManagerObject(*((_QWORD *)Object + 1), &v35);
          if ( *(ReferenceCounted **)&v35 != v40 )
          {
            auto_rc<rc_buffer<DispBroker::AlpcRequest<8>>>::reset((ReferenceCounted **)&v35, 0LL, v32);
LABEL_30:
            v33 = WdLogNewEntry5_WdError(v17, v16, v18);
            *(_QWORD *)(v33 + 24) = 471LL;
            WdLogEvent5_WdError(v33);
            auto_rc<rc_buffer<DispBroker::AlpcRequest<8>>>::reset(&v38, 0LL, v34);
            v15 = -1073741790;
            break;
          }
          auto_rc<rc_buffer<DispBroker::AlpcRequest<8>>>::reset((ReferenceCounted **)&v35, 0LL, v32);
        }
        else if ( v40 && *((_BYTE *)v40 + 144) )
        {
          goto LABEL_30;
        }
        auto_rc<rc_buffer<DispBroker::AlpcRequest<8>>>::reset(&v38, 0LL, v18);
      }
    }
    COREACCESS::~COREACCESS((COREACCESS *)v43);
    COREACCESS::~COREACCESS((COREACCESS *)v42);
  }
  else
  {
    v30 = WdLogNewEntry5_WdWarning(v7, v6, v8);
    *(_QWORD *)(v30 + 24) = v35.HighPart;
    *(_QWORD *)(v30 + 32) = LowPart;
    WdLogEvent5_WdWarning(v30);
    v15 = -1073741275;
  }
  DXGADAPTER_REFERENCE::Assign(v39, 0LL);
LABEL_15:
  NT_OBJECT_REFERENCE<DXGDISPLAYMANAGEROBJECT_CONTAINER *>::~NT_OBJECT_REFERENCE<DXGDISPLAYMANAGEROBJECT_CONTAINER *>(&Object);
  return (unsigned int)v15;
}
