/*
 * XREFs of ?HitTest@DragNDropProcessor@@AEAAJUtagPOINT@@PEAUHMONITOR__@@U_GUID@@PEAU2@PEA_KPEAPEAVBamoDragSourceClientProxy@@PEAPEAVBamoDragManagerClientProxy@@PEAPEAVInputSite@@7@Z @ 0x180024AD0
 * Callers:
 *     ?StartGestureRecognition@DragNDropProcessor@@AEAAJUtagPOINT@@PEAUHMONITOR__@@K@Z @ 0x1800235F4 (-StartGestureRecognition@DragNDropProcessor@@AEAAJUtagPOINT@@PEAUHMONITOR__@@K@Z.c)
 *     ?OnInput@DragNDropProcessor@@UEAAJPEAUInputInfo@@PEAUInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x180023BA0 (-OnInput@DragNDropProcessor@@UEAAJPEAUInputInfo@@PEAUInputContext@@PEAUContextualProcessorRespon.c)
 *     ?StartDrag@DragNDropProcessor@@QEAAJK_KPEAVBamoDragManagerClientProxy@@@Z @ 0x180024520 (-StartDrag@DragNDropProcessor@@QEAAJK_KPEAVBamoDragManagerClientProxy@@@Z.c)
 *     ?CancelDrag@DragNDropProcessor@@QEAAJKPEAVBamoDragManagerClientProxy@@@Z @ 0x180024880 (-CancelDrag@DragNDropProcessor@@QEAAJKPEAVBamoDragManagerClientProxy@@@Z.c)
 * Callees:
 *     ?_Tidy@?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@AEAAXXZ @ 0x18001E104 (-_Tidy@-$vector@V-$ComPtr@VInputSite@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VInputSite@@@WRL@Mi.c)
 *     ?GetPositionRelativeToSite@DragNDropProcessor@@QEAA?AUtagPOINT@@PEAVInputSite@@U2@@Z @ 0x1800254EC (-GetPositionRelativeToSite@DragNDropProcessor@@QEAA-AUtagPOINT@@PEAVInputSite@@U2@@Z.c)
 *     ??$GetAttachedObject@UIDragSourceClientProxy@@VBamoDragSourceClientProxy@@@InputSite@@QEAA?AV?$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@XZ @ 0x180026298 (--$GetAttachedObject@UIDragSourceClientProxy@@VBamoDragSourceClientProxy@@@InputSite@@QEAA-AV-$C.c)
 *     ??$GetAttachedObject@UIDragManagerClientProxy@@VBamoDragManagerClientProxy@@@InputSite@@QEAA?AV?$ComPtr@VBamoDragManagerClientProxy@@@WRL@Microsoft@@XZ @ 0x180026370 (--$GetAttachedObject@UIDragManagerClientProxy@@VBamoDragManagerClientProxy@@@InputSite@@QEAA-AV-.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall DragNDropProcessor::HitTest(
        DragNDropProcessor *this,
        struct tagPOINT a2,
        HMONITOR a3,
        struct _GUID *a4,
        struct tagPOINT *a5,
        unsigned __int64 *a6,
        struct BamoDragSourceClientProxy **a7,
        struct BamoDragManagerClientProxy **a8,
        struct InputSite **a9,
        struct InputSite **a10)
{
  struct BamoDragSourceClientProxy **v10; // r14
  struct tagPOINT *v11; // rdi
  struct tagPOINT *v12; // r12
  __int64 v13; // r15
  __int64 v14; // r13
  struct tagPOINT v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rsi
  __int64 v18; // r14
  struct BamoDragSourceClientProxy *v19; // rsi
  _QWORD *v20; // r14
  struct InputSite *v21; // rcx
  __int64 v22; // rcx
  struct BamoDragSourceClientProxy *v23; // rsi
  _QWORD *v24; // r14
  _QWORD *v25; // rax
  struct InputSite *v26; // rcx
  struct BamoDragManagerClientProxy *v27; // rsi
  _QWORD *v28; // rax
  struct InputSite *v29; // rcx
  struct tagPOINT *v30; // r13
  struct _GUID *v31; // r15
  struct tagPOINT v32; // rax
  struct BamoDragSourceClientProxy **v33; // rcx
  __int64 v34; // rsi
  __int64 v35; // r14
  _QWORD *v36; // rax
  __int64 v37; // rax
  DragNDropProcessor *v38; // rcx
  struct BamoDragSourceClientProxy **v39; // rcx
  struct BamoDragSourceClientProxy **v41; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v42; // [rsp+40h] [rbp-C8h] BYREF
  struct BamoDragSourceClientProxy *v43; // [rsp+48h] [rbp-C0h] BYREF
  struct InputSite **v44; // [rsp+50h] [rbp-B8h]
  struct BamoDragSourceClientProxy *v45; // [rsp+58h] [rbp-B0h] BYREF
  struct BamoDragManagerClientProxy *v46; // [rsp+60h] [rbp-A8h] BYREF
  DragNDropProcessor *v47; // [rsp+68h] [rbp-A0h]
  struct _GUID *v48; // [rsp+70h] [rbp-98h] BYREF
  struct BamoDragManagerClientProxy **v49; // [rsp+78h] [rbp-90h]
  struct InputSite **v50; // [rsp+80h] [rbp-88h]
  struct tagPOINT *v51; // [rsp+88h] [rbp-80h]
  __int64 v52; // [rsp+90h] [rbp-78h]
  GUID v53; // [rsp+98h] [rbp-70h]
  char v54[8]; // [rsp+A8h] [rbp-60h] BYREF
  struct tagPOINT *v55; // [rsp+B0h] [rbp-58h] BYREF
  struct tagPOINT *v56; // [rsp+B8h] [rbp-50h]
  __int64 v57; // [rsp+C8h] [rbp-40h]

  v52 = -2LL;
  v48 = a4;
  v51 = a5;
  v47 = (DragNDropProcessor *)a6;
  v10 = a7;
  v41 = a7;
  v49 = a8;
  v44 = a9;
  v50 = a10;
  (*(void (__fastcall **)(_QWORD, char *, struct tagPOINT, HMONITOR, int))(**((_QWORD **)this + 3) + 32LL))(
    *((_QWORD *)this + 3),
    v54,
    a2,
    a3,
    2);
  if ( !a7 || !a8 )
    goto LABEL_52;
  v11 = v55;
  v12 = v56;
  if ( v55 != v56 )
  {
    v53 = DirectX::g_XMZero;
    v13 = *(_QWORD *)DirectX::g_XMZero.Data4;
    v14 = *(_QWORD *)&DirectX::g_XMZero.Data1;
    while ( 1 )
    {
      if ( v14 != *(_QWORD *)&DirectX::g_XMZero.Data1 )
        goto LABEL_79;
      if ( v13 == *(_QWORD *)DirectX::g_XMZero.Data4 )
      {
        v15 = *v11;
        v16 = 0LL;
        v42 = 0LL;
        v17 = *(_QWORD *)(*(_QWORD *)&v15 + 392LL);
        v18 = *(_QWORD *)(*(_QWORD *)&v15 + 400LL);
        if ( v17 != v18 )
        {
          while ( 1 )
          {
            if ( v16 )
            {
              v42 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
            }
            if ( (***(int (__fastcall ****)(_QWORD, GUID *, __int64 *))(v17 + 8))(
                   *(_QWORD *)(v17 + 8),
                   &GUID_e718b12a_faef_306d_9346_9fccb7899886,
                   &v42) >= 0 )
              break;
            v17 += 16LL;
            if ( v17 == v18 )
              break;
            v16 = v42;
          }
          v16 = v42;
        }
        if ( v16 )
        {
          v53 = *(GUID *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v16 + 24LL))(v16);
          v13 = *(_QWORD *)v53.Data4;
          v14 = *(_QWORD *)&v53.Data1;
        }
        else
        {
          ((void (__fastcall *)(_QWORD, _QWORD))InputSite::GetAttachedObject<IDragSourceClientProxy,BamoDragSourceClientProxy>)(
            *v11,
            &v43);
          v19 = v43;
          if ( v43 )
          {
            v20 = (_QWORD *)((char *)v43 + 8);
            if ( !(*(unsigned int (__fastcall **)(_QWORD *))(*((_QWORD *)v43 + 1) + 40LL))((_QWORD *)v43 + 1)
              || (*(unsigned int (__fastcall **)(__int64))(*v20 + 40LL))((__int64)v19 + 8) == 2 )
            {
              (**(void (__fastcall ***)(struct BamoDragSourceClientProxy *))v19)(v19);
              *v41 = v19;
              v53 = *(GUID *)(*(__int64 (__fastcall **)(__int64))(*v20 + 24LL))((__int64)v19 + 8);
              v21 = (struct InputSite *)*v11;
              if ( *v11 )
              {
                (*(void (__fastcall **)(struct InputSite *))(*(_QWORD *)v21 + 8LL))(v21);
                v21 = (struct InputSite *)*v11;
              }
              *v44 = v21;
              v13 = *(_QWORD *)v53.Data4;
              v14 = *(_QWORD *)&v53.Data1;
            }
          }
          if ( v19 )
          {
            v43 = 0LL;
            (*(void (__fastcall **)(struct BamoDragSourceClientProxy *))(*(_QWORD *)v19 + 8LL))(v19);
          }
        }
        v22 = v42;
        if ( v42 )
        {
          v42 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
        }
        v10 = v41;
      }
      if ( v14 != *(_QWORD *)&DirectX::g_XMZero.Data1 || v13 != *(_QWORD *)DirectX::g_XMZero.Data4 )
      {
LABEL_79:
        if ( *v10 )
          goto LABEL_42;
        ((void (__fastcall *)(_QWORD, _QWORD))InputSite::GetAttachedObject<IDragSourceClientProxy,BamoDragSourceClientProxy>)(
          *v11,
          &v45);
        v23 = v45;
        if ( v45 )
        {
          v24 = (_QWORD *)((char *)v45 + 8);
          if ( ((*(unsigned int (__fastcall **)(_QWORD *))(*((_QWORD *)v45 + 1) + 40LL))((_QWORD *)v45 + 1) == 1
             || (*(unsigned int (__fastcall **)(__int64))(*v24 + 40LL))((__int64)v23 + 8) == 2)
            && (v25 = (_QWORD *)(*(__int64 (__fastcall **)(__int64))(*v24 + 24LL))((__int64)v23 + 8), *v25 == v14)
            && v25[1] == v13 )
          {
            (**(void (__fastcall ***)(struct BamoDragSourceClientProxy *))v23)(v23);
            v10 = v41;
            *v41 = v23;
            v26 = (struct InputSite *)*v11;
            if ( *v11 )
            {
              (*(void (__fastcall **)(struct InputSite *))(*(_QWORD *)v26 + 8LL))(v26);
              v26 = (struct InputSite *)*v11;
            }
            *v44 = v26;
          }
          else
          {
            v10 = v41;
          }
        }
        if ( v23 )
        {
          v45 = 0LL;
          (*(void (__fastcall **)(struct BamoDragSourceClientProxy *))(*(_QWORD *)v23 + 8LL))(v23);
        }
        if ( *v10 )
        {
LABEL_42:
          ((void (__fastcall *)(_QWORD, _QWORD))InputSite::GetAttachedObject<IDragManagerClientProxy,BamoDragManagerClientProxy>)(
            *v11,
            &v46);
          v27 = v46;
          if ( v46 )
          {
            v28 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD *))(*((_QWORD *)v46 + 1) + 72LL))((_QWORD *)v46 + 1);
            if ( *v28 == v14 && v28[1] == v13 )
            {
              (**(void (__fastcall ***)(struct BamoDragManagerClientProxy *))v27)(v27);
              *v49 = v27;
              v29 = (struct InputSite *)*v11;
              if ( *v11 )
              {
                (*(void (__fastcall **)(struct InputSite *))(*(_QWORD *)v29 + 8LL))(v29);
                v29 = (struct InputSite *)*v11;
              }
              *v50 = v29;
              (*(void (__fastcall **)(struct BamoDragManagerClientProxy *))(*(_QWORD *)v27 + 8LL))(v27);
LABEL_52:
              v11 = v55;
              v12 = v56;
              break;
            }
          }
          if ( v27 )
          {
            v46 = 0LL;
            (*(void (__fastcall **)(struct BamoDragManagerClientProxy *))(*(_QWORD *)v27 + 8LL))(v27);
          }
        }
      }
      if ( ++v11 == v12 )
        goto LABEL_52;
    }
  }
  v30 = v51;
  if ( !v51 && !v47 || v11 == v12 )
    goto LABEL_74;
  v31 = v48;
  while ( 1 )
  {
    v32 = *v11;
    v33 = 0LL;
    v41 = 0LL;
    v34 = *(_QWORD *)(*(_QWORD *)&v32 + 392LL);
    v35 = *(_QWORD *)(*(_QWORD *)&v32 + 400LL);
    if ( v34 != v35 )
    {
      while ( 1 )
      {
        if ( v33 )
        {
          v41 = 0LL;
          (*((void (__fastcall **)(struct BamoDragSourceClientProxy **))*v33 + 2))(v33);
        }
        if ( (***(int (__fastcall ****)(_QWORD, GUID *, struct BamoDragSourceClientProxy ***))(v34 + 8))(
               *(_QWORD *)(v34 + 8),
               &GUID_2997278b_3edd_8da0_6daf_809840cbb7ae,
               &v41) >= 0 )
          break;
        v34 += 16LL;
        if ( v34 == v35 )
          break;
        v33 = v41;
      }
      v33 = v41;
    }
    if ( !v33 )
      goto LABEL_68;
    v36 = (_QWORD *)(*((__int64 (__fastcall **)(struct BamoDragSourceClientProxy **))*v33 + 4))(v33);
    if ( *v36 == *(_QWORD *)&v31->Data1 && v36[1] == *(_QWORD *)v31->Data4 )
      break;
    v33 = v41;
LABEL_68:
    if ( v33 )
    {
      v41 = 0LL;
      (*((void (__fastcall **)(struct BamoDragSourceClientProxy **))*v33 + 2))(v33);
    }
    if ( ++v11 == v12 )
      goto LABEL_74;
  }
  v37 = (*((__int64 (__fastcall **)(struct BamoDragSourceClientProxy **))*v41 + 3))(v41);
  v38 = v47;
  *(_QWORD *)v47 = v37;
  *v30 = **(struct tagPOINT **)&DragNDropProcessor::GetPositionRelativeToSite(v38, (struct InputSite *)&v48, *v11);
  v39 = v41;
  if ( v41 )
  {
    v41 = 0LL;
    (*((void (__fastcall **)(struct BamoDragSourceClientProxy **))*v39 + 2))(v39);
  }
LABEL_74:
  if ( (unsigned __int64)(v57 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    NtCloseCompositionInputSink(v57);
  std::vector<Microsoft::WRL::ComPtr<InputSite>>::_Tidy((__int64)&v55);
  return 0LL;
}
