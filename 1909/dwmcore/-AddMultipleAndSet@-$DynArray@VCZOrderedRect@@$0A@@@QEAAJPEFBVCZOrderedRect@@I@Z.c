/*
 * XREFs of ?AddMultipleAndSet@?$DynArray@VCZOrderedRect@@$0A@@@QEAAJPEFBVCZOrderedRect@@I@Z @ 0x1800BC278
 * Callers:
 *     ?AddAntiOccluderRect@CArrayBasedCoverageSet@@UEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@HPEBVCMILMatrix@@@Z @ 0x18003AF20 (-AddAntiOccluderRect@CArrayBasedCoverageSet@@UEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@.c)
 *     ?Add@CArrayBasedCoverageSet@@UEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@HPEBVCMILMatrix@@@Z @ 0x18003B1D0 (-Add@CArrayBasedCoverageSet@@UEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@Rect.c)
 * Callees:
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x18006CB50 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall DynArray<CZOrderedRect,0>::AddMultipleAndSet(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // rax
  unsigned int v5; // r8d
  signed int v6; // ebx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v10; // rcx
  _OWORD *v11; // rax
  __int64 v12; // rdx
  _OWORD *v13; // [rsp+40h] [rbp+8h] BYREF

  v2 = *(unsigned int *)(a1 + 24);
  v5 = v2 + 1;
  if ( (int)v2 + 1 < (unsigned int)v2 )
  {
    v6 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(a1, 0LL, 0, 0x80070216, 0xB8u, 0LL);
  }
  else
  {
    v6 = 0;
    if ( v5 > *(_DWORD *)(a1 + 20) )
    {
      v13 = (_OWORD *)a2;
      v6 = DynArrayImpl<0>::Grow(a1, 0x24u, 1, 0, (unsigned __int64 *)&v13);
      if ( v6 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v6, 0xC3u, 0LL);
      }
      else
      {
        v11 = v13;
        v12 = *(_QWORD *)a1 + (unsigned int)(36 * *(_DWORD *)(a1 + 24));
        *(_OWORD *)v12 = *v13;
        *(_OWORD *)(v12 + 16) = v11[1];
        *(_DWORD *)(v12 + 32) = *((_DWORD *)v11 + 8);
        ++*(_DWORD *)(a1 + 24);
      }
    }
    else
    {
      v7 = *(_QWORD *)a1;
      v8 = 9 * v2;
      *(_OWORD *)(v7 + 4 * v8) = *(_OWORD *)a2;
      *(_OWORD *)(v7 + 4 * v8 + 16) = *(_OWORD *)(a2 + 16);
      *(_DWORD *)(v7 + 4 * v8 + 32) = *(_DWORD *)(a2 + 32);
      *(_DWORD *)(a1 + 24) = v5;
    }
  }
  return (unsigned int)v6;
}
