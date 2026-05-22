/*
 * XREFs of ??0EdgyControllerClientProxy@@QEAA@AEBV?$ComPtr@VEdgyControllerServer@@@WRL@Microsoft@@@Z @ 0x18006E83C
 * Callers:
 *     ?CreateEdgyControllerClientProxy@@YAJPEAVBamoPeer@ISMBamos_AutoBamos@@PEAPEAVBamoEdgyControllerClientProxy@@@Z @ 0x18006EA28 (-CreateEdgyControllerClientProxy@@YAJPEAVBamoPeer@ISMBamos_AutoBamos@@PEAPEAVBamoEdgyControllerC.c)
 * Callees:
 *     ?Get@EdgyConnection@@SAPEAV1@XZ @ 0x180014E98 (-Get@EdgyConnection@@SAPEAV1@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18004F694 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

__int64 __fastcall EdgyControllerClientProxy::EdgyControllerClientProxy(__int64 a1, __int64 *a2)
{
  struct EdgyConnection *v4; // rax
  const char *v5; // r9
  __int64 v6; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *(_DWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 16) = &BamoImpl::BamoEdgyControllerClientProxyImpl::`vftable';
  *(_DWORD *)(a1 + 40) = 0;
  *(_WORD *)(a1 + 44) = 0;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_DWORD *)(a1 + 80) = 0;
  *(_QWORD *)a1 = &EdgyControllerClientProxy::`vftable'{for `Microsoft::Bamo::BamoProxy'};
  *(_QWORD *)(a1 + 8) = &EdgyControllerClientProxy::`vftable'{for `IEdgyControllerClientProxy'};
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_QWORD *)(a1 + 112) = 7LL;
  *(_WORD *)(a1 + 88) = 0;
  v4 = EdgyConnection::Get();
  *(_QWORD *)(a1 + 120) = v4;
  if ( v4 )
    (*(void (__fastcall **)(struct EdgyConnection *))(*(_QWORD *)v4 + 8LL))(v4);
  v6 = *a2;
  *(_QWORD *)(a1 + 128) = *a2;
  if ( v6 )
    _InterlockedIncrement((volatile signed __int32 *)(v6 + 24));
  if ( !*a2 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      39LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgy\\server\\edgycontrollerclientproxy.cpp",
      v5);
    __debugbreak();
  }
  if ( !*(_QWORD *)(a1 + 120) )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      40LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgy\\server\\edgycontrollerclientproxy.cpp",
      v5);
    __debugbreak();
  }
  return a1;
}
