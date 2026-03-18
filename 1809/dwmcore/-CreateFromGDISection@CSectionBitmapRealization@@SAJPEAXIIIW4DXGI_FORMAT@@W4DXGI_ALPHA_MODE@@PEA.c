/*
 * XREFs of ?CreateFromGDISection@CSectionBitmapRealization@@SAJPEAXIIIW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@PEAPEAVCBitmapRealization@@@Z @ 0x180091C04
 * Callers:
 *     ?CreateSectionBitmap@CGdiSpriteBitmap@@IEAAJPEAXII@Z @ 0x180091A50 (-CreateSectionBitmap@CGdiSpriteBitmap@@IEAAJPEAXII@Z.c)
 * Callees:
 *     ??0CSectionBitmapRealization@@IEAA@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@AEBUCSM_SYSMEM_SECTION_INFO@@_N@Z @ 0x180091D10 (--0CSectionBitmapRealization@@IEAA@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@AEBUCSM_.c)
 *     ??2CSectionBitmapRealization@@KAPEAX_K@Z @ 0x180091DC0 (--2CSectionBitmapRealization@@KAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     memset_0 @ 0x1800EC516 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSectionBitmapRealization::CreateFromGDISection(
        HANDLE hObject,
        int a2,
        int a3,
        int a4,
        enum DXGI_FORMAT a5,
        enum DXGI_ALPHA_MODE a6,
        struct CBitmapRealization **a7)
{
  unsigned __int64 v11; // rcx
  CSectionBitmapRealization *v12; // rax
  unsigned int v13; // ecx
  struct CBitmapRealization *v14; // rbx
  int v15; // eax
  unsigned int v16; // ecx
  unsigned int v17; // edi
  HANDLE v19; // [rsp+38h] [rbp-91h] BYREF
  int v20; // [rsp+40h] [rbp-89h]
  int v21; // [rsp+44h] [rbp-85h]
  int v22; // [rsp+48h] [rbp-81h]
  enum DXGI_FORMAT v23; // [rsp+4Ch] [rbp-7Dh]
  _DWORD v24[10]; // [rsp+50h] [rbp-79h] BYREF
  _DWORD v25[32]; // [rsp+78h] [rbp-51h] BYREF

  memset_0(v25, 0, 0x78uLL);
  memset_0(v24, 0, 0x20uLL);
  v25[11] = 0;
  *a7 = 0LL;
  v25[0] = a6;
  v23 = a5;
  v24[0] = 1;
  v19 = hObject;
  v20 = a2;
  v21 = a3;
  v22 = a4;
  v12 = (CSectionBitmapRealization *)CSectionBitmapRealization::operator new(v11);
  if ( v12 )
    v14 = CSectionBitmapRealization::CSectionBitmapRealization(
            v12,
            (const struct CSM_BUFFER_ATTRIBUTES *)v25,
            (const struct CSM_REALIZATION_INFO *)v24,
            (const struct CSM_SYSMEM_SECTION_INFO *)&v19,
            1);
  else
    v14 = 0LL;
  if ( v14 )
  {
    hObject = 0LL;
    (*(void (__fastcall **)(struct CBitmapRealization *))(*(_QWORD *)v14 + 8LL))(v14);
    v15 = (*(__int64 (__fastcall **)(struct CBitmapRealization *))(*(_QWORD *)v14 + 80LL))(v14);
    v17 = v15;
    if ( v15 >= 0 )
    {
      *a7 = v14;
      return v17;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0x57u);
  }
  else
  {
    v17 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, -2147024882, 0x51u);
  }
  if ( hObject )
    CloseHandle(hObject);
  if ( v14 )
    (*(void (__fastcall **)(struct CBitmapRealization *))(*(_QWORD *)v14 + 16LL))(v14);
  return v17;
}
