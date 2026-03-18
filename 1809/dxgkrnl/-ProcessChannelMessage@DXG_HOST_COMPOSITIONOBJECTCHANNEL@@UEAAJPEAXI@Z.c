/*
 * XREFs of ?ProcessChannelMessage@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@UEAAJPEAXI@Z @ 0x1C02320B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000DF84 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000E054 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000E790 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?ReleaseReference@DXGPROCESS@@QEAAXXZ @ 0x1C0010340 (-ReleaseReference@DXGPROCESS@@QEAAXXZ.c)
 *     ??0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ @ 0x1C001048C (--0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ.c)
 *     ?AcquireReference@DXGPROCESS@@QEAAXXZ @ 0x1C00104E0 (-AcquireReference@DXGPROCESS@@QEAAXXZ.c)
 *     ?Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C00131E4 (-Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     ?BindCompositionSurfaceCallback@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@IEAAJPEAU_DXGCOMPOSITIONMESSAGE_BINDCOMPOSITIONSURFACE@@PEAU_DXGCOMPOSITIONMESSAGE_BINDCOMPOSITIONSURFACE_RETURN@@@Z @ 0x1C0230A6C (-BindCompositionSurfaceCallback@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@IEAAJPEAU_DXGCOMPOSITIONMESSA.c)
 *     ?CreateCompositionSurfaceCallback@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@IEAAJPEAU_DXGCOMPOSITIONMESSAGE_CREATECOMPOSITIONSURFACE@@PEAU_DXGCOMPOSITIONMESSAGE_CREATECOMPOSITIONSURFACE_RETURN@@@Z @ 0x1C0230F4C (-CreateCompositionSurfaceCallback@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@IEAAJPEAU_DXGCOMPOSITIONMES.c)
 *     ?EnqueueFlipExTokenCallback@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@IEAAJPEAU_DXGCOMPOSITIONMESSAGE_ENQUEUEFLIPEXTOKEN@@PEAU_DXGCOMPOSITIONMESSAGE_ENQUEUEFLIPEXTOKEN_RETURN@@@Z @ 0x1C02313EC (-EnqueueFlipExTokenCallback@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@IEAAJPEAU_DXGCOMPOSITIONMESSAGE_E.c)
 *     ?ReleaseCompositionSurfaceReferenceCallback@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@IEAAJPEAU_DXGCOMPOSITIONMESSAGE_RELEASECOMPOSITIONSURFACEREFERENCE@@PEAU_DXGCOMPOSITIONMESSAGE_RELEASECOMPOSITIONSURFACEREFERENCE_RETURN@@@Z @ 0x1C0232550 (-ReleaseCompositionSurfaceReferenceCallback@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@IEAAJPEAU_DXGCOMP.c)
 *     ?UnbindCompositionSurfaceCallback@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@IEAAJPEAU_DXGCOMPOSITIONMESSAGE_UNBINDCOMPOSITIONSURFACE@@PEAU_DXGCOMPOSITIONMESSAGE_UNBINDCOMPOSITIONSURFACE_RETURN@@@Z @ 0x1C0232F5C (-UnbindCompositionSurfaceCallback@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@IEAAJPEAU_DXGCOMPOSITIONMES.c)
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
  __int64 *v13; // rdx
  int v14; // eax
  struct _KPROCESS *v15; // rdx
  int v16; // eax
  struct _KPROCESS *v17; // rdx
  DXGPROCESS *v18; // rax
  DXGPROCESS *v19; // r14
  DXGPROCESS *v20; // rcx
  int v21; // eax
  struct _KPROCESS *v22; // rdx
  int v23; // eax
  struct _KPROCESS *v24; // rdx
  DXGPROCESS *ProcessDxgProcess; // rax
  DXGPROCESS *v26; // rdi
  struct _DXGCOMPOSITIONMESSAGE_CREATECOMPOSITIONSURFACE *v27; // rdx
  __int64 v28; // r9
  _BYTE v29[8]; // [rsp+20h] [rbp-39h] BYREF
  char v30; // [rsp+28h] [rbp-31h]
  struct _KAPC_STATE ApcState; // [rsp+30h] [rbp-29h] BYREF
  char v32; // [rsp+60h] [rbp+7h]
  __int64 v33; // [rsp+68h] [rbp+Fh] BYREF
  __int64 v34; // [rsp+70h] [rbp+17h]
  __int64 v35; // [rsp+78h] [rbp+1Fh] BYREF
  __int64 v36; // [rsp+80h] [rbp+27h]
  __int64 v37; // [rsp+88h] [rbp+2Fh]

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
    v36 = 2LL;
    v35 = 0LL;
    v23 = *((_DWORD *)a2 + 1);
    v24 = this[3];
    LODWORD(v35) = 1886220131;
    v37 = 0LL;
    HIDWORD(v35) = v23;
    v32 = 0;
    CPROCESSATTACHHELPER::Attach(&ApcState, v24);
    DXGPROCESSCALLOUTMUTEX::DXGPROCESSCALLOUTMUTEX((DXGPROCESSCALLOUTMUTEX *)&v33);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v33);
    ProcessDxgProcess = (DXGPROCESS *)PsGetProcessDxgProcess(this[3]);
    v26 = ProcessDxgProcess;
    if ( ProcessDxgProcess )
      DXGPROCESS::AcquireReference(ProcessDxgProcess);
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v33);
    if ( v26 )
    {
      DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v29, *((struct DXGFASTMUTEX *const *)v26 + 14), 0);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v29);
      if ( *((_DWORD *)v26 + 10) == 1 )
        HIDWORD(v35) = DXG_HOST_COMPOSITIONOBJECTCHANNEL::CreateCompositionSurfaceCallback(
                         (DXG_HOST_COMPOSITIONOBJECTCHANNEL *)this,
                         v27,
                         (struct _DXGCOMPOSITIONMESSAGE_CREATECOMPOSITIONSURFACE_RETURN *)&v35,
                         v28);
      if ( v30 )
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v29);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v33);
      v20 = v26;
      goto LABEL_39;
    }
LABEL_40:
    if ( (_BYTE)v34 )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v33);
    if ( v32 )
      KeUnstackDetachProcess(&ApcState);
    v13 = &v35;
    v12 = 24LL;
    goto LABEL_45;
  }
  v8 = (unsigned int)(*((_DWORD *)a2 + 2) - 3);
  if ( *((_DWORD *)a2 + 2) == 3 )
  {
    if ( (_DWORD)a3 == 16 )
    {
      v33 = 0LL;
      v34 = 0LL;
      v21 = *((_DWORD *)a2 + 1);
      v22 = this[3];
      LODWORD(v33) = 1886220131;
      LODWORD(v34) = 4;
      HIDWORD(v33) = v21;
      v32 = 0;
      CPROCESSATTACHHELPER::Attach(&ApcState, v22);
      v11 = DXG_HOST_COMPOSITIONOBJECTCHANNEL::ReleaseCompositionSurfaceReferenceCallback(
              (DXG_HOST_COMPOSITIONOBJECTCHANNEL *)this,
              a2,
              (struct _DXGCOMPOSITIONMESSAGE_RELEASECOMPOSITIONSURFACEREFERENCE_RETURN *)&v33);
      goto LABEL_13;
    }
    goto LABEL_30;
  }
  v8 = (unsigned int)(*((_DWORD *)a2 + 2) - 5);
  if ( *((_DWORD *)a2 + 2) == 5 )
  {
    if ( (_DWORD)a3 != 1072 )
      goto LABEL_30;
    v35 = 0LL;
    v36 = 0LL;
    v16 = *((_DWORD *)a2 + 1);
    v17 = this[3];
    LODWORD(v35) = 1886220131;
    LODWORD(v36) = 6;
    v37 = 0LL;
    HIDWORD(v35) = v16;
    v32 = 0;
    CPROCESSATTACHHELPER::Attach(&ApcState, v17);
    DXGPROCESSCALLOUTMUTEX::DXGPROCESSCALLOUTMUTEX((DXGPROCESSCALLOUTMUTEX *)&v33);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v33);
    v18 = (DXGPROCESS *)PsGetProcessDxgProcess(this[3]);
    v19 = v18;
    if ( v18 )
      DXGPROCESS::AcquireReference(v18);
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v33);
    if ( v19 )
    {
      DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v29, *((struct DXGFASTMUTEX *const *)v19 + 14), 0);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v29);
      if ( *((_DWORD *)v19 + 10) == 1 )
        HIDWORD(v35) = DXG_HOST_COMPOSITIONOBJECTCHANNEL::BindCompositionSurfaceCallback(
                         (DXG_HOST_COMPOSITIONOBJECTCHANNEL *)this,
                         a2,
                         (struct _DXGCOMPOSITIONMESSAGE_BINDCOMPOSITIONSURFACE_RETURN *)&v35);
      if ( v30 )
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v29);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v33);
      v20 = v19;
LABEL_39:
      DXGPROCESS::ReleaseReference(v20);
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v33);
      goto LABEL_40;
    }
    goto LABEL_40;
  }
  v8 = (unsigned int)(*((_DWORD *)a2 + 2) - 7);
  if ( *((_DWORD *)a2 + 2) == 7 )
  {
    if ( (_DWORD)a3 == 24 )
    {
      v33 = 0LL;
      v34 = 0LL;
      v14 = *((_DWORD *)a2 + 1);
      v15 = this[3];
      LODWORD(v33) = 1886220131;
      LODWORD(v34) = 8;
      HIDWORD(v33) = v14;
      v32 = 0;
      CPROCESSATTACHHELPER::Attach(&ApcState, v15);
      v11 = DXG_HOST_COMPOSITIONOBJECTCHANNEL::UnbindCompositionSurfaceCallback(
              (DXG_HOST_COMPOSITIONOBJECTCHANNEL *)this,
              a2,
              (struct _DXGCOMPOSITIONMESSAGE_UNBINDCOMPOSITIONSURFACE_RETURN *)&v33);
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
  v33 = 0LL;
  v34 = 0LL;
  v9 = *((_DWORD *)a2 + 1);
  v10 = this[3];
  LODWORD(v33) = 1886220131;
  LODWORD(v34) = 10;
  HIDWORD(v33) = v9;
  v32 = 0;
  CPROCESSATTACHHELPER::Attach(&ApcState, v10);
  v11 = DXG_HOST_COMPOSITIONOBJECTCHANNEL::EnqueueFlipExTokenCallback(
          (DXG_HOST_COMPOSITIONOBJECTCHANNEL *)this,
          a2,
          (struct _DXGCOMPOSITIONMESSAGE_ENQUEUEFLIPEXTOKEN_RETURN *)&v33);
LABEL_13:
  HIDWORD(v33) = v11;
  if ( v32 )
    KeUnstackDetachProcess(&ApcState);
  v12 = 16LL;
  v13 = &v33;
LABEL_45:
  (*(void (__fastcall **)(struct _KPROCESS *, __int64 *, __int64))(*(_QWORD *)this[1] + 24LL))(this[1], v13, v12);
  return 0LL;
}
