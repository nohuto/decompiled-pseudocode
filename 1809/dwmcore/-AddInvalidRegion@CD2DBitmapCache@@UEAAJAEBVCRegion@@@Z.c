/*
 * XREFs of ?AddInvalidRegion@CD2DBitmapCache@@UEAAJAEBVCRegion@@@Z @ 0x180067AE0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD2DBitmapCache::AddInvalidRegion(CD2DBitmapCache *this, const struct CRegion *a2)
{
  int v3; // ebx
  __int64 v4; // rcx
  __int64 i; // rdi
  __int64 v8; // rcx
  int v9; // eax
  unsigned int v10; // ecx
  int v11; // ebp
  int v12; // eax
  unsigned int v13; // ecx

  v3 = 0;
  v4 = *((_QWORD *)this + 4);
  if ( v4 )
  {
    v12 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v4 + 16) + 32LL))(v4 + 16);
    v3 = v12;
    if ( v12 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x34u);
  }
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 16); i = (unsigned int)(i + 1) )
  {
    v8 = *(_QWORD *)(*((_QWORD *)this + 5) + 8 * i) + 264LL;
    v9 = (*(__int64 (__fastcall **)(__int64, const struct CRegion *))(*(_QWORD *)v8 + 32LL))(v8, a2);
    v11 = v9;
    if ( v9 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x3Bu);
    if ( !v3 || v3 >= 0 && v11 < 0 )
      v3 = v11;
  }
  return (unsigned int)v3;
}
