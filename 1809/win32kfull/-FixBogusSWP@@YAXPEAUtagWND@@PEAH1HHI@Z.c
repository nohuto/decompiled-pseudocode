/*
 * XREFs of ?FixBogusSWP@@YAXPEAUtagWND@@PEAH1HHI@Z @ 0x1C01BF910
 * Callers:
 *     xxxSetWindowPosAndBand @ 0x1C0071DE8 (xxxSetWindowPosAndBand.c)
 * Callees:
 *     IntersectRect @ 0x1C003D900 (IntersectRect.c)
 *     ?_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z @ 0x1C007A7CC (-_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z.c)
 *     GetMonitorWorkRect @ 0x1C00B7058 (GetMonitorWorkRect.c)
 *     GetMonitorRect @ 0x1C00B709C (GetMonitorRect.c)
 *     ?IsRectBogus@@YAHHHHH@Z @ 0x1C01BFA84 (-IsRectBogus@@YAHHHHH@Z.c)
 */

void __fastcall FixBogusSWP(struct tagWND **a1, int *a2, int *a3, int a4, int a5, char a6)
{
  struct tagMONITOR *v10; // r15
  __int64 v11; // rdx
  __int64 v12; // rcx
  struct tagWND *v13; // rdx
  int v14; // ebx
  __m128i v15; // xmm0
  struct tagWND *v16; // rax
  __m128i *MonitorWorkRect; // rax
  int v18; // ecx
  __m128i v19; // xmm0
  unsigned __int64 v20; // xmm0_8
  int v21; // edx
  __int32 v22; // ecx
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rax
  _DWORD v25[4]; // [rsp+20h] [rbp-38h] BYREF
  __m128i v26[2]; // [rsp+30h] [rbp-28h] BYREF

  v10 = _MonitorFromWindowInternal(a1[12], 2, 0);
  if ( v10 != *(struct tagMONITOR **)(GetDispInfo(v12, v11) + 96) )
  {
    if ( (a6 & 1) != 0 )
    {
      v13 = a1[5];
      a4 = *((_DWORD *)v13 + 24) - *((_DWORD *)v13 + 22);
      v14 = *((_DWORD *)v13 + 25) - *((_DWORD *)v13 + 23);
    }
    else
    {
      v14 = a5;
    }
    if ( (unsigned int)IsRectBogus(*a2, *a3, a4, v14) )
    {
      v15 = *GetMonitorRect(v26, (__int64)v10);
      v16 = a1[12];
      v26[0] = v15;
      IntersectRect(v25, v26[0].m128i_i32, (int *)(*((_QWORD *)v16 + 5) + 88LL));
      MonitorWorkRect = GetMonitorWorkRect(v26, (__int64)v10);
      v18 = v25[1];
      v26[0] = *MonitorWorkRect;
      v19 = v26[0];
      *a2 = v25[0] + (v25[2] - v25[0] - a4) / 2;
      v20 = _mm_srli_si128(v19, 8).m128i_u64[0];
      v21 = (v25[3] - v18 - v14) / 2 + v18;
      *a3 = v21;
      v22 = *a2;
      if ( *a2 + a4 > (int)v20 )
      {
        v22 = v20 - a4;
        *a2 = v20 - a4;
        v21 = *a3;
      }
      if ( v21 + v14 > SHIDWORD(v20) )
      {
        v21 = HIDWORD(v20) - v14;
        *a3 = HIDWORD(v20) - v14;
        v22 = *a2;
      }
      v23 = v26[0].m128i_i64[0];
      if ( v22 < v26[0].m128i_i32[0] )
      {
        *a2 = v26[0].m128i_i32[0];
        v21 = *a3;
      }
      v24 = HIDWORD(v23);
      if ( v21 < (int)v24 )
        *a3 = v24;
    }
  }
}
