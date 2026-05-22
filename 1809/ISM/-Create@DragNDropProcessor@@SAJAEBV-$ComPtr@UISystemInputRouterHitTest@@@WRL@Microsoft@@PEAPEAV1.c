/*
 * XREFs of ?Create@DragNDropProcessor@@SAJAEBV?$ComPtr@UISystemInputRouterHitTest@@@WRL@Microsoft@@PEAPEAV1@@Z @ 0x1800232EC
 * Callers:
 *     ?Initialize@DWMInputRouter@@IEAAJXZ @ 0x180087644 (-Initialize@DWMInputRouter@@IEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800035E4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003640 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ @ 0x18000C384 (-GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ.c)
 *     ??0DragNDropProcessor@@AEAA@AEBV?$ComPtr@UISystemInputRouterHitTest@@@WRL@Microsoft@@@Z @ 0x180022D6C (--0DragNDropProcessor@@AEAA@AEBV-$ComPtr@UISystemInputRouterHitTest@@@WRL@Microsoft@@@Z.c)
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall DragNDropProcessor::Create(__int64 *a1, LARGE_INTEGER **a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rdx
  void *v6; // rax
  __int64 v7; // rdi
  LARGE_INTEGER *v8; // rdi
  LARGE_INTEGER *v9; // rsi
  LARGE_INTEGER v10; // rcx
  int v11; // eax
  const char *v12; // r9
  struct InputSystemServerConnection *BamoServerConnection; // rax
  __int64 v14; // rsi
  __int64 v15; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v4 = 0;
  if ( !a2 )
  {
    v4 = -2147024809;
    v5 = 126LL;
LABEL_10:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\dragndrop\\system\\lib\\dragn"
               "dropprocessor.cpp",
      (const char *)v4);
    return v4;
  }
  v6 = malloc(0x190uLL);
  v7 = (__int64)v6;
  if ( v6 )
    memset_0(v6, 0, 0x190uLL);
  if ( v7 )
    v8 = (LARGE_INTEGER *)DragNDropProcessor::DragNDropProcessor(v7, a1);
  else
    v8 = 0LL;
  if ( !v8 )
  {
    v4 = -2147024882;
    v5 = 130LL;
    goto LABEL_10;
  }
  v9 = v8 + 4;
  v10 = v8[4];
  if ( v10.QuadPart )
  {
    v9->QuadPart = 0LL;
    (*(void (__fastcall **)(LARGE_INTEGER))(*(_QWORD *)v10.QuadPart + 16LL))(v10);
  }
  v11 = CoreUICreate(&v8[4]);
  if ( v11 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x67,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\dragndrop\\system\\lib\\dragn"
               "dropprocessor.cpp",
      (const char *)(unsigned int)v11);
    JUMPOUT(0x18002345FLL);
  }
  if ( !v9->QuadPart )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x68,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\dragndrop\\system\\lib\\dragn"
               "dropprocessor.cpp",
      v12);
    __debugbreak();
  }
  BamoServerConnection = ISMStatics::GetBamoServerConnection();
  v14 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)BamoServerConnection + 19) + 8LL) + 24LL))(*((_QWORD *)BamoServerConnection + 19) + 8LL);
  if ( *(LARGE_INTEGER **)(v14 + 56) != v8 )
  {
    (*(void (__fastcall **)(LARGE_INTEGER *))(v8->QuadPart + 8))(v8);
    v15 = *(_QWORD *)(v14 + 56);
    *(_QWORD *)(v14 + 56) = v8;
    if ( v15 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  }
  QueryPerformanceFrequency(v8 + 30);
  *a2 = v8;
  return v4;
}
