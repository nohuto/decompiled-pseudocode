/*
 * XREFs of ?FillInItemsWithBindings@TargetedContentLayoutHelpers@CreativeFramework@@YAXPEAUITargetedContentIdAliasStore@Internal@TargetedContent@Services@Windows@@AEAV?$vector@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@V?$allocator@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@2@@std@@AEAV?$vector@UTile@TargetedContentLayoutHelpers@CreativeFramework@@V?$allocator@UTile@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@9@@Z @ 0x1800A25AC
 * Callers:
 *     ?ProcessLayoutBindings@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@QEAAXPEAUHSTRING__@@V1ShellPlacementTelemetry@Logging@3@@Z @ 0x18009E47C (-ProcessLayoutBindings@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@QEAAXPEAUH.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003864 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180014F6C (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     __security_check_cookie @ 0x1800C6A00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C7DF0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
unsigned __int64 __fastcall CreativeFramework::TargetedContentLayoutHelpers::FillInItemsWithBindings(
        __int64 a1,
        __int64 *a2,
        __int64 *a3)
{
  unsigned __int64 v5; // rbp
  unsigned __int64 v6; // r15
  __int64 v7; // rdi
  unsigned __int64 result; // rax
  __int64 v9; // rsi
  __int64 v10; // r14
  __int64 v11; // r8
  __int64 v12; // rcx
  __int64 v13; // rbx
  __int64 v14; // rax
  double v15; // xmm1_8
  double v16; // xmm2_8
  const WCHAR *v17; // rax
  __int64 v18; // rax
  int v19; // eax
  __int64 v20; // rcx
  const WCHAR *v21; // [rsp+30h] [rbp-78h] BYREF
  __int64 v22; // [rsp+38h] [rbp-70h]
  __int64 v23; // [rsp+40h] [rbp-68h]
  _BYTE v24[32]; // [rsp+48h] [rbp-60h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]

  v23 = -2LL;
  v22 = a1;
  v5 = 0LL;
  v6 = 0LL;
  v7 = *a2;
  result = (a2[1] - *a2) >> 4;
  if ( result )
  {
    v9 = 0LL;
    v10 = 0LL;
    do
    {
      v11 = *a3;
      v12 = a3[1] - *a3;
      result = (unsigned __int64)((unsigned __int128)(v12 * (__int128)0x4924924924924925LL) >> 64) >> 63;
      if ( v6 >= v12 / 56 )
        return result;
      v13 = v10 + v11;
      v14 = *(_QWORD *)(v9 + v7);
      v15 = *(double *)(v10 + v11 + 32);
      v16 = *(double *)(v14 + 32);
      if ( v15 == v16 && (!*(_BYTE *)(v14 + 18) || *(double *)(v13 + 40) == *(double *)(v14 + 40)) )
      {
        if ( *(_QWORD *)(v13 + 24) < 8uLL )
          v17 = (const WCHAR *)(v10 + v11);
        else
          v17 = *(const WCHAR **)v13;
        v21 = v17;
        v18 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v24, &v21);
        v19 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v22 + 48LL))(
                v22,
                *(_QWORD *)(v18 + 24),
                **(_QWORD **)(v9 + v7),
                *(_QWORD *)(*(_QWORD *)(v9 + v7) + 8LL));
        if ( v19 < 0 )
        {
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            (void *)0x6C,
            (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentlayoutresolver\\tilebinder.cpp",
            (const char *)(unsigned int)v19);
          JUMPOUT(0x1800A2779LL);
        }
        *(_BYTE *)(*(_QWORD *)(v9 + v7) + 48LL) = 1;
        *(_BYTE *)(v13 + 48) = 1;
        ++v5;
        v9 += 16LL;
        v20 = *a2;
      }
      else
      {
        if ( v16 <= v15 && (v15 != v16 || *(double *)(v14 + 40) <= *(double *)(v13 + 40)) )
        {
          if ( v15 > v16 || (v20 = v7, v15 == v16) && *(double *)(v13 + 40) > *(double *)(v14 + 40) )
          {
            ++v5;
            v9 += 16LL;
            v20 = v7;
          }
          goto LABEL_21;
        }
        v20 = v7;
      }
      ++v6;
      v10 += 56LL;
LABEL_21:
      v7 = v20;
      result = (a2[1] - v20) >> 4;
    }
    while ( v5 < result );
  }
  return result;
}
