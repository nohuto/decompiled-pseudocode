/*
 * XREFs of ?PreventInterMonitorBlts@@YAXPEAUtagCVR@@@Z @ 0x1C01BFB44
 * Callers:
 *     ?BltValidInit@@YAHPEAUtagSMWP@@@Z @ 0x1C0038244 (-BltValidInit@@YAHPEAUtagSMWP@@@Z.c)
 * Callees:
 *     IntersectRect @ 0x1C003D900 (IntersectRect.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C007AA94 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     GetMonitorRect @ 0x1C00B709C (GetMonitorRect.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 */

void __fastcall PreventInterMonitorBlts(struct tagCVR *a1)
{
  int v2; // ecx
  int v3; // edx
  __int64 i; // rsi
  __m128i v5; // xmm0
  __int64 v6; // rax
  int v7; // eax
  int v8; // ecx
  __int64 v9; // rbx
  __int64 v10; // r14
  unsigned int v11; // r13d
  unsigned int v12; // r15d
  unsigned int v13; // r12d
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rax
  __int64 v18; // rbx
  __m128i v19; // [rsp+38h] [rbp-39h] BYREF
  __m128i v20; // [rsp+48h] [rbp-29h] BYREF
  __int64 v21; // [rsp+58h] [rbp-19h] BYREF
  __int64 v22; // [rsp+60h] [rbp-11h]
  __int64 v23; // [rsp+68h] [rbp-9h] BYREF
  __int64 v24; // [rsp+70h] [rbp-1h]
  __int64 v25; // [rsp+78h] [rbp+7h] BYREF
  __int64 v26; // [rsp+80h] [rbp+Fh]
  __int64 v27; // [rsp+88h] [rbp+17h] BYREF
  __int64 v28; // [rsp+90h] [rbp+1Fh]

  if ( !IsRectEmptyInl((const struct tagRECT *)((char *)a1 + 56)) )
  {
    v2 = *((_DWORD *)a1 + 18);
    v3 = *((_DWORD *)a1 + 19);
    LODWORD(v23) = *((_DWORD *)a1 + 14) - v2;
    LODWORD(v24) = *((_DWORD *)a1 + 16) - v2;
    HIDWORD(v23) = *((_DWORD *)a1 + 15) - v3;
    HIDWORD(v24) = *((_DWORD *)a1 + 17) - v3;
    for ( i = *(_QWORD *)(gpDispInfo + 104LL); i; i = *(_QWORD *)(i + 56) )
    {
      v5 = *GetMonitorRect(&v20, i);
      v6 = *(_QWORD *)(i + 40);
      v19 = v5;
      if ( (*(_DWORD *)(v6 + 24) & 1) != 0 && (unsigned int)IntersectRect(&v27, (int *)&v23, v19.m128i_i32) )
      {
        v7 = *((_DWORD *)a1 + 18);
        v8 = *((_DWORD *)a1 + 19);
        v9 = v27;
        v10 = v28;
        v11 = v8 + HIDWORD(v27);
        v12 = v27 + v7;
        HIDWORD(v21) = v8 + HIDWORD(v27);
        v13 = v28 + v7;
        LODWORD(v21) = v27 + v7;
        LODWORD(v22) = v28 + v7;
        HIDWORD(v22) = v8 + HIDWORD(v28);
        IntersectRect(&v25, (int *)&v21, v19.m128i_i32);
        v17 = v25 - v21;
        if ( v25 == v21 )
          v17 = v26 - v22;
        if ( v17 )
        {
          if ( !*((_QWORD *)a1 + 15) )
            *((_QWORD *)a1 + 15) = CreateEmptyRgn(v15, v14, v16);
          GreSetRectRgn(ghrgnInv2, v12, v11, v13, HIDWORD(v22));
          GreSetRectRgn(ghrgnGDC, (unsigned int)v25, HIDWORD(v25), (unsigned int)v26, HIDWORD(v26));
          GreCombineRgn(ghrgnInv2, ghrgnInv2, ghrgnGDC, 4LL);
          GreCombineRgn(*((_QWORD *)a1 + 15), *((_QWORD *)a1 + 15), ghrgnInv2, 2LL);
        }
        else
        {
          v18 = v9 - v23;
          if ( !v18 )
            v18 = v10 - v24;
          if ( !v18 )
            return;
        }
      }
    }
  }
}
