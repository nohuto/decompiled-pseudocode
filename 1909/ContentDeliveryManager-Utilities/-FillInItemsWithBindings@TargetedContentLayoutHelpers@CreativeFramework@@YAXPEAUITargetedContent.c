/*
 * XREFs of ?FillInItemsWithBindings@TargetedContentLayoutHelpers@CreativeFramework@@YAXPEAUITargetedContentIdAliasStore@Internal@TargetedContent@Services@Windows@@AEAV?$vector@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@V?$allocator@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@2@@std@@AEAV?$vector@UTile@TargetedContentLayoutHelpers@CreativeFramework@@V?$allocator@UTile@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@9@@Z @ 0x1800A65EC
 * Callers:
 *     ?ProcessLayoutBindings@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@QEAAXPEAUHSTRING__@@V1ShellPlacementTelemetry@Logging@3@@Z @ 0x1800A2280 (-ProcessLayoutBindings@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@QEAAXPEAUH.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003774 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18001563C (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     __security_check_cookie @ 0x1800CAA90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CBEA0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
unsigned __int64 __fastcall CreativeFramework::TargetedContentLayoutHelpers::FillInItemsWithBindings(
        __int64 a1,
        __int64 *a2,
        __int64 *a3)
{
  __int64 *v3; // r9
  __int64 v5; // r10
  unsigned __int64 v6; // rbp
  unsigned __int64 v7; // r12
  __int64 v8; // rdi
  unsigned __int64 result; // rax
  __int64 v10; // rsi
  __int64 v11; // r15
  __int64 v12; // r8
  __int64 v13; // rcx
  __int64 v14; // rbx
  __int64 v15; // r14
  double v16; // xmm1_8
  double v17; // xmm2_8
  const WCHAR *v18; // rax
  HSTRING_HEADER *v19; // rax
  int v20; // eax
  __int64 v21; // rcx
  const WCHAR *v23; // [rsp+38h] [rbp-80h] BYREF
  __int64 (__fastcall *v24)(__int64, PVOID, _QWORD, _QWORD); // [rsp+40h] [rbp-78h]
  __int64 *v25; // [rsp+48h] [rbp-70h]
  __int64 v26; // [rsp+50h] [rbp-68h]
  HSTRING_HEADER v27; // [rsp+58h] [rbp-60h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+0h]

  v26 = -2LL;
  v3 = a3;
  v25 = a3;
  v5 = a1;
  v6 = 0LL;
  v7 = 0LL;
  v8 = *a2;
  result = (a2[1] - *a2) >> 4;
  if ( result )
  {
    v10 = 0LL;
    v11 = 0LL;
    do
    {
      v12 = *v3;
      v13 = v3[1] - *v3;
      result = (unsigned __int64)((unsigned __int128)(v13 * (__int128)0x4924924924924925LL) >> 64) >> 63;
      if ( v7 >= v13 / 56 )
        return result;
      v14 = v11 + v12;
      v15 = *(_QWORD *)(v10 + v8);
      v16 = *(double *)(v11 + v12 + 32);
      v17 = *(double *)(v15 + 32);
      if ( v16 == v17 && (!*(_BYTE *)(v15 + 18) || *(double *)(v14 + 40) == *(double *)(v15 + 40)) )
      {
        v24 = *(__int64 (__fastcall **)(__int64, PVOID, _QWORD, _QWORD))(*(_QWORD *)v5 + 48LL);
        if ( *(_QWORD *)(v14 + 24) < 8uLL )
          v18 = (const WCHAR *)(v11 + v12);
        else
          v18 = *(const WCHAR **)v14;
        v23 = v18;
        v19 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v27, &v23);
        v20 = v24(a1, v19[1].Reserved.Reserved1, *(_QWORD *)v15, *(_QWORD *)(v15 + 8));
        if ( v20 < 0 )
        {
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            (void *)0x6C,
            (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentlayoutresolver\\tilebinder.cpp",
            (const char *)(unsigned int)v20);
          JUMPOUT(0x1800A67DBLL);
        }
        *(_BYTE *)(*(_QWORD *)(v10 + v8) + 48LL) = 1;
        *(_BYTE *)(v14 + 48) = 1;
        ++v6;
        v10 += 16LL;
        v21 = *a2;
        v3 = v25;
        v5 = a1;
      }
      else
      {
        if ( v17 <= v16 && (v16 != v17 || *(double *)(v15 + 40) <= *(double *)(v14 + 40)) )
        {
          if ( v16 > v17 || (v21 = v8, v16 == v17) && *(double *)(v14 + 40) > *(double *)(v15 + 40) )
          {
            ++v6;
            v10 += 16LL;
            v21 = v8;
          }
          goto LABEL_21;
        }
        v21 = v8;
      }
      ++v7;
      v11 += 56LL;
LABEL_21:
      v8 = v21;
      result = (a2[1] - v21) >> 4;
    }
    while ( v6 < result );
  }
  return result;
}
