/*
 * XREFs of ?SetBootstrapProxy@AnimationDataProvider@@QEAAXPEAVBamoProxy@Bamo@Microsoft@@@Z @ 0x18009BA98
 * Callers:
 *     ?SetBootstrapProxy@AnimationDataProviderConnection@@MEAAJPEAVBamoProxy@Bamo@Microsoft@@@Z @ 0x18009CE30 (-SetBootstrapProxy@AnimationDataProviderConnection@@MEAAJPEAVBamoProxy@Bamo@Microsoft@@@Z.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800035E4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003618 (-FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003640 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??0BamoPrincipalImpl@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnection@Bamo@2@@Z @ 0x18001B270 (--0BamoPrincipalImpl@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnection@Bamo@2@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18012C18C (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall AnimationDataProvider::SetBootstrapProxy(
        AnimationDataProvider *this,
        struct Microsoft::Bamo::BamoProxy *a2)
{
  int v4; // eax
  __int64 v5; // rcx
  _QWORD *v6; // rsi
  struct Microsoft::Bamo::BaseBamoConnection *v7; // rdx
  const char *v8; // r9
  __int64 v9; // rcx
  const char *v10; // r9
  int v11; // eax
  __int64 v12; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v14; // [rsp+58h] [rbp+10h] BYREF
  _LUID Luid; // [rsp+60h] [rbp+18h] BYREF
  _QWORD *v16; // [rsp+68h] [rbp+20h]

  v14 = 0LL;
  v4 = (*(__int64 (__fastcall **)(struct Microsoft::Bamo::BamoProxy *, GUID *, __int64 *))(*(_QWORD *)a2 + 16LL))(
         a2,
         &GUID_a9fa7235_98d0_fd42_aad0_f9b4ffe7b130,
         &v14);
  if ( v4 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x48,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\animationdataprovider\\animationdataprovider.cpp",
      (const char *)(unsigned int)v4);
    __debugbreak();
  }
  if ( *((struct Microsoft::Bamo::BamoProxy **)this + 1) != a2 )
  {
    (**(void (__fastcall ***)(struct Microsoft::Bamo::BamoProxy *))a2)(a2);
    v5 = *((_QWORD *)this + 1);
    *((_QWORD *)this + 1) = a2;
    if ( v5 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
  }
  v6 = operator new(0x40uLL);
  v16 = v6;
  v7 = *(struct Microsoft::Bamo::BaseBamoConnection **)this;
  *v6 = &BamoDataProviderPrincipal::`vftable'{for `Microsoft::Bamo::BamoPrincipal'};
  v6[1] = &BamoDataProviderPrincipal::`vftable'{for `IDataProviderPrincipal'};
  Microsoft::BamoImpl::BamoPrincipalImpl::BamoPrincipalImpl((Microsoft::BamoImpl::BamoPrincipalImpl *)(v6 + 2), v7);
  v6[2] = &BamoImpl::BamoDataProviderPrincipalImpl::`vftable';
  v6[7] = 0LL;
  *v6 = &DataProviderPrincipal::`vftable'{for `Microsoft::Bamo::BamoPrincipal'};
  v6[1] = &BamoDataProviderPrincipal::`vftable'{for `IDataProviderPrincipal'};
  v9 = *((_QWORD *)this + 2);
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
  *((_QWORD *)this + 2) = v6;
  if ( !v6 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x4E,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\animationdataprovider\\animationdataprovider.cpp",
      v8);
    __debugbreak();
  }
  if ( !AllocateLocallyUniqueId(&Luid) )
  {
    wil::details::in1diag3::FailFast_GetLastError(
      retaddr,
      (void *)0x55,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\animationdataprovider\\animationdataprovider.cpp",
      v10);
    JUMPOUT(0x18009BC5CLL);
  }
  (*(void (__fastcall **)(__int64, _LUID *))(*(_QWORD *)(*((_QWORD *)this + 2) + 8LL) + 48LL))(
    *((_QWORD *)this + 2) + 8LL,
    &Luid);
  v11 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(*((_QWORD *)this + 1) + 8LL) + 24LL))(
          *((_QWORD *)this + 1) + 8LL,
          *((_QWORD *)this + 2));
  if ( v11 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x5F,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\animationdataprovider\\animationdataprovider.cpp",
      (const char *)(unsigned int)v11);
    __debugbreak();
  }
  v12 = v14;
  if ( v14 )
  {
    v14 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
}
