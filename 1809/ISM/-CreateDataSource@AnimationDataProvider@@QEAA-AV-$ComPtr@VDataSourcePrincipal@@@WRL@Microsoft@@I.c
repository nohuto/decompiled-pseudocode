/*
 * XREFs of ?CreateDataSource@AnimationDataProvider@@QEAA?AV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@I@Z @ 0x18009BC64
 * Callers:
 *     ?StartAnimation@DragNDropProcessor@@QEAAJKPEAVBamoDragManagerClientProxy@@@Z @ 0x180025070 (-StartAnimation@DragNDropProcessor@@QEAAJKPEAVBamoDragManagerClientProxy@@@Z.c)
 *     ?CreateCursorShapeAnimation@SystemCursorService@@QEAAJIK_K0@Z @ 0x180095B94 (-CreateCursorShapeAnimation@SystemCursorService@@QEAAJIK_K0@Z.c)
 *     ?CreateCustomCursorShapeAnimation@SystemCursorService@@QEAAJIK_K@Z @ 0x180095F4C (-CreateCustomCursorShapeAnimation@SystemCursorService@@QEAAJIK_K@Z.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800035E4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003618 (-FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003640 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??0BamoPrincipalImpl@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnection@Bamo@2@@Z @ 0x18001B270 (--0BamoPrincipalImpl@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnection@Bamo@2@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18012C18C (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall AnimationDataProvider::CreateDataSource(__int64 a1, _QWORD *a2, unsigned int a3)
{
  __int64 v6; // rsi
  __int64 v7; // r15
  __int64 v8; // rbx
  DWORD CurrentThreadId; // eax
  const char *v10; // r9
  __int64 v12; // rbp
  int v13; // edx
  const char *v14; // r9
  __int64 i; // rcx
  _QWORD *v16; // rsi
  struct Microsoft::Bamo::BaseBamoConnection *v17; // rdx
  const char *v18; // r9
  int v19; // eax
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  struct _LUID Luid; // [rsp+80h] [rbp+8h] BYREF
  _QWORD *v23; // [rsp+88h] [rbp+10h]
  _QWORD *v24; // [rsp+98h] [rbp+20h]

  v23 = a2;
  v6 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 32LL) + 16LL);
  v7 = *(_QWORD *)(a1 + 16);
  v8 = *(_QWORD *)(*(_QWORD *)(v7 + 32) + 24LL);
  CurrentThreadId = GetCurrentThreadId();
  if ( *(_DWORD *)(v8 + 136) != CurrentThreadId && *(_DWORD *)(v8 + 24) != CurrentThreadId )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x592,
      (__int64)"internal\\mincore\\priv_sdk\\inc\\bamoconnection.inl",
      v10);
    __debugbreak();
  }
  v12 = 0LL;
  v13 = *(_DWORD *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6) + 36);
  for ( i = *(_QWORD *)(v7 + 48); i && *(_DWORD *)(*(_QWORD *)(i + 40) + 36LL) != v13; i = *(_QWORD *)(i + 48) )
    ;
  if ( i && (i & -(__int64)(*(_BYTE *)(i + 32) != 0)) != 0 )
    v12 = (i & -(__int64)(*(_BYTE *)(i + 32) != 0)) - 16;
  if ( !v12 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x6F,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\animationdataprovider\\animationdataprovider.cpp",
      v14);
    __debugbreak();
  }
  *a2 = 0LL;
  v16 = operator new(0x48uLL);
  v24 = v16;
  v17 = *(struct Microsoft::Bamo::BaseBamoConnection **)a1;
  *v16 = &BamoDataSourcePrincipal::`vftable'{for `Microsoft::Bamo::BamoPrincipal'};
  v16[1] = &BamoDataSourcePrincipal::`vftable'{for `IDataSourcePrincipal'};
  Microsoft::BamoImpl::BamoPrincipalImpl::BamoPrincipalImpl((Microsoft::BamoImpl::BamoPrincipalImpl *)(v16 + 2), v17);
  v16[2] = &BamoImpl::BamoDataSourcePrincipalImpl::`vftable';
  v16[7] = 0LL;
  *((_DWORD *)v16 + 16) = 0;
  *v16 = &DataSourcePrincipal::`vftable'{for `Microsoft::Bamo::BamoPrincipal'};
  v16[1] = &BamoDataSourcePrincipal::`vftable'{for `IDataSourcePrincipal'};
  if ( *a2 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 8LL))(*a2);
  *a2 = v16;
  if ( !AllocateLocallyUniqueId(&Luid) )
  {
    wil::details::in1diag3::FailFast_GetLastError(
      retaddr,
      (void *)0x7A,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\animationdataprovider\\animationdataprovider.cpp",
      v18);
    JUMPOUT(0x18009BE6ELL);
  }
  (*(void (__fastcall **)(__int64, struct _LUID *))(*(_QWORD *)(*a2 + 8LL) + 104LL))(*a2 + 8LL, &Luid);
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(*a2 + 8LL) + 120LL))(*a2 + 8LL, a3);
  v19 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(v12 + 8) + 24LL))(v12 + 8, *a2);
  if ( v19 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x85,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\animationdataprovider\\animationdataprovider.cpp",
      (const char *)(unsigned int)v19);
    __debugbreak();
  }
  return a2;
}
