/*
 * XREFs of ?bGetNtoD_Win31@@YAHPEAU_FD_XFORM@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@PEAVDCOBJ@@KQEAU_POINTL@@H@Z @ 0x1C00466DC
 * Callers:
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C00B1A70 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ?bSetFontXform@PFEOBJ@@QEAAHAEAVXDCOBJ@@PEAUtagLOGFONTW@@PEAU_FD_XFORM@@KKQEAU_POINTL@@AEAVIFIOBJ@@H@Z @ 0x1C013F4B8 (-bSetFontXform@PFEOBJ@@QEAAHAEAVXDCOBJ@@PEAUtagLOGFONTW@@PEAU_FD_XFORM@@KKQEAU_POINTL@@AEAVIFIOB.c)
 * Callees:
 *     ?bParityViolatingXform@@YAHPEAVDCOBJ@@@Z @ 0x1C000A098 (-bParityViolatingXform@@YAHPEAVDCOBJ@@@Z.c)
 *     CaptureAndValidateUserModeDpiAwarenessContext @ 0x1C00447D0 (CaptureAndValidateUserModeDpiAwarenessContext.c)
 *     ?bGetNtoW_Win31@@YAHPEAVMATRIX@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@PEAVDCOBJ@@KH@Z @ 0x1C00476D0 (-bGetNtoW_Win31@@YAHPEAVMATRIX@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@PEAVDCOBJ@@KH@Z.c)
 *     ?bIsZero@EFLOAT@@QEBAHXZ @ 0x1C004B1FC (-bIsZero@EFLOAT@@QEBAHXZ.c)
 *     ?ulLogPixelsY@PDEVOBJ@@QEAAKXZ @ 0x1C009DF28 (-ulLogPixelsY@PDEVOBJ@@QEAAKXZ.c)
 *     ?ulLogPixelsX@PDEVOBJ@@QEAAKXZ @ 0x1C009DF64 (-ulLogPixelsX@PDEVOBJ@@QEAAKXZ.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     IsThreadCrossSessionAttached @ 0x1C0164774 (IsThreadCrossSessionAttached.c)
 *     memset @ 0x1C0168440 (memset.c)
 */

int __fastcall bGetNtoD_Win31(
        struct _FD_XFORM *a1,
        struct tagLOGFONTW *a2,
        struct IFIOBJ *a3,
        struct DCOBJ *a4,
        unsigned int a5,
        struct _POINTL *const a6,
        int a7)
{
  struct DCOBJ *v10; // r15
  int v11; // edi
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
  int result; // eax
  __int64 v23; // rdx
  __int64 v24; // r8
  __m128 v25; // xmm0
  __int64 v26; // rax
  int v27; // ecx
  unsigned int v28; // ebx
  int v29; // eax
  int v30; // eax
  int v31; // ecx
  __m128i v32; // xmm0
  int v33; // eax
  __int64 v34; // rax
  struct _KTHREAD *CurrentThread; // rbx
  int v36; // r12d
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 *ThreadWin32Thread; // rax
  __int64 v41; // rbx
  __int64 CurrentProcessWin32Process; // rax
  int v43; // r13d
  bool v44; // cc
  int v45; // r12d
  __int64 *v46; // rax
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r13
  __int64 v50; // rax
  float v51; // xmm6_4
  float v52; // xmm6_4
  __int128 v53; // xmm1
  int v54; // eax
  _DWORD *v55; // [rsp+30h] [rbp-D0h] BYREF
  struct _KTHREAD *v56; // [rsp+38h] [rbp-C8h]
  struct DCOBJ *v57; // [rsp+40h] [rbp-C0h]
  _BYTE *v58; // [rsp+48h] [rbp-B8h] BYREF
  int v59; // [rsp+54h] [rbp-ACh]
  _OWORD v60[2]; // [rsp+58h] [rbp-A8h] BYREF
  int v61; // [rsp+78h] [rbp-88h]
  _BYTE v62[36]; // [rsp+80h] [rbp-80h] BYREF
  _DWORD v63[10]; // [rsp+A8h] [rbp-58h] BYREF
  _BYTE v64[36]; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v65[36]; // [rsp+F8h] [rbp-8h] BYREF

  v57 = a4;
  v10 = a4;
  memset(v64, 0, sizeof(v64));
  memset(v62, 0, sizeof(v62));
  v11 = 0;
  if ( a6->x )
  {
    v12 = *(_DWORD *)(*(_QWORD *)a3 + 48LL);
    if ( (v12 & 0x3000010) == 0 )
    {
      v13 = 0;
      if ( gbDBCSCodePage && (v12 & 0x200000) != 0 )
      {
        lfEscapement = (unsigned int)a2->lfEscapement;
        if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v10 + 976LL) + 340LL) & 0x40) != 0 )
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
          return 1;
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
          return 1;
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
      return 1;
    }
  }
  result = bGetNtoW_Win31((struct MATRIX *)v64, a2, a3, v10, a5, a7);
  if ( result )
  {
    v24 = *(_QWORD *)v10;
    v58 = v62;
    v59 = 0;
    if ( (*(_DWORD *)(*(_QWORD *)(v24 + 976) + 340LL) & 0x802) == 0x802 || (a5 & 2) != 0 )
    {
      v25 = *(__m128 *)v64;
      *(_DWORD *)&v62[32] = *(_DWORD *)&v64[32];
      *(_OWORD *)&v62[16] = *(_OWORD *)&v64[16];
    }
    else
    {
      if ( !EXFORMOBJ::bMultiply((EXFORMOBJ *)&v58, (struct MATRIX *)v64, (struct MATRIX *)(v24 + 320), 0) )
        return v11;
      v25 = _mm_mul_ps(*(__m128 *)v62, (__m128)_xmm);
    }
    v26 = *(_QWORD *)a3;
    *(__m128 *)v62 = v25;
    v27 = *(_DWORD *)(v26 + 48);
    if ( (v27 & 4) != 0 )
    {
LABEL_65:
      v11 = 1;
      *a1 = *(struct _FD_XFORM *)v62;
      return v11;
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
      v30 = bParityViolatingXform((float **)v10);
      v31 = -v28;
      if ( !v30 )
        v31 = v28;
      v32 = (__m128i)COERCE_UNSIGNED_INT((float)v31);
      *(float *)v32.m128i_i32 = *(float *)v32.m128i_i32 / 10.0;
      memset(v63, 0, 0x24uLL);
      memset(v65, 0, sizeof(v65));
      v63[0] = efCos((unsigned int)_mm_cvtsi128_si32(v32));
      v63[3] = v63[0];
      v33 = efSin((unsigned int)_mm_cvtsi128_si32(v32));
      v63[4] = 0;
      v63[5] = 0;
      v63[2] = v33;
      v63[1] = v33 ^ _xmm;
      *(_DWORD *)&v65[32] = *(_DWORD *)&v62[32];
      *(_OWORD *)v65 = *(_OWORD *)v62;
      *(_OWORD *)&v65[16] = *(_OWORD *)&v62[16];
      if ( !EXFORMOBJ::bMultiply((EXFORMOBJ *)&v58, (struct MATRIX *)v65, (struct MATRIX *)v63, 0) )
        return v11;
    }
    v34 = *(_QWORD *)v10;
    LOBYTE(v10) = 18;
    CurrentThread = KeGetCurrentThread();
    LOBYTE(v36) = 18;
    v55 = *(_DWORD **)(v34 + 48);
    if ( !(unsigned int)IsThreadCrossSessionAttached(v55, v23, v24) )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
      {
        v41 = *ThreadWin32Thread;
        if ( *ThreadWin32Thread )
        {
          if ( *(_QWORD *)(v41 + 360) )
            CaptureAndValidateUserModeDpiAwarenessContext(*ThreadWin32Thread);
          if ( *(_DWORD *)(v41 + 340) )
          {
            LOBYTE(v36) = *(_DWORD *)(v41 + 340);
          }
          else
          {
            CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v38, v37);
            if ( CurrentProcessWin32Process )
              v36 = *(_DWORD *)(CurrentProcessWin32Process + 280);
          }
        }
      }
    }
    v43 = 96;
    if ( (v55[10] & 1) == 0 || (v44 = (v36 & 0xFu) - 1 <= 1, v45 = 96, v44) )
      v45 = v55[544];
    v56 = KeGetCurrentThread();
    if ( !(unsigned int)IsThreadCrossSessionAttached(v38, v37, v39) )
    {
      v46 = (__int64 *)PsGetThreadWin32Thread(v56);
      if ( v46 )
      {
        v49 = *v46;
        if ( *v46 )
        {
          if ( *(_QWORD *)(v49 + 360) )
            CaptureAndValidateUserModeDpiAwarenessContext(*v46);
          if ( !*(_DWORD *)(v49 + 340) )
          {
            v50 = PsGetCurrentProcessWin32Process(v48, v47);
            v43 = 96;
            if ( v50 )
              LODWORD(v10) = *(_DWORD *)(v50 + 280);
            goto LABEL_57;
          }
          LOBYTE(v10) = *(_DWORD *)(v49 + 340);
        }
        v43 = 96;
      }
    }
LABEL_57:
    if ( (v55[10] & 1) == 0 || ((unsigned __int8)v10 & 0xFu) - 1 <= 1 )
      v43 = v55[545];
    if ( v45 != v43 )
    {
      v51 = (float)(int)PDEVOBJ::ulLogPixelsX((PDEVOBJ *)&v55);
      v52 = v51 / (float)(int)PDEVOBJ::ulLogPixelsY((PDEVOBJ *)&v55);
      v53 = *(_OWORD *)(*(_QWORD *)v57 + 336LL);
      v54 = *(_DWORD *)(*(_QWORD *)v57 + 352LL);
      v60[0] = *(_OWORD *)(*(_QWORD *)v57 + 320LL);
      v61 = v54;
      v60[1] = v53;
      if ( (unsigned int)EFLOAT::bIsZero((EFLOAT *)((char *)v60 + 4))
        && (unsigned int)EFLOAT::bIsZero((EFLOAT *)((char *)v60 + 8)) )
      {
        *(float *)&v62[4] = *(float *)&v62[4] / v52;
        *(float *)&v62[8] = *(float *)&v62[8] * v52;
      }
      else
      {
        *(float *)v62 = *(float *)v62 * v52;
        *(float *)&v62[12] = *(float *)&v62[12] / v52;
      }
    }
    goto LABEL_65;
  }
  return result;
}
