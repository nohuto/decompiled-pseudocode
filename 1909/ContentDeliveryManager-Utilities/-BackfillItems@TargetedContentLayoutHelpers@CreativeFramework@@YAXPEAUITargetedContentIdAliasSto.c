/*
 * XREFs of ?BackfillItems@TargetedContentLayoutHelpers@CreativeFramework@@YAXPEAUITargetedContentIdAliasStore@Internal@TargetedContent@Services@Windows@@AEAV?$vector@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@V?$allocator@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@2@@std@@AEAV?$vector@UTile@TargetedContentLayoutHelpers@CreativeFramework@@V?$allocator@UTile@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@9@@Z @ 0x1800A67E4
 * Callers:
 *     ?ProcessLayoutBindings@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@QEAAXPEAUHSTRING__@@V1ShellPlacementTelemetry@Logging@3@@Z @ 0x1800A2280 (-ProcessLayoutBindings@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@QEAAXPEAUH.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003774 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18001563C (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??0?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@QEAA@AEBV01@@Z @ 0x18002E35C (--0-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@QEAA@AEBV01@@Z.c)
 *     __security_check_cookie @ 0x1800CAA90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CBEA0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
unsigned __int64 __fastcall CreativeFramework::TargetedContentLayoutHelpers::BackfillItems(
        __int64 a1,
        __int64 *a2,
        _QWORD *a3)
{
  __int64 v4; // r13
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // rsi
  __int64 v7; // r9
  unsigned __int64 result; // rax
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // r15
  char v12; // cl
  _BYTE *v13; // r14
  __int64 (__fastcall *v14)(__int64, PVOID, _QWORD, _QWORD); // r13
  HSTRING_HEADER *v15; // rax
  int v16; // eax
  volatile signed __int32 *v17; // rbx
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rax
  volatile signed __int32 *v20; // rbx
  __int64 v22; // [rsp+40h] [rbp-31h] BYREF
  volatile signed __int32 *v23; // [rsp+48h] [rbp-29h]
  const WCHAR *v24; // [rsp+50h] [rbp-21h] BYREF
  _QWORD *v25; // [rsp+58h] [rbp-19h]
  __int64 v26; // [rsp+60h] [rbp-11h]
  HSTRING_HEADER v27; // [rsp+68h] [rbp-9h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+5Fh]

  v26 = -2LL;
  v25 = a3;
  v4 = a1;
  v5 = 0LL;
  v6 = 0LL;
  v7 = *a2;
  result = (a2[1] - *a2) >> 4;
  if ( result )
  {
    while ( 1 )
    {
      v9 = a3[1] - *a3;
      result = (unsigned __int64)((unsigned __int128)(v9 * (__int128)0x4924924924924925LL) >> 64) >> 63;
      if ( v6 >= v9 / 56 )
        break;
      v10 = *a3 + 56 * v6;
      std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>(
        &v22,
        (__int64 *)(v7 + 16 * v5));
      v11 = v22;
      v12 = *(_BYTE *)(v22 + 48);
      if ( v12 || (v13 = (_BYTE *)(v10 + 48), *(_BYTE *)(v10 + 48)) )
      {
        v18 = v5 + 1;
        if ( !v12 )
          v18 = v5;
        v5 = v18;
        v19 = v6 + 1;
        if ( !*(_BYTE *)(v10 + 48) )
          v19 = v6;
        v6 = v19;
        if ( v23 )
        {
          if ( _InterlockedExchangeAdd(v23 + 2, 0xFFFFFFFF) == 1 )
          {
            v20 = v23;
            (**(void (__fastcall ***)(volatile signed __int32 *))v23)(v23);
            if ( _InterlockedExchangeAdd(v20 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v23 + 8LL))(v23);
          }
        }
      }
      else
      {
        v14 = *(__int64 (__fastcall **)(__int64, PVOID, _QWORD, _QWORD))(*(_QWORD *)v4 + 48LL);
        if ( *(_QWORD *)(v10 + 24) >= 8uLL )
          v10 = *(_QWORD *)v10;
        v24 = (const WCHAR *)v10;
        v15 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v27, &v24);
        v16 = v14(a1, v15[1].Reserved.Reserved1, *(_QWORD *)v11, *(_QWORD *)(v11 + 8));
        if ( v16 < 0 )
        {
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            (void *)0x98,
            (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentlayoutresolver\\tilebinder.cpp",
            (const char *)(unsigned int)v16);
          JUMPOUT(0x1800A6A0CLL);
        }
        *(_BYTE *)(v11 + 48) = 1;
        *v13 = 1;
        ++v5;
        ++v6;
        if ( v23 && _InterlockedExchangeAdd(v23 + 2, 0xFFFFFFFF) == 1 )
        {
          v17 = v23;
          (**(void (__fastcall ***)(volatile signed __int32 *))v23)(v23);
          if ( _InterlockedExchangeAdd(v17 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v23 + 8LL))(v23);
        }
        v4 = a1;
      }
      v7 = *a2;
      result = (a2[1] - *a2) >> 4;
      if ( v5 >= result )
        break;
      a3 = v25;
    }
  }
  return result;
}
