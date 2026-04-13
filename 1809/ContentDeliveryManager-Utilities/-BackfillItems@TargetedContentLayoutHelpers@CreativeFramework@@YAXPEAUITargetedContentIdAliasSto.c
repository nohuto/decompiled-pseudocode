/*
 * XREFs of ?BackfillItems@TargetedContentLayoutHelpers@CreativeFramework@@YAXPEAUITargetedContentIdAliasStore@Internal@TargetedContent@Services@Windows@@AEAV?$vector@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@V?$allocator@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@2@@std@@AEAV?$vector@UTile@TargetedContentLayoutHelpers@CreativeFramework@@V?$allocator@UTile@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@9@@Z @ 0x1800A2780
 * Callers:
 *     ?ProcessLayoutBindings@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@QEAAXPEAUHSTRING__@@V1ShellPlacementTelemetry@Logging@3@@Z @ 0x18009E47C (-ProcessLayoutBindings@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@QEAAXPEAUH.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003864 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180014F6C (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??0?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@QEAA@AEBV01@@Z @ 0x18002D504 (--0-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@QEAA@AEBV01@@Z.c)
 *     __security_check_cookie @ 0x1800C6A00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C7DF0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
unsigned __int64 __fastcall CreativeFramework::TargetedContentLayoutHelpers::BackfillItems(
        __int64 a1,
        __int64 *a2,
        _QWORD *a3)
{
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // rsi
  __int64 v7; // r9
  unsigned __int64 result; // rax
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // r15
  char v12; // cl
  _BYTE *v13; // r14
  __int64 v14; // rdx
  int v15; // eax
  volatile signed __int32 *v16; // rbx
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rax
  volatile signed __int32 *v19; // rbx
  __int64 v20; // [rsp+30h] [rbp-50h] BYREF
  volatile signed __int32 *v21; // [rsp+38h] [rbp-48h]
  const WCHAR *v22; // [rsp+40h] [rbp-40h] BYREF
  __int64 v23; // [rsp+48h] [rbp-38h]
  __int64 v24; // [rsp+50h] [rbp-30h]
  char v25[32]; // [rsp+58h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+38h]

  v24 = -2LL;
  v23 = a1;
  v5 = 0LL;
  v6 = 0LL;
  v7 = *a2;
  result = (a2[1] - *a2) >> 4;
  if ( result )
  {
    do
    {
      v9 = a3[1] - *a3;
      result = (unsigned __int64)((unsigned __int128)(v9 * (__int128)0x4924924924924925LL) >> 64) >> 63;
      if ( v6 >= v9 / 56 )
        return result;
      v10 = *a3 + 56 * v6;
      std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>(
        &v20,
        (__int64 *)(v7 + 16 * v5));
      v11 = v20;
      v12 = *(_BYTE *)(v20 + 48);
      if ( v12 || (v13 = (_BYTE *)(v10 + 48), *(_BYTE *)(v10 + 48)) )
      {
        v17 = v5 + 1;
        if ( !v12 )
          v17 = v5;
        v5 = v17;
        v18 = v6 + 1;
        if ( !*(_BYTE *)(v10 + 48) )
          v18 = v6;
        v6 = v18;
        if ( !v21 )
          goto LABEL_20;
        if ( _InterlockedExchangeAdd(v21 + 2, 0xFFFFFFFF) != 1 )
          goto LABEL_20;
        v19 = v21;
        (**(void (__fastcall ***)(volatile signed __int32 *))v21)(v21);
        if ( _InterlockedExchangeAdd(v19 + 3, 0xFFFFFFFF) != 1 )
          goto LABEL_20;
      }
      else
      {
        if ( *(_QWORD *)(v10 + 24) >= 8uLL )
          v10 = *(_QWORD *)v10;
        v22 = (const WCHAR *)v10;
        v14 = *(_QWORD *)(Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v25, &v22) + 24);
        v15 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD))(*(_QWORD *)v23 + 48LL))(
                v23,
                v14,
                *(_QWORD *)v11,
                *(_QWORD *)(v11 + 8));
        if ( v15 < 0 )
        {
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            (void *)0x98,
            (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentlayoutresolver\\tilebinder.cpp",
            (const char *)(unsigned int)v15);
          JUMPOUT(0x1800A29A0LL);
        }
        *(_BYTE *)(v11 + 48) = 1;
        *v13 = 1;
        ++v5;
        ++v6;
        if ( !v21 )
          goto LABEL_20;
        if ( _InterlockedExchangeAdd(v21 + 2, 0xFFFFFFFF) != 1 )
          goto LABEL_20;
        v16 = v21;
        (**(void (__fastcall ***)(volatile signed __int32 *))v21)(v21);
        if ( _InterlockedExchangeAdd(v16 + 3, 0xFFFFFFFF) != 1 )
          goto LABEL_20;
      }
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v21 + 8LL))(v21);
LABEL_20:
      v7 = *a2;
      result = (a2[1] - *a2) >> 4;
    }
    while ( v5 < result );
  }
  return result;
}
