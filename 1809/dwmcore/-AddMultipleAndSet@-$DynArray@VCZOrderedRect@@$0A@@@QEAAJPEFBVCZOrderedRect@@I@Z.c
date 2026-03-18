/*
 * XREFs of ?AddMultipleAndSet@?$DynArray@VCZOrderedRect@@$0A@@@QEAAJPEFBVCZOrderedRect@@I@Z @ 0x1800A8E78
 * Callers:
 *     ?AddAntiOccluderRect@CArrayBasedCoverageSet@@UEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@HPEBVCMILMatrix@@@Z @ 0x1800ABC60 (-AddAntiOccluderRect@CArrayBasedCoverageSet@@UEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@.c)
 *     ?Add@CArrayBasedCoverageSet@@UEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@HPEBVCMILMatrix@@@Z @ 0x1800AC0B0 (-Add@CArrayBasedCoverageSet@@UEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@Rect.c)
 * Callees:
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x1800AB370 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall DynArray<CZOrderedRect,0>::AddMultipleAndSet(__int64 *a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned int v5; // r8d
  int v6; // ebx
  __int64 v7; // rcx
  __int64 v8; // rdx
  unsigned int v10; // ecx
  _OWORD *v11; // rax
  __int64 v12; // rdx
  _OWORD *v13; // [rsp+40h] [rbp+8h] BYREF

  v2 = *((unsigned int *)a1 + 6);
  v5 = v2 + 1;
  v6 = (int)v2 + 1 < (unsigned int)v2 ? 0x80070216 : 0;
  if ( (int)v2 + 1 < (unsigned int)v2 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)a1, 0LL, 0, v6, 0xB5u);
  }
  else if ( v5 > *((_DWORD *)a1 + 5) )
  {
    v13 = (_OWORD *)a2;
    v6 = DynArrayImpl<0>::Grow((_DWORD)a1, 36, 1, 0, (__int64)&v13);
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v6, 0xC0u);
    }
    else
    {
      v11 = v13;
      v12 = *a1 + (unsigned int)(36 * *((_DWORD *)a1 + 6));
      *(_OWORD *)v12 = *v13;
      *(_OWORD *)(v12 + 16) = v11[1];
      *(_DWORD *)(v12 + 32) = *((_DWORD *)v11 + 8);
      ++*((_DWORD *)a1 + 6);
    }
  }
  else
  {
    v7 = *a1;
    v8 = 9 * v2;
    *(_OWORD *)(v7 + 4 * v8) = *(_OWORD *)a2;
    *(_OWORD *)(v7 + 4 * v8 + 16) = *(_OWORD *)(a2 + 16);
    *(_DWORD *)(v7 + 4 * v8 + 32) = *(_DWORD *)(a2 + 32);
    *((_DWORD *)a1 + 6) = v5;
  }
  return (unsigned int)v6;
}
