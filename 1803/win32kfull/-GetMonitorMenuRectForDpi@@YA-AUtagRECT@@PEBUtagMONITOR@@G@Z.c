/*
 * XREFs of ?GetMonitorMenuRectForDpi@@YA?AUtagRECT@@PEBUtagMONITOR@@G@Z @ 0x1C022AEC4
 * Callers:
 *     GetMonitorMenuRect @ 0x1C022B034 (GetMonitorMenuRect.c)
 *     GetMonitorMenuRectForWindow @ 0x1C022B078 (GetMonitorMenuRectForWindow.c)
 * Callees:
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C00733F0 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     GetMonitorRectForDpi @ 0x1C00737A0 (GetMonitorRectForDpi.c)
 *     ScaleDPIRect @ 0x1C0073820 (ScaleDPIRect.c)
 *     ExpandMonitorSpaceVertex @ 0x1C00738F4 (ExpandMonitorSpaceVertex.c)
 */

struct tagRECT *__fastcall GetMonitorMenuRectForDpi(
        struct tagRECT *__return_ptr retstr,
        const struct tagMONITOR *a2,
        unsigned __int16 a3)
{
  struct tagRECT v4; // xmm6
  __int64 v7; // rdx
  unsigned __int16 v8; // r8
  struct tagRECT v9; // xmm0
  __int64 v10; // rax
  unsigned __int16 v11; // dx
  __int64 v12; // rbx
  __int64 v13; // rax
  __m128i v15; // [rsp+30h] [rbp-38h] BYREF
  __int128 v16; // [rsp+40h] [rbp-28h] BYREF

  v4 = *(struct tagRECT *)((char *)a2 + 584);
  v15 = (__m128i)v4;
  if ( IsRectEmptyInl((const struct tagRECT *)&v15) )
  {
    v9 = *(struct tagRECT *)GetMonitorRectForDpi((__int64 *)&v16, v7, v8);
LABEL_6:
    *retstr = v9;
    return retstr;
  }
  if ( a3 )
  {
    v10 = *(_QWORD *)(v7 + 40);
    v11 = *(_WORD *)(v10 + 66);
    v16 = *(_OWORD *)(v10 + 28);
    v12 = v16;
    v13 = ExpandMonitorSpaceVertex(a3, v11, v16);
    ScaleDPIRect(&v15, &v15, a3, *(_WORD *)(*((_QWORD *)a2 + 5) + 64LL), v13, v12);
    v9 = (struct tagRECT)v15;
    goto LABEL_6;
  }
  *retstr = v4;
  return retstr;
}
