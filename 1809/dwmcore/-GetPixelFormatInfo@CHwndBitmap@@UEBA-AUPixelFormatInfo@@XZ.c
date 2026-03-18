/*
 * XREFs of ?GetPixelFormatInfo@CHwndBitmap@@UEBA?AUPixelFormatInfo@@XZ @ 0x18019A8A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?GetEffectAlpha@CVisual@@QEBAMXZ @ 0x1801B68E0 (-GetEffectAlpha@CVisual@@QEBAMXZ.c)
 *     ?GetVisualAlpha@CVisual@@QEBAMPEBVCVisualTree@@@Z @ 0x1801B6FDC (-GetVisualAlpha@CVisual@@QEBAMPEBVCVisualTree@@@Z.c)
 *     ?IsClipSimpleRect@CWindowNode@@QEAA_NXZ @ 0x1801B99C4 (-IsClipSimpleRect@CWindowNode@@QEAA_NXZ.c)
 */

_DWORD *__fastcall CHwndBitmap::GetPixelFormatInfo(__int64 a1, _DWORD *a2)
{
  _DWORD *v4; // rcx
  bool v5; // zf
  int v6; // eax
  __int64 v7; // rcx
  CWindowNode *v8; // rcx
  float v9; // xmm0_4
  float v10; // xmm0_4
  int v11; // eax
  float v12; // xmm1_4
  float v13; // xmm4_4
  __int64 v15; // [rsp+20h] [rbp-18h]

  v4 = *(_DWORD **)(a1 + 128);
  if ( v4 )
  {
    *a2 = v4[51];
    a2[1] = 3;
    v5 = v4[52] == 0;
    a2[2] = v4[53] == 2;
    v6 = a2[1];
    if ( !v5 )
      v6 = 1;
    a2[1] = v6;
  }
  else
  {
    v7 = *(_QWORD *)(a1 + 104);
    v15 = 0x100000057LL;
    if ( v7 )
    {
      if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v7 + 48LL))(v7, 164LL) )
      {
        v8 = *(CWindowNode **)(a1 + 104);
        if ( (*((_BYTE *)v8 + 876) & 1) != 0 && CWindowNode::IsClipSimpleRect(v8) )
        {
          v9 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(CVisual::GetEffectAlpha(*(CVisual **)(a1 + 104)) - 1.0)) & _xmm);
          if ( v9 < 0.0000011920929 )
          {
            v10 = CVisual::GetVisualAlpha(*(CVisual **)(a1 + 104), 0LL) - 1.0;
            v11 = 3;
            v12 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v10) & _xmm);
            if ( v13 <= v12 )
              v11 = 1;
            HIDWORD(v15) = v11;
          }
        }
      }
    }
    *(_QWORD *)a2 = v15;
    a2[2] = 0;
  }
  return a2;
}
