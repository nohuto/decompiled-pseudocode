/*
 * XREFs of ?PreventInterMonitorBlts@@YAXPEAUtagCVR@@@Z @ 0x1C01D36D8
 * Callers:
 *     ?BltValidInit@@YAHPEAUtagSMWP@@@Z @ 0x1C006E43C (-BltValidInit@@YAHPEAUtagSMWP@@@Z.c)
 * Callees:
 *     GetMonitorRect @ 0x1C00145DC (GetMonitorRect.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C0014980 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     IntersectRect @ 0x1C0068714 (IntersectRect.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 */

void __fastcall PreventInterMonitorBlts(struct tagCVR *a1)
{
  int v2; // ecx
  int v3; // edx
  __int64 i; // rsi
  __int128 v5; // xmm0
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
  __int64 v16; // rax
  __int64 v17; // rbx
  __int128 v18; // [rsp+38h] [rbp-39h] BYREF
  __int128 v19; // [rsp+48h] [rbp-29h] BYREF
  __int64 v20; // [rsp+58h] [rbp-19h] BYREF
  __int64 v21; // [rsp+60h] [rbp-11h]
  __int64 v22; // [rsp+68h] [rbp-9h] BYREF
  __int64 v23; // [rsp+70h] [rbp-1h]
  __int64 v24; // [rsp+78h] [rbp+7h] BYREF
  __int64 v25; // [rsp+80h] [rbp+Fh]
  __int64 v26; // [rsp+88h] [rbp+17h] BYREF
  __int64 v27; // [rsp+90h] [rbp+1Fh]

  v20 = 0LL;
  v21 = 0LL;
  v24 = 0LL;
  v25 = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  if ( !IsRectEmptyInl((const struct tagRECT *)((char *)a1 + 56)) )
  {
    v2 = *((_DWORD *)a1 + 18);
    v3 = *((_DWORD *)a1 + 19);
    LODWORD(v26) = *((_DWORD *)a1 + 14) - v2;
    LODWORD(v27) = *((_DWORD *)a1 + 16) - v2;
    HIDWORD(v26) = *((_DWORD *)a1 + 15) - v3;
    HIDWORD(v27) = *((_DWORD *)a1 + 17) - v3;
    for ( i = *(_QWORD *)(gpDispInfo + 104LL); i; i = *(_QWORD *)(i + 56) )
    {
      v5 = *GetMonitorRect(&v19, i);
      v6 = *(_QWORD *)(i + 40);
      v18 = v5;
      if ( (*(_DWORD *)(v6 + 24) & 1) != 0 && (unsigned int)IntersectRect(&v24, (int *)&v26, (int *)&v18) )
      {
        v7 = *((_DWORD *)a1 + 18);
        v8 = *((_DWORD *)a1 + 19);
        v9 = v24;
        v10 = v25;
        v11 = v8 + HIDWORD(v24);
        v12 = v24 + v7;
        HIDWORD(v20) = v8 + HIDWORD(v24);
        v13 = v25 + v7;
        LODWORD(v20) = v24 + v7;
        LODWORD(v21) = v25 + v7;
        HIDWORD(v21) = v8 + HIDWORD(v25);
        IntersectRect(&v22, (int *)&v20, (int *)&v18);
        v16 = v22 - v20;
        if ( v22 == v20 )
          v16 = v23 - v21;
        if ( v16 )
        {
          if ( !*((_QWORD *)a1 + 15) )
            *((_QWORD *)a1 + 15) = CreateEmptyRgn(v15, v14);
          GreSetRectRgn(ghrgnInv2, v12, v11, v13, HIDWORD(v21));
          GreSetRectRgn(ghrgnGDC, (unsigned int)v22, HIDWORD(v22), (unsigned int)v23, HIDWORD(v23));
          GreCombineRgn(ghrgnInv2, ghrgnInv2, ghrgnGDC, 4LL);
          GreCombineRgn(*((_QWORD *)a1 + 15), *((_QWORD *)a1 + 15), ghrgnInv2, 2LL);
        }
        else
        {
          v17 = v9 - v26;
          if ( !v17 )
            v17 = v10 - v27;
          if ( !v17 )
            return;
        }
      }
    }
  }
}
