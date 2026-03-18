/*
 * XREFs of ?GrepValidateVisRgn@@YA_NPEAVDC@@PEAVREGION@@AEAVERECTL@@@Z @ 0x1C00AC29C
 * Callers:
 *     GreValidateVisrgn @ 0x1C0027468 (GreValidateVisrgn.c)
 *     GreSetDCOwnerEx @ 0x1C0027700 (GreSetDCOwnerEx.c)
 *     ?GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z @ 0x1C0028F5C (-GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z.c)
 * Callees:
 *     ??XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z @ 0x1C001A09C (--XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z.c)
 *     HmgShareLockCheck @ 0x1C0021790 (HmgShareLockCheck.c)
 *     ??1SURFREF@@QEAA@XZ @ 0x1C0023B70 (--1SURFREF@@QEAA@XZ.c)
 *     ?bWrapped@ERECTL@@QEBAHXZ @ 0x1C0029890 (-bWrapped@ERECTL@@QEBAHXZ.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C006969C (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?bEqual@ERECTL@@QEBAHAEBV1@@Z @ 0x1C006AF3C (-bEqual@ERECTL@@QEBAHAEBV1@@Z.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C006B0A4 (-vOrder@ERECTL@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     ??0SURFREF@@QEAA@XZ @ 0x1C00FEFEC (--0SURFREF@@QEAA@XZ.c)
 */

char __fastcall GrepValidateVisRgn(struct DC *a1, struct REGION *a2, struct ERECTL *a3)
{
  __int64 v7; // rbx
  __int64 v8; // r8
  __int64 v9; // rcx
  int v10; // eax
  unsigned int v11; // r11d
  unsigned int v12; // r10d
  int v13; // ebx
  __int64 v14; // r8
  __int64 v15; // rdx
  int v16; // edx
  int v17; // rdx^4
  __int64 v18; // r8
  int v19; // r9d
  int v20; // r10d
  int v21; // r11d
  char v22; // bl
  _BYTE v23[32]; // [rsp+50h] [rbp-19h] BYREF
  __int64 v24; // [rsp+70h] [rbp+7h]
  __int128 v25; // [rsp+78h] [rbp+Fh] BYREF
  __m128i si128; // [rsp+88h] [rbp+1Fh] BYREF

  if ( (*((_DWORD *)a1 + 9) & 0x100000) == 0 )
    return 1;
  v7 = *((_QWORD *)a1 + 6);
  if ( !v7 || !a2 )
    return 1;
  SURFREF::SURFREF((SURFREF *)v23);
  if ( (*((_DWORD *)a1 + 9) & 0x40000) != 0 )
  {
    v9 = *((_QWORD *)a1 + 266);
    if ( v9 )
    {
      v8 = HmgShareLockCheck(v9, 5);
      v24 = v8;
    }
    else
    {
      v8 = *(_QWORD *)(v7 + 2552);
    }
  }
  else
  {
    v8 = *((_QWORD *)a1 + 62);
  }
  if ( !v8 || (*(_DWORD *)(v7 + 40) & 0x20000) != 0 && *(int *)(v8 + 112) < 0 )
    goto LABEL_22;
  v10 = *((_DWORD *)a1 + 9) & 0x5000;
  v11 = *((_DWORD *)a2 + 23);
  v12 = *((_DWORD *)a2 + 24);
  v13 = *((_DWORD *)a2 + 25);
  LODWORD(v25) = *((_DWORD *)a2 + 22);
  *(_QWORD *)((char *)&v25 + 4) = __PAIR64__(v12, v11);
  HIDWORD(v25) = v13;
  if ( v10 == 4096
    || ERECTL::bEmpty((ERECTL *)&v25)
    || (si128 = _mm_load_si128((const __m128i *)&_xmm), ERECTL::bEqual((ERECTL *)&v25, (const struct ERECTL *)&si128))
    || (v15 = -(__int64)((*(_DWORD *)(v14 + 116) & 0x800) != 0),
        si128.m128i_i64[0] = 0LL,
        si128.m128i_i64[1] = *(_QWORD *)((v15 & 0x264) + v14 + 56),
        !ERECTL::bWrapped((ERECTL *)&v25))
    && v19 >= 0
    && v16 >= v20
    && v21 >= 0
    && v17 >= v13 )
  {
LABEL_22:
    v22 = 1;
  }
  else
  {
    DbgkWerCaptureLiveKernelDump(L"win32k.sys", 400LL, 1LL, a1, v18, a2, 0LL, 0LL, 0);
    ERECTL::vOrder((ERECTL *)&v25);
    ERECTL::operator*=((int *)&v25, si128.m128i_i32);
    v22 = 0;
    *(_OWORD *)a3 = v25;
  }
  SURFREF::~SURFREF((SURFREF *)v23);
  return v22;
}
