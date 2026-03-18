/*
 * XREFs of ?PreventInterMonitorBlts@@YAXPEAUtagCVR@@@Z @ 0x1C019E60C
 * Callers:
 *     ?BltValidInit@@YAHPEAUtagSMWP@@@Z @ 0x1C0026F74 (-BltValidInit@@YAHPEAUtagSMWP@@@Z.c)
 * Callees:
 *     IntersectRect @ 0x1C002D204 (IntersectRect.c)
 *     GetMonitorRect @ 0x1C0066BB4 (GetMonitorRect.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C00733F0 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 */

void __fastcall PreventInterMonitorBlts(struct tagCVR *a1)
{
  int v2; // r8d
  int v3; // edx
  int v4; // r8d
  __int64 i; // rsi
  __int128 v6; // xmm0
  __int64 v7; // rax
  int v8; // eax
  int v9; // ecx
  __int64 v10; // rbx
  __int64 v11; // r14
  unsigned int v12; // r13d
  unsigned int v13; // r15d
  unsigned int v14; // r12d
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rbx
  __int128 v19; // [rsp+38h] [rbp-39h] BYREF
  __int128 v20; // [rsp+48h] [rbp-29h] BYREF
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
    v2 = *((_DWORD *)a1 + 19);
    v3 = -*((_DWORD *)a1 + 18);
    LODWORD(v23) = *((_DWORD *)a1 + 14) - *((_DWORD *)a1 + 18);
    v4 = -v2;
    LODWORD(v24) = v3 + *((_DWORD *)a1 + 16);
    HIDWORD(v23) = v4 + *((_DWORD *)a1 + 15);
    HIDWORD(v24) = v4 + *((_DWORD *)a1 + 17);
    for ( i = *(_QWORD *)(gpDispInfo + 104LL); i; i = *(_QWORD *)(i + 56) )
    {
      v6 = *GetMonitorRect(&v20, i);
      v7 = *(_QWORD *)(i + 40);
      v19 = v6;
      if ( (*(_DWORD *)(v7 + 24) & 1) != 0 && (unsigned int)IntersectRect(&v27, (int *)&v23, (int *)&v19) )
      {
        v8 = *((_DWORD *)a1 + 18);
        v9 = *((_DWORD *)a1 + 19);
        v10 = v27;
        v11 = v28;
        v12 = v9 + HIDWORD(v27);
        v13 = v27 + v8;
        HIDWORD(v21) = v9 + HIDWORD(v27);
        v14 = v28 + v8;
        LODWORD(v21) = v27 + v8;
        LODWORD(v22) = v28 + v8;
        HIDWORD(v22) = v9 + HIDWORD(v28);
        IntersectRect(&v25, (int *)&v21, (int *)&v19);
        v17 = v25 - v21;
        if ( v25 == v21 )
          v17 = v26 - v22;
        if ( v17 )
        {
          if ( !*((_QWORD *)a1 + 15) )
            *((_QWORD *)a1 + 15) = CreateEmptyRgn(v16, v15);
          GreSetRectRgn(ghrgnInv2, v13, v12, v14, HIDWORD(v22));
          GreSetRectRgn(ghrgnGDC, (unsigned int)v25, HIDWORD(v25), (unsigned int)v26, HIDWORD(v26));
          GreCombineRgn(ghrgnInv2, ghrgnInv2, ghrgnGDC, 4LL);
          GreCombineRgn(*((_QWORD *)a1 + 15), *((_QWORD *)a1 + 15), ghrgnInv2, 2LL);
        }
        else
        {
          v18 = v10 - v23;
          if ( !v18 )
            v18 = v11 - v24;
          if ( !v18 )
            return;
        }
      }
    }
  }
}
