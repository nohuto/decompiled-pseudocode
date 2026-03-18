/*
 * XREFs of ?GetD2DGeometry@CPathData@@QEBAJPEAUID2D1Factory@@PEAPEAUID2D1Geometry@@@Z @ 0x18021CD94
 * Callers:
 *     ?Simplify@CPathData@@QEBAJPEAPEAV1@@Z @ 0x18021D1B8 (-Simplify@CPathData@@QEBAJPEAPEAV1@@Z.c)
 *     ?GetD2DGeometry@CPathSegmentsShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x18021F9A0 (-GetD2DGeometry@CPathSegmentsShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x18001D4F8 (-InternalRelease@-$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@VCInteractionTrackerPositionAnimation@@@WRL@Microsoft@@QEAAAEAV012@PEAVCInteractionTrackerPositionAnimation@@@Z @ 0x18004ED70 (--4-$ComPtr@VCInteractionTrackerPositionAnimation@@@WRL@Microsoft@@QEAAAEAV012@PEAVCInteractionT.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?PushIntoSink@CPathData@@AEBAJPEAUID2D1GeometrySink@@@Z @ 0x18021CFF4 (-PushIntoSink@CPathData@@AEBAJPEAUID2D1GeometrySink@@@Z.c)
 *     ?_Atomic_compare_exchange_strong_8@std@@YAHPEC_KPEA_K_KW4memory_order@1@3@Z @ 0x18021D340 (-_Atomic_compare_exchange_strong_8@std@@YAHPEC_KPEA_K_KW4memory_order@1@3@Z.c)
 */

__int64 __fastcall CPathData::GetD2DGeometry(CPathData *this, struct ID2D1Factory *a2, struct ID2D1Geometry **a3)
{
  __int64 v3; // r14
  __int64 *v4; // rsi
  __int64 v5; // rax
  unsigned int v6; // ebx
  int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // rbx
  int v12; // eax
  __int64 v13; // rcx
  int v14; // eax
  __int64 v15; // rcx
  int v16; // eax
  __int64 v17; // rcx
  struct ID2D1Geometry *v18; // rax
  struct ID2D1Geometry *v20; // [rsp+60h] [rbp+30h] BYREF
  struct ID2D1GeometrySink *v21; // [rsp+68h] [rbp+38h] BYREF
  __int64 v22; // [rsp+78h] [rbp+48h] BYREF

  v21 = a2;
  v3 = *((_QWORD *)this + 6);
  v4 = (__int64 *)((char *)this + 72);
  v5 = *((_QWORD *)this + 9);
  v6 = 0;
  v20 = 0LL;
  if ( !v5 || v3 != *((_QWORD *)this + 6) )
  {
    v21 = 0LL;
    Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v20);
    v9 = (*(__int64 (__fastcall **)(__int64, struct ID2D1Geometry **))(*(_QWORD *)v3 + 80LL))(v3, &v20);
    v6 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x67u);
    }
    else
    {
      v11 = (__int64)v20;
      Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v21);
      v12 = (*(__int64 (__fastcall **)(__int64, struct ID2D1GeometrySink **))(*(_QWORD *)v11 + 136LL))(v11, &v21);
      v6 = v12;
      if ( v12 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x68u);
      }
      else
      {
        v14 = CPathData::PushIntoSink(this, v21);
        v6 = v14;
        if ( v14 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x6Au);
        }
        else
        {
          v16 = (*(__int64 (__fastcall **)(struct ID2D1GeometrySink *))(*(_QWORD *)v21 + 72LL))(v21);
          v6 = v16;
          if ( v16 >= 0 )
          {
            if ( v3 == *((_QWORD *)this + 6) )
            {
              v22 = 0LL;
              if ( (unsigned int)std::_Atomic_compare_exchange_strong_8(v4, &v22, v20) )
                (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 9) + 8LL))(*((_QWORD *)this + 9));
              else
                Microsoft::WRL::ComPtr<CInteractionTrackerPositionAnimation>::operator=((__int64 *)&v20, *v4);
            }
            Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v21);
            goto LABEL_13;
          }
          MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0x6Cu);
        }
      }
    }
    Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v21);
    goto LABEL_19;
  }
  Microsoft::WRL::ComPtr<CInteractionTrackerPositionAnimation>::operator=((__int64 *)&v20, *v4);
LABEL_13:
  v18 = v20;
  v20 = 0LL;
  *a3 = v18;
LABEL_19:
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v20);
  return v6;
}
