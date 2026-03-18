/*
 * XREFs of ?CalcDpiOverride@DpiInternal@@YA?AUtagSIZE@@AEBU2@0@Z @ 0x1C000DF68
 * Callers:
 *     ?FillDpiInfo@@YAXAEBUtagSIZE@@0PEBU_DPI_SCALE_FACTOR_COLLECTION@@IIIHPEAU_DPI_INFORMATION@@@Z @ 0x1C000DC0C (-FillDpiInfo@@YAXAEBUtagSIZE@@0PEBU_DPI_SCALE_FACTOR_COLLECTION@@IIIHPEAU_DPI_INFORMATION@@@Z.c)
 * Callees:
 *     memset @ 0x1C0025440 (memset.c)
 *     ?CalcDpi@DpiInternal@@YA?AUtagSIZE@@AEBU2@0@Z @ 0x1C0047AA0 (-CalcDpi@DpiInternal@@YA-AUtagSIZE@@AEBU2@0@Z.c)
 */

struct tagSIZE __fastcall DpiInternal::CalcDpiOverride(
        DpiInternal *this,
        const struct tagSIZE *a2,
        const struct tagSIZE *a3)
{
  LONG cx; // ebx
  LONG cy; // edi
  const struct tagSIZE *v6; // r8
  __int64 v8; // [rsp+30h] [rbp-29h] BYREF
  int v9; // [rsp+38h] [rbp-21h]
  const wchar_t *v10; // [rsp+40h] [rbp-19h]
  __int64 *v11; // [rsp+48h] [rbp-11h]
  int v12; // [rsp+50h] [rbp-9h]
  int *v13; // [rsp+58h] [rbp-1h]
  int v14; // [rsp+60h] [rbp+7h]
  __int64 v15; // [rsp+68h] [rbp+Fh]
  int v16; // [rsp+70h] [rbp+17h]
  _BYTE v17[40]; // [rsp+78h] [rbp+1Fh] BYREF
  __int64 v18; // [rsp+C8h] [rbp+6Fh] BYREF
  int v19; // [rsp+D0h] [rbp+77h] BYREF
  struct tagSIZE v20; // [rsp+D8h] [rbp+7Fh] BYREF

  cx = a2->cx;
  cy = a2->cy;
  LODWORD(v18) = 0;
  v19 = 0;
  v8 = 0LL;
  v15 = 0LL;
  v16 = 0;
  v10 = L"UserPreferenceWidth";
  v9 = 292;
  v11 = &v18;
  v13 = &v19;
  v12 = 0x4000000;
  v14 = 4;
  memset(v17, 0, sizeof(v17));
  if ( (int)RtlQueryRegistryValuesEx(
              0LL,
              L"\\Registry\\Machine\\Software\\Microsoft\\Windows\\CurrentVersion\\Control Panel\\Theme",
              &v8,
              0LL,
              0LL) >= 0 )
  {
    cx = v18;
    cy = (unsigned int)(v18 * *((_DWORD *)this + 1)) / *(_DWORD *)this;
  }
  if ( cx && cy )
  {
    v20.cx = cx;
    v20.cy = cy;
    return DpiInternal::CalcDpi(this, &v20, v6);
  }
  else
  {
    v18 = 0LL;
    return 0LL;
  }
}
