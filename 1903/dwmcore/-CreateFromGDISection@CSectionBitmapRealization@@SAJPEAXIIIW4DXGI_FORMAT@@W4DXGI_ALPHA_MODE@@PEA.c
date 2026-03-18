/*
 * XREFs of ?CreateFromGDISection@CSectionBitmapRealization@@SAJPEAXIIIW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@PEAPEAVCBitmapRealization@@@Z @ 0x1800CDA10
 * Callers:
 *     ?CreateSectionBitmap@CGdiSpriteBitmap@@AEAAJPEAXII@Z @ 0x1800CD874 (-CreateSectionBitmap@CGdiSpriteBitmap@@AEAAJPEAXII@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1800881C4 (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CSectionBitmapRealization@@IEAA@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@AEBUCSM_SYSMEM_SECTION_INFO@@_N@Z @ 0x1800CDB18 (--0CSectionBitmapRealization@@IEAA@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@AEBUCSM_.c)
 *     memset_0 @ 0x1800E7E5E (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
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
  CSectionBitmapRealization *v11; // rax
  __int64 v12; // rcx
  struct CBitmapRealization *v13; // rbx
  signed int v14; // eax
  __int64 v15; // rcx
  unsigned int v16; // edi
  HANDLE v18; // [rsp+38h] [rbp-91h] BYREF
  int v19; // [rsp+40h] [rbp-89h]
  int v20; // [rsp+44h] [rbp-85h]
  int v21; // [rsp+48h] [rbp-81h]
  enum DXGI_FORMAT v22; // [rsp+4Ch] [rbp-7Dh]
  _DWORD v23[10]; // [rsp+50h] [rbp-79h] BYREF
  _DWORD v24[32]; // [rsp+78h] [rbp-51h] BYREF

  memset_0(v24, 0, 0x78uLL);
  memset_0(v23, 0, 0x20uLL);
  v24[11] = 0;
  v24[0] = a6;
  *a7 = 0LL;
  v23[0] = 1;
  v18 = hObject;
  v19 = a2;
  v20 = a3;
  v21 = a4;
  v22 = a5;
  v11 = (CSectionBitmapRealization *)operator new(0x1D8uLL);
  if ( v11 )
    v13 = CSectionBitmapRealization::CSectionBitmapRealization(
            v11,
            (const struct CSM_BUFFER_ATTRIBUTES *)v24,
            (const struct CSM_REALIZATION_INFO *)v23,
            (const struct CSM_SYSMEM_SECTION_INFO *)&v18,
            1);
  else
    v13 = 0LL;
  if ( v13 )
  {
    hObject = 0LL;
    (*(void (__fastcall **)(struct CBitmapRealization *))(*(_QWORD *)v13 + 8LL))(v13);
    v14 = (*(__int64 (__fastcall **)(struct CBitmapRealization *))(*(_QWORD *)v13 + 80LL))(v13);
    v16 = v14;
    if ( v14 >= 0 )
    {
      *a7 = v13;
      return v16;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x54u, 0LL);
  }
  else
  {
    v16 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, 0x8007000E, 0x4Eu, 0LL);
  }
  if ( hObject )
    CloseHandle(hObject);
  if ( v13 )
    (*(void (__fastcall **)(struct CBitmapRealization *))(*(_QWORD *)v13 + 16LL))(v13);
  return v16;
}
