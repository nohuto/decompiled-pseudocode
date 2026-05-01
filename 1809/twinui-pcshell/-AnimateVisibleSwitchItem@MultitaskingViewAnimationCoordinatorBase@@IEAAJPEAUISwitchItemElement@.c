/*
 * XREFs of ?AnimateVisibleSwitchItem@MultitaskingViewAnimationCoordinatorBase@@IEAAJPEAUISwitchItemElement@@PEAUIDCompBatchAnimationCallback@@_N@Z @ 0x180311BA8
 * Callers:
 *     _lambda_e2c0853faeb8110aeaae9508528948ac_::operator() @ 0x180311944 (_lambda_e2c0853faeb8110aeaae9508528948ac_--operator().c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006C60C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     DCompThumbnailHelpers::DCompThumbnail_MakeAnimationHandler__lambda_4c5a7e91a713f1717e0d1c2ef333ae9e___ @ 0x180311498 (DCompThumbnailHelpers--DCompThumbnail_MakeAnimationHandler__lambda_4c5a7e91a713f1717e0d1c2ef333a.c)
 *     ?_AddUpdateItem@?$CSimpleHashTable@PEAUHWND__@@UThumbnailData@MultitaskingViewAnimationCoordinatorBase@@V?$CDefaultHashPolicy@PEAUHWND__@@@@V?$CDefaultKeyCompare@PEAUHWND__@@@@VCDefaultResizePolicy@@VCDefaultRehashPolicy@@@@AEAAJHAEBQEAUHWND__@@AEBUThumbnailData@MultitaskingViewAnimationCoordinatorBase@@PEAU34@@Z @ 0x180312F3C (-_AddUpdateItem@-$CSimpleHashTable@PEAUHWND__@@UThumbnailData@MultitaskingViewAnimationCoordinat.c)
 */

__int64 __fastcall MultitaskingViewAnimationCoordinatorBase::AnimateVisibleSwitchItem(
        MultitaskingViewAnimationCoordinatorBase *this,
        struct ISwitchItemElement *a2,
        struct IDCompBatchAnimationCallback *a3,
        char a4)
{
  __int64 (__fastcall *v8)(MultitaskingViewAnimationCoordinatorBase *, struct ISwitchItemElement *, __int128 *); // rax
  int v9; // eax
  unsigned int updated; // ebx
  __int64 v11; // rax
  __int64 v12; // r15
  _QWORD *v13; // r14
  __int64 v14; // rbx
  __int64 v15; // rax
  int v16; // eax
  int v17; // eax
  __int64 v18; // r8
  unsigned __int64 v19; // r9
  __int64 v20; // rdx
  __int64 v21; // rax
  int v22; // eax
  __int64 v23; // rbx
  int v24; // eax
  int v25; // eax
  int v26; // eax
  int v27; // eax
  __int64 v28; // rdx
  int AnimationHandler__lambda_4c5a7e91a713f1717e0d1c2ef333ae9e; // eax
  __int64 v30; // rdx
  struct ISwitchItemElement *v32; // [rsp+50h] [rbp-29h] BYREF
  struct ISwitchItemElement *v33; // [rsp+58h] [rbp-21h] BYREF
  struct ISwitchItemElement *v34; // [rsp+60h] [rbp-19h] BYREF
  _QWORD *v35; // [rsp+68h] [rbp-11h] BYREF
  __int64 v36; // [rsp+70h] [rbp-9h] BYREF
  __int128 v37; // [rsp+78h] [rbp-1h] BYREF
  _QWORD v38[2]; // [rsp+88h] [rbp+Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]

  v8 = *(__int64 (__fastcall **)(MultitaskingViewAnimationCoordinatorBase *, struct ISwitchItemElement *, __int128 *))(*(_QWORD *)this + 152LL);
  v37 = 0LL;
  v9 = v8(this, a2, &v37);
  updated = v9;
  if ( v9 >= 0 )
  {
    v11 = (*(__int64 (__fastcall **)(struct ISwitchItemElement *))(*(_QWORD *)a2 + 32LL))(a2);
    v32 = 0LL;
    v12 = v11;
    v13 = (_QWORD *)*((_QWORD *)this + 12);
    v36 = v11;
    if ( v13
      && (Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v32),
          v14 = *v13,
          v15 = (*(__int64 (__fastcall **)(struct ISwitchItemElement *))(*(_QWORD *)a2 + 32LL))(a2),
          v16 = (*(__int64 (__fastcall **)(_QWORD *, __int64, struct ISwitchItemElement **))(v14 + 24))(v13, v15, &v32),
          v13 = 0LL,
          v16 >= 0) )
    {
      v17 = (*(__int64 (__fastcall **)(MultitaskingViewAnimationCoordinatorBase *, struct ISwitchItemElement *, struct ISwitchItemElement *))(*(_QWORD *)this + 136LL))(
              this,
              a2,
              v32);
      updated = v17;
      if ( v17 < 0 )
      {
        v19 = (unsigned int)v17;
        v20 = 201LL;
LABEL_20:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v20,
          (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewanimationcoordinatorbase.cpp",
          (const char *)v19);
LABEL_29:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v32);
        return updated;
      }
    }
    else
    {
      v21 = *(_QWORD *)this;
      v38[0] = v13;
      v38[1] = v13;
      v22 = (*(__int64 (__fastcall **)(MultitaskingViewAnimationCoordinatorBase *, struct ISwitchItemElement *, _QWORD *))(v21 + 144))(
              this,
              a2,
              v38);
      updated = v22;
      if ( v22 < 0 )
      {
        v19 = (unsigned int)v22;
        v20 = 206LL;
        goto LABEL_20;
      }
      v23 = *((_QWORD *)this + 4);
      if ( a4 )
      {
        LODWORD(v33) = DWORD2(v37) - v37;
        HIDWORD(v33) = HIDWORD(v37) - DWORD1(v37);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v32);
        v24 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, _QWORD, struct ISwitchItemElement **, _QWORD *, GUID *, struct ISwitchItemElement **))(*(_QWORD *)v23 + 64LL))(
                v23,
                *((_QWORD *)this + 6),
                v12,
                0LL,
                &v33,
                v13,
                &GUID_47267895_a4f8_4012_9e98_087c619e7cfc,
                &v32);
        updated = v24;
        if ( v24 < 0 )
        {
          v19 = (unsigned int)v24;
          v20 = 212LL;
          goto LABEL_20;
        }
      }
      else
      {
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v32);
        v25 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, _QWORD, _QWORD *, _QWORD *, GUID *, struct ISwitchItemElement **))(*(_QWORD *)v23 + 64LL))(
                v23,
                *((_QWORD *)this + 6),
                v12,
                0LL,
                v13,
                v13,
                &GUID_47267895_a4f8_4012_9e98_087c619e7cfc,
                &v32);
        updated = v25;
        if ( v25 < 0 )
        {
          v19 = (unsigned int)v25;
          v20 = 216LL;
          goto LABEL_20;
        }
      }
      v26 = (*(__int64 (__fastcall **)(struct ISwitchItemElement *, _QWORD *, _QWORD, _QWORD))(*(_QWORD *)v32 + 24LL))(
              v32,
              v38,
              0LL,
              0LL);
      updated = v26;
      if ( v26 < 0 )
      {
        v19 = (unsigned int)v26;
        v20 = 219LL;
        goto LABEL_20;
      }
    }
    LOBYTE(v18) = 1;
    v27 = (*(__int64 (__fastcall **)(struct ISwitchItemElement *, _QWORD, __int64))(*(_QWORD *)v32 + 152LL))(
            v32,
            0LL,
            v18);
    updated = v27;
    if ( v27 < 0 )
    {
      v19 = (unsigned int)v27;
      v20 = 221LL;
      goto LABEL_20;
    }
    v33 = a2;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v33);
    v34 = v32;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v34);
    updated = CSimpleHashTable<HWND__ *,MultitaskingViewAnimationCoordinatorBase::ThumbnailData,CDefaultHashPolicy<HWND__ *>,CDefaultKeyCompare<HWND__ *>,CDefaultResizePolicy,CDefaultRehashPolicy>::_AddUpdateItem(
                (char *)this + 72,
                v28,
                &v36,
                &v33);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v34);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v33);
    if ( (updated & 0x80000000) != 0 )
    {
      v19 = updated;
      v20 = 222LL;
      goto LABEL_20;
    }
    v35 = v13;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v35);
    v33 = v32;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v33);
    AnimationHandler__lambda_4c5a7e91a713f1717e0d1c2ef333ae9e = DCompThumbnailHelpers::DCompThumbnail_MakeAnimationHandler__lambda_4c5a7e91a713f1717e0d1c2ef333ae9e___(
                                                                  (__int64 *)&v33,
                                                                  (__int64)a3,
                                                                  &v35);
    updated = AnimationHandler__lambda_4c5a7e91a713f1717e0d1c2ef333ae9e;
    if ( AnimationHandler__lambda_4c5a7e91a713f1717e0d1c2ef333ae9e >= 0 )
    {
      AnimationHandler__lambda_4c5a7e91a713f1717e0d1c2ef333ae9e = (*(__int64 (__fastcall **)(struct ISwitchItemElement *, __int128 *, _QWORD, _QWORD *))(*(_QWORD *)v32 + 24LL))(
                                                                    v32,
                                                                    &v37,
                                                                    *((unsigned int *)this + 37),
                                                                    v35);
      updated = AnimationHandler__lambda_4c5a7e91a713f1717e0d1c2ef333ae9e;
      if ( AnimationHandler__lambda_4c5a7e91a713f1717e0d1c2ef333ae9e >= 0 )
      {
        AnimationHandler__lambda_4c5a7e91a713f1717e0d1c2ef333ae9e = (*(__int64 (__fastcall **)(MultitaskingViewAnimationCoordinatorBase *, struct ISwitchItemElement *, struct ISwitchItemElement *, _QWORD *))(*(_QWORD *)this + 160LL))(
                                                                      this,
                                                                      a2,
                                                                      v32,
                                                                      v35);
        updated = AnimationHandler__lambda_4c5a7e91a713f1717e0d1c2ef333ae9e;
        if ( AnimationHandler__lambda_4c5a7e91a713f1717e0d1c2ef333ae9e >= 0 )
        {
LABEL_28:
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v35);
          goto LABEL_29;
        }
        v30 = 228LL;
      }
      else
      {
        v30 = 227LL;
      }
    }
    else
    {
      v30 = 225LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v30,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewanimationcoordinatorbase.cpp",
      (const char *)(unsigned int)AnimationHandler__lambda_4c5a7e91a713f1717e0d1c2ef333ae9e);
    goto LABEL_28;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xC2,
    (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewanimationcoordinatorbase.cpp",
    (const char *)(unsigned int)v9);
  return updated;
}
