/*
 * XREFs of ?DmmInitializeAdapter@@YAJQEAX@Z @ 0x1C017E9BC
 * Callers:
 *     DpiFdoCreateRelatedObjects @ 0x1C015F370 (DpiFdoCreateRelatedObjects.c)
 * Callees:
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C00043DC (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C0004418 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C00076BC (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000874C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000CD7C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?DxgkLogCodePointPacketForSession@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@_KIIIU_LUID@@@Z @ 0x1C000D5C8 (-DxgkLogCodePointPacketForSession@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@_KIIIU_LUID@@@Z.c)
 *     ?IsAddapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z @ 0x1C000E028 (-IsAddapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     ?IsFirmwareRecommendedWireformatAndColorSpaceValid@DMMVIDPNTARGETMODE@@QEBA_NT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@W4_D3DDDI_OUTPUT_WIRE_COLOR_SPACE_TYPE@@@Z @ 0x1C0054D64 (-IsFirmwareRecommendedWireformatAndColorSpaceValid@DMMVIDPNTARGETMODE@@QEBA_NT_D3DKMDT_WIRE_FORM.c)
 *     ?RecommendFunctionalVidPn@VIDPN_MGR@@QEAAJW4_DXGK_RECOMMENDFUNCTIONALVIDPN_REASON@@QEAXIQEAPEAVDMMVIDPN@@@Z @ 0x1C02B5D90 (-RecommendFunctionalVidPn@VIDPN_MGR@@QEAAJW4_DXGK_RECOMMENDFUNCTIONALVIDPN_REASON@@QEAXIQEAPEAVD.c)
 */

__int64 __fastcall DmmInitializeAdapter(DXGADAPTER *this, __int64 a2)
{
  __int64 v2; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rax
  __int64 *v8; // r15
  __int64 v9; // rbx
  bool v10; // zf
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r14
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // r14
  __int64 v26; // r14
  __int64 v27; // r14
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  _D3DKMDT_WIRE_FORMAT_AND_PREFERENCE *v31; // r13
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  _QWORD *v35; // rax
  _D3DKMDT_WIRE_FORMAT_AND_PREFERENCE v36; // ecx
  struct _LUID *v37; // rdx
  unsigned int v38; // r10d
  __int64 v39; // [rsp+30h] [rbp-40h] BYREF
  struct DMMVIDPN *v40; // [rsp+38h] [rbp-38h] BYREF
  unsigned __int64 v41; // [rsp+40h] [rbp-30h] BYREF
  __int64 v42; // [rsp+48h] [rbp-28h] BYREF
  __int64 v43; // [rsp+50h] [rbp-20h] BYREF
  _D3DKMDT_WIRE_FORMAT_AND_PREFERENCE v44[2]; // [rsp+58h] [rbp-18h] BYREF
  int v45; // [rsp+60h] [rbp-10h]

  v2 = 0LL;
  if ( !this )
  {
    v12 = WdLogNewEntry5_WdAssertion(0LL, a2);
    WdLogEvent5_WdAssertion(v12);
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)this) )
  {
    v13 = WdLogNewEntry5_WdAssertion(v5, v4);
    WdLogEvent5_WdAssertion(v13);
  }
  v7 = *((_QWORD *)this + 319);
  if ( !v7 )
    return 0LL;
  v8 = *(__int64 **)(v7 + 88);
  if ( v8 )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v43, *(_QWORD *)(v7 + 88));
    v9 = 0LL;
    v10 = (*((_DWORD *)this + 77) & 0x8000) == 0;
    v39 = 0LL;
    *(_QWORD *)&v44[0].0 = 0LL;
    v45 = 0;
    if ( !v10 )
    {
      v40 = 0LL;
      v15 = VIDPN_MGR::RecommendFunctionalVidPn((VIDPN_MGR *)v8, DXGK_RFVR_FIRMWARE, v44, 0xCu, &v40);
      v19 = v15;
      if ( v15 < 0 )
      {
        v22 = WdLogNewEntry5_WdError(v17, v16, v18);
        *(_QWORD *)(v22 + 24) = this;
        *(_QWORD *)(v22 + 32) = v19;
        WdLogEvent5_WdError(v22);
      }
      else
      {
        auto_rc<DMMVIDPN>::reset(&v39, (__int64)v40);
        v9 = v39;
      }
      if ( v9 )
      {
        if ( v9 == -96 )
        {
          v23 = WdLogNewEntry5_WdAssertion(v21, v20);
          WdLogEvent5_WdAssertion(v23);
        }
        if ( *(_QWORD *)(v9 + 136) == 1LL )
        {
          v25 = *(_QWORD *)(v9 + 120);
          if ( v25 == v9 + 120 )
            v26 = 0LL;
          else
            v26 = v25 - 8;
          v27 = *(_QWORD *)(v26 + 96);
          if ( !v27 )
          {
            v28 = WdLogNewEntry5_WdAssertion(v21, v20);
            WdLogEvent5_WdAssertion(v28);
          }
          v29 = *(_QWORD *)(v27 + 104);
          if ( v29 )
          {
            _InterlockedIncrement((volatile signed __int32 *)(v29 + 96));
            v30 = *(_QWORD *)(v27 + 104);
            v9 = v39;
          }
          else
          {
            v30 = 0LL;
          }
          v31 = *(_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE **)(v30 + 144);
          v42 = v30;
          if ( !v31 )
          {
            v32 = WdLogNewEntry5_WdAssertion(v21, v20);
            WdLogEvent5_WdAssertion(v32);
          }
          if ( DMMVIDPNTARGETMODE::IsFirmwareRecommendedWireformatAndColorSpaceValid(
                 (DMMVIDPNTARGETMODE *)v31,
                 v44[1],
                 (enum _D3DDDI_OUTPUT_WIRE_COLOR_SPACE_TYPE)v44[0].Value) )
          {
            do
              *(_BYTE *)(*(_QWORD *)(v27 + 96) + v2++ + 415) = 1;
            while ( v2 < 2 );
            v36.0 = (struct _D3DKMDT_WIRE_FORMAT_AND_PREFERENCE::$BC67B894A1A9CCB3D1B7060E96581CDD)v44[0];
            v31[33].0 = (struct _D3DKMDT_WIRE_FORMAT_AND_PREFERENCE::$BC67B894A1A9CCB3D1B7060E96581CDD)v44[1];
            v31[34].0 = v36.0;
            _InterlockedIncrement((volatile signed __int32 *)(v9 + 32));
            auto_rc<DMMVIDPN>::reset(v8 + 35, v39);
            DXGADAPTER::IsAddapterSessionized(this, v37, 0LL, &v41);
            DxgkLogCodePointPacketForSession(0x59u, v41, v38, v45, 1, *(_QWORD *)((char *)this + 276));
          }
          else
          {
            v35 = (_QWORD *)WdLogNewEntry5_WdAssertion(v34, v33);
            v35[3] = v44[1].Value;
            v35[4] = (int)v44[0].Value;
            v35[5] = this;
            WdLogEvent5_WdAssertion(v35);
          }
          auto_rc<DMMVIDPNTARGETMODESET>::reset(&v42, 0LL);
        }
        else
        {
          v24 = WdLogNewEntry5_WdAssertion(v21, v20);
          *(_QWORD *)(v24 + 24) = *(_QWORD *)(v9 + 136);
          *(_QWORD *)(v24 + 32) = this;
          WdLogEvent5_WdAssertion(v24);
        }
      }
    }
    auto_rc<DMMVIDPN>::reset(&v39, 0LL);
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v43 + 40));
    return 0LL;
  }
  v14 = WdLogNewEntry5_WdError(v5, v4, v6);
  *(_QWORD *)(v14 + 24) = this;
  WdLogEvent5_WdError(v14);
  return 3223192373LL;
}
