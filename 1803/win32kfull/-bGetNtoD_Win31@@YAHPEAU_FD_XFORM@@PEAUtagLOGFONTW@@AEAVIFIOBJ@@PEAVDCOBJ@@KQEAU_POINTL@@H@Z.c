/*
 * XREFs of ?bGetNtoD_Win31@@YAHPEAU_FD_XFORM@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@PEAVDCOBJ@@KQEAU_POINTL@@H@Z @ 0x1C003EDCC
 * Callers:
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C00877F0 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ?bSetFontXform@PFEOBJ@@QEAAHAEAVXDCOBJ@@PEAUtagLOGFONTW@@PEAU_FD_XFORM@@KKQEAU_POINTL@@AEAVIFIOBJ@@H@Z @ 0x1C00CCA7C (-bSetFontXform@PFEOBJ@@QEAAHAEAVXDCOBJ@@PEAUtagLOGFONTW@@PEAU_FD_XFORM@@KKQEAU_POINTL@@AEAVIFIOB.c)
 * Callees:
 *     ?bParityViolatingXform@@YAHPEAVDCOBJ@@@Z @ 0x1C0006E0C (-bParityViolatingXform@@YAHPEAVDCOBJ@@@Z.c)
 *     ?bGetNtoW_Win31@@YAHPEAVMATRIX@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@PEAVDCOBJ@@KH@Z @ 0x1C003DA20 (-bGetNtoW_Win31@@YAHPEAVMATRIX@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@PEAVDCOBJ@@KH@Z.c)
 *     CaptureAndValidateUserModeDpiAwarenessContext @ 0x1C0042C10 (CaptureAndValidateUserModeDpiAwarenessContext.c)
 *     ?bIsZero@EFLOAT@@QEBAHXZ @ 0x1C0096D1C (-bIsZero@EFLOAT@@QEBAHXZ.c)
 *     ?ulLogPixelsX@PDEVOBJ@@QEAAKXZ @ 0x1C00CE3D8 (-ulLogPixelsX@PDEVOBJ@@QEAAKXZ.c)
 *     ?ulLogPixelsY@PDEVOBJ@@QEAAKXZ @ 0x1C00CE480 (-ulLogPixelsY@PDEVOBJ@@QEAAKXZ.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     IsThreadCrossSessionAttached @ 0x1C0139D6C (IsThreadCrossSessionAttached.c)
 */

__int64 __fastcall bGetNtoD_Win31(
        struct _FD_XFORM *a1,
        struct tagLOGFONTW *a2,
        struct IFIOBJ *a3,
        float **a4,
        char a5,
        struct _POINTL *const a6,
        int a7)
{
  unsigned int v7; // edi
  float **v8; // r12
  int v12; // ecx
  int v13; // edx
  __int64 lfEscapement; // rcx
  int v15; // edx
  int v16; // edx
  __int64 y; // rax
  __int64 v18; // rax
  FLOATL v19; // eax
  __int64 x; // rax
  __int64 v21; // rax
  __int64 result; // rax
  __int64 v23; // rdx
  float *v24; // r8
  __m128 v25; // xmm0
  __int64 v26; // rax
  int v27; // ecx
  unsigned int v28; // ebx
  int v29; // eax
  int v30; // eax
  int v31; // ecx
  __m128i v32; // xmm0
  int v33; // eax
  float *v34; // rax
  int v35; // r15d
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v37; // rdx
  __int64 v38; // rcx
  _QWORD *ThreadWin32Thread; // rax
  __int64 v40; // rbx
  __int64 CurrentProcessWin32Process; // rax
  int v42; // r13d
  bool v43; // cc
  int v44; // r12d
  _QWORD *v45; // rax
  __int64 v46; // rcx
  __int64 v47; // r13
  __int64 v48; // rax
  float v49; // xmm6_4
  float v50; // xmm6_4
  __int128 v51; // xmm1
  int v52; // eax
  _DWORD *v53; // [rsp+30h] [rbp-D0h] BYREF
  struct _KTHREAD *v54; // [rsp+38h] [rbp-C8h]
  struct DCOBJ *v55; // [rsp+40h] [rbp-C0h]
  __m128 *v56; // [rsp+48h] [rbp-B8h] BYREF
  int v57; // [rsp+54h] [rbp-ACh]
  _OWORD v58[2]; // [rsp+58h] [rbp-A8h] BYREF
  int v59; // [rsp+78h] [rbp-88h]
  __m128 v60; // [rsp+80h] [rbp-80h] BYREF
  __int128 v61; // [rsp+90h] [rbp-70h]
  int v62; // [rsp+A0h] [rbp-60h]
  _DWORD v63[10]; // [rsp+A8h] [rbp-58h] BYREF
  _OWORD v64[2]; // [rsp+D0h] [rbp-30h] BYREF
  int v65; // [rsp+F0h] [rbp-10h]
  _OWORD v66[2]; // [rsp+F8h] [rbp-8h] BYREF
  int v67; // [rsp+118h] [rbp+18h]

  v7 = 0;
  v8 = a4;
  v55 = (struct DCOBJ *)a4;
  if ( a6->x )
  {
    v12 = *(_DWORD *)(*(_QWORD *)a3 + 48LL);
    if ( (v12 & 0x3000010) == 0 )
    {
      v13 = 0;
      if ( gbDBCSCodePage && (v12 & 0x200000) != 0 )
      {
        lfEscapement = (unsigned int)a2->lfEscapement;
        if ( (*(_DWORD *)(*((_QWORD *)*a4 + 10) + 352LL) & 0x40) != 0 )
          v13 = (int)(3600 - lNormAngle(lfEscapement)) / 900 % 4;
        else
          v13 = (int)lNormAngle(lfEscapement) / 900;
      }
      if ( v13 )
      {
        v15 = v13 - 1;
        if ( !v15 )
        {
          x = a6->x;
          a1->eXX = 0.0;
          a1->eYY = 0.0;
          a1->eYX = *((FLOATL *)&galFloatNeg + x);
          a1->eXY = *((FLOATL *)&galFloatNeg + a6->y);
          return 1LL;
        }
        v16 = v15 - 1;
        if ( v16 )
        {
          if ( v16 == 1 )
          {
            y = a6->y;
            a1->eXX = 0.0;
            a1->eYY = 0.0;
            a1->eXY = *((FLOATL *)&galFloat + y);
            a1->eYX = *((FLOATL *)&galFloat + a6->x);
          }
          return 1LL;
        }
        v18 = a6->x;
        *(_QWORD *)&a1->eXY = 0LL;
        a1->eXX = *((FLOATL *)&galFloatNeg + v18);
        v19 = *((float *)&galFloat + a6->y);
      }
      else
      {
        v21 = a6->x;
        *(_QWORD *)&a1->eXY = 0LL;
        a1->eXX = *((FLOATL *)&galFloat + v21);
        v19 = *((float *)&galFloatNeg + a6->y);
      }
      a1->eYY = v19;
      return 1LL;
    }
  }
  result = bGetNtoW_Win31((struct MATRIX *)v64, a2, a3, (struct DCOBJ *)a4, a5, a7);
  if ( (_DWORD)result )
  {
    v24 = *v8;
    v56 = &v60;
    v57 = 0;
    if ( (*(_DWORD *)(*((_QWORD *)v24 + 10) + 352LL) & 0x802) == 0x802 || (a5 & 2) != 0 )
    {
      v25 = (__m128)v64[0];
      v62 = v65;
      v61 = v64[1];
    }
    else
    {
      if ( !EXFORMOBJ::bMultiply((EXFORMOBJ *)&v56, (struct MATRIX *)v64, (struct MATRIX *)(v24 + 82), 0) )
        return v7;
      v25 = _mm_mul_ps(v60, (__m128)_xmm);
    }
    v26 = *(_QWORD *)a3;
    v60 = v25;
    v27 = *(_DWORD *)(v26 + 48);
    if ( (v27 & 4) != 0 )
    {
LABEL_65:
      v7 = 1;
      *a1 = (struct _FD_XFORM)v60;
      return v7;
    }
    v28 = a2->lfEscapement;
    if ( (v27 & 0x200000) != 0 )
    {
      v29 = lNormAngle(v28);
      v23 = (v29 / 900) & 0x80000003;
      if ( v29 / 900 < 0 )
        v23 = ((unsigned __int8)(((v29 / 900) & 3) - 1) | 0xFFFFFFFC) + 1;
      v28 = 900 * v23;
    }
    if ( v28 && ((a5 & 1) == 0 || gbDBCSCodePage) )
    {
      v30 = bParityViolatingXform(v8);
      v31 = -v28;
      if ( !v30 )
        v31 = v28;
      v32 = (__m128i)COERCE_UNSIGNED_INT((float)v31);
      *(float *)v32.m128i_i32 = *(float *)v32.m128i_i32 / 10.0;
      v63[0] = efCos((unsigned int)_mm_cvtsi128_si32(v32));
      v63[3] = v63[0];
      v33 = efSin((unsigned int)_mm_cvtsi128_si32(v32));
      v63[4] = 0;
      v63[5] = 0;
      v63[2] = v33;
      v63[1] = v33 ^ _xmm;
      v67 = v62;
      v66[1] = v61;
      v66[0] = v60;
      if ( !EXFORMOBJ::bMultiply((EXFORMOBJ *)&v56, (struct MATRIX *)v66, (struct MATRIX *)v63, 0) )
        return v7;
    }
    v34 = *v8;
    LOBYTE(v35) = 18;
    CurrentThread = KeGetCurrentThread();
    LOBYTE(v8) = 18;
    v53 = (_DWORD *)*((_QWORD *)v34 + 6);
    if ( !(unsigned int)IsThreadCrossSessionAttached(v53, v23) )
    {
      ThreadWin32Thread = (_QWORD *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
      {
        v40 = *ThreadWin32Thread;
        if ( *ThreadWin32Thread )
        {
          if ( *(_QWORD *)(v40 + 360) )
            CaptureAndValidateUserModeDpiAwarenessContext(*ThreadWin32Thread);
          if ( *(_DWORD *)(v40 + 340) )
          {
            LOBYTE(v8) = *(_DWORD *)(v40 + 340);
          }
          else
          {
            CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v38);
            if ( CurrentProcessWin32Process )
              LODWORD(v8) = *(_DWORD *)(CurrentProcessWin32Process + 280);
          }
        }
      }
    }
    v42 = 96;
    if ( (v53[10] & 1) == 0 || (v43 = ((unsigned __int8)v8 & 0xFu) - 1 <= 1, v44 = 96, v43) )
      v44 = v53[542];
    v54 = KeGetCurrentThread();
    if ( !(unsigned int)IsThreadCrossSessionAttached(v38, v37) )
    {
      v45 = (_QWORD *)PsGetThreadWin32Thread(v54);
      if ( v45 )
      {
        v47 = *v45;
        if ( *v45 )
        {
          if ( *(_QWORD *)(v47 + 360) )
            CaptureAndValidateUserModeDpiAwarenessContext(*v45);
          if ( !*(_DWORD *)(v47 + 340) )
          {
            v48 = PsGetCurrentProcessWin32Process(v46);
            v42 = 96;
            if ( v48 )
              v35 = *(_DWORD *)(v48 + 280);
            goto LABEL_57;
          }
          LOBYTE(v35) = *(_DWORD *)(v47 + 340);
        }
        v42 = 96;
      }
    }
LABEL_57:
    if ( (v53[10] & 1) == 0 || (v35 & 0xFu) - 1 <= 1 )
      v42 = v53[543];
    if ( v44 != v42 )
    {
      v49 = (float)(int)PDEVOBJ::ulLogPixelsX((PDEVOBJ *)&v53);
      v50 = v49 / (float)(int)PDEVOBJ::ulLogPixelsY((PDEVOBJ *)&v53);
      v51 = *(_OWORD *)(*(_QWORD *)v55 + 344LL);
      v52 = *(_DWORD *)(*(_QWORD *)v55 + 360LL);
      v58[0] = *(_OWORD *)(*(_QWORD *)v55 + 328LL);
      v59 = v52;
      v58[1] = v51;
      if ( (unsigned int)EFLOAT::bIsZero((EFLOAT *)((char *)v58 + 4))
        && (unsigned int)EFLOAT::bIsZero((EFLOAT *)((char *)v58 + 8)) )
      {
        v60.m128_f32[1] = v60.m128_f32[1] / v50;
        v60.m128_f32[2] = v60.m128_f32[2] * v50;
      }
      else
      {
        v60.m128_f32[0] = v60.m128_f32[0] * v50;
        v60.m128_f32[3] = v60.m128_f32[3] / v50;
      }
    }
    goto LABEL_65;
  }
  return result;
}
