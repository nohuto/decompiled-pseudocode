/*
 * XREFs of LdrpVerifyAlternateResourceModuleEx @ 0x140177CF8
 * Callers:
 *     LdrLoadAlternateResourceModuleEx @ 0x1400F40EC (LdrLoadAlternateResourceModuleEx.c)
 * Callees:
 *     LdrpGetRcConfig @ 0x1400F3FB0 (LdrpGetRcConfig.c)
 *     _wcsicmp @ 0x140195A70 (_wcsicmp.c)
 *     LdrResGetRCConfig @ 0x14071C424 (LdrResGetRCConfig.c)
 */

bool __fastcall LdrpVerifyAlternateResourceModuleEx(void *a1, void *a2, _DWORD *a3, const wchar_t *a4, int a5)
{
  __int64 v7; // rdx
  _DWORD *RcConfig; // rbx
  _DWORD *v9; // rcx
  __int64 v10; // rdx
  _DWORD *v12; // [rsp+30h] [rbp-18h] BYREF
  _DWORD *v13; // [rsp+60h] [rbp+18h] BYREF

  v13 = a3;
  if ( (a5 & 0x1000) != 0 )
  {
    if ( (int)LdrResGetRCConfig((_DWORD)a1, 0, (unsigned int)&v13, 4096, 1) < 0
      || (int)LdrResGetRCConfig((_DWORD)a2, 0, (unsigned int)&v12, 4096, 0) < 0 )
    {
      return 0;
    }
    RcConfig = v13;
    v9 = v12;
  }
  else
  {
    RcConfig = LdrpGetRcConfig(a1, (__int64)a2, 0, 1);
    if ( !RcConfig )
      return 0;
    v9 = LdrpGetRcConfig(a2, v7, 0, 0);
    if ( !v9 )
      return 0;
  }
  v10 = *(_QWORD *)(RcConfig + 11) - *(_QWORD *)(v9 + 11);
  if ( !v10 )
    v10 = *(_QWORD *)(RcConfig + 13) - *(_QWORD *)(v9 + 13);
  return !v10 && ((a5 & 0x1000000) != 0 || a4 && !wcsicmp(a4, (const wchar_t *)((char *)v9 + (unsigned int)v9[29])));
}
