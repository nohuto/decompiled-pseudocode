/*
 * XREFs of ?RuntimeClassInitialize@SpatialObjectDDIClientFactoryHelper@Holographic@Internal@Windows@@QEAAJXZ @ 0x1800ED730
 * Callers:
 *     ??$MakeAndInitialize@VSpatialObjectDDIClientFactoryHelper@Holographic@Internal@Windows@@UISpatialObjectDDIClientFactory@234@$$V@Details@WRL@Microsoft@@YAJPEAPEAUISpatialObjectDDIClientFactory@Holographic@Internal@Windows@@@Z @ 0x1800E9EC4 (--$MakeAndInitialize@VSpatialObjectDDIClientFactoryHelper@Holographic@Internal@Windows@@UISpatia.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010FD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800519D4 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUHINSTANCE__@@P6AHPEAU1@@Z$1?FreeLibrary@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUHINSTANCE__@@@Z @ 0x18008C654 (-reset@-$unique_storage@U-$resource_policy@PEAUHINSTANCE__@@P6AHPEAU1@@Z$1-FreeLibrary@@YAH0@ZU-.c)
 */

__int64 __fastcall Windows::Internal::Holographic::SpatialObjectDDIClientFactoryHelper::RuntimeClassInitialize(
        HMODULE *this)
{
  HMODULE LibraryW; // rax
  const char *v3; // r9
  HMODULE v4; // rcx
  __int64 v5; // rdx
  FARPROC ProcAddress; // rsi
  HMODULE v8; // rcx
  int v9; // eax
  unsigned int v10; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  LibraryW = LoadLibraryW(L"PerceptionDevice.dll");
  wil::details::unique_storage<wil::details::resource_policy<HINSTANCE__ *,int (*)(HINSTANCE__ *),&int FreeLibrary(HINSTANCE__ *),wistd::integral_constant<unsigned __int64,0>,HINSTANCE__ *,HINSTANCE__ *,0,std::nullptr_t>>::reset(
    this + 9,
    LibraryW);
  v4 = this[9];
  if ( !v4 )
  {
    v5 = 545LL;
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)v5,
             (__int64)"internal\\onecoreuapanalog\\inc\\spatialobjectddiclient.h",
             v3);
  }
  ProcAddress = GetProcAddress(v4, "CreateSpatialObjectDDIClientFactory");
  if ( !ProcAddress )
  {
    v5 = 548LL;
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)v5,
             (__int64)"internal\\onecoreuapanalog\\inc\\spatialobjectddiclient.h",
             v3);
  }
  v8 = this[10];
  this[10] = 0LL;
  if ( v8 )
    (*(void (__fastcall **)(HMODULE))(*(_QWORD *)v8 + 16LL))(v8);
  v9 = ((__int64 (__fastcall *)(__int64, HMODULE *))ProcAddress)(3LL, this + 10);
  v10 = v9;
  if ( v9 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x226,
    (__int64)"internal\\onecoreuapanalog\\inc\\spatialobjectddiclient.h",
    (const char *)(unsigned int)v9);
  return v10;
}
