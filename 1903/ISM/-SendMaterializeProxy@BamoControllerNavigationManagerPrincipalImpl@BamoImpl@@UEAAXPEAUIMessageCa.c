/*
 * XREFs of ?SendMaterializeProxy@BamoControllerNavigationManagerPrincipalImpl@BamoImpl@@UEAAXPEAUIMessageCallSendHost@@PEAVBamoStubImpl@2Microsoft@@@Z @ 0x180005260
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002E124 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall BamoImpl::BamoControllerNavigationManagerPrincipalImpl::SendMaterializeProxy(
        BamoImpl::BamoControllerNavigationManagerPrincipalImpl *this,
        struct IMessageCallSendHost *a2,
        struct Microsoft::BamoImpl::BamoStubImpl *a3)
{
  __int64 v3; // rsi
  int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rax
  unsigned int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rax
  unsigned int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // [rsp+20h] [rbp-58h]
  __int64 v19; // [rsp+40h] [rbp-38h] BYREF
  __int64 v20; // [rsp+48h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v3 = *((_QWORD *)a3 + 5);
  v19 = *(unsigned int *)(v3 + 36);
  v20 = *(unsigned int *)(v3 + 40);
  LOWORD(v18) = 7;
  v7 = CoreUICallSend(a2, &v19, 2LL, 57LL);
  if ( v7 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xF3D4,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\objfre\\amd64\\ISMBamos.bamo.h",
      (const char *)(unsigned int)v7,
      v18);
    __debugbreak();
  }
  v8 = *(_QWORD *)(*((_QWORD *)this + 2) + 24LL);
  if ( *(_QWORD *)(v8 + 40) )
  {
    v9 = *(_QWORD *)(v8 + 48);
    v10 = *((unsigned int *)this + 6);
    v19 = *(unsigned int *)(*((_QWORD *)a3 + 5) + 36LL);
    v20 = v10;
    LOWORD(v18) = 0;
    v11 = CoreUICallSend(v9, &v19, 2LL, 10LL);
    if ( ((v11 + 0x80000000) & 0x80000000) == 0 && v11 != -2018375675 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0xF42F,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\objfre\\amd64\\ISMBamos.bamo.h",
        (const char *)v11,
        v18);
      __debugbreak();
    }
  }
  v12 = *(_QWORD *)(*((_QWORD *)this + 2) + 24LL);
  if ( *(_QWORD *)(v12 + 40) )
  {
    v13 = *(_QWORD *)(v12 + 48);
    v14 = *((unsigned int *)this + 6);
    v19 = *(unsigned int *)(*((_QWORD *)a3 + 5) + 36LL);
    v20 = v14;
    LOWORD(v18) = 1;
    v15 = CoreUICallSend(v13, &v19, 2LL, 10LL);
    if ( ((v15 + 0x80000000) & 0x80000000) == 0 && v15 != -2018375675 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0xF455,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\objfre\\amd64\\ISMBamos.bamo.h",
        (const char *)v15,
        v18);
      __debugbreak();
    }
  }
  v16 = (*(__int64 (__fastcall **)(struct Microsoft::BamoImpl::BamoStubImpl *))(*(_QWORD *)a3 + 32LL))(a3);
  if ( v16 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xF3E4,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\objfre\\amd64\\ISMBamos.bamo.h",
      (const char *)(unsigned int)v16,
      v18);
    __debugbreak();
  }
  v19 = *(unsigned int *)(v3 + 36);
  v20 = *(unsigned int *)(v3 + 40);
  LOWORD(v18) = 41;
  v17 = CoreUICallSend(a2, &v19, 2LL, 57LL);
  if ( v17 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xF3EF,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\objfre\\amd64\\ISMBamos.bamo.h",
      (const char *)(unsigned int)v17,
      v18);
    __debugbreak();
  }
}
