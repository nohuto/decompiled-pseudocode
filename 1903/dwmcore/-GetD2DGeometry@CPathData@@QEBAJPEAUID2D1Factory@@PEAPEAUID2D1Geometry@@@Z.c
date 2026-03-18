/*
 * XREFs of ?GetD2DGeometry@CPathData@@QEBAJPEAUID2D1Factory@@PEAPEAUID2D1Geometry@@@Z @ 0x18022BEF4
 * Callers:
 *     ?Simplify@CPathData@@QEBAJPEAPEAV1@@Z @ 0x18022C340 (-Simplify@CPathData@@QEBAJPEAPEAV1@@Z.c)
 *     ?GetD2DGeometry@CPathSegmentsShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x18024D800 (-GetD2DGeometry@CPathSegmentsShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x18001F5BC (-InternalRelease@-$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?_Atomic_compare_exchange_strong_8@std@@YAHPEC_KPEA_K_KW4memory_order@1@3@Z @ 0x1801B6464 (-_Atomic_compare_exchange_strong_8@std@@YAHPEC_KPEA_K_KW4memory_order@1@3@Z.c)
 *     ??4?$ComPtr@VCInteractionTrackerPositionAnimation@@@WRL@Microsoft@@QEAAAEAV012@PEAVCInteractionTrackerPositionAnimation@@@Z @ 0x1801D8854 (--4-$ComPtr@VCInteractionTrackerPositionAnimation@@@WRL@Microsoft@@QEAAAEAV012@PEAVCInteractionT.c)
 *     ?PushIntoSink@CPathData@@AEBAJPEAUID2D1GeometrySink@@@Z @ 0x18022C174 (-PushIntoSink@CPathData@@AEBAJPEAUID2D1GeometrySink@@@Z.c)
 */

__int64 __fastcall CPathData::GetD2DGeometry(CPathData *this, struct ID2D1Factory *a2, struct ID2D1Geometry **a3)
{
  __int64 *v3; // r15
  __int64 *v4; // r14
  __int64 v5; // rax
  unsigned int v6; // ebx
  __int64 v9; // rax
  __int64 (__fastcall *v10)(__int64 *, struct ID2D1Geometry **); // rbx
  signed int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // rbx
  __int64 (__fastcall *v14)(__int64, struct ID2D1GeometrySink **); // rdi
  signed int v15; // eax
  __int64 v16; // rcx
  signed int v17; // eax
  __int64 v18; // rcx
  signed int v19; // eax
  __int64 v20; // rcx
  __int64 v21; // r9
  struct ID2D1Geometry *v22; // rax
  struct ID2D1Geometry *v24; // [rsp+70h] [rbp+40h] BYREF
  struct ID2D1GeometrySink *v25; // [rsp+78h] [rbp+48h] BYREF
  signed __int64 v26; // [rsp+88h] [rbp+58h] BYREF

  v25 = a2;
  v3 = (__int64 *)*((_QWORD *)this + 6);
  v4 = (__int64 *)((char *)this + 72);
  v5 = *((_QWORD *)this + 9);
  v6 = 0;
  v24 = 0LL;
  if ( !v5 || v3 != *((__int64 **)this + 6) )
  {
    v9 = *v3;
    v25 = 0LL;
    v10 = *(__int64 (__fastcall **)(__int64 *, struct ID2D1Geometry **))(v9 + 80);
    Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v24);
    v11 = v10(v3, &v24);
    v6 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x67u, 0LL);
    }
    else
    {
      v13 = (__int64)v24;
      v14 = *(__int64 (__fastcall **)(__int64, struct ID2D1GeometrySink **))(*(_QWORD *)v24 + 136LL);
      Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v25);
      v15 = v14(v13, &v25);
      v6 = v15;
      if ( v15 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0x68u, 0LL);
      }
      else
      {
        v17 = CPathData::PushIntoSink(this, v25);
        v6 = v17;
        if ( v17 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v17, 0x6Au, 0LL);
        }
        else
        {
          v19 = (*(__int64 (__fastcall **)(struct ID2D1GeometrySink *))(*(_QWORD *)v25 + 72LL))(v25);
          v6 = v19;
          if ( v19 >= 0 )
          {
            if ( v3 == *((__int64 **)this + 6) )
            {
              v26 = 0LL;
              if ( (unsigned int)std::_Atomic_compare_exchange_strong_8(v4, &v26, (signed __int64)v24, v21, 5) )
                (*(void (__fastcall **)(__int64))(*(_QWORD *)*v4 + 8LL))(*v4);
              else
                Microsoft::WRL::ComPtr<CInteractionTrackerPositionAnimation>::operator=((__int64 *)&v24, *v4);
            }
            Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v25);
            goto LABEL_13;
          }
          MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, v19, 0x6Cu, 0LL);
        }
      }
    }
    Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v25);
    goto LABEL_19;
  }
  Microsoft::WRL::ComPtr<CInteractionTrackerPositionAnimation>::operator=((__int64 *)&v24, *v4);
LABEL_13:
  v22 = v24;
  v24 = 0LL;
  *a3 = v22;
LABEL_19:
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v24);
  return v6;
}
