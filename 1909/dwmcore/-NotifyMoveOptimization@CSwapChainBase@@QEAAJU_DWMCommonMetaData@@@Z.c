/*
 * XREFs of ?NotifyMoveOptimization@CSwapChainBase@@QEAAJU_DWMCommonMetaData@@@Z @ 0x180164090
 * Callers:
 *     ?NotifyMetaData@CSwapChainBase@@UEAAJU_DWMCommonMetaData@@@Z @ 0x180163DE0 (-NotifyMetaData@CSwapChainBase@@UEAAJU_DWMCommonMetaData@@@Z.c)
 * Callees:
 *     ?IntersectUnsafe@?$TMilRect@HUtagRECT@@U_CMilRectL_@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x1800487D8 (-IntersectUnsafe@-$TMilRect@HUtagRECT@@U_CMilRectL_@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ??0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z @ 0x1800518E4 (--0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x1800BA758 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ?Union@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x1800BA8B4 (-Union@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?AddMultipleAndSet@?$DynArray@U_DWMIndirectMetaData@@$0A@@@QEAAJPEFBU_DWMIndirectMetaData@@I@Z @ 0x180163A94 (-AddMultipleAndSet@-$DynArray@U_DWMIndirectMetaData@@$0A@@@QEAAJPEFBU_DWMIndirectMetaData@@I@Z.c)
 *     McTemplateU0nn @ 0x180164334 (McTemplateU0nn.c)
 *     McTemplateU0pp @ 0x180164430 (McTemplateU0pp.c)
 */

__int64 __fastcall CSwapChainBase::NotifyMoveOptimization(__int64 a1, __int64 a2)
{
  unsigned int v4; // ebx
  __int32 v5; // eax
  LONG v6; // ecx
  LONG v7; // edx
  LONG v8; // r8d
  LONG v9; // eax
  int v10; // edx
  int v11; // r8d
  struct tagRECT v12; // xmm0
  int v13; // r9d
  int v14; // r8d
  int v15; // r9d
  signed int v16; // eax
  int v17; // edx
  __int64 v18; // rcx
  int v19; // r8d
  char v20; // al
  signed int v21; // eax
  __int64 v22; // rcx
  struct tagRECT v24; // [rsp+30h] [rbp-B8h] BYREF
  __m128i v25; // [rsp+40h] [rbp-A8h] BYREF
  __m128i v26; // [rsp+50h] [rbp-98h] BYREF
  void *v27[10]; // [rsp+60h] [rbp-88h] BYREF

  v4 = 0;
  if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a1 + 80LL))(a1) )
  {
    v5 = *(_DWORD *)(a1 + 120);
    v6 = *(_DWORD *)(a2 + 20);
    v7 = *(_DWORD *)(a2 + 24);
    v8 = *(_DWORD *)(a2 + 28);
    v26.m128i_i64[0] = 0LL;
    v26.m128i_i32[2] = v5;
    v26.m128i_i32[3] = *(_DWORD *)(a1 + 124);
    v9 = *(_DWORD *)(a2 + 16);
    v24.top = v6;
    v24.right = v7;
    v25 = v26;
    v24.left = v9;
    v24.bottom = v8;
    if ( TMilRect<int,tagRECT,RectUniqueness::_CMilRectL_>::IntersectUnsafe(&v25, &v24) )
    {
      v10 = *(_DWORD *)(a2 + 32);
      v11 = *(_DWORD *)(a2 + 36);
      v24.right = v10 + v25.m128i_i32[2];
      v24.top = v11 + v25.m128i_i32[1];
      v24.bottom = v11 + v25.m128i_i32[3];
      v24.left = v10 + _mm_cvtsi128_si32(v25);
      if ( TMilRect<int,tagRECT,RectUniqueness::_CMilRectL_>::IntersectUnsafe(&v24, &v26) )
      {
        v12 = v24;
        v13 = *(_DWORD *)(a2 + 36);
        v14 = -*(_DWORD *)(a2 + 32);
        *(_QWORD *)(a2 + 40) = 0LL;
        v15 = -v13;
        v26.m128i_i32[1] = v15 + v12.top;
        v26.m128i_i32[2] = v14 + v12.right;
        v26.m128i_i32[3] = v15 + v12.bottom;
        v26.m128i_i32[0] = v14 + _mm_cvtsi128_si32((__m128i)v12);
        *(__m128i *)(a2 + 16) = v26;
        v16 = DynArray<_DWMIndirectMetaData,0>::AddMultipleAndSet(a1 + 344, (_OWORD *)a2);
        v4 = v16;
        if ( v16 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v16, 0x123u, 0LL);
        }
        else
        {
          v20 = Microsoft_Windows_Dwm_CoreEnableBits;
          if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
          {
            McTemplateU0pp(v18, &EVTDESC_REMOTEAPP_METADATA_STATS, a1 + 344, *(unsigned int *)(a1 + 368));
            v20 = Microsoft_Windows_Dwm_CoreEnableBits;
          }
          if ( (v20 & 0x20) != 0 )
            McTemplateU0nn(v18, v17, v19, a2 + 32);
          FastRegion::CRegion::CRegion((FastRegion::CRegion *)v27, &v24);
          v21 = FastRegion::CRegion::Union((void **)(a1 + 200), (const struct FastRegion::Internal::CRgnData **)v27);
          v4 = v21;
          if ( v21 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, v21, 0x135u, 0LL);
          FastRegion::CRegion::FreeMemory(v27);
        }
      }
    }
  }
  return v4;
}
