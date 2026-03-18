/*
 * XREFs of ?ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z @ 0x1C0027DBC
 * Callers:
 *     _GetDCEx @ 0x1C0026700 (_GetDCEx.c)
 *     UserSetDCVisRgn @ 0x1C00298B0 (UserSetDCVisRgn.c)
 * Callees:
 *     GreSetRectRgn @ 0x1C001E010 (GreSetRectRgn.c)
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x1C001F7F0 (--1RGNOBJAPI@@QEAA@XZ.c)
 *     ??1DCOBJA@@QEAA@XZ @ 0x1C00273C8 (--1DCOBJA@@QEAA@XZ.c)
 *     ??0DCOBJA@@QEAA@PEAUHDC__@@@Z @ 0x1C00273F4 (--0DCOBJA@@QEAA@PEAUHDC__@@@Z.c)
 *     ?GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z @ 0x1C0028F5C (-GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z.c)
 *     ?bOffset@RGNOBJ@@QEAAHPEAU_POINTL@@@Z @ 0x1C0029690 (-bOffset@RGNOBJ@@QEAAHPEAU_POINTL@@@Z.c)
 *     GetScreenRectForDpi @ 0x1C002B318 (GetScreenRectForDpi.c)
 *     IntersectRect @ 0x1C00393F4 (IntersectRect.c)
 *     GetMonitorRectForDpi @ 0x1C00399C0 (GetMonitorRectForDpi.c)
 *     ?SetMonitorRegion@@YAXPEAUtagMONITOR@@PEAUHRGN__@@1@Z @ 0x1C003A670 (-SetMonitorRegion@@YAXPEAUtagMONITOR@@PEAUHRGN__@@1@Z.c)
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z @ 0x1C00A9FE0 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z.c)
 */

void __fastcall ResetOrg(HRGN a1, struct tagDCE *a2, int a3)
{
  HRGN v3; // r13
  __int64 v5; // rcx
  int v6; // esi
  __int128 v7; // xmm0
  int v8; // r12d
  unsigned int v9; // r15d
  unsigned int v10; // r14d
  int v11; // edi
  struct _POINTL v12; // rcx
  int v13; // eax
  __int64 LayeredOrRedirectedParent; // rsi
  __int64 v15; // rax
  __int64 v16; // rdx
  int v17; // r13d
  int v18; // esi
  LONG v19; // esi
  LONG v20; // r13d
  struct OBJECT *v21; // rdx
  int v22; // r8d
  int v23; // ecx
  int v24; // ecx
  __int128 v25; // xmm0
  struct OBJECT *v26; // rcx
  int v27; // eax
  __m128i *ScreenRectForDpi; // rax
  __m128i v29; // xmm1
  __int64 v30; // rax
  unsigned __int64 v31; // xmm0_8
  __int64 v32; // rdx
  __int128 v33; // [rsp+38h] [rbp-39h] BYREF
  __int128 v34; // [rsp+48h] [rbp-29h] BYREF
  struct OBJECT *v35[14]; // [rsp+58h] [rbp-19h] BYREF
  struct _POINTL v37; // [rsp+E0h] [rbp+6Fh] BYREF
  int v38; // [rsp+E8h] [rbp+77h]

  v38 = a3;
  v3 = a1;
  v5 = *(_QWORD *)(*((_QWORD *)a2 + 2) + 40LL);
  if ( (*(_WORD *)(v5 + 42) & 0x2FFF) == 0x29D )
  {
    ScreenRectForDpi = (__m128i *)GetScreenRectForDpi(&v34, 0LL);
    v6 = *((_DWORD *)a2 + 16);
    v9 = 0;
    v8 = 0;
    *(_QWORD *)&v33 = 0LL;
    v29 = *ScreenRectForDpi;
    v30 = ScreenRectForDpi->m128i_i64[0];
    v31 = _mm_srli_si128(v29, 8).m128i_u64[0];
    v10 = v31 - v30;
    v11 = HIDWORD(v31) - HIDWORD(v30);
    DWORD2(v33) = v31 - v30;
    HIDWORD(v33) = HIDWORD(v31) - HIDWORD(v30);
  }
  else
  {
    v6 = *((_DWORD *)a2 + 16);
    if ( (v6 & 1) != 0 )
      v7 = *(_OWORD *)(v5 + 88);
    else
      v7 = *(_OWORD *)(v5 + 104);
    v33 = v7;
    v8 = v7;
    v9 = DWORD1(v7);
    v10 = DWORD2(v7);
    v11 = HIDWORD(v7);
  }
  v12 = (struct _POINTL)*((_QWORD *)a2 + 11);
  v13 = v6;
  v37 = v12;
  if ( v12 )
  {
    if ( (v6 & 0x4000) == 0 )
    {
      v32 = *(_QWORD *)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))GetMonitorRectForDpi)(&v34, v12, 0LL);
      v8 -= v32;
      LODWORD(v33) = v8;
      v10 -= v32;
      v11 -= HIDWORD(v32);
      v9 -= HIDWORD(v32);
      HIDWORD(v33) = v11;
      v13 = v6;
      *(_QWORD *)((char *)&v33 + 4) = __PAIR64__(v10, v9);
      if ( v3 )
      {
        SetMonitorRegion(*(struct tagMONITOR **)&v37, v3, v3);
        v13 = *((_DWORD *)a2 + 16);
      }
    }
  }
  if ( (v13 & 0x4000000) != 0 )
    goto LABEL_30;
  if ( (int)IsGetLayeredOrRedirectedParentSupported() < 0 )
    LayeredOrRedirectedParent = 0LL;
  else
    LayeredOrRedirectedParent = GetLayeredOrRedirectedParent(*((_QWORD *)a2 + 2));
  if ( !LayeredOrRedirectedParent )
    goto LABEL_19;
  if ( (*(_DWORD *)(*(_QWORD *)(LayeredOrRedirectedParent + 40) + 24LL) & 0x20000000) != 0
    && (int)IsGetRedirectionBitmapSupported() >= 0
    && GetRedirectionBitmap(LayeredOrRedirectedParent) )
  {
    v15 = *(_QWORD *)(LayeredOrRedirectedParent + 40);
    v16 = *((_QWORD *)a2 + 11);
    v17 = *(_DWORD *)(v15 + 88);
    v18 = *(_DWORD *)(v15 + 92);
    if ( v16 && *((int *)a2 + 16) < 0 )
    {
      LODWORD(v33) = v17 + v8;
      DWORD2(v33) = v17 + v10;
      HIDWORD(v33) = v18 + v11;
      DWORD1(v33) = v18 + v9;
      v34 = *(_OWORD *)GetMonitorRectForDpi(&v34, v16, 0LL);
      IntersectRect(&v33, &v33, &v34);
      v11 = HIDWORD(v33);
      v10 = DWORD2(v33);
      v9 = DWORD1(v33);
      v8 = v33;
    }
    v19 = -v18;
    v20 = -v17;
    v8 += v20;
    HIDWORD(v33) = v19 + v11;
    LODWORD(v33) = v8;
    v9 += v19;
    DWORD2(v33) = v20 + v10;
    DWORD1(v33) = v9;
    if ( a1 )
    {
      RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v35, a1, 0, 0);
      v37.x = v20;
      v37.y = v19;
      if ( v35[0] )
        RGNOBJ::bOffset((RGNOBJ *)v35, &v37);
      RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v35);
    }
    v3 = a1;
  }
  else
  {
LABEL_30:
    if ( v3 )
      GreSetRectRgn(v3, 0, 0, 0, 0);
  }
LABEL_19:
  DCOBJA::DCOBJA((DCOBJA *)v35, *((HDC *)a2 + 1));
  if ( v35[0] )
  {
    *((_DWORD *)v35[0] + 2 * (*((_DWORD *)v35[0] + 10) & 1) + 254) = v8;
    *((_DWORD *)v35[0] + 2 * (*((_DWORD *)v35[0] + 10) & 1) + 255) = v9;
    v21 = v35[0];
    v22 = *((_DWORD *)v35[0] + 10) & 1;
    v23 = v22 ? *((_DWORD *)v35[0] + 256) : *((_DWORD *)v35[0] + 254);
    *((_DWORD *)v35[0] + 300) = *((_DWORD *)v35[0] + 31) + v23;
    v24 = v22 ? *((_DWORD *)v21 + 257) : *((_DWORD *)v21 + 255);
    v25 = v33;
    *((_DWORD *)v21 + 301) = *((_DWORD *)v21 + 32) + v24;
    *(_OWORD *)((char *)v35[0] + 1032) = v25;
    v26 = v35[0];
    v27 = *((_DWORD *)v35[0] + 130);
    if ( (v27 & 1) != 0 && (v27 & 2) == 0 )
    {
      *((_DWORD *)v35[0] + 9) |= 0x10u;
      *((_DWORD *)v26 + 130) = v27 | 4;
    }
  }
  DCOBJA::~DCOBJA(v35);
  if ( v38 )
  {
    DCOBJA::DCOBJA((DCOBJA *)v35, *((HDC *)a2 + 1));
    GreSelectVisRgnInternal(v35, v3, 1LL);
    DCOBJA::~DCOBJA(v35);
  }
}
