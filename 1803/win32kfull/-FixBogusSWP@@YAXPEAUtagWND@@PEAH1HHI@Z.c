/*
 * XREFs of ?FixBogusSWP@@YAXPEAUtagWND@@PEAH1HHI@Z @ 0x1C019E3E8
 * Callers:
 *     xxxSetWindowPosAndBand @ 0x1C0034E48 (xxxSetWindowPosAndBand.c)
 * Callees:
 *     IntersectRect @ 0x1C002D204 (IntersectRect.c)
 *     GetMonitorRect @ 0x1C0066BB4 (GetMonitorRect.c)
 *     GetMonitorWorkRect @ 0x1C0066BF8 (GetMonitorWorkRect.c)
 *     ?_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z @ 0x1C0072A9C (-_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z.c)
 *     ?IsRectBogus@@YAHHHHH@Z @ 0x1C019E554 (-IsRectBogus@@YAHHHHH@Z.c)
 */

void __fastcall FixBogusSWP(struct tagWND **a1, int *a2, int *a3, __int64 a4, int a5, char a6)
{
  int v9; // esi
  struct tagMONITOR *v10; // r15
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  struct tagWND *v15; // rdx
  int v16; // ebx
  __int128 v17; // xmm0
  struct tagWND *v18; // rax
  _OWORD *MonitorWorkRect; // rax
  int v20; // ecx
  __m128i v21; // xmm0
  unsigned __int64 v22; // xmm0_8
  int v23; // edx
  int v24; // ecx
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // rax
  _DWORD v27[4]; // [rsp+20h] [rbp-38h] BYREF
  _OWORD v28[2]; // [rsp+30h] [rbp-28h] BYREF

  v9 = a4;
  v10 = _MonitorFromWindowInternal(a1[12], 2LL, 0LL, a4);
  if ( v10 != *(struct tagMONITOR **)(GetDispInfo(v12, v11, v13, v14) + 96) )
  {
    if ( (a6 & 1) != 0 )
    {
      v15 = a1[5];
      v9 = *((_DWORD *)v15 + 24) - *((_DWORD *)v15 + 22);
      v16 = *((_DWORD *)v15 + 25) - *((_DWORD *)v15 + 23);
    }
    else
    {
      v16 = a5;
    }
    if ( (unsigned int)IsRectBogus(*a2, *a3, v9, v16) )
    {
      v17 = *GetMonitorRect(v28, (__int64)v10);
      v18 = a1[12];
      v28[0] = v17;
      IntersectRect(v27, (int *)v28, (int *)(*((_QWORD *)v18 + 5) + 88LL));
      MonitorWorkRect = GetMonitorWorkRect(v28, (__int64)v10);
      v20 = v27[1];
      v28[0] = *MonitorWorkRect;
      v21 = (__m128i)v28[0];
      *a2 = v27[0] + (v27[2] - v27[0] - v9) / 2;
      v22 = _mm_srli_si128(v21, 8).m128i_u64[0];
      v23 = (v27[3] - v20 - v16) / 2 + v20;
      *a3 = v23;
      v24 = *a2;
      if ( *a2 + v9 > (int)v22 )
      {
        v24 = v22 - v9;
        *a2 = v22 - v9;
        v23 = *a3;
      }
      if ( v23 + v16 > SHIDWORD(v22) )
      {
        v23 = HIDWORD(v22) - v16;
        *a3 = HIDWORD(v22) - v16;
        v24 = *a2;
      }
      v25 = *(_QWORD *)&v28[0];
      if ( v24 < SLODWORD(v28[0]) )
      {
        *a2 = v28[0];
        v23 = *a3;
      }
      v26 = HIDWORD(v25);
      if ( v23 < (int)v26 )
        *a3 = v26;
    }
  }
}
