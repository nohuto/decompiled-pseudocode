/*
 * XREFs of ?GetMonitorMenuRectForDpi@@YA?AUtagRECT@@PEBUtagMONITOR@@G@Z @ 0x1C025941C
 * Callers:
 *     ?GetMonitorMenuRectForDpiContext@@YA?AUtagRECT@@PEBUtagMONITOR@@K@Z @ 0x1C02594E8 (-GetMonitorMenuRectForDpiContext@@YA-AUtagRECT@@PEBUtagMONITOR@@K@Z.c)
 * Callees:
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C0014980 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     ExpandMonitorSpaceVertex @ 0x1C0035A70 (ExpandMonitorSpaceVertex.c)
 *     ScaleDPIRect @ 0x1C0035AD0 (ScaleDPIRect.c)
 *     GetMonitorRectForDpi @ 0x1C012EBC8 (GetMonitorRectForDpi.c)
 */

struct tagRECT *__fastcall GetMonitorMenuRectForDpi(
        struct tagRECT *__return_ptr retstr,
        const struct tagMONITOR *a2,
        unsigned __int16 a3)
{
  struct tagRECT v4; // xmm6
  __int64 v7; // rdx
  unsigned __int16 v8; // r8
  __m128i v9; // xmm0
  __int64 v10; // rax
  unsigned __int16 v11; // dx
  __int64 v12; // rbx
  __int64 v13; // rax
  __m128i v15; // [rsp+30h] [rbp-38h] BYREF
  __m128i v16; // [rsp+40h] [rbp-28h] BYREF

  v4 = *(struct tagRECT *)((char *)a2 + 296);
  v15 = (__m128i)v4;
  if ( IsRectEmptyInl((const struct tagRECT *)&v15) )
  {
    v9 = *GetMonitorRectForDpi(&v16, v7, v8);
LABEL_6:
    *retstr = (struct tagRECT)v9;
    return retstr;
  }
  if ( a3 )
  {
    v10 = *(_QWORD *)(v7 + 40);
    v11 = *(_WORD *)(v10 + 66);
    v16 = *(__m128i *)(v10 + 28);
    v12 = v16.m128i_i64[0];
    v13 = ExpandMonitorSpaceVertex(a3, v11, v16.m128i_i64[0]);
    ScaleDPIRect(&v15, &v15, a3, *(_WORD *)(*((_QWORD *)a2 + 5) + 64LL), v13, v12);
    v9 = v15;
    goto LABEL_6;
  }
  *retstr = v4;
  return retstr;
}
