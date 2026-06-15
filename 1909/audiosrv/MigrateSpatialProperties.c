/*
 * XREFs of MigrateSpatialProperties @ 0x1800514D4
 * Callers:
 *     ?MakeActive@CSpatialProperties@@QEAAJPEBG_NPEAUIPropertyStore@@@Z @ 0x1800511D4 (-MakeActive@CSpatialProperties@@QEAAJPEBG_NPEAUIPropertyStore@@@Z.c)
 * Callees:
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x18003E1F0 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     Create_SpatialAudioDevicePropertyWriter @ 0x180050F10 (Create_SpatialAudioDevicePropertyWriter.c)
 *     __security_check_cookie @ 0x180064BC0 (__security_check_cookie.c)
 *     memset_0 @ 0x180065BEE (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall MigrateSpatialProperties(struct IPropertyStore *a1, const unsigned __int16 *a2)
{
  __int64 result; // rax
  const GUID *v5; // r9
  unsigned int v6; // r8d
  unsigned int v7; // r9d
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // [rsp+38h] [rbp-D0h] BYREF
  PROPVARIANT pvar; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v12; // [rsp+48h] [rbp-C0h]
  __int64 v13; // [rsp+50h] [rbp-B8h]
  __int64 v14; // [rsp+58h] [rbp-B0h]
  int v15; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v16; // [rsp+6Ch] [rbp-9Ch]
  _OWORD v17[3]; // [rsp+74h] [rbp-94h]
  int v18; // [rsp+A4h] [rbp-64h]
  BOOL v19; // [rsp+ACh] [rbp-5Ch]
  unsigned __int16 v20[256]; // [rsp+B8h] [rbp-50h] BYREF
  unsigned __int16 v21[128]; // [rsp+2B8h] [rbp+1B0h] BYREF
  __int128 v22; // [rsp+3B8h] [rbp+2B0h]
  int v23; // [rsp+3C8h] [rbp+2C0h]
  int v24; // [rsp+3CCh] [rbp+2C4h]
  int v25; // [rsp+3D0h] [rbp+2C8h]
  int v26; // [rsp+3D4h] [rbp+2CCh]
  int v27; // [rsp+3D8h] [rbp+2D0h]
  int v28; // [rsp+3DCh] [rbp+2D4h]
  int v29; // [rsp+3E0h] [rbp+2D8h]
  __int128 v30; // [rsp+3E4h] [rbp+2DCh]
  __int16 v31; // [rsp+3F4h] [rbp+2ECh]
  __int16 v32; // [rsp+3F6h] [rbp+2EEh]
  __int16 v33; // [rsp+3F8h] [rbp+2F0h]

  v14 = -2LL;
  memset_0(&v15, 0, 0x48uLL);
  memset_0(v20, 0, 0x342uLL);
  v10 = 0LL;
  pvar = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  if ( ((int (__fastcall *)(struct IPropertyStore *, __int128 *, PROPVARIANT *))a1->lpVtbl->GetValue)(
         a1,
         &PKEY_SpatialAudio_Endpoint_Settings,
         &pvar) < 0 )
    goto LABEL_3;
  if ( (_WORD)pvar == 65 )
    goto LABEL_3;
  PropVariantClear(&pvar);
  if ( ((int (__fastcall *)(struct IPropertyStore *, void *, PROPVARIANT *))a1->lpVtbl->GetValue)(
         a1,
         &PKEY_RS2_SpatialAudioEndpoint_Settings,
         &pvar) < 0
    || (_WORD)pvar != 65
    || (unsigned int)v12 < 0x50
    || (int)Create_SpatialAudioDevicePropertyWriter(a2, a1, &v10, v5) < 0 )
  {
    goto LABEL_3;
  }
  v6 = 0;
  v7 = *(_DWORD *)(v13 + 68);
  if ( !v7 )
    goto LABEL_16;
  while ( 1 )
  {
    v8 = 842LL * v6 + v13 + 80;
    v9 = *(_QWORD *)(v8 + 776) - *(_QWORD *)(v13 + 20);
    if ( !v9 )
      v9 = *(_QWORD *)(v8 + 784) - *(_QWORD *)(v13 + 28);
    if ( !v9 )
      break;
    if ( ++v6 >= v7 )
      goto LABEL_16;
  }
  if ( !v8 )
  {
LABEL_16:
    if ( *(_DWORD *)(v13 + 8) || !v7 )
      goto LABEL_3;
    v8 = v13 + 80;
  }
  v15 = *(_DWORD *)(v13 + 8);
  v18 = *(_DWORD *)(v13 + 72);
  v16 = *(_QWORD *)(v13 + 12);
  v19 = *(_DWORD *)(v13 + 16) != 0;
  v17[0] = *(_OWORD *)(v13 + 20);
  v17[1] = *(_OWORD *)(v13 + 36);
  v22 = *(_OWORD *)(v8 + 776);
  v23 = *(_DWORD *)(v8 + 792);
  v24 = *(_DWORD *)(v8 + 796);
  v25 = *(_DWORD *)(v8 + 800);
  v26 = *(_DWORD *)(v8 + 804);
  v27 = *(_DWORD *)(v8 + 808);
  v28 = *(_DWORD *)(v8 + 812);
  v29 = *(_DWORD *)(v8 + 816);
  v30 = *(_OWORD *)(v8 + 820);
  v31 = *(_WORD *)(v8 + 836);
  v32 = *(_WORD *)(v8 + 838);
  v33 = *(_WORD *)(v8 + 840);
  StringCchCopyW((char *)v20, 256LL, (char *)(v8 + 8));
  StringCchCopyW((char *)v21, 128LL, (char *)(v8 + 520));
  (*(void (__fastcall **)(__int64, int *, unsigned __int16 *, __int64))(*(_QWORD *)v10 + 64LL))(v10, &v15, v20, 834LL);
LABEL_3:
  PropVariantClear(&pvar);
  result = ((__int64 (__fastcall *)(struct IPropertyStore *, void *, PROPVARIANT *))a1->lpVtbl->SetValue)(
             a1,
             &PKEY_RS2_SpatialAudioEndpoint_Settings,
             &pvar);
  if ( v10 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  return result;
}
