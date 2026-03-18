/*
 * XREFs of ?DrawShadows@CProjectedShadowScene@@QEAAJPEAVCDrawingContext@@PEAVCProjectedShadowReceiver@@@Z @ 0x1800068C0
 * Callers:
 *     ?RenderProjectedShadows@CVisual@@QEAAXPEAVCDrawingContext@@W4Enum@ProjectedShadowDrawOrder@@@Z @ 0x18000680C (-RenderProjectedShadows@CVisual@@QEAAXPEAVCDrawingContext@@W4Enum@ProjectedShadowDrawOrder@@@Z.c)
 * Callees:
 *     ?FindReceiverEntry@CProjectedShadowScene@@AEBAPEAUReceiverEntry@1@PEBVCProjectedShadowReceiver@@@Z @ 0x180006968 (-FindReceiverEntry@CProjectedShadowScene@@AEBAPEAUReceiverEntry@1@PEBVCProjectedShadowReceiver@@.c)
 *     ?PrepareShadows@CProjectedShadowScene@@AEAAJPEAVCDrawingContext@@PEAVCProjectedShadowReceiver@@@Z @ 0x180006990 (-PrepareShadows@CProjectedShadowScene@@AEAAJPEAVCDrawingContext@@PEAVCProjectedShadowReceiver@@@.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CProjectedShadowScene::DrawShadows(
        CProjectedShadowScene *this,
        struct CDrawingContext *a2,
        struct CProjectedShadowReceiver *a3)
{
  int v6; // eax
  unsigned int v7; // ecx
  unsigned int v8; // edi
  struct CProjectedShadowScene::ReceiverEntry *ReceiverEntry; // rax
  _QWORD *v10; // rbx
  struct CProjectedShadowScene::ReceiverEntry *v11; // rbp
  unsigned __int64 v12; // r9
  _QWORD *v13; // rcx
  _QWORD *v14; // rdx
  __int64 *v15; // rax
  __int64 v17; // r8
  __int64 v18; // rcx
  int v19; // eax
  unsigned int v20; // ecx
  _BYTE v21[8]; // [rsp+30h] [rbp-48h] BYREF
  __int128 v22; // [rsp+38h] [rbp-40h] BYREF

  v6 = CProjectedShadowScene::PrepareShadows(this, a2, a3);
  v8 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x38Cu, 0LL);
  }
  else
  {
    ReceiverEntry = CProjectedShadowScene::FindReceiverEntry(this, a3);
    v10 = (_QWORD *)*((_QWORD *)this + 7);
    v11 = ReceiverEntry;
    while ( 1 )
    {
      v10 = (_QWORD *)*v10;
      if ( v10 == *((_QWORD **)this + 7) )
        break;
      v12 = v10[2];
      v13 = (_QWORD *)*((_QWORD *)v11 + 1);
      v14 = v13;
      v15 = (__int64 *)v13[1];
      while ( !*((_BYTE *)v15 + 25) )
      {
        if ( v15[4] >= v12 )
        {
          v13 = v15;
          v15 = (__int64 *)*v15;
        }
        else
        {
          v15 = (__int64 *)v15[2];
        }
      }
      if ( v13 == v14 || v12 < v13[4] )
      {
        v13 = (_QWORD *)*((_QWORD *)v11 + 1);
        v14 = v13;
      }
      if ( v13 != v14 )
      {
        v17 = *(_QWORD *)(v12 + 56);
        v18 = v13[5];
        v21[0] = 0;
        v22 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
        v19 = (*(__int64 (__fastcall **)(__int64, struct CDrawingContext *, __int64, _BYTE *, __int128 *))(*(_QWORD *)v18 + 200LL))(
                v18,
                a2,
                v17 + 132,
                v21,
                &v22);
        v8 = v19;
        if ( v19 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, v19, 0x3A1u, 0LL);
          return v8;
        }
      }
    }
  }
  return v8;
}
