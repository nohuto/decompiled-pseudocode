/*
 * XREFs of ?UpdateTouchpadDownleveling@MPCSixDofProcessor@@AEAAXPEAUInputInfo@@@Z @ 0x1800F1EA8
 * Callers:
 *     ?PostHitTestProcessing@MPCSixDofProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@@Z @ 0x1800F1820 (-PostHitTestProcessing@MPCSixDofProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@@.c)
 * Callees:
 *     ?GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ @ 0x18004541C (-GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ.c)
 *     ?DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAUInputInfo@@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1800454D0 (-DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAUInputInfo@@V-$com_ptr_t@UIMPCInputProviderBase.c)
 *     ?IsInjecting@MPCGestureHandlerManager@@QEAA_NV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1800457AC (-IsInjecting@MPCGestureHandlerManager@@QEAA_NV-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception.c)
 *     ?IsWorkspaceScrolling@MPCGestureHandlerManager@@QEAA_NV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1800458BC (-IsWorkspaceScrolling@MPCGestureHandlerManager@@QEAA_NV-$com_ptr_t@UIMPCInputProviderBase@@Uerr_.c)
 *     ?GetLastScrollVelocityAvg@MPCGestureHandlerManager@@QEAAMV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x180045A28 (-GetLastScrollVelocityAvg@MPCGestureHandlerManager@@QEAAMV-$com_ptr_t@UIMPCInputProviderBase@@Ue.c)
 *     ?GetInstance@MPCConstantManager@@SAPEAV1@XZ @ 0x1800480D0 (-GetInstance@MPCConstantManager@@SAPEAV1@XZ.c)
 *     ?EndGesture@MPCSixDofProcessor@@AEAAXXZ @ 0x1800F2F18 (-EndGesture@MPCSixDofProcessor@@AEAAXXZ.c)
 *     ??$GetConstant@M@MPCConstantManager@@QEAAMPEAUIMPCInputProviderBase@@PEBG@Z @ 0x1800F3C58 (--$GetConstant@M@MPCConstantManager@@QEAAMPEAUIMPCInputProviderBase@@PEBG@Z.c)
 *     ??$GetConstant@K@MPCConstantManager@@QEAAKPEAUIMPCInputProviderBase@@PEBG@Z @ 0x1800F3DD4 (--$GetConstant@K@MPCConstantManager@@QEAAKPEAUIMPCInputProviderBase@@PEBG@Z.c)
 *     ??$GetConstant@_N@MPCConstantManager@@QEAA_NPEAUIMPCInputProviderBase@@PEBG@Z @ 0x1800F41BC (--$GetConstant@_N@MPCConstantManager@@QEAA_NPEAUIMPCInputProviderBase@@PEBG@Z.c)
 *     ??0MPCButtonHoldHelper@@QEAA@M@Z @ 0x180102B34 (--0MPCButtonHoldHelper@@QEAA@M@Z.c)
 *     ?UpdateState@MPCButtonHoldHelper@@QEAAX_N_K@Z @ 0x180102BE4 (-UpdateState@MPCButtonHoldHelper@@QEAAX_N_K@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18012C18C (--2@YAPEAX_K@Z.c)
 *     sqrtf_0 @ 0x18012DB2F (sqrtf_0.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=10
void __fastcall MPCSixDofProcessor::UpdateTouchpadDownleveling(MPCSixDofProcessor *this, struct InputInfo *a2)
{
  float v2; // xmm0_4
  char v5; // r12
  unsigned __int64 v6; // rcx
  struct MPCGestureHandlerManager *Instance; // rcx
  bool v8; // dl
  char *v9; // r13
  __int64 v10; // rdx
  __int64 v11; // r8
  const char *v12; // r9
  __int64 v13; // rcx
  __int64 v14; // rax
  volatile signed __int32 *v15; // rbx
  volatile signed __int32 *v16; // rsi
  struct MPCGestureHandlerManager *v17; // rcx
  __int64 v18; // rax
  volatile signed __int32 *v19; // rbx
  char v20; // r15
  char *v21; // rsi
  MPCConstantManager *v22; // rcx
  struct MPCGestureHandlerManager *v23; // rcx
  MPCConstantManager *v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  const char *v28; // r9
  __int64 v29; // rax
  volatile signed __int32 *v30; // rbx
  char v31; // r15
  MPCConstantManager *v32; // rcx
  float v33; // xmm0_4
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  const char *v37; // r9
  MPCConstantManager *v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  const char *v42; // r9
  MPCConstantManager *v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  const char *v47; // r9
  MPCConstantManager *v48; // rax
  float v49; // xmm1_4
  struct MPCGestureHandlerManager *v50; // rcx
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  const char *v54; // r9
  MPCConstantManager *v55; // rax
  struct MPCGestureHandlerManager *v56; // rcx
  float v57; // xmm0_4
  __int64 v58; // rcx
  float v59; // xmm6_4
  __int64 v60; // rdx
  __int64 v61; // r8
  const char *v62; // r9
  MPCConstantManager *v63; // rax
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // r8
  const char *v67; // r9
  MPCConstantManager *v68; // rax
  struct MPCGestureHandlerManager *v69; // rcx
  struct MPCGestureHandlerManager *v70; // rcx
  bool IsWorkspaceScrolling; // bl
  struct MPCGestureHandlerManager *v72; // rcx
  double LastScrollVelocityAvg; // xmm0_8
  __int64 v74; // rdx
  __int64 v75; // rcx
  __int64 v76; // r8
  const char *v77; // r9
  MPCConstantManager *v78; // rax
  MPCButtonHoldHelper *v79; // rax
  MPCButtonHoldHelper *v80; // rbx
  void (__fastcall ***v81)(_QWORD, __int64); // rcx
  MPCGestureHandlerManager *v82; // rcx
  const char *v83; // r9
  char *v84; // [rsp+28h] [rbp-69h] BYREF
  unsigned __int64 v85; // [rsp+30h] [rbp-61h] BYREF
  char *v86; // [rsp+38h] [rbp-59h] BYREF
  char *v87; // [rsp+40h] [rbp-51h] BYREF
  unsigned __int64 v88; // [rsp+48h] [rbp-49h] BYREF
  unsigned __int64 v89; // [rsp+50h] [rbp-41h] BYREF
  char *v90; // [rsp+58h] [rbp-39h] BYREF
  __int64 v91; // [rsp+60h] [rbp-31h]
  volatile signed __int32 *v92; // [rsp+68h] [rbp-29h]
  __int64 v93; // [rsp+70h] [rbp-21h]
  unsigned __int64 *v94; // [rsp+78h] [rbp-19h]
  char v95; // [rsp+80h] [rbp-11h] BYREF
  volatile signed __int32 *v96; // [rsp+F8h] [rbp+67h]
  int v97; // [rsp+100h] [rbp+6Fh]
  MPCButtonHoldHelper *v98; // [rsp+100h] [rbp+6Fh]
  unsigned __int64 v99; // [rsp+108h] [rbp+77h] BYREF
  unsigned __int64 *v100; // [rsp+110h] [rbp+7Fh] BYREF

  v93 = -2LL;
  v5 = 0;
  LOBYTE(v96) = 0;
  v100 = &v99;
  v6 = ((unsigned __int64)this + 24) & -(__int64)(this != 0LL);
  v99 = v6;
  if ( v6 )
    (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v6 + 8LL))(v6);
  Instance = MPCGestureHandlerManager::GetInstance();
  if ( !MPCGestureHandlerManager::IsWorkspaceScrolling((__int64)Instance, &v99) || (v8 = 0, *((_BYTE *)this + 3762)) )
    v8 = 1;
  v9 = (char *)this + 4120;
  MPCButtonHoldHelper::UpdateState(*((MPCButtonHoldHelper **)this + 515), v8, *((_QWORD *)a2 + 2));
  v13 = *((unsigned int *)a2 + 151);
  *((_DWORD *)a2 + 278) = v13;
  *((_DWORD *)a2 + 279) = *((_DWORD *)a2 + 152);
  *((_DWORD *)a2 + 274) = 0;
  v14 = *((_QWORD *)this + 519);
  v15 = *(volatile signed __int32 **)(v14 + 24);
  if ( v15 )
  {
    _InterlockedIncrement(v15 + 2);
    v15 = *(volatile signed __int32 **)(v14 + 24);
  }
  v91 = *(_QWORD *)(v14 + 16);
  v92 = v15;
  if ( !*(_BYTE *)(v91 + 8) )
    goto LABEL_13;
  v94 = (unsigned __int64 *)&v100;
  v100 = (unsigned __int64 *)((char *)this + 24);
  v16 = v15;
  if ( this != (MPCSixDofProcessor *)-24LL )
    (*(void (__fastcall **)(char *))(*((_QWORD *)this + 3) + 8LL))((char *)this + 24);
  v17 = MPCGestureHandlerManager::GetInstance();
  if ( MPCGestureHandlerManager::IsWorkspaceScrolling((__int64)v17, (unsigned __int64 *)&v100) )
LABEL_13:
    v16 = v15;
  else
    v5 = 1;
  v97 = 0;
  if ( v16 )
  {
    if ( _InterlockedExchangeAdd(v15 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v92)(v92);
      if ( _InterlockedExchangeAdd(v92 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v92 + 8LL))(v92);
    }
  }
  if ( v5 )
  {
    v18 = *((_QWORD *)this + 519);
    v19 = *(volatile signed __int32 **)(v18 + 24);
    if ( v19 )
    {
      _InterlockedIncrement(v19 + 2);
      v19 = *(volatile signed __int32 **)(v18 + 24);
    }
    v20 = *(_BYTE *)(*(_QWORD *)(v18 + 16) + 10LL);
    if ( v19 )
    {
      if ( _InterlockedExchangeAdd(v19 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v19)(v19);
        if ( _InterlockedExchangeAdd(v19 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 8LL))(v19);
      }
    }
    v21 = (char *)this + 24;
    v22 = MPCConstantManager::GetInstance(v13, v10, v11, v12);
    if ( (unsigned __int8)MPCConstantManager::GetConstant<bool>(v22)
      && (v20 || *(_BYTE *)(*((_QWORD *)this + 519) + 13LL)) )
    {
      v84 = (char *)this + 24;
      if ( this != (MPCSixDofProcessor *)-24LL )
        (*(void (__fastcall **)(char *))(*(_QWORD *)v21 + 8LL))((char *)this + 24);
      v23 = MPCGestureHandlerManager::GetInstance();
      *((_DWORD *)a2 + 274) = MPCGestureHandlerManager::IsInjecting((__int64)v23, &v84) ? 7 : 1;
      goto LABEL_31;
    }
    return;
  }
  v21 = (char *)this + 24;
  v24 = MPCConstantManager::GetInstance(v13, v10, v11, v12);
  if ( !(unsigned __int8)MPCConstantManager::GetConstant<bool>(v24)
    || !*((_BYTE *)this + 3772)
    || *((_DWORD *)this + 942) == 2 )
  {
    v30 = v96;
LABEL_40:
    v31 = 0;
    goto LABEL_41;
  }
  v29 = *((_QWORD *)this + 519);
  v30 = *(volatile signed __int32 **)(v29 + 24);
  if ( v30 )
  {
    _InterlockedIncrement(v30 + 2);
    v30 = *(volatile signed __int32 **)(v29 + 24);
  }
  v97 = 2;
  if ( *(_BYTE *)(*(_QWORD *)(v29 + 16) + 12LL) )
    goto LABEL_40;
  v31 = 1;
LABEL_41:
  if ( v97 )
  {
    if ( v30 )
    {
      if ( _InterlockedExchangeAdd(v30 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v30)(v30);
        if ( _InterlockedExchangeAdd(v30 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v30 + 8LL))(v30);
      }
    }
  }
  v32 = MPCConstantManager::GetInstance(v26, v25, v27, v28);
  if ( v31 )
  {
    MPCConstantManager::GetConstant<float>(v32);
    v33 = v2 * (float)(*((float *)this + 1056) + *((float *)this + 1071));
    *((float *)a2 + 275) = v33;
    v38 = MPCConstantManager::GetInstance(v35, v34, v36, v37);
    MPCConstantManager::GetConstant<float>(v38);
    *((float *)a2 + 276) = v33 * (float)(*((float *)this + 1072) + *((float *)this + 1057));
    v43 = MPCConstantManager::GetInstance(v40, v39, v41, v42);
    if ( (unsigned __int8)MPCConstantManager::GetConstant<bool>(v43) )
      *((float *)a2 + 276) = *((float *)a2 + 276) * -1.0;
    sqrtf_0(
      (float)((float)(*((float *)this + 1071) + *((float *)this + 1056))
            * (float)(*((float *)this + 1071) + *((float *)this + 1056)))
    + (float)((float)(*((float *)this + 1072) + *((float *)this + 1057))
            * (float)(*((float *)this + 1072) + *((float *)this + 1057))));
    v48 = MPCConstantManager::GetInstance(v45, v44, v46, v47);
    MPCConstantManager::GetConstant<float>(v48);
    v49 = *((float *)this + 1057) + *((float *)this + 1072);
    *((float *)this + 1071) = *((float *)this + 1071) + *((float *)this + 1056);
    *((float *)this + 1072) = v49;
    v85 = (unsigned __int64)this + 24;
    if ( this != (MPCSixDofProcessor *)-24LL )
      (*(void (__fastcall **)(char *))(*(_QWORD *)v21 + 8LL))((char *)this + 24);
    v50 = MPCGestureHandlerManager::GetInstance();
    if ( MPCGestureHandlerManager::IsWorkspaceScrolling((__int64)v50, &v85) )
    {
      *(_QWORD *)((char *)a2 + 1100) = 0LL;
      *((_BYTE *)this + 3762) = 1;
      LOBYTE(v96) = 1;
    }
    *((_DWORD *)a2 + 274) = 5;
    *((_DWORD *)this + 941) = 0;
    goto LABEL_81;
  }
  if ( !(unsigned __int8)MPCConstantManager::GetConstant<bool>(v32) )
    goto LABEL_67;
  v55 = MPCConstantManager::GetInstance(v52, v51, v53, v54);
  if ( !(unsigned __int8)MPCConstantManager::GetConstant<bool>(v55)
    || *((_BYTE *)this + 3762)
    || !*((_BYTE *)this + 3772)
    || !*(_BYTE *)(*(_QWORD *)v9 + 8LL)
    || *(_BYTE *)(*(_QWORD *)v9 + 9LL) )
  {
    goto LABEL_67;
  }
  v86 = (char *)this + 24;
  if ( this != (MPCSixDofProcessor *)-24LL )
    (*(void (__fastcall **)(char *))(*(_QWORD *)v21 + 8LL))((char *)this + 24);
  v56 = MPCGestureHandlerManager::GetInstance();
  if ( MPCGestureHandlerManager::IsInjecting((__int64)v56, &v86) )
  {
LABEL_67:
    v87 = (char *)this + 24;
    if ( this != (MPCSixDofProcessor *)-24LL )
      (*(void (__fastcall **)(char *))(*(_QWORD *)v21 + 8LL))((char *)this + 24);
    v69 = MPCGestureHandlerManager::GetInstance();
    if ( !MPCGestureHandlerManager::IsInjecting((__int64)v69, &v87) && !*((_BYTE *)this + 3773) )
      return;
    v88 = (unsigned __int64)this + 24;
    if ( this != (MPCSixDofProcessor *)-24LL )
      (*(void (__fastcall **)(char *))(*(_QWORD *)v21 + 8LL))((char *)this + 24);
    v70 = MPCGestureHandlerManager::GetInstance();
    IsWorkspaceScrolling = MPCGestureHandlerManager::IsWorkspaceScrolling((__int64)v70, &v88);
    MPCSixDofProcessor::EndGesture(this);
    if ( !IsWorkspaceScrolling )
      return;
    v89 = (unsigned __int64)this + 24;
    if ( this != (MPCSixDofProcessor *)-24LL )
      (*(void (__fastcall **)(char *))(*(_QWORD *)v21 + 8LL))((char *)this + 24);
    v72 = MPCGestureHandlerManager::GetInstance();
    LastScrollVelocityAvg = MPCGestureHandlerManager::GetLastScrollVelocityAvg((__int64)v72, &v89);
    v78 = MPCConstantManager::GetInstance(v75, v74, v76, v77);
    MPCConstantManager::GetConstant<float>(v78);
    v98 = (MPCButtonHoldHelper *)operator new(0x28uLL);
    v79 = MPCButtonHoldHelper::MPCButtonHoldHelper(
            v98,
            *(float *)&LastScrollVelocityAvg
          * (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)&LastScrollVelocityAvg) & _xmm));
    v80 = v79;
    if ( v9 != &v95 )
    {
      v80 = 0LL;
      v81 = *(void (__fastcall ****)(_QWORD, __int64))v9;
      *(_QWORD *)v9 = v79;
      if ( !v81 )
        return;
      (**v81)(v81, 1LL);
      v79 = 0LL;
    }
    if ( !v79 )
      return;
    (**(void (__fastcall ***)(MPCButtonHoldHelper *, __int64))v80)(v80, 1LL);
LABEL_81:
    if ( !(_BYTE)v96 )
      return;
    goto LABEL_82;
  }
  ++*((_DWORD *)this + 941);
  v57 = sqrtf_0(
          (float)((float)(*((float *)this + 1048) - *((float *)this + 1054))
                * (float)(*((float *)this + 1048) - *((float *)this + 1054)))
        + (float)((float)(*((float *)this + 1049) - *((float *)this + 1055))
                * (float)(*((float *)this + 1049) - *((float *)this + 1055))));
  v58 = (unsigned int)(int)v57;
  v59 = (float)(int)v58;
  v63 = MPCConstantManager::GetInstance(v58, v60, v61, v62);
  MPCConstantManager::GetConstant<float>(v63);
  if ( v59 > v57 )
    *((_DWORD *)this + 941) = 0;
  v68 = MPCConstantManager::GetInstance(v65, v64, v66, v67);
  if ( *((_DWORD *)this + 941) >= (unsigned int)MPCConstantManager::GetConstant<unsigned long>(v68) )
  {
    *((_DWORD *)a2 + 274) = 1;
LABEL_31:
    *((_BYTE *)this + 3762) = 1;
LABEL_82:
    *((_OWORD *)a2 + 70) = *(_OWORD *)((char *)a2 + 612);
    *((_DWORD *)a2 + 284) = *((_DWORD *)a2 + 158);
    v90 = v21;
    if ( v21 )
      (*(void (__fastcall **)(char *))(*(_QWORD *)v21 + 8LL))(v21);
    v82 = MPCGestureHandlerManager::GetInstance();
    MPCGestureHandlerManager::DownLevelTo2D(v82, (__int64)a2, (unsigned __int64 *)&v90, v83);
    *((_BYTE *)this + 3773) = 1;
  }
}
