/*
 * XREFs of ?GetPixelFormatInfo@CHwndBitmap@@UEBA?AUPixelFormatInfo@@XZ @ 0x180216370
 * Callers:
 *     <none>
 * Callees:
 *     ?GetVisualAlpha@CVisual@@QEBAMPEBVCVisualTree@@@Z @ 0x180004910 (-GetVisualAlpha@CVisual@@QEBAMPEBVCVisualTree@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?GetEffectAlpha@CVisual@@QEBAMXZ @ 0x1801C3080 (-GetEffectAlpha@CVisual@@QEBAMXZ.c)
 *     ?IsClipSimpleRect@CWindowNode@@QEAA_NXZ @ 0x1802196D0 (-IsClipSimpleRect@CWindowNode@@QEAA_NXZ.c)
 */

_DWORD *__fastcall CHwndBitmap::GetPixelFormatInfo(__int64 a1, _DWORD *a2)
{
  _DWORD *v4; // rcx
  int v5; // edi
  bool v6; // zf
  int v7; // eax
  __int64 v8; // rcx
  CWindowNode *v9; // rcx
  float v10; // xmm0_4
  float v11; // xmm1_4
  float v12; // xmm4_4
  __int64 v14; // [rsp+20h] [rbp-18h]

  v4 = *(_DWORD **)(a1 + 128);
  v5 = 1;
  if ( v4 )
  {
    *a2 = v4[51];
    a2[1] = 3;
    v6 = v4[52] == 0;
    a2[2] = v4[53] == 2;
    v7 = a2[1];
    if ( !v6 )
      v7 = 1;
    a2[1] = v7;
  }
  else
  {
    v8 = *(_QWORD *)(a1 + 104);
    v14 = 0x100000057LL;
    if ( v8 )
    {
      if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v8 + 48LL))(v8, 197LL) )
      {
        v9 = *(CWindowNode **)(a1 + 104);
        if ( (*((_BYTE *)v9 + 860) & 1) != 0 && CWindowNode::IsClipSimpleRect(v9) )
        {
          v10 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(CVisual::GetEffectAlpha(*(CVisual **)(a1 + 104)) - 1.0)) & _xmm);
          if ( v10 < 0.0000011920929 )
          {
            v11 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(CVisual::GetVisualAlpha(*(CVisual **)(a1 + 104), 0LL) - 1.0)) & _xmm);
            if ( v12 > v11 )
              v5 = 3;
            HIDWORD(v14) = v5;
          }
        }
      }
    }
    *(_QWORD *)a2 = v14;
    a2[2] = 0;
  }
  return a2;
}
