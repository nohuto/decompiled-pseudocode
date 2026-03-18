/*
 * XREFs of ?SendMaterializeProxy@BamoDataProviderRegistrarPrincipalImpl@BamoImpl@@UEAAXPEAUIMessageCallSendHost@@PEAVBamoStubImpl@2Microsoft@@@Z @ 0x1800793C0
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800EE364 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall BamoImpl::BamoDataProviderRegistrarPrincipalImpl::SendMaterializeProxy(
        BamoImpl::BamoDataProviderRegistrarPrincipalImpl *this,
        struct IMessageCallSendHost *a2,
        struct Microsoft::BamoImpl::BamoStubImpl *a3)
{
  __int64 v3; // rdi
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // [rsp+20h] [rbp-48h]
  int v10; // [rsp+20h] [rbp-48h]
  __int64 v11; // [rsp+40h] [rbp-28h] BYREF
  __int64 v12; // [rsp+48h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v3 = *((_QWORD *)a3 + 5);
  v11 = *(unsigned int *)(v3 + 36);
  v12 = *(unsigned int *)(v3 + 40);
  v6 = CoreUICallSend(a2, &v11, 2LL, 6LL, 2, &unk_18027732D);
  if ( v6 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x2002,
      (unsigned int)"onecoreuap\\windows\\DWM\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
      (const char *)(unsigned int)v6,
      v9);
    __debugbreak();
  }
  v7 = (*(__int64 (__fastcall **)(struct Microsoft::BamoImpl::BamoStubImpl *))(*(_QWORD *)a3 + 32LL))(a3);
  if ( v7 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x200D,
      (unsigned int)"onecoreuap\\windows\\DWM\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
      (const char *)(unsigned int)v7,
      v9);
    __debugbreak();
  }
  v11 = *(unsigned int *)(v3 + 36);
  v12 = *(unsigned int *)(v3 + 40);
  v8 = CoreUICallSend(a2, &v11, 2LL, 6LL, 4, &unk_18027732D);
  if ( v8 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x2018,
      (unsigned int)"onecoreuap\\windows\\DWM\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
      (const char *)(unsigned int)v8,
      v10);
    __debugbreak();
  }
}
