/*
 * XREFs of ?OnShowWindowPolicy@ViewPresentationMediator@@UEAAJPEAUHWND__@@IPEAKPEAUtagRECT@@@Z @ 0x180029FF0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VFtmBase@23@UIObjectArray@@@WRL@Microsoft@@QEAA@XZ @ 0x18002BB1C (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VFtmBase@23@UIObjectArray@@@WRL@Micros.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072ADC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800870F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x180087BFA (memset_0.c)
 *     __Platform_ReleaseSRWLockShared @ 0x180087FF2 (__Platform_ReleaseSRWLockShared.c)
 *     __Platform_AcquireSRWLockShared @ 0x180088016 (__Platform_AcquireSRWLockShared.c)
 *     ??1?$ComPtr@VCImmersiveWindowManager@@@WRL@Microsoft@@QEAA@XZ @ 0x1800946AC (--1-$ComPtr@VCImmersiveWindowManager@@@WRL@Microsoft@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x18011BE3C (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V-$C.c)
 */

// Hidden C++ exception states: #wind=11
__int64 __fastcall ViewPresentationMediator::OnShowWindowPolicy(
        RTL_SRWLOCK *this,
        HWND a2,
        unsigned int a3,
        unsigned int *a4,
        LPRECT lprc)
{
  unsigned int *v5; // rdi
  unsigned int v6; // r12d
  int v8; // r14d
  RTL_SRWLOCK *v9; // r13
  char *v10; // rax
  char *v11; // rbx
  __int64 v12; // r9
  unsigned __int64 Ptr; // rcx
  int v14; // esi
  __int64 v15; // r8
  unsigned __int64 v16; // r14
  unsigned __int64 v17; // rsi
  char *v18; // r12
  __int64 *v19; // r14
  __int64 *v20; // r15
  __int64 v21; // rdx
  __int64 *v22; // rdx
  __int64 v23; // rcx
  char *v24; // rbx
  int v25; // eax
  __int64 *v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rbx
  IMalloc *v29; // rcx
  int v30; // eax
  HWND v31; // rsi
  unsigned int v32; // ecx
  IMalloc *v33; // rbx
  __int64 *v34; // rax
  __int64 v35; // rdi
  int v36; // eax
  __int64 v37; // rcx
  IMalloc *v38; // rcx
  char *v39; // rcx
  char *v40; // rcx
  int v42; // [rsp+20h] [rbp-61h]
  int v43; // [rsp+20h] [rbp-61h]
  unsigned int v44; // [rsp+30h] [rbp-51h]
  IMalloc *v45; // [rsp+38h] [rbp-49h] BYREF
  char **v46; // [rsp+40h] [rbp-41h]
  LPMALLOC ppMalloc; // [rsp+50h] [rbp-31h] BYREF
  char *v48; // [rsp+58h] [rbp-29h] BYREF
  int v49; // [rsp+60h] [rbp-21h] BYREF
  int v50; // [rsp+68h] [rbp-19h]
  __int64 v51; // [rsp+70h] [rbp-11h]
  char **v52; // [rsp+78h] [rbp-9h]
  unsigned __int64 v53; // [rsp+80h] [rbp-1h]
  __int64 v54; // [rsp+88h] [rbp+7h]
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+57h]
  char *v56; // [rsp+E0h] [rbp+5Fh] BYREF
  HWND v57; // [rsp+E8h] [rbp+67h]
  unsigned int v58; // [rsp+F0h] [rbp+6Fh]
  unsigned int *v59; // [rsp+F8h] [rbp+77h]

  v59 = a4;
  v58 = a3;
  v57 = a2;
  v54 = -2LL;
  v5 = a4;
  v6 = a3;
  *a4 = 0;
  v8 = (int)lprc;
  SetRectEmpty(lprc);
  v56 = 0LL;
  v9 = this + 12;
  _Platform_AcquireSRWLockShared(this + 12);
  v56 = 0LL;
  v10 = (char *)operator new(0x50uLL, (const struct std::nothrow_t *)&std::nothrow);
  v11 = v10;
  if ( v10 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,IObjectArray>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,IObjectArray>(v10);
    *(_QWORD *)v11 = &CGITCallbackArray::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IObjectArray>>'};
    *((_QWORD *)v11 + 4) = &CGITCallbackArray::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IObjectArray>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IObjectArray>>'};
    *((_QWORD *)v11 + 6) = 0LL;
    *((_QWORD *)v11 + 7) = 0LL;
    *((_QWORD *)v11 + 8) = 0LL;
    *((_QWORD *)v11 + 9) = 0LL;
    v48 = v11;
    Ptr = (unsigned __int64)this[14].Ptr;
    if ( !Ptr )
      goto LABEL_21;
    v14 = -2147024774;
    v15 = 4294967294LL;
    if ( Ptr > 0xFFFFFFFE )
    {
LABEL_61:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x5F,
        (unsigned int)"shell\\lib\\gitreglist.cpp",
        (const char *)(unsigned int)v14,
        v42);
LABEL_62:
      Microsoft::WRL::ComPtr<CImmersiveWindowManager>::~ComPtr<CImmersiveWindowManager>(&v48);
      goto LABEL_22;
    }
    if ( is_mul_ok(0LL, 2uLL) )
    {
      if ( this[14].Ptr > (PVOID)0xFFFFFFFELL )
        v16 = 4294967294LL;
      else
        v16 = (unsigned __int64)this[14].Ptr;
      v17 = 8 * v16;
      if ( !is_mul_ok(v16, 8uLL) )
      {
        v14 = -2147024362;
        goto LABEL_13;
      }
      v18 = (char *)CoTaskMemRealloc(*((LPVOID *)v11 + 6), 8 * v16);
      if ( v18 )
      {
        if ( CoGetMalloc(1u, &ppMalloc) >= 0 )
        {
          v53 = ((__int64 (__fastcall *)(LPMALLOC, char *))ppMalloc->lpVtbl->GetSize)(ppMalloc, v18);
          ((void (__fastcall *)(LPMALLOC))ppMalloc->lpVtbl->Release)(ppMalloc);
          v15 = v53;
          if ( v53 > v17 )
            memset_0(&v18[v17], 0, v53 - v17);
        }
        v14 = 0;
        *((_QWORD *)v11 + 9) = v16;
        *((_QWORD *)v11 + 6) = v18;
        v6 = v58;
LABEL_13:
        if ( v14 >= 0 )
        {
          v19 = (__int64 *)this[13].Ptr;
          v20 = &v19[(__int64)this[14].Ptr];
          if ( v19 != v20 )
          {
            while ( 1 )
            {
              v21 = *((_QWORD *)v11 + 7);
              if ( v21 == *((_QWORD *)v11 + 9) )
              {
                v14 = CTSimpleArray<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>>::_EnsureCapacity(
                        v11 + 48,
                        v21 + 1,
                        v15,
                        v12);
                if ( v14 < 0 )
                  break;
              }
              v22 = (__int64 *)(*((_QWORD *)v11 + 6) + 8 * (*((_QWORD *)v11 + 7))++);
              if ( v22 )
              {
                v23 = *v19;
                *v22 = *v19;
                if ( v23 )
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 8LL))(v23);
              }
              if ( ++v19 == v20 )
                goto LABEL_20;
            }
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x63,
              (unsigned int)"shell\\lib\\gitreglist.cpp",
              (const char *)(unsigned int)v14,
              v42);
            v8 = (int)lprc;
            goto LABEL_62;
          }
LABEL_20:
          v8 = (int)lprc;
LABEL_21:
          v14 = (**(__int64 (__fastcall ***)(void *, GUID *, char **))v11)(
                  v11,
                  &GUID_92ca9dcd_5622_4bba_a805_5e9f541bd8c9,
                  &v56);
          (*(void (__fastcall **)(char *))(*(_QWORD *)v11 + 16LL))(v11);
LABEL_22:
          v5 = v59;
          goto LABEL_23;
        }
        goto LABEL_60;
      }
      v14 = -2147024882;
      v6 = v58;
    }
    else
    {
      v14 = -2147024362;
    }
LABEL_60:
    v8 = (int)lprc;
    goto LABEL_61;
  }
  v14 = -2147024882;
LABEL_23:
  _Platform_ReleaseSRWLockShared(v9);
  if ( v14 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x93,
      (unsigned int)"pcshell\\twinui\\viewpresentationmediator\\lib\\viewpresentationmediator.cpp",
      (const char *)(unsigned int)v14,
      v42);
  }
  else
  {
    v24 = v56;
    v48 = v56;
    if ( v56 )
      (*(void (__fastcall **)(char *))(*(_QWORD *)v56 + 8LL))(v56);
    v49 = 0;
    v25 = (*(__int64 (__fastcall **)(char *, int *))(*(_QWORD *)v24 + 24LL))(v24, &v49);
    if ( v25 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x10,
        (unsigned int)"internal\\shell\\private\\inc\\ObjectArrayAdapter.h",
        (const char *)(unsigned int)v25,
        v42);
    v44 = 0;
    v45 = 0LL;
    v26 = (__int64 *)&v48;
    v46 = &v48;
    v27 = 0LL;
    if ( v49 )
    {
      do
      {
        v28 = *v26;
        v29 = v45;
        if ( v45 )
        {
          v45 = 0LL;
          ((void (__fastcall *)(IMalloc *))v29->lpVtbl->Release)(v29);
          v27 = v44;
        }
        v30 = (*(__int64 (__fastcall **)(__int64, __int64, GUID *, IMalloc **))(*(_QWORD *)v28 + 32LL))(
                v28,
                v27,
                &GUID_8878425f_8c9b_4051_a1ef_cc08e3166e7b,
                &v45);
        if ( v30 >= 0 )
          break;
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x35,
          (unsigned int)"internal\\shell\\private\\inc\\ObjectArrayAdapter.h",
          (const char *)(unsigned int)v30,
          v42);
        v27 = v44 + 1;
        v44 = v27;
        v26 = (__int64 *)v46;
      }
      while ( (unsigned int)v27 < *((_DWORD *)v46 + 2) );
    }
    v50 = v49;
    v51 = 0LL;
    v52 = &v48;
    v31 = v57;
LABEL_33:
    v32 = v44;
    v33 = v45;
    v34 = (__int64 *)v46;
    while ( v32 != v50 || v34 != (__int64 *)v52 )
    {
      ppMalloc = v33;
      if ( v33 )
        ((void (__fastcall *)(IMalloc *))v33->lpVtbl->AddRef)(v33);
      if ( *v5 )
      {
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&ppMalloc);
        break;
      }
      v43 = v8;
      ((void (__fastcall *)(IMalloc *, HWND, _QWORD, unsigned int *))v33->lpVtbl->Alloc)(v33, v31, v6, v5);
      ppMalloc = 0LL;
      ((void (__fastcall *)(IMalloc *))v33->lpVtbl->Release)(v33);
      v32 = ++v44;
      v33 = v45;
      if ( v45 )
      {
        v45 = 0LL;
        ((void (__fastcall *)(IMalloc *))v33->lpVtbl->Release)(v33);
        v33 = v45;
        v32 = v44;
      }
      v34 = (__int64 *)v46;
      if ( v32 < *((_DWORD *)v46 + 2) )
      {
        do
        {
          v35 = *v34;
          if ( v33 )
          {
            v45 = 0LL;
            ((void (__fastcall *)(IMalloc *))v33->lpVtbl->Release)(v33);
            v32 = v44;
          }
          v36 = (*(__int64 (__fastcall **)(__int64, _QWORD, GUID *, IMalloc **))(*(_QWORD *)v35 + 32LL))(
                  v35,
                  v32,
                  &GUID_8878425f_8c9b_4051_a1ef_cc08e3166e7b,
                  &v45);
          if ( v36 >= 0 )
          {
            v5 = v59;
            goto LABEL_33;
          }
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x35,
            (unsigned int)"internal\\shell\\private\\inc\\ObjectArrayAdapter.h",
            (const char *)(unsigned int)v36,
            v43);
          v32 = v44 + 1;
          v44 = v32;
          v34 = (__int64 *)v46;
          v33 = v45;
        }
        while ( v32 < *((_DWORD *)v46 + 2) );
        v5 = v59;
      }
    }
    v37 = v51;
    if ( v51 )
    {
      v51 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v37 + 16LL))(v37);
    }
    v38 = v45;
    if ( v45 )
    {
      v45 = 0LL;
      ((void (__fastcall *)(IMalloc *))v38->lpVtbl->Release)(v38);
    }
    v39 = v48;
    if ( v48 )
    {
      v48 = 0LL;
      (*(void (__fastcall **)(char *))(*(_QWORD *)v39 + 16LL))(v39);
    }
    v14 = 0;
  }
  v40 = v56;
  if ( v56 )
  {
    v56 = 0LL;
    (*(void (__fastcall **)(char *))(*(_QWORD *)v40 + 16LL))(v40);
  }
  return (unsigned int)v14;
}
