/*
 * XREFs of ?ProcessChannelMessage@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@UEAAJPEAXI@Z @ 0x1C0266C60
 * Callers:
 *     <none>
 * Callees:
 *     ?Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C000224C (-Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0007290 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007784 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000801C (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?ReleaseReference@DXGPROCESS@@QEAAXXZ @ 0x1C0018D50 (-ReleaseReference@DXGPROCESS@@QEAAXXZ.c)
 *     ??0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ @ 0x1C0018D9C (--0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ.c)
 *     ?AcquireReference@DXGPROCESS@@QEAAXXZ @ 0x1C0018DCC (-AcquireReference@DXGPROCESS@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 *     ?BindCompositionSurfaceCallback@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@IEAAJPEAU_DXGCOMPOSITIONMESSAGE_BINDCOMPOSITIONSURFACE@@PEAU_DXGCOMPOSITIONMESSAGE_BINDCOMPOSITIONSURFACE_RETURN@@@Z @ 0x1C02655F4 (-BindCompositionSurfaceCallback@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@IEAAJPEAU_DXGCOMPOSITIONMESSA.c)
 *     ?CreateCompositionSurfaceCallback@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@IEAAJPEAU_DXGCOMPOSITIONMESSAGE_CREATECOMPOSITIONSURFACE@@PEAU_DXGCOMPOSITIONMESSAGE_CREATECOMPOSITIONSURFACE_RETURN@@@Z @ 0x1C0265ADC (-CreateCompositionSurfaceCallback@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@IEAAJPEAU_DXGCOMPOSITIONMES.c)
 *     ?EnqueueFlipExTokenCallback@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@IEAAJPEAU_DXGCOMPOSITIONMESSAGE_ENQUEUEFLIPEXTOKEN@@PEAU_DXGCOMPOSITIONMESSAGE_ENQUEUEFLIPEXTOKEN_RETURN@@@Z @ 0x1C0265F8C (-EnqueueFlipExTokenCallback@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@IEAAJPEAU_DXGCOMPOSITIONMESSAGE_E.c)
 *     ?ReleaseCompositionSurfaceReferenceCallback@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@IEAAJPEAU_DXGCOMPOSITIONMESSAGE_RELEASECOMPOSITIONSURFACEREFERENCE@@PEAU_DXGCOMPOSITIONMESSAGE_RELEASECOMPOSITIONSURFACEREFERENCE_RETURN@@@Z @ 0x1C02670D4 (-ReleaseCompositionSurfaceReferenceCallback@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@IEAAJPEAU_DXGCOMP.c)
 *     ?UnbindCompositionSurfaceCallback@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@IEAAJPEAU_DXGCOMPOSITIONMESSAGE_UNBINDCOMPOSITIONSURFACE@@PEAU_DXGCOMPOSITIONMESSAGE_UNBINDCOMPOSITIONSURFACE_RETURN@@@Z @ 0x1C0267A8C (-UnbindCompositionSurfaceCallback@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@IEAAJPEAU_DXGCOMPOSITIONMES.c)
 */

__int64 __fastcall DXG_HOST_COMPOSITIONOBJECTCHANNEL::ProcessChannelMessage(
        struct _KPROCESS **this,
        struct _DXGCOMPOSITIONMESSAGE_BINDCOMPOSITIONSURFACE *a2,
        __int64 a3)
{
  __int64 v3; // rbx
  _QWORD *v6; // rax
  __int64 v8; // rcx
  int v9; // eax
  struct _KPROCESS *v10; // rdx
  int v11; // eax
  __int64 v12; // r8
  int *v13; // rdx
  int v14; // eax
  struct _KPROCESS *v15; // rdx
  int v16; // eax
  struct _KPROCESS *v17; // rdx
  __int64 v18; // rdx
  DXGPROCESS *v19; // rax
  __int64 v20; // rdx
  DXGPROCESS *v21; // r14
  __int64 v22; // rdx
  DXGPROCESS *v23; // rcx
  int v24; // eax
  struct _KPROCESS *v25; // rdx
  int v26; // eax
  struct _KPROCESS *v27; // rdx
  __int64 v28; // rdx
  DXGPROCESS *ProcessDxgProcess; // rax
  __int64 v30; // rdx
  DXGPROCESS *v31; // rdi
  struct _DXGCOMPOSITIONMESSAGE_CREATECOMPOSITIONSURFACE *v32; // rdx
  __int64 v33; // r9
  _BYTE v34[8]; // [rsp+20h] [rbp-39h] BYREF
  char v35; // [rsp+28h] [rbp-31h]
  struct _KAPC_STATE ApcState; // [rsp+30h] [rbp-29h] BYREF
  char v37; // [rsp+60h] [rbp+7h]
  int v38; // [rsp+68h] [rbp+Fh] BYREF
  int v39; // [rsp+6Ch] [rbp+13h]
  __int64 v40; // [rsp+70h] [rbp+17h]
  int v41; // [rsp+78h] [rbp+1Fh] BYREF
  int CompositionSurfaceCallback; // [rsp+7Ch] [rbp+23h]
  __int64 v43; // [rsp+80h] [rbp+27h]
  __int64 v44; // [rsp+88h] [rbp+2Fh]

  v3 = (unsigned int)a3;
  if ( (unsigned int)a3 < 0xC )
  {
    v6 = (_QWORD *)WdLogNewEntry5_WdWarning(this, a2, a3);
    v6[3] = v3;
LABEL_3:
    v6[4] = -1073741811LL;
LABEL_4:
    WdLogEvent5_WdWarning(v6);
    return 3221225485LL;
  }
  v8 = (unsigned int)(*((_DWORD *)a2 + 2) - 1);
  if ( *((_DWORD *)a2 + 2) == 1 )
  {
    if ( (_DWORD)a3 != 16 )
      goto LABEL_30;
    v26 = *((_DWORD *)a2 + 1);
    v27 = this[3];
    v44 = 0LL;
    v37 = 0;
    v41 = 1886220131;
    v43 = 2LL;
    CompositionSurfaceCallback = v26;
    CPROCESSATTACHHELPER::Attach(&ApcState, v27);
    DXGPROCESSCALLOUTMUTEX::DXGPROCESSCALLOUTMUTEX((DXGPROCESSCALLOUTMUTEX *)&v38, v28);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v38);
    ProcessDxgProcess = (DXGPROCESS *)PsGetProcessDxgProcess(this[3]);
    v31 = ProcessDxgProcess;
    if ( ProcessDxgProcess )
      DXGPROCESS::AcquireReference(ProcessDxgProcess, v30);
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v38);
    if ( v31 )
    {
      DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v34, *((struct DXGFASTMUTEX *const *)v31 + 13), 0);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v34);
      if ( *((_DWORD *)v31 + 10) == 1 )
        CompositionSurfaceCallback = DXG_HOST_COMPOSITIONOBJECTCHANNEL::CreateCompositionSurfaceCallback(
                                       (DXG_HOST_COMPOSITIONOBJECTCHANNEL *)this,
                                       v32,
                                       (struct _DXGCOMPOSITIONMESSAGE_CREATECOMPOSITIONSURFACE_RETURN *)&v41,
                                       v33);
      if ( v35 )
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v34);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v38);
      v23 = v31;
      goto LABEL_39;
    }
LABEL_40:
    if ( (_BYTE)v40 )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v38);
    if ( v37 )
      KeUnstackDetachProcess(&ApcState);
    v13 = &v41;
    v12 = 24LL;
    goto LABEL_45;
  }
  v8 = (unsigned int)(*((_DWORD *)a2 + 2) - 3);
  if ( *((_DWORD *)a2 + 2) == 3 )
  {
    if ( (_DWORD)a3 == 16 )
    {
      v24 = *((_DWORD *)a2 + 1);
      v25 = this[3];
      v37 = 0;
      v40 = 4LL;
      v38 = 1886220131;
      v39 = v24;
      CPROCESSATTACHHELPER::Attach(&ApcState, v25);
      v11 = DXG_HOST_COMPOSITIONOBJECTCHANNEL::ReleaseCompositionSurfaceReferenceCallback(
              (DXG_HOST_COMPOSITIONOBJECTCHANNEL *)this,
              a2,
              (struct _DXGCOMPOSITIONMESSAGE_RELEASECOMPOSITIONSURFACEREFERENCE_RETURN *)&v38);
      goto LABEL_13;
    }
    goto LABEL_30;
  }
  v8 = (unsigned int)(*((_DWORD *)a2 + 2) - 5);
  if ( *((_DWORD *)a2 + 2) == 5 )
  {
    if ( (_DWORD)a3 != 1072 )
      goto LABEL_30;
    v16 = *((_DWORD *)a2 + 1);
    v17 = this[3];
    v44 = 0LL;
    v37 = 0;
    v43 = 6LL;
    v41 = 1886220131;
    CompositionSurfaceCallback = v16;
    CPROCESSATTACHHELPER::Attach(&ApcState, v17);
    DXGPROCESSCALLOUTMUTEX::DXGPROCESSCALLOUTMUTEX((DXGPROCESSCALLOUTMUTEX *)&v38, v18);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v38);
    v19 = (DXGPROCESS *)PsGetProcessDxgProcess(this[3]);
    v21 = v19;
    if ( v19 )
      DXGPROCESS::AcquireReference(v19, v20);
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v38);
    if ( v21 )
    {
      DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v34, *((struct DXGFASTMUTEX *const *)v21 + 13), 0);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v34);
      if ( *((_DWORD *)v21 + 10) == 1 )
        CompositionSurfaceCallback = DXG_HOST_COMPOSITIONOBJECTCHANNEL::BindCompositionSurfaceCallback(
                                       (DXG_HOST_COMPOSITIONOBJECTCHANNEL *)this,
                                       a2,
                                       (struct _DXGCOMPOSITIONMESSAGE_BINDCOMPOSITIONSURFACE_RETURN *)&v41);
      if ( v35 )
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v34);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v38);
      v23 = v21;
LABEL_39:
      DXGPROCESS::ReleaseReference(v23, v22);
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v38);
      goto LABEL_40;
    }
    goto LABEL_40;
  }
  v8 = (unsigned int)(*((_DWORD *)a2 + 2) - 7);
  if ( *((_DWORD *)a2 + 2) == 7 )
  {
    if ( (_DWORD)a3 == 24 )
    {
      v14 = *((_DWORD *)a2 + 1);
      v15 = this[3];
      v37 = 0;
      v40 = 8LL;
      v38 = 1886220131;
      v39 = v14;
      CPROCESSATTACHHELPER::Attach(&ApcState, v15);
      v11 = DXG_HOST_COMPOSITIONOBJECTCHANNEL::UnbindCompositionSurfaceCallback(
              (DXG_HOST_COMPOSITIONOBJECTCHANNEL *)this,
              a2,
              (struct _DXGCOMPOSITIONMESSAGE_UNBINDCOMPOSITIONSURFACE_RETURN *)&v38);
      goto LABEL_13;
    }
LABEL_30:
    v6 = (_QWORD *)WdLogNewEntry5_WdWarning(v8, a2, a3);
    v6[3] = *((int *)a2 + 2);
    v6[4] = v3;
    v6[5] = -1073741811LL;
    goto LABEL_4;
  }
  if ( *((_DWORD *)a2 + 2) != 9 )
  {
    v6 = (_QWORD *)WdLogNewEntry5_WdWarning(v8, a2, a3);
    v6[3] = *((int *)a2 + 2);
    goto LABEL_3;
  }
  if ( (_DWORD)a3 != 488 )
    goto LABEL_30;
  v9 = *((_DWORD *)a2 + 1);
  v10 = this[3];
  v37 = 0;
  v40 = 10LL;
  v38 = 1886220131;
  v39 = v9;
  CPROCESSATTACHHELPER::Attach(&ApcState, v10);
  v11 = DXG_HOST_COMPOSITIONOBJECTCHANNEL::EnqueueFlipExTokenCallback(
          (DXG_HOST_COMPOSITIONOBJECTCHANNEL *)this,
          a2,
          (struct _DXGCOMPOSITIONMESSAGE_ENQUEUEFLIPEXTOKEN_RETURN *)&v38);
LABEL_13:
  v39 = v11;
  if ( v37 )
    KeUnstackDetachProcess(&ApcState);
  v12 = 16LL;
  v13 = &v38;
LABEL_45:
  (*(void (__fastcall **)(struct _KPROCESS *, int *, __int64))(*(_QWORD *)this[1] + 24LL))(this[1], v13, v12);
  return 0LL;
}
