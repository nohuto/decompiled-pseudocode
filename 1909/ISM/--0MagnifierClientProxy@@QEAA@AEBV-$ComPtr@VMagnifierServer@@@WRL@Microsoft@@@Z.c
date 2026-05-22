/*
 * XREFs of ??0MagnifierClientProxy@@QEAA@AEBV?$ComPtr@VMagnifierServer@@@WRL@Microsoft@@@Z @ 0x18006F678
 * Callers:
 *     ?CreateMagnifierClientProxy@BamoImpl@@YAXPEAVBaseBamoConnectionImpl@1Microsoft@@PEAVBamoPeer@ISMBamos_AutoBamos@@PEAPEAVBamoProxy@Bamo@3@@Z @ 0x18005BD54 (-CreateMagnifierClientProxy@BamoImpl@@YAXPEAVBaseBamoConnectionImpl@1Microsoft@@PEAVBamoPeer@ISM.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18004F3F4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

__int64 __fastcall MagnifierClientProxy::MagnifierClientProxy(__int64 a1, __int64 *a2, __int64 a3, const char *a4)
{
  __int64 v4; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *(_DWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 16) = &BamoImpl::BamoMagnifierClientProxyImpl::`vftable';
  *(_DWORD *)(a1 + 40) = 0;
  *(_WORD *)(a1 + 44) = 0;
  *(_WORD *)(a1 + 48) = 0;
  *(_QWORD *)a1 = &MagnifierClientProxy::`vftable'{for `Microsoft::Bamo::BamoProxy'};
  *(_QWORD *)(a1 + 8) = &MagnifierClientProxy::`vftable'{for `IMagnifierClientProxy'};
  v4 = *a2;
  *(_QWORD *)(a1 + 56) = *a2;
  if ( v4 )
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 24));
  *(_BYTE *)(a1 + 64) = 1;
  *(_QWORD *)(a1 + 68) = 0LL;
  if ( !*a2 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      36LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\magnifier\\server\\magnifierclientproxy.cpp",
      a4);
    __debugbreak();
  }
  return a1;
}
