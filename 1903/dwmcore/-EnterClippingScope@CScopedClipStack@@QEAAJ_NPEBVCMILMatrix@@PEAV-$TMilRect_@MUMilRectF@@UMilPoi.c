/*
 * XREFs of ?EnterClippingScope@CScopedClipStack@@QEAAJ_NPEBVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800748C8
 * Callers:
 *     ?PushClippingScope@CDrawingContext@@AEAAJPEBVCVisual@@_NPEBVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18007481C (-PushClippingScope@CDrawingContext@@AEAAJPEBVCVisual@@_NPEBVCMILMatrix@@PEAV-$TMilRect_@MUMilRec.c)
 * Callees:
 *     ?GetClipBoundsWorld@CScopedClipStack@@QEBAXPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800749E0 (-GetClipBoundsWorld@CScopedClipStack@@QEBAXPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNe.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18008D2DC (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 */

__int64 __fastcall CScopedClipStack::EnterClippingScope(__int64 a1, char a2, __int128 *a3, _OWORD *a4)
{
  bool v6; // zf
  __int64 v7; // rax
  unsigned int v8; // edx
  int v9; // ebx
  _OWORD *v10; // rcx
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  unsigned int v16; // ecx
  int v17; // eax
  _BYTE v18[80]; // [rsp+30h] [rbp-29h] BYREF
  __int128 v19; // [rsp+80h] [rbp+27h]

  *(_DWORD *)&v18[72] = 0;
  *(_QWORD *)v18 = 0LL;
  v6 = *(_DWORD *)(a1 + 24) == 0;
  v18[76] = a2;
  if ( v6 )
  {
    v19 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
    *a4 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
  }
  else
  {
    CScopedClipStack::GetClipBoundsWorld(a1, a4);
  }
  if ( a3 )
  {
    v12 = *a3;
    v13 = a3[1];
    *(_DWORD *)&v18[72] = *((_DWORD *)a3 + 16);
    *(_OWORD *)&v18[8] = v12;
    v14 = a3[2];
    *(_OWORD *)&v18[24] = v13;
    v15 = a3[3];
    *(_OWORD *)&v18[40] = v14;
    *(_OWORD *)&v18[56] = v15;
  }
  else
  {
    *(_OWORD *)&v18[8] = _xmm;
    *(_WORD *)&v18[72] = 32085;
    *(_OWORD *)&v18[24] = _xmm;
    *(_OWORD *)&v18[40] = _xmm;
    *(_OWORD *)&v18[56] = _xmm;
  }
  v7 = *(unsigned int *)(a1 + 24);
  v8 = v7 + 1;
  if ( (int)v7 + 1 < (unsigned int)v7 )
  {
    v9 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(a1, 0LL, 0, -2147024362, 0xB8u, 0LL);
  }
  else
  {
    v9 = 0;
    if ( v8 <= *(_DWORD *)(a1 + 20) )
    {
      v10 = (_OWORD *)(*(_QWORD *)a1 + 80 * v7);
      *v10 = *(_OWORD *)v18;
      v10[1] = *(_OWORD *)&v18[16];
      v10[2] = *(_OWORD *)&v18[32];
      v10[3] = *(_OWORD *)&v18[48];
      v10[4] = *(_OWORD *)&v18[64];
      *(_DWORD *)(a1 + 24) = v8;
      return (unsigned int)v9;
    }
    v17 = DynArrayImpl<0>::AddMultipleAndSet(a1, 80LL, 1LL, v18);
    v9 = v17;
    if ( v17 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v17, 0xC3u, 0LL);
  }
  if ( v9 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v9, 0x4Bu, 0LL);
  return (unsigned int)v9;
}
