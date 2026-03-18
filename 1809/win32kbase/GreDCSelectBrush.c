/*
 * XREFs of GreDCSelectBrush @ 0x1C001E370
 * Callers:
 *     ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x1C0075BF0 (-bCleanDC@XDCOBJ@@QEAAHH@Z.c)
 *     ?GreSelectBrushInternal@@YAPEAUHBRUSH__@@AEAVXDCOBJ@@PEAU1@H@Z @ 0x1C00A9820 (-GreSelectBrushInternal@@YAPEAUHBRUSH__@@AEAVXDCOBJ@@PEAU1@H@Z.c)
 *     GreRestoreDCInternal @ 0x1C00ACC60 (GreRestoreDCInternal.c)
 * Callees:
 *     HmgShareLockCheck @ 0x1C0021790 (HmgShareLockCheck.c)
 *     ?DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z @ 0x1C00221E0 (-DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z.c)
 *     GreSetSolidBrushLight @ 0x1C0071800 (GreSetSolidBrushLight.c)
 */

__int64 __fastcall GreDCSelectBrush(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  __int64 v4; // rsi
  __int64 v5; // rdi
  _DWORD *v6; // r15

  v2 = a2;
  v4 = 0LL;
  if ( a1 )
  {
    v5 = *(_QWORD *)(a1 + 136);
    v4 = *(_QWORD *)(*(_QWORD *)(a1 + 976) + 160LL);
    if ( a2 != *(_QWORD *)v5 )
    {
      LOBYTE(a2) = 16;
      v5 = HmgShareLockCheck(v2, a2);
      if ( v5 )
      {
        DEC_SHARE_REF_CNT_LAZY0(*(struct BRUSH **)(a1 + 136));
        *(_DWORD *)(*(_QWORD *)(a1 + 976) + 152LL) |= 1u;
        *(_QWORD *)(a1 + 136) = v5;
      }
      else
      {
        v4 = 0LL;
      }
    }
    if ( v5 )
    {
      if ( v4 )
      {
        v6 = *(_DWORD **)(v5 + 48);
        if ( v6 != (_DWORD *)(v5 + 72) && (*v6 & 4) != 0 )
        {
          *(_DWORD *)(*(_QWORD *)(a1 + 976) + 152LL) |= 1u;
          GreSetSolidBrushLight((struct OBJECT *)v5);
          *v6 &= ~4u;
        }
      }
      *(_QWORD *)(*(_QWORD *)(a1 + 976) + 160LL) = v2;
      *(_DWORD *)(*(_QWORD *)(a1 + 976) + 152LL) &= ~0x1000u;
    }
  }
  return v4;
}
