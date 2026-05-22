/*
 * XREFs of ?SendMaterializeProxy@BamoSystemCursorControllerPrincipalImpl@BamoImpl@@UEAAXPEAUIMessageCallSendHost@@PEAVBamoStubImpl@2Microsoft@@@Z @ 0x180005080
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002DDA4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall BamoImpl::BamoSystemCursorControllerPrincipalImpl::SendMaterializeProxy(
        BamoImpl::BamoSystemCursorControllerPrincipalImpl *this,
        struct IMessageCallSendHost *a2,
        struct Microsoft::BamoImpl::BamoStubImpl *a3)
{
  __int64 v3; // rsi
  int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rax
  unsigned int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // [rsp+20h] [rbp-48h]
  __int64 v15; // [rsp+40h] [rbp-28h] BYREF
  __int64 v16; // [rsp+48h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v3 = *((_QWORD *)a3 + 5);
  v15 = *(unsigned int *)(v3 + 36);
  v16 = *(unsigned int *)(v3 + 40);
  LOWORD(v14) = 34;
  v7 = CoreUICallSend(a2, &v15, 2LL, 57LL);
  if ( v7 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x3494,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\objfre\\amd64\\ISMBamos.bamo.h",
      (const char *)(unsigned int)v7,
      v14);
    __debugbreak();
  }
  v8 = *(_QWORD *)(*((_QWORD *)this + 2) + 24LL);
  if ( *(_QWORD *)(v8 + 40) )
  {
    v9 = *(_QWORD *)(v8 + 48);
    v10 = *((unsigned int *)this + 6);
    v15 = *(unsigned int *)(*((_QWORD *)a3 + 5) + 36LL);
    v16 = v10;
    LOWORD(v14) = 0;
    v11 = CoreUICallSend(v9, &v15, 2LL, 48LL);
    if ( (int)(v11 + 0x80000000) >= 0 && v11 != -2018375675 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x34ED,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\objfre\\amd64\\ISMBamos.bamo.h",
        (const char *)v11,
        v14);
      __debugbreak();
    }
  }
  v12 = (*(__int64 (__fastcall **)(struct Microsoft::BamoImpl::BamoStubImpl *))(*(_QWORD *)a3 + 32LL))(a3);
  if ( v12 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x34A2,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\objfre\\amd64\\ISMBamos.bamo.h",
      (const char *)(unsigned int)v12,
      v14);
    __debugbreak();
  }
  v15 = *(unsigned int *)(v3 + 36);
  v16 = *(unsigned int *)(v3 + 40);
  LOWORD(v14) = 41;
  v13 = CoreUICallSend(a2, &v15, 2LL, 57LL);
  if ( v13 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x34AD,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\objfre\\amd64\\ISMBamos.bamo.h",
      (const char *)(unsigned int)v13,
      v14);
    __debugbreak();
  }
}
