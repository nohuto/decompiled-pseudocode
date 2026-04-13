/*
 * XREFs of ?NeedBinding@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@AEAA_NPEAUITargetedContentIdAliasStoreStatics@Internal@TargetedContent@Services@Windows@@V1ShellPlacementTelemetry@Logging@3@@Z @ 0x18009E054
 * Callers:
 *     ?ProcessLayoutBindings@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@QEAAXPEAUHSTRING__@@V1ShellPlacementTelemetry@Logging@3@@Z @ 0x18009E47C (-ProcessLayoutBindings@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@QEAAXPEAUH.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003864 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z @ 0x1800661EC (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z.c)
 *     ??1LayoutResolver@ShellPlacementTelemetry@Logging@CreativeFramework@@QEAA@XZ @ 0x18009C690 (--1LayoutResolver@ShellPlacementTelemetry@Logging@CreativeFramework@@QEAA@XZ.c)
 *     ?GetLayoutType@Settings@TargetedContentLayoutHelpers@CreativeFramework@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PEAUHSTRING__@@PEB_W@Z @ 0x18009D9F8 (-GetLayoutType@Settings@TargetedContentLayoutHelpers@CreativeFramework@@YA-AV-$basic_string@_WU-.c)
 *     __security_check_cookie @ 0x1800C6A00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C7DF0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
char __fastcall CreativeFramework::TargetedContentLayoutHelpers::LayoutResolver::NeedBinding(
        __int64 a1,
        __int64 a2,
        CreativeFramework::Logging::ShellPlacementTelemetry::LayoutResolver *a3)
{
  int v5; // eax
  wil::details::in1diag3 *v6; // rcx
  bool v7; // bl
  char v8; // di
  int v9; // eax
  wil::details::in1diag3 *v10; // rcx
  int v11; // eax
  wil::details::in1diag3 *v12; // rcx
  __int64 v13; // rcx
  int v14; // eax
  unsigned __int64 v15; // r14
  void *v16; // rsi
  unsigned __int64 v17; // r15
  void *v18; // r12
  void **v19; // rcx
  _WORD *v20; // rdx
  unsigned __int64 v21; // rax
  int v22; // ecx
  int v23; // eax
  void **v24; // rcx
  _WORD *v25; // rdx
  unsigned __int64 v26; // rax
  int v27; // ecx
  int v28; // eax
  _WORD *v29; // rcx
  _WORD *v30; // rdx
  unsigned __int64 v31; // rax
  int v32; // ecx
  int v33; // eax
  _BYTE v35[4]; // [rsp+30h] [rbp-79h] BYREF
  int v36; // [rsp+34h] [rbp-75h] BYREF
  __int64 v37; // [rsp+38h] [rbp-71h] BYREF
  __int64 v38; // [rsp+40h] [rbp-69h] BYREF
  CreativeFramework::Logging::ShellPlacementTelemetry::LayoutResolver *v39; // [rsp+48h] [rbp-61h]
  __int64 v40; // [rsp+50h] [rbp-59h]
  CreativeFramework::Logging::ShellPlacementTelemetry::LayoutResolver *v41; // [rsp+58h] [rbp-51h]
  void *v42[2]; // [rsp+60h] [rbp-49h] BYREF
  unsigned __int64 v43; // [rsp+70h] [rbp-39h]
  unsigned __int64 v44; // [rsp+78h] [rbp-31h]
  _QWORD v45[2]; // [rsp+80h] [rbp-29h] BYREF
  unsigned __int64 v46; // [rsp+90h] [rbp-19h]
  unsigned __int64 v47; // [rsp+98h] [rbp-11h]
  _QWORD v48[2]; // [rsp+A0h] [rbp-9h] BYREF
  unsigned __int64 v49; // [rsp+B0h] [rbp+7h]
  unsigned __int64 v50; // [rsp+B8h] [rbp+Fh]
  wil::details::in1diag3 *retaddr; // [rsp+108h] [rbp+5Fh]

  v40 = -2LL;
  v39 = a3;
  v41 = a3;
  v5 = (*(__int64 (__fastcall **)(__int64, _QWORD, _BYTE *))(*(_QWORD *)a2 + 56LL))(a2, *(_QWORD *)(a1 + 8), v35);
  v6 = retaddr;
  if ( v5 < 0 )
  {
LABEL_73:
    wil::details::in1diag3::Throw_Hr(
      v6,
      (void *)0x95,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentlayoutresolver\\layoutresolver.cpp",
      (const char *)(unsigned int)v5);
LABEL_74:
    wil::details::in1diag3::Throw_Hr(
      v10,
      (void *)0x9E,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentlayoutresolver\\layoutresolver.cpp",
      (const char *)(unsigned int)v9);
    goto LABEL_75;
  }
  v7 = 0;
  v8 = 1;
  if ( !v35[0] )
    goto LABEL_12;
  v38 = 0LL;
  v9 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64 *))(*(_QWORD *)a2 + 64LL))(
         a2,
         *(_QWORD *)(a1 + 8),
         0LL,
         &v38);
  v10 = retaddr;
  if ( v9 < 0 )
    goto LABEL_74;
  v37 = 0LL;
  v11 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v38 + 72LL))(v38, &v37);
  v12 = retaddr;
  if ( v11 < 0 )
  {
LABEL_75:
    wil::details::in1diag3::Throw_Hr(
      v12,
      (void *)0xA2,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentlayoutresolver\\layoutresolver.cpp",
      (const char *)(unsigned int)v11);
    JUMPOUT(0x18009E472LL);
  }
  v36 = 0;
  v13 = v37;
  if ( v37 )
  {
    v14 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v37 + 56LL))(v37, &v36);
    if ( v14 >= 0 )
    {
      v7 = v36 != 0;
      v13 = v37;
      goto LABEL_8;
    }
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xA7,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentlayoutresolver\\layoutresolver.cpp",
      (const char *)(unsigned int)v14);
    goto LABEL_73;
  }
LABEL_8:
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  if ( v38 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v38 + 16LL))(v38);
LABEL_12:
  CreativeFramework::TargetedContentLayoutHelpers::Settings::GetLayoutType(
    (CreativeFramework::Policy *)v45,
    *(HSTRING *)(a1 + 8),
    (LPCWSTR)&stru_180158C90);
  CreativeFramework::TargetedContentLayoutHelpers::Settings::GetLayoutType(
    (CreativeFramework::Policy *)v48,
    *(HSTRING *)(a1 + 8),
    (LPCWSTR)&stru_180158D80);
  v44 = 7LL;
  v43 = 0LL;
  LOWORD(v42[0]) = 0;
  std::wstring::assign(v42, (char *)L"cloud", aCloud[0] != 0 ? 5 : 0);
  v15 = v47;
  v16 = (void *)v45[0];
  v17 = v50;
  v18 = (void *)v48[0];
  if ( v35[0] && v7 && v46 )
  {
    v19 = v42;
    if ( v44 >= 8 )
      v19 = (void **)v42[0];
    v20 = v45;
    if ( v47 >= 8 )
      v20 = (_WORD *)v45[0];
    v21 = v43;
    if ( v46 < v43 )
      v21 = v46;
    if ( v21 )
    {
      while ( *v20 == *(_WORD *)v19 )
      {
        ++v20;
        v19 = (void **)((char *)v19 + 2);
        if ( !--v21 )
          goto LABEL_24;
      }
      v22 = *v20 < *(_WORD *)v19 ? -1 : 1;
    }
    else
    {
LABEL_24:
      v22 = 0;
    }
    v23 = v46 != v43;
    if ( v46 < v43 )
      v23 = -1;
    if ( v22 )
      v23 = v22;
    if ( v23 )
    {
      v24 = v42;
      if ( v44 >= 8 )
        v24 = (void **)v42[0];
      v25 = v48;
      if ( v50 >= 8 )
        v25 = (_WORD *)v48[0];
      v26 = v43;
      if ( v49 < v43 )
        v26 = v49;
      if ( v26 )
      {
        while ( *v25 == *(_WORD *)v24 )
        {
          ++v25;
          v24 = (void **)((char *)v24 + 2);
          if ( !--v26 )
            goto LABEL_39;
        }
        v27 = *v25 < *(_WORD *)v24 ? -1 : 1;
      }
      else
      {
LABEL_39:
        v27 = 0;
      }
      v28 = v49 != v43;
      if ( v49 < v43 )
        v28 = -1;
      if ( v27 )
        v28 = v27;
      if ( v28 )
        goto LABEL_63;
    }
    v29 = v45;
    if ( v47 >= 8 )
      v29 = (_WORD *)v45[0];
    v30 = v48;
    if ( v50 >= 8 )
      v30 = (_WORD *)v48[0];
    v31 = v46;
    if ( v49 < v46 )
      v31 = v49;
    if ( v31 )
    {
      while ( *v30 == *v29 )
      {
        ++v30;
        ++v29;
        if ( !--v31 )
          goto LABEL_57;
      }
      v32 = *v30 < *v29 ? -1 : 1;
    }
    else
    {
LABEL_57:
      v32 = 0;
    }
    v33 = v49 != v46;
    if ( v49 < v46 )
      v33 = -1;
    if ( v32 )
      v33 = v32;
    if ( !v33 )
LABEL_63:
      v8 = 0;
  }
  if ( v44 >= 8 )
  {
    operator delete(v42[0]);
    v15 = v47;
    v16 = (void *)v45[0];
    v17 = v50;
    v18 = (void *)v48[0];
  }
  v44 = 7LL;
  v43 = 0LL;
  LOWORD(v42[0]) = 0;
  if ( v17 >= 8 )
  {
    operator delete(v18);
    v15 = v47;
    v16 = (void *)v45[0];
  }
  v50 = 7LL;
  v49 = 0LL;
  LOWORD(v48[0]) = 0;
  if ( v15 >= 8 )
    operator delete(v16);
  v47 = 7LL;
  v46 = 0LL;
  LOWORD(v45[0]) = 0;
  CreativeFramework::Logging::ShellPlacementTelemetry::LayoutResolver::~LayoutResolver(v39);
  return v8;
}
