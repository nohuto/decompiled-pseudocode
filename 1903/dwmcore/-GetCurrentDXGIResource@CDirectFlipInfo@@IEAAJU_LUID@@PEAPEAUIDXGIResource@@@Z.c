/*
 * XREFs of ?GetCurrentDXGIResource@CDirectFlipInfo@@IEAAJU_LUID@@PEAPEAUIDXGIResource@@@Z @ 0x180194784
 * Callers:
 *     ?Activate@CDirectFlipInfo@@UEAAJXZ @ 0x180193D70 (-Activate@CDirectFlipInfo@@UEAAJXZ.c)
 * Callees:
 *     ?GetAdapterLuid@CBitmapRealization@@QEBA?AU_LUID@@XZ @ 0x18003DB94 (-GetAdapterLuid@CBitmapRealization@@QEBA-AU_LUID@@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDirectFlipInfo::GetCurrentDXGIResource(
        CDirectFlipInfo *this,
        struct _LUID a2,
        struct IDXGIResource **a3)
{
  DWORD LowPart; // ebx
  CBitmapRealization *v5; // rax
  __int64 HighPart; // rcx
  struct _LUID AdapterLuid; // rax
  _QWORD *v8; // r9
  signed int v9; // eax
  __int64 v10; // rcx
  unsigned int v11; // ebx
  struct _LUID v13; // [rsp+40h] [rbp+8h] BYREF
  struct _LUID v14; // [rsp+48h] [rbp+10h]

  v14 = a2;
  *a3 = 0LL;
  LowPart = a2.LowPart;
  v5 = (CBitmapRealization *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 4) + 40LL))(*((_QWORD *)this + 4));
  if ( v5
    && (AdapterLuid = CBitmapRealization::GetAdapterLuid(v5, &v13), *(_DWORD *)AdapterLuid.LowPart == LowPart)
    && (HighPart = (unsigned int)v14.HighPart, *(_DWORD *)(*(_QWORD *)&AdapterLuid + 4LL) == v14.HighPart) )
  {
    v9 = (*(__int64 (__fastcall **)(_QWORD *, struct IDXGIResource **, _QWORD))(*v8 + 56LL))(v8, a3, 0LL);
    v11 = v9;
    if ( v9 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x1E5u, 0LL);
  }
  else
  {
    v11 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(HighPart, 0LL, 0, 0x80004005, 0x1E9u, 0LL);
  }
  return v11;
}
