/*
 * XREFs of ?HitTest@DragNDropProcessor@@AEAAJUtagPOINT@@PEAUHMONITOR__@@U_GUID@@PEAU2@PEA_KPEAPEAVBamoDragSourceClientProxy@@PEAPEAVBamoDragManagerClientProxy@@PEAPEAVInputSite@@7@Z @ 0x18006BC50
 * Callers:
 *     ?CancelDrag@DragNDropProcessor@@QEAAJKPEAVBamoDragManagerClientProxy@@@Z @ 0x18006AC0C (-CancelDrag@DragNDropProcessor@@QEAAJKPEAVBamoDragManagerClientProxy@@@Z.c)
 *     ?OnInput@DragNDropProcessor@@UEAAJPEAUInputInfo@@PEAUInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x18006C320 (-OnInput@DragNDropProcessor@@UEAAJPEAUInputInfo@@PEAUInputContext@@PEAUContextualProcessorRespon.c)
 *     ?StartDrag@DragNDropProcessor@@QEAAJK_KPEAVBamoDragManagerClientProxy@@@Z @ 0x18006CF2C (-StartDrag@DragNDropProcessor@@QEAAJK_KPEAVBamoDragManagerClientProxy@@@Z.c)
 *     ?StartGestureRecognition@DragNDropProcessor@@AEAAJUtagPOINT@@PEAUHMONITOR__@@K@Z @ 0x18006D268 (-StartGestureRecognition@DragNDropProcessor@@AEAAJUtagPOINT@@PEAUHMONITOR__@@K@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180002344 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002678 (-InternalRelease@-$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL.c)
 *     ?InternalAddRef@?$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@IEBAXXZ @ 0x180002978 (-InternalAddRef@-$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?_Tidy@?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@AEAAXXZ @ 0x180005CF0 (-_Tidy@-$vector@V-$ComPtr@VInputSite@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VInputSite@@@WRL@Mi.c)
 *     __security_check_cookie @ 0x18002C580 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ??$As@UIDragAreaClientProxy@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIDragAreaClientProxy@@@WRL@Microsoft@@@Details@12@@Z @ 0x180066934 (--$As@UIDragAreaClientProxy@@@-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UI.c)
 *     ??$As@UIDropTargetClientProxy@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIDropTargetClientProxy@@@WRL@Microsoft@@@Details@12@@Z @ 0x180066A24 (--$As@UIDropTargetClientProxy@@@-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@.c)
 *     ??$GetAttachedObject@UIDragManagerClientProxy@@VBamoDragManagerClientProxy@@@InputSite@@QEAA?AV?$ComPtr@VBamoDragManagerClientProxy@@@WRL@Microsoft@@XZ @ 0x18006941C (--$GetAttachedObject@UIDragManagerClientProxy@@VBamoDragManagerClientProxy@@@InputSite@@QEAA-AV-.c)
 *     ??$GetAttachedObject@UIDragSourceClientProxy@@VBamoDragSourceClientProxy@@@InputSite@@QEAA?AV?$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@XZ @ 0x1800694AC (--$GetAttachedObject@UIDragSourceClientProxy@@VBamoDragSourceClientProxy@@@InputSite@@QEAA-AV-$C.c)
 *     ?GetPositionRelativeToSite@DragNDropProcessor@@QEAA?AUtagPOINT@@PEAVInputSite@@U2@@Z @ 0x18006BB24 (-GetPositionRelativeToSite@DragNDropProcessor@@QEAA-AUtagPOINT@@PEAVInputSite@@U2@@Z.c)
 *     ?InternalRelease@?$ComPtr@VBamoCustomCursorControllerClientProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x18006C1EC (-InternalRelease@-$ComPtr@VBamoCustomCursorControllerClientProxy@@@WRL@Microsoft@@IEAAKXZ.c)
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
  struct BamoDragSourceClientProxy **v11; // rbx
  __int64 *v12; // rsi
  __int64 *v13; // r15
  __int64 v14; // r12
  __int64 v15; // r13
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rbx
  __int64 v20; // r14
  struct BamoDragSourceClientProxy *v21; // rbx
  __int64 (__fastcall ***v22)(_QWORD); // r14
  __int64 v23; // rax
  struct BamoDragSourceClientProxy *v24; // rbx
  __int64 (__fastcall ***v25)(_QWORD); // r14
  _QWORD *v26; // rax
  __int64 v27; // rcx
  struct BamoDragManagerClientProxy *v28; // rbx
  _QWORD *v29; // rax
  __int64 v30; // rcx
  struct tagPOINT *v31; // r12
  unsigned __int64 *v32; // r13
  __int64 v33; // rax
  struct BamoDragSourceClientProxy **v34; // rcx
  __int64 v35; // rbx
  __int64 v36; // r14
  _QWORD *v37; // rax
  __int64 v38; // rcx
  DragNDropProcessor *v39; // rcx
  struct BamoDragSourceClientProxy **v41; // [rsp+38h] [rbp-D0h] BYREF
  struct BamoDragManagerClientProxy *v42; // [rsp+40h] [rbp-C8h] BYREF
  __int64 (__fastcall ***v43)(_QWORD); // [rsp+48h] [rbp-C0h] BYREF
  __int64 v44; // [rsp+50h] [rbp-B8h] BYREF
  __int64 (__fastcall ***v45)(_QWORD); // [rsp+58h] [rbp-B0h] BYREF
  struct InputSite **v46; // [rsp+60h] [rbp-A8h]
  unsigned __int64 *v47; // [rsp+68h] [rbp-A0h]
  struct _GUID *v48; // [rsp+70h] [rbp-98h] BYREF
  struct BamoDragManagerClientProxy **v49; // [rsp+78h] [rbp-90h]
  struct InputSite **v50; // [rsp+80h] [rbp-88h]
  struct tagPOINT *v51; // [rsp+88h] [rbp-80h]
  __int64 v52; // [rsp+90h] [rbp-78h]
  GUID v53; // [rsp+98h] [rbp-70h]
  char v54[8]; // [rsp+A8h] [rbp-60h] BYREF
  __int64 *v55; // [rsp+B0h] [rbp-58h] BYREF
  __int64 *v56; // [rsp+B8h] [rbp-50h]
  __int64 v57; // [rsp+C8h] [rbp-40h]

  v52 = -2LL;
  v48 = a4;
  v51 = a5;
  v47 = a6;
  v11 = a7;
  v41 = a7;
  v49 = a8;
  v46 = a9;
  v50 = a10;
  (*(void (__fastcall **)(_QWORD, char *, struct tagPOINT, HMONITOR, int))(**((_QWORD **)this + 3) + 32LL))(
    *((_QWORD *)this + 3),
    v54,
    a2,
    a3,
    2);
  if ( a7 && a8 )
  {
    v12 = v55;
    v13 = v56;
    if ( v55 != v56 )
    {
      v53 = GUID_NULL;
      v14 = *(_QWORD *)GUID_NULL.Data4;
      v15 = *(_QWORD *)&GUID_NULL.Data1;
      while ( 1 )
      {
        v16 = v15 - *(_QWORD *)&GUID_NULL.Data1;
        if ( v15 == *(_QWORD *)&GUID_NULL.Data1 )
          v16 = v14 - *(_QWORD *)GUID_NULL.Data4;
        if ( !v16 )
        {
          v17 = *v12;
          v18 = 0LL;
          v44 = 0LL;
          v19 = *(_QWORD *)(v17 + 392);
          v20 = *(_QWORD *)(v17 + 400);
          if ( v19 != v20 )
          {
            do
            {
              if ( (int)Microsoft::WRL::ComPtr<IUnknown>::As<IDragAreaClientProxy>(
                          (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(v19 + 8),
                          &v44) >= 0 )
                break;
              v19 += 16LL;
            }
            while ( v19 != v20 );
            v18 = v44;
          }
          if ( v18 )
          {
            v53 = *(GUID *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v18 + 24LL))(v18);
            v14 = *(_QWORD *)v53.Data4;
            v15 = *(_QWORD *)&v53.Data1;
          }
          else
          {
            InputSite::GetAttachedObject<IDragSourceClientProxy,BamoDragSourceClientProxy>(*v12, (__int64 *)&v43);
            v21 = (struct BamoDragSourceClientProxy *)v43;
            if ( v43 )
            {
              v22 = v43 + 1;
              if ( !(unsigned int)v43[1][5](v43 + 1)
                || (unsigned int)((__int64 (__fastcall **)(char *))*v22)[5]((char *)v21 + 8) == 2 )
              {
                Microsoft::WRL::ComPtr<BamoDragSourceClientProxy>::InternalAddRef(&v43);
                *v41 = v21;
                v53 = *(GUID *)((__int64 (__fastcall **)(char *))*v22)[3]((char *)v21 + 8);
                wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(v12);
                *v46 = (struct InputSite *)*v12;
                v14 = *(_QWORD *)v53.Data4;
                v15 = *(_QWORD *)&v53.Data1;
              }
            }
            Microsoft::WRL::ComPtr<BamoCustomCursorControllerClientProxy>::InternalRelease(&v43);
          }
          Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease(&v44);
          v11 = v41;
        }
        v23 = v15 - *(_QWORD *)&GUID_NULL.Data1;
        if ( v15 == *(_QWORD *)&GUID_NULL.Data1 )
          v23 = v14 - *(_QWORD *)GUID_NULL.Data4;
        if ( v23 )
        {
          if ( *v11 )
            goto LABEL_32;
          InputSite::GetAttachedObject<IDragSourceClientProxy,BamoDragSourceClientProxy>(*v12, (__int64 *)&v45);
          v24 = (struct BamoDragSourceClientProxy *)v45;
          if ( v45 )
          {
            v25 = v45 + 1;
            if ( (unsigned int)v45[1][5](v45 + 1) == 1
              || (unsigned int)((__int64 (__fastcall **)(char *))*v25)[5]((char *)v24 + 8) == 2 )
            {
              v26 = (_QWORD *)((__int64 (__fastcall **)(char *))*v25)[3]((char *)v24 + 8);
              v27 = *v26 - v15;
              if ( *v26 == v15 )
                v27 = v26[1] - v14;
              if ( !v27 )
              {
                Microsoft::WRL::ComPtr<BamoDragSourceClientProxy>::InternalAddRef(&v45);
                *v41 = v24;
                wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(v12);
                *v46 = (struct InputSite *)*v12;
              }
            }
          }
          Microsoft::WRL::ComPtr<BamoCustomCursorControllerClientProxy>::InternalRelease(&v45);
          if ( *v41 )
          {
LABEL_32:
            InputSite::GetAttachedObject<IDragManagerClientProxy,BamoDragManagerClientProxy>(*v12, (__int64 *)&v42);
            v28 = v42;
            if ( v42 )
            {
              v29 = (_QWORD *)(*(__int64 (__fastcall **)(char *))(*((_QWORD *)v42 + 1) + 72LL))((char *)v42 + 8);
              v30 = *v29 - v15;
              if ( *v29 == v15 )
                v30 = v29[1] - v14;
              if ( !v30 )
              {
                Microsoft::WRL::ComPtr<BamoDragSourceClientProxy>::InternalAddRef((__int64 (__fastcall ****)(_QWORD))&v42);
                *v49 = v28;
                wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(v12);
                *v50 = (struct InputSite *)*v12;
                Microsoft::WRL::ComPtr<BamoCustomCursorControllerClientProxy>::InternalRelease(&v42);
                goto LABEL_40;
              }
            }
            Microsoft::WRL::ComPtr<BamoCustomCursorControllerClientProxy>::InternalRelease(&v42);
          }
        }
        if ( ++v12 == v13 )
          goto LABEL_40;
        v11 = v41;
      }
    }
  }
  else
  {
LABEL_40:
    v12 = v55;
    v13 = v56;
  }
  v31 = v51;
  v32 = v47;
  if ( v51 || v47 )
  {
    while ( v12 != v13 )
    {
      v33 = *v12;
      v34 = 0LL;
      v41 = 0LL;
      v35 = *(_QWORD *)(v33 + 392);
      v36 = *(_QWORD *)(v33 + 400);
      if ( v35 != v36 )
      {
        do
        {
          if ( (int)Microsoft::WRL::ComPtr<IUnknown>::As<IDropTargetClientProxy>(
                      (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(v35 + 8),
                      (__int64 *)&v41) >= 0 )
            break;
          v35 += 16LL;
        }
        while ( v35 != v36 );
        v34 = v41;
      }
      if ( v34 )
      {
        v37 = (_QWORD *)(*((__int64 (__fastcall **)(struct BamoDragSourceClientProxy **))*v34 + 4))(v34);
        v38 = *v37 - *(_QWORD *)&v48->Data1;
        if ( *v37 == *(_QWORD *)&v48->Data1 )
          v38 = v37[1] - *(_QWORD *)v48->Data4;
        if ( !v38 )
        {
          *v32 = (*((__int64 (__fastcall **)(struct BamoDragSourceClientProxy **))*v41 + 3))(v41);
          *v31 = **(struct tagPOINT **)&DragNDropProcessor::GetPositionRelativeToSite(
                                          v39,
                                          (struct InputSite *)&v48,
                                          *(struct tagPOINT *)v12,
                                          *(_QWORD *)&a2);
          Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease((__int64 *)&v41);
          break;
        }
      }
      Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease((__int64 *)&v41);
      ++v12;
    }
  }
  if ( (unsigned __int64)(v57 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    NtCloseCompositionInputSink(v57);
  std::vector<Microsoft::WRL::ComPtr<InputSite>>::_Tidy((__int64)&v55);
  return 0LL;
}
