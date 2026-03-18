/*
 * XREFs of ?Create@CD2DBitmapCacheSourceRealization@@SAJPEAVID2DBitmapCacheSource@@PEAPEAVCBitmapRealization@@@Z @ 0x1800CB31C
 * Callers:
 *     ?GetCurrentRenderingRealization@CBitmapResource@@UEAAJPEAPEAVIBitmapRealization@@@Z @ 0x1800CB1C0 (-GetCurrentRenderingRealization@CBitmapResource@@UEAAJPEAPEAVIBitmapRealization@@@Z.c)
 * Callees:
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180080530 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CD2DBitmapCacheSourceRealization@@IEAA@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@@Z @ 0x1800CB434 (--0CD2DBitmapCacheSourceRealization@@IEAA@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@@.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800E7E5E (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD2DBitmapCacheSourceRealization::Create(
        struct ID2DBitmapCacheSource *a1,
        struct CBitmapRealization **a2)
{
  unsigned int v4; // edi
  char v5; // al
  int v6; // ecx
  CD2DBitmapCacheSourceRealization *v7; // rax
  __int64 v8; // rcx
  CD2DBitmapCacheSourceRealization *v9; // rbx
  _DWORD v11[8]; // [rsp+30h] [rbp-D8h] BYREF
  _DWORD v12[32]; // [rsp+50h] [rbp-B8h] BYREF
  _DWORD v13[4]; // [rsp+D0h] [rbp-38h] BYREF

  v4 = 0;
  (*(void (__fastcall **)(struct ID2DBitmapCacheSource *, _DWORD *))(*(_QWORD *)a1 + 24LL))(a1, v13);
  memset_0(v12, 0, 0x78uLL);
  v12[0] = v13[1];
  v12[11] = v13[2];
  memset_0(v11, 0, sizeof(v11));
  v5 = (*(__int64 (__fastcall **)(struct ID2DBitmapCacheSource *))(*(_QWORD *)a1 + 72LL))(a1);
  v6 = v11[0];
  if ( v5 )
    v6 = 1;
  v11[0] = v6;
  v7 = (CD2DBitmapCacheSourceRealization *)DefaultHeap::Alloc(0x1A0uLL);
  if ( v7 )
    v9 = CD2DBitmapCacheSourceRealization::CD2DBitmapCacheSourceRealization(
           v7,
           (const struct CSM_BUFFER_ATTRIBUTES *)v12,
           (const struct CSM_REALIZATION_INFO *)v11);
  else
    v9 = 0LL;
  if ( v9 )
  {
    (*(void (__fastcall **)(__int64, struct ID2DBitmapCacheSource *))(*((_QWORD *)v9 + 2) + 24LL))((__int64)v9 + 16, a1);
    *a2 = v9;
    (*(void (__fastcall **)(CD2DBitmapCacheSourceRealization *))(*(_QWORD *)v9 + 8LL))(v9);
  }
  else
  {
    v4 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, 0x8007000E, 0x16u, 0LL);
  }
  return v4;
}
