/*
 * XREFs of ?EnterClippingScope@CScopedClipStack@@QEAAJ_NPEBVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18002EDDC
 * Callers:
 *     ?PushClippingScope@CDrawingContext@@AEAAJPEBVCVisual@@_NPEBVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18002ED2C (-PushClippingScope@CDrawingContext@@AEAAJPEBVCVisual@@_NPEBVCMILMatrix@@PEAV-$TMilRect_@MUMilRec.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180022680 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?GetClipBoundsWorld@CScopedClipStack@@QEBAXPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18002F090 (-GetClipBoundsWorld@CScopedClipStack@@QEBAXPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNe.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 */

__int64 __fastcall CScopedClipStack::EnterClippingScope(CScopedClipStack *a1, char a2, __int128 *a3, _OWORD *a4)
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
  int v16; // eax
  _BYTE v17[80]; // [rsp+30h] [rbp-29h] BYREF
  __int128 v18; // [rsp+80h] [rbp+27h]

  *(_DWORD *)&v17[72] = 0;
  *(_QWORD *)v17 = 0LL;
  v6 = *((_DWORD *)a1 + 6) == 0;
  v17[76] = a2;
  if ( v6 )
  {
    v18 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
    *a4 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
  }
  else
  {
    CScopedClipStack::GetClipBoundsWorld(a1);
  }
  if ( a3 )
  {
    v12 = *a3;
    v13 = a3[1];
    *(_DWORD *)&v17[72] = *((_DWORD *)a3 + 16);
    *(_OWORD *)&v17[8] = v12;
    v14 = a3[2];
    *(_OWORD *)&v17[24] = v13;
    v15 = a3[3];
    *(_OWORD *)&v17[40] = v14;
    *(_OWORD *)&v17[56] = v15;
  }
  else
  {
    *(_OWORD *)&v17[8] = _xmm;
    *(_WORD *)&v17[72] = 32085;
    *(_OWORD *)&v17[24] = _xmm;
    *(_OWORD *)&v17[40] = _xmm;
    *(_OWORD *)&v17[56] = _xmm;
  }
  v7 = *((unsigned int *)a1 + 6);
  v8 = v7 + 1;
  v9 = (int)v7 + 1 < (unsigned int)v7 ? 0x80070216 : 0;
  if ( (int)v7 + 1 < (unsigned int)v7 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)a1, 0LL, 0, v9, 0xB5u);
  }
  else if ( v8 > *((_DWORD *)a1 + 5) )
  {
    v16 = DynArrayImpl<0>::AddMultipleAndSet((__int64)a1, 80, 1, v17);
    v9 = v16;
    if ( v16 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v10, 0LL, 0, v16, 0xC0u);
  }
  else
  {
    v10 = (_OWORD *)(*(_QWORD *)a1 + 80 * v7);
    *v10 = *(_OWORD *)v17;
    v10[1] = *(_OWORD *)&v17[16];
    v10[2] = *(_OWORD *)&v17[32];
    v10[3] = *(_OWORD *)&v17[48];
    v10[4] = *(_OWORD *)&v17[64];
    *((_DWORD *)a1 + 6) = v8;
  }
  if ( v9 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v10, 0LL, 0, v9, 0x4Bu);
  return (unsigned int)v9;
}
