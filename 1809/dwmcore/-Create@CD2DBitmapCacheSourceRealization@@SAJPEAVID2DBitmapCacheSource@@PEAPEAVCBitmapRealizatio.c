/*
 * XREFs of ?Create@CD2DBitmapCacheSourceRealization@@SAJPEAVID2DBitmapCacheSource@@PEAPEAVCBitmapRealization@@@Z @ 0x18009DF70
 * Callers:
 *     ?GetCurrentRenderingRealization@CBitmapResource@@UEAAJPEAPEAVIBitmapRealization@@@Z @ 0x18009E090 (-GetCurrentRenderingRealization@CBitmapResource@@UEAAJPEAPEAVIBitmapRealization@@@Z.c)
 * Callees:
 *     ??0CD2DBitmapCacheSourceRealization@@IEAA@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@@Z @ 0x18009DF0C (--0CD2DBitmapCacheSourceRealization@@IEAA@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@@.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     memset_0 @ 0x1800EC516 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD2DBitmapCacheSourceRealization::Create(
        struct ID2DBitmapCacheSource *a1,
        struct CBitmapRealization **a2)
{
  unsigned int v4; // edi
  CD2DBitmapCacheSourceRealization *v5; // rax
  unsigned int v6; // ecx
  CD2DBitmapCacheSourceRealization *v7; // rbx
  _DWORD v9[8]; // [rsp+30h] [rbp-D8h] BYREF
  _DWORD v10[32]; // [rsp+50h] [rbp-B8h] BYREF
  _DWORD v11[4]; // [rsp+D0h] [rbp-38h] BYREF

  v4 = 0;
  (*(void (__fastcall **)(struct ID2DBitmapCacheSource *, _DWORD *))(*(_QWORD *)a1 + 24LL))(a1, v11);
  memset_0(v10, 0, 0x78uLL);
  v10[0] = v11[1];
  v10[11] = v11[2];
  memset_0(v9, 0, sizeof(v9));
  v9[0] = (*(unsigned __int8 (__fastcall **)(struct ID2DBitmapCacheSource *))(*(_QWORD *)a1 + 72LL))(a1) != 0;
  v5 = (CD2DBitmapCacheSourceRealization *)HeapAlloc(WPF::g_processHeap, 0, 0x1A0uLL);
  if ( v5 )
    v7 = CD2DBitmapCacheSourceRealization::CD2DBitmapCacheSourceRealization(
           v5,
           (const struct CSM_BUFFER_ATTRIBUTES *)v10,
           (const struct CSM_REALIZATION_INFO *)v9);
  else
    v7 = 0LL;
  if ( v7 )
  {
    (*(void (__fastcall **)(__int64, struct ID2DBitmapCacheSource *))(*((_QWORD *)v7 + 2) + 24LL))((__int64)v7 + 16, a1);
    *a2 = v7;
    (*(void (__fastcall **)(CD2DBitmapCacheSourceRealization *))(*(_QWORD *)v7 + 8LL))(v7);
  }
  else
  {
    v4 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, -2147024882, 0x18u);
  }
  return v4;
}
