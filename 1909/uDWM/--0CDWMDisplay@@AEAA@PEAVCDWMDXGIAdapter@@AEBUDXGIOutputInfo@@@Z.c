/*
 * XREFs of ??0CDWMDisplay@@AEAA@PEAVCDWMDXGIAdapter@@AEBUDXGIOutputInfo@@@Z @ 0x18002C00C
 * Callers:
 *     ?EnumerateOutputs@CDWMDisplaySet@@AEAAJXZ @ 0x18002BBC4 (-EnumerateOutputs@CDWMDisplaySet@@AEAAJXZ.c)
 * Callees:
 *     ?ForceHighColor@@YAKXZ @ 0x18002C2B0 (-ForceHighColor@@YAKXZ.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_RgbaSwapChains@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x18002C2F8 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_RgbaSwapChains@@@wil@@CAX_NW4Reporti.c)
 *     __security_check_cookie @ 0x18004E0C0 (__security_check_cookie.c)
 *     memset_0 @ 0x18004FB12 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x18004FB50 (_guard_dispatch_icall_nop.c)
 */

CDWMDisplay *__fastcall CDWMDisplay::CDWMDisplay(
        CDWMDisplay *this,
        struct CDWMDXGIAdapter *a2,
        const struct DXGIOutputInfo *a3)
{
  _WORD *v6; // rcx
  __int64 v7; // rdx
  int v8; // esi
  __int16 v9; // ax
  _WORD *v10; // rax
  int v11; // eax
  unsigned int v12; // eax
  unsigned int v13; // eax
  int v14; // eax
  CDWMDisplay *result; // rax
  int v16; // esi
  __int128 v17; // [rsp+20h] [rbp-89h] BYREF
  _BYTE v18[96]; // [rsp+30h] [rbp-79h] BYREF
  __int64 v19; // [rsp+90h] [rbp-19h]

  *(_QWORD *)&v17 = 0LL;
  memset_0(v18, 0, 0x98uLL);
  *(_DWORD *)this = 1;
  v6 = (_WORD *)((char *)this + 96);
  v7 = 32LL;
  v8 = 2;
  *((_BYTE *)this + 164) = (*((_DWORD *)a3 + 50) & 2) != 0;
  *((_QWORD *)this + 21) = *((_QWORD *)a2 + 42);
  *((_DWORD *)this + 44) = *((_DWORD *)a3 + 32);
  *((_QWORD *)this + 2) = *((_QWORD *)a3 + 13);
  *((_QWORD *)this + 11) = 0LL;
  *((_BYTE *)this + 220) = (*((_DWORD *)a3 + 50) & 4) != 0;
  *((_BYTE *)this + 221) = (*((_DWORD *)a3 + 50) & 8) != 0;
  do
  {
    v9 = *(_WORD *)((char *)v6 + a3 - (CDWMDisplay *)((char *)this + 96) + 204);
    if ( !v9 )
      break;
    *v6++ = v9;
    --v7;
  }
  while ( v7 );
  v10 = v6 - 1;
  if ( v7 )
    v10 = v6;
  *v10 = 0;
  if ( ((*((_DWORD *)a3 + 40) - 2) & 0xFFFFFFFD) != 0 )
  {
    *((_DWORD *)this + 45) = *((_DWORD *)a3 + 35);
    v11 = *((_DWORD *)a3 + 36);
  }
  else
  {
    *((_DWORD *)this + 45) = *((_DWORD *)a3 + 36);
    v11 = *((_DWORD *)a3 + 35);
  }
  *((_DWORD *)this + 46) = v11;
  if ( (***(int (__fastcall ****)(_QWORD, GUID *, __int128 *))a3)(
         *(_QWORD *)a3,
         &GUID_068346e8_aaec_4b84_add7_137f513f77a1,
         &v17) < 0
    || (*(int (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)v17 + 216LL))(v17, v18) < 0 )
  {
    v19 = 8LL;
  }
  if ( (_QWORD)v17 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v17 + 16LL))(v17);
    *(_QWORD *)&v17 = 0LL;
  }
  if ( ForceHighColor() )
    v19 = 0xC0000000ALL;
  v12 = ForceHighColor() - 1;
  if ( v12 )
  {
    v13 = v12 - 1;
    if ( v13 )
    {
      if ( v13 != 1 )
        v8 = *((_DWORD *)a3 + 70);
    }
    else
    {
      v8 = 1;
    }
  }
  else
  {
    v8 = (*((_DWORD *)a2 + 74) != 32902) + 1;
  }
  if ( !v8 )
    goto LABEL_19;
  v16 = v8 - 1;
  if ( !v16 )
  {
    *((_DWORD *)this + 49) = 24;
    *((_DWORD *)this + 53) = 12;
    goto LABEL_20;
  }
  if ( v16 == 1 )
  {
    *((_DWORD *)this + 49) = 10;
    *((_DWORD *)this + 53) = 1;
  }
  else
  {
LABEL_19:
    wil::Feature<__WilFeatureTraits_Feature_RgbaSwapChains>::ReportUsageToService();
    *((_DWORD *)this + 49) = 87;
    *((_DWORD *)this + 53) = 0;
  }
LABEL_20:
  *((_DWORD *)this + 47) = *((_DWORD *)a3 + 38);
  *((_DWORD *)this + 48) = *((_DWORD *)a3 + 39);
  *((_DWORD *)this + 52) = *((_DWORD *)a3 + 40);
  *((_DWORD *)this + 54) = *((_DWORD *)a3 + 67);
  *((_DWORD *)this + 50) = *((_DWORD *)a3 + 41);
  *((_DWORD *)this + 51) = 0;
  *((_QWORD *)this + 3) = 0LL;
  *((_DWORD *)this + 8) = *((_DWORD *)a3 + 35);
  *((_DWORD *)this + 9) = *((_DWORD *)a3 + 36);
  v14 = *((_DWORD *)a3 + 46);
  HIDWORD(v17) = *((_DWORD *)a3 + 49);
  LODWORD(v17) = v14;
  *(_QWORD *)((char *)&v17 + 4) = *(_QWORD *)((char *)a3 + 188);
  result = this;
  *(_OWORD *)((char *)this + 56) = v17;
  v17 = *(_OWORD *)((char *)a3 + 168);
  *(_OWORD *)((char *)this + 40) = v17;
  return result;
}
