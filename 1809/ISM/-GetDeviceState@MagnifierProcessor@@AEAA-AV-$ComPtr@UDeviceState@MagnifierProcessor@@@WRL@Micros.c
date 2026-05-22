/*
 * XREFs of ?GetDeviceState@MagnifierProcessor@@AEAA?AV?$ComPtr@UDeviceState@MagnifierProcessor@@@WRL@Microsoft@@PEBULegacyInputInfo@@@Z @ 0x1800CF164
 * Callers:
 *     ?OnHitTest@MagnifierProcessor@@UEAAJPEAUInputInfo@@PEAUInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x1800CEA70 (-OnHitTest@MagnifierProcessor@@UEAAJPEAUInputInfo@@PEAUInputContext@@PEAUContextualProcessorInit.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800035E4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??A?$unordered_map@_KV?$ComPtr@UDeviceState@MagnifierProcessor@@@WRL@Microsoft@@U?$hash@_K@std@@U?$equal_to@_K@5@V?$allocator@U?$pair@$$CB_KV?$ComPtr@UDeviceState@MagnifierProcessor@@@WRL@Microsoft@@@std@@@5@@std@@QEAAAEAV?$ComPtr@UDeviceState@MagnifierProcessor@@@WRL@Microsoft@@AEB_K@Z @ 0x1800CF370 (--A-$unordered_map@_KV-$ComPtr@UDeviceState@MagnifierProcessor@@@WRL@Microsoft@@U-$hash@_K@std@@.c)
 *     ??$MakeAndInitialize@UDeviceState@MagnifierProcessor@@U12@$$V@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@UDeviceState@MagnifierProcessor@@@WRL@Microsoft@@@012@@Z @ 0x1800CF72C (--$MakeAndInitialize@UDeviceState@MagnifierProcessor@@U12@$$V@Details@WRL@Microsoft@@YAJV-$ComPt.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall MagnifierProcessor::GetDeviceState(_QWORD *a1, __int64 *a2, __int64 a3)
{
  _QWORD *v5; // r14
  __int64 v6; // r8
  unsigned __int64 i; // r9
  __int64 v8; // rcx
  __int64 v9; // rdx
  _QWORD *v10; // rax
  __int64 v11; // r8
  __int64 v12; // r9
  _QWORD *v13; // rcx
  int v14; // eax
  __int64 *v15; // rdi
  __int64 v16; // rcx
  __int64 v17; // rbx
  __int64 *v18; // rax
  __int64 v19; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v22; // [rsp+50h] [rbp+8h] BYREF

  v5 = (_QWORD *)(a3 + 488);
  v6 = 0xCBF29CE484222325uLL;
  for ( i = 0LL; i < 8; ++i )
    v6 = 0x100000001B3LL * (*((unsigned __int8 *)v5 + i) ^ (unsigned __int64)v6);
  v8 = v6 & a1[11];
  v9 = a1[8];
  v10 = *(_QWORD **)(v9 + 16 * (v6 & a1[11]));
  v11 = 2 * v8;
  v12 = *(_QWORD *)(v9 + 16 * v8);
  while ( 1 )
  {
    v13 = v12 == a1[6] ? (_QWORD *)a1[6] : **(_QWORD ***)(v9 + 8 * v11 + 8);
    if ( v10 == v13 )
      break;
    if ( v10[2] == *v5 )
      goto LABEL_11;
    v10 = (_QWORD *)*v10;
  }
  v10 = (_QWORD *)a1[6];
LABEL_11:
  if ( v10 == (_QWORD *)a1[6] )
  {
    v22 = 0LL;
    v14 = Microsoft::WRL::Details::MakeAndInitialize<MagnifierProcessor::DeviceState,MagnifierProcessor::DeviceState,>(&v22);
    if ( v14 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0xBC,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\magnifier\\processor\\magni"
                 "fierprocessor.cpp",
        (const char *)(unsigned int)v14);
      JUMPOUT(0x1800CF2E1LL);
    }
    v15 = (__int64 *)std::unordered_map<unsigned __int64,Microsoft::WRL::ComPtr<MagnifierProcessor::DeviceState>>::operator[](
                       a1 + 5,
                       v5);
    v16 = *v15;
    v17 = v22;
    if ( *v15 != v22 )
    {
      if ( v22 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 8LL))(v22);
        v16 = *v15;
      }
      *v15 = v17;
      if ( v16 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
      v17 = v22;
    }
    if ( v17 )
    {
      v22 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
    }
  }
  v18 = (__int64 *)std::unordered_map<unsigned __int64,Microsoft::WRL::ComPtr<MagnifierProcessor::DeviceState>>::operator[](
                     a1 + 5,
                     v5);
  v19 = *v18;
  *a2 = *v18;
  if ( v19 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 8LL))(v19);
  return a2;
}
