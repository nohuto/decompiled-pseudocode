/*
 * XREFs of DxgkIddHandleSetDisplayConfig @ 0x1C0234584
 * Callers:
 *     DxgkHandleIndirectEscape @ 0x1C02ABFC8 (DxgkHandleIndirectEscape.c)
 * Callees:
 *     DXGKCALLONEXIT__lambda_d81a481debf6296c527a71b94d2ae09c___ @ 0x1C000172C (DXGKCALLONEXIT__lambda_d81a481debf6296c527a71b94d2ae09c___.c)
 *     ?Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C0002010 (-Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0006DA8 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0006E04 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C000BC50 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C320 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000C364 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?IsAddapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z @ 0x1C000E028 (-IsAddapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z.c)
 *     ?reset@?$auto_rc@V?$rc_buffer@U?$AlpcRequest@$07@DispBroker@@@@@@QEAAXPEAV?$rc_buffer@U?$AlpcRequest@$07@DispBroker@@@@@Z @ 0x1C001B3BC (-reset@-$auto_rc@V-$rc_buffer@U-$AlpcRequest@$07@DispBroker@@@@@@QEAAXPEAV-$rc_buffer@U-$AlpcReq.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     memset @ 0x1C0025300 (memset.c)
 *     InitDisplayBrokerMessage_DispBroker::AlpcRequest_8___lambda_2792f1a5517d9286fa3e49da2fcc5db9__&DxgkSampleDisplayState_ @ 0x1C003F870 (InitDisplayBrokerMessage_DispBroker--AlpcRequest_8___lambda_2792f1a5517d9286fa3e49da2fcc5db9__-D.c)
 *     ?SetDisplayConfigDone@DXGSESSIONDATA@@QEAAXK@Z @ 0x1C003F92C (-SetDisplayConfigDone@DXGSESSIONDATA@@QEAAXK@Z.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C00F39C0 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?DxgkSendDisplayBrokerMessage@@YAJKPEAU_PORT_MESSAGE@@PEAU_ALPC_MESSAGE_ATTRIBUTES@@0PEA_K1PEAT_LARGE_INTEGER@@@Z @ 0x1C014B8A0 (-DxgkSendDisplayBrokerMessage@@YAJKPEAU_PORT_MESSAGE@@PEAU_ALPC_MESSAGE_ATTRIBUTES@@0PEA_K1PEAT_.c)
 *     ?AssignByHandle@DXGADAPTER_REFERENCE@@QEAA_NI@Z @ 0x1C01EBF2C (-AssignByHandle@DXGADAPTER_REFERENCE@@QEAA_NI@Z.c)
 *     _lambda_1ecc0e3e99406e51155bf30eed62debb_::operator() @ 0x1C0233C7C (_lambda_1ecc0e3e99406e51155bf30eed62debb_--operator().c)
 *     _lambda_d81a481debf6296c527a71b94d2ae09c_::operator() @ 0x1C0233FC8 (_lambda_d81a481debf6296c527a71b94d2ae09c_--operator().c)
 *     ?CacheIddDisplayConfigRequest@DXGSESSIONDATA@@QEAAKAEAV?$auto_rc@V?$rc_buffer@U?$AlpcRequest@$07@DispBroker@@@@@@@Z @ 0x1C02342B4 (-CacheIddDisplayConfigRequest@DXGSESSIONDATA@@QEAAKAEAV-$auto_rc@V-$rc_buffer@U-$AlpcRequest@$07.c)
 *     ?ReferenceSessionCSRSSProcess@DXGSESSIONMGR@@QEAAJKPEAPEAU_KPROCESS@@@Z @ 0x1C0276F3C (-ReferenceSessionCSRSSProcess@DXGSESSIONMGR@@QEAAJKPEAPEAU_KPROCESS@@@Z.c)
 *     DpiFdoWaitConnectionChangeComplete @ 0x1C02A35BC (DpiFdoWaitConnectionChangeComplete.c)
 *     MonitorSetPhysicalSizeOverride @ 0x1C02CA42C (MonitorSetPhysicalSizeOverride.c)
 *     MonitorSetScaleFactorOverride @ 0x1C02CA6B4 (MonitorSetScaleFactorOverride.c)
 */

void __fastcall DxgkIddHandleSetDisplayConfig(__int64 a1, __int64 a2, DWORD *a3, int *a4)
{
  unsigned __int64 v4; // rbx
  __int64 v7; // r14
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  _QWORD *v11; // rax
  int v12; // ebx
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // r8
  unsigned __int64 v17; // rcx
  struct _LUID *v18; // rdx
  __int64 v19; // r8
  __int64 v20; // rax
  struct _LUID *v21; // rdx
  __int64 v22; // r8
  __int64 LowPart; // rcx
  struct _LUID v24; // rcx
  void *v25; // rbx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // rax
  DWORD *v30; // rdx
  DWORD v31; // ebx
  int v32; // eax
  unsigned int v33; // ebx
  __int64 v34; // rsi
  int v35; // eax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  int v39; // eax
  __int64 v40; // rdx
  __int64 v41; // r8
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // eax
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // rbx
  struct DXGGLOBAL *Global; // rax
  int v48; // eax
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // rax
  __int64 v53; // rdx
  DXGSESSIONMGR *v54; // rsi
  unsigned int v55; // eax
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  size_t v57; // rbx
  char *v58; // rax
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // r8
  __int64 v62; // r9
  char *v63; // rsi
  __int64 v64; // rax
  int v65; // eax
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // r8
  __int64 v69; // rax
  __int64 v70; // r8
  int v71; // ebx
  __int64 v72; // rdx
  __int64 v73; // rcx
  int v74; // eax
  __int64 v75; // rax
  __int64 v76; // rax
  ULONG MessageId; // eax
  __int64 v78; // rax
  __int64 v79; // rax
  __int64 v80; // rax
  char v81; // [rsp+40h] [rbp-C0h] BYREF
  DWORD *v82; // [rsp+48h] [rbp-B8h] BYREF
  struct _LUID *v83[2]; // [rsp+50h] [rbp-B0h] BYREF
  char v84; // [rsp+60h] [rbp-A0h] BYREF
  DXGSESSIONDATA *v85; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v86; // [rsp+70h] [rbp-90h] BYREF
  __int128 v87; // [rsp+78h] [rbp-88h] BYREF
  __int128 v88; // [rsp+88h] [rbp-78h]
  __int64 v89; // [rsp+98h] [rbp-68h] BYREF
  unsigned __int64 CurrentProcessSessionId; // [rsp+A0h] [rbp-60h] BYREF
  PVOID Object; // [rsp+A8h] [rbp-58h] BYREF
  ReferenceCounted *v92; // [rsp+B0h] [rbp-50h] BYREF
  unsigned __int64 v93; // [rsp+B8h] [rbp-48h] BYREF
  union _LARGE_INTEGER v94; // [rsp+C0h] [rbp-40h] BYREF
  unsigned __int64 v95; // [rsp+C8h] [rbp-38h] BYREF
  DXGADAPTER **v96[2]; // [rsp+D0h] [rbp-30h] BYREF
  _QWORD v97[2]; // [rsp+E0h] [rbp-20h] BYREF
  _OWORD v98[2]; // [rsp+F0h] [rbp-10h] BYREF
  int *v99[4]; // [rsp+110h] [rbp+10h] BYREF
  char v100; // [rsp+130h] [rbp+30h]
  struct _KAPC_STATE ApcState; // [rsp+138h] [rbp+38h] BYREF
  char v102; // [rsp+168h] [rbp+68h]
  struct _PORT_MESSAGE v103[2]; // [rsp+170h] [rbp+70h] BYREF

  v4 = (unsigned int)a2;
  v89 = 0LL;
  v7 = (unsigned int)a1;
  *(_QWORD *)&v87 = a4;
  CurrentProcessSessionId = (unsigned int)PsGetCurrentProcessSessionId(a1, a2);
  *((_QWORD *)&v87 + 1) = &v89;
  *(_QWORD *)&v88 = &CurrentProcessSessionId;
  *((_QWORD *)&v88 + 1) = &v85;
  v102 = 0;
  v85 = 0LL;
  v98[1] = v88;
  v98[0] = v87;
  DXGKCALLONEXIT__lambda_d81a481debf6296c527a71b94d2ae09c_((__int64)v99, v98);
  *a4 = -1073741823;
  if ( (unsigned int)v4 < 4 )
  {
    v11 = (_QWORD *)WdLogNewEntry5_WdError(v9, v8, v10);
    v11[3] = v4;
    v12 = -1073741789;
    v11[4] = -1073741789LL;
LABEL_7:
    WdLogEvent5_WdError(v11);
    goto LABEL_8;
  }
  v82 = a3;
  v13 = *a3;
  if ( (unsigned int)v13 >= 0x10 )
  {
    v14 = WdLogNewEntry5_WdError(v9, v8, v10);
    *(_QWORD *)(v14 + 24) = *v82;
    *(_QWORD *)(v14 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v14);
    v12 = -1073741811;
LABEL_8:
    *a4 = v12;
    goto LABEL_68;
  }
  v17 = 56 * v13 + 4;
  if ( v4 < v17 )
  {
    v11 = (_QWORD *)WdLogNewEntry5_WdError(v17, v8, v10);
    v11[3] = v4;
    v12 = -1073741789;
    v11[4] = *v82;
    v11[5] = -1073741789LL;
    goto LABEL_7;
  }
  v83[0] = 0LL;
  DXGADAPTER_REFERENCE::AssignByHandle((struct DXGADAPTER **)v83, (unsigned int)v7);
  if ( v83[0] )
  {
    v89 = *(_QWORD *)&v83[0][34].HighPart;
    DXGADAPTER::IsAddapterSessionized((DXGADAPTER *)v83[0], v18, 0LL, &v93);
    CurrentProcessSessionId = v93;
    *((struct _LUID **)&v87 + 1) = v83[0];
    LOBYTE(v88) = 0;
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)&v87);
    LowPart = v83[0][22].LowPart;
    if ( (_DWORD)LowPart != 1 )
      goto LABEL_63;
    v21 = v83[0];
    if ( BYTE1(v83[0][308].LowPart) )
      goto LABEL_63;
    v24 = v83[0][319];
    if ( !*(_QWORD *)&v24
      || (v83[0][38].HighPart & 0x100) == 0
      || (v24 = (struct _LUID)*(unsigned int *)(*(_QWORD *)&v24 + 80LL), *v82 > v24.LowPart)
      || !DXGADAPTER::IsAddapterSessionized((DXGADAPTER *)v83[0], v83[0], &v86, 0LL) )
    {
      v79 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))WdLogNewEntry5_WdError)(v24, v21, v22);
      *(struct _LUID **)(v79 + 24) = v83[0];
      *(_QWORD *)(v79 + 32) = -1073741811LL;
      WdLogEvent5_WdError(v79);
      *a4 = -1073741811;
      goto LABEL_65;
    }
    v25 = (void *)v83[0][24];
    ObfReferenceObject(v25);
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v87);
    *a4 = DpiFdoWaitConnectionChangeComplete(v25);
    ObfDereferenceObject(v25);
    if ( *a4 < 0 )
    {
      v29 = WdLogNewEntry5_WdError(v27, v26, v28);
      *(struct _LUID **)(v29 + 24) = v83[0];
      *(_QWORD *)(v29 + 32) = *a4;
      *(_QWORD *)(v29 + 40) = -1071775725LL;
      WdLogEvent5_WdError(v29);
LABEL_64:
      *a4 = -1071775725;
LABEL_65:
      if ( (_BYTE)v88 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v87);
      goto LABEL_67;
    }
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)&v87);
    LowPart = v83[0][22].LowPart;
    if ( (_DWORD)LowPart != 1 || BYTE1(v83[0][308].LowPart) )
    {
LABEL_63:
      v80 = WdLogNewEntry5_WdWarning(LowPart, v21, v22);
      *(struct _LUID **)(v80 + 24) = v83[0];
      *(_QWORD *)(v80 + 32) = -1071775725LL;
      WdLogEvent5_WdWarning(v80);
      goto LABEL_64;
    }
    v30 = v82;
    v96[0] = (DXGADAPTER **)v83;
    v31 = 0;
    v81 = 0;
    v96[1] = (DXGADAPTER **)&v81;
    if ( !*v82 )
    {
LABEL_61:
      *a4 = -1073741811;
      v52 = WdLogNewEntry5_WdError(LowPart, v30, v22);
      *(struct _LUID **)(v52 + 24) = v83[0];
LABEL_32:
      *(_QWORD *)(v52 + 32) = *a4;
      goto LABEL_36;
    }
    do
    {
      v32 = lambda_1ecc0e3e99406e51155bf30eed62debb_::operator()(v96, v31, &v30[14 * v31 + 1]);
      *a4 = v32;
      if ( v32 < 0 )
        goto LABEL_65;
      v30 = v82;
      ++v31;
    }
    while ( v31 < *v82 );
    if ( !v81 )
      goto LABEL_61;
    v33 = 0;
    if ( *v82 )
    {
      while ( 1 )
      {
        v34 = 14LL * v33;
        v35 = MonitorSetScaleFactorOverride((DXGADAPTER *)v83[0], v30[v34 + 3]);
        *a4 = v35;
        if ( v35 < 0 )
          break;
        v39 = MonitorSetPhysicalSizeOverride((DXGADAPTER *)v83[0], v82[v34 + 3]);
        *a4 = v39;
        if ( v39 < 0 )
        {
          v52 = WdLogNewEntry5_WdError(LowPart, v40, v41);
          v53 = v82[14 * v33 + 3];
          goto LABEL_35;
        }
        v30 = v82;
        if ( ++v33 >= *v82 )
          goto LABEL_29;
      }
      v52 = WdLogNewEntry5_WdError(v37, v36, v38);
      v53 = v82[v34 + 3];
LABEL_35:
      *(_QWORD *)(v52 + 24) = v53;
      *(_QWORD *)(v52 + 32) = v33;
      *(_QWORD *)(v52 + 40) = *a4;
LABEL_36:
      WdLogEvent5_WdError(v52);
      goto LABEL_65;
    }
LABEL_29:
    CurrentProcess = PsGetCurrentProcess(LowPart, v30);
    ProcessSessionId = PsGetProcessSessionId(CurrentProcess);
    v46 = v86;
    if ( ProcessSessionId != v86 )
    {
      Global = DXGGLOBAL::GetGlobal(v45, v44);
      v48 = DXGSESSIONMGR::ReferenceSessionCSRSSProcess(
              *((DXGSESSIONMGR **)Global + 74),
              v46,
              (struct _KPROCESS **)&Object);
      *a4 = v48;
      if ( v48 < 0 )
      {
LABEL_31:
        v52 = WdLogNewEntry5_WdError(v50, v49, v51);
        *(_QWORD *)(v52 + 24) = v46;
        goto LABEL_32;
      }
      CPROCESSATTACHHELPER::Attach(&ApcState, (PRKPROCESS)Object);
      ObfDereferenceObject(Object);
    }
    v54 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(v45, v44) + 74);
    if ( v54 )
    {
      v55 = PsGetCurrentProcessSessionId(v50, v49);
      SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v54, v55);
    }
    else
    {
      SessionDataForSpecifiedSession = 0LL;
    }
    v85 = SessionDataForSpecifiedSession;
    if ( !*((_BYTE *)SessionDataForSpecifiedSession + 18784) )
    {
      *a4 = -1071775725;
      goto LABEL_31;
    }
    memset(v103, 0, 0x48uLL);
    v57 = 200LL * *v82 + 80;
    v58 = (char *)operator new[](200LL * *v82 + 96, 0x4B677844u, PagedPool);
    v63 = v58;
    if ( !v58 )
    {
      v64 = WdLogNewEntry5_WdLowResource(v60, v59, v61, v62);
      *(_QWORD *)(v64 + 24) = 950LL;
      WdLogEvent5_WdLowResource(v64);
      *a4 = -1073741801;
      goto LABEL_65;
    }
    memset(v58, 0, v57);
    v92 = (ReferenceCounted *)v63;
    *(_QWORD *)v63 = &ReferenceCounted::`vftable';
    *((_DWORD *)v63 + 2) = 1;
    *(_QWORD *)v63 = &rc_buffer<DispBroker::AlpcRequest<8>>::`vftable';
    v97[0] = &v82;
    v97[1] = &v84;
    v65 = InitDisplayBrokerMessage_DispBroker::AlpcRequest_8___lambda_2792f1a5517d9286fa3e49da2fcc5db9___DxgkSampleDisplayState_(
            (_WORD *)v63 + 8,
            (__int64)v97,
            (unsigned __int16)v57 - 80);
    *a4 = v65;
    if ( v65 >= 0 )
    {
      v71 = DXGSESSIONDATA::CacheIddDisplayConfigRequest((__int64)v85, (__int64 *)&v92);
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v87);
      v95 = 72LL;
      v94.QuadPart = -50000000LL;
      *a4 = DxgkSendDisplayBrokerMessage(1179648LL, (struct _PORT_MESSAGE *)(v63 + 16), 0LL, v103, &v95, 0LL, &v94);
      DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)&v87);
      v73 = v83[0][22].LowPart;
      if ( (_DWORD)v73 != 1 || BYTE1(v83[0][308].LowPart) )
      {
        v78 = WdLogNewEntry5_WdWarning(v73, v72, v70);
        *(struct _LUID **)(v78 + 24) = v83[0];
        *(_QWORD *)(v78 + 32) = -1071775725LL;
        WdLogEvent5_WdWarning(v78);
        *a4 = -1071775725;
        goto LABEL_60;
      }
      v74 = *a4;
      if ( *a4 == -1073741772 )
      {
        v75 = WdLogNewEntry5_WdWarning(v73, v72, v70);
        *(_QWORD *)(v75 + 24) = *(unsigned int *)v85;
        WdLogEvent5_WdWarning(v75);
        *a4 = 0;
        goto LABEL_60;
      }
      if ( v74 == 192 )
      {
        *a4 = -1073741749;
        v76 = WdLogNewEntry5_WdWarning(v73, v72, v70);
        *(_QWORD *)(v76 + 24) = *(unsigned int *)v85;
        *(_QWORD *)(v76 + 32) = *a4;
        WdLogEvent5_WdWarning(v76);
        goto LABEL_60;
      }
      if ( v74 >= 0 )
      {
        MessageId = v103[1].MessageId;
        if ( (v103[1].MessageId & 0x80000000) == 0 )
        {
          DXGSESSIONDATA::SetDisplayConfigDone(v85, v71);
          MessageId = v103[1].MessageId;
        }
        *a4 = MessageId;
        goto LABEL_60;
      }
      v69 = WdLogNewEntry5_WdError(v73, v72, v70);
      *(_QWORD *)(v69 + 24) = *(unsigned int *)v85;
      *(_QWORD *)(v69 + 32) = *a4;
    }
    else
    {
      v69 = WdLogNewEntry5_WdError(v67, v66, v68);
      *(_QWORD *)(v69 + 24) = *a4;
    }
    WdLogEvent5_WdError(v69);
LABEL_60:
    auto_rc<rc_buffer<DispBroker::AlpcRequest<8>>>::reset(&v92, 0LL, v70);
    goto LABEL_65;
  }
  v20 = WdLogNewEntry5_WdWarning(0LL, v18, v19);
  *(_QWORD *)(v20 + 24) = v7;
  *(_QWORD *)(v20 + 32) = -1073741811LL;
  WdLogEvent5_WdWarning(v20);
  *a4 = -1073741811;
LABEL_67:
  DXGADAPTER_REFERENCE::Assign((DXGADAPTER **)v83, 0LL);
LABEL_68:
  if ( v100 )
    lambda_d81a481debf6296c527a71b94d2ae09c_::operator()(v99, v15, v16);
  if ( v102 )
    KeUnstackDetachProcess(&ApcState);
}
