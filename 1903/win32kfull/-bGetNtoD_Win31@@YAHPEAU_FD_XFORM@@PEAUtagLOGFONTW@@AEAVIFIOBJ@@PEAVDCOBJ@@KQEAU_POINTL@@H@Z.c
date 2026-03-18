/*
 * XREFs of ?bGetNtoD_Win31@@YAHPEAU_FD_XFORM@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@PEAVDCOBJ@@KQEAU_POINTL@@H@Z @ 0x1C00A58FC
 * Callers:
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C00676B0 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ?bSetFontXform@PFEOBJ@@QEAAHAEAVXDCOBJ@@PEAUtagLOGFONTW@@PEAU_FD_XFORM@@KKQEAU_POINTL@@AEAVIFIOBJ@@H@Z @ 0x1C01055B4 (-bSetFontXform@PFEOBJ@@QEAAHAEAVXDCOBJ@@PEAUtagLOGFONTW@@PEAU_FD_XFORM@@KKQEAU_POINTL@@AEAVIFIOB.c)
 * Callees:
 *     ?bParityViolatingXform@@YAHPEAVDCOBJ@@@Z @ 0x1C000A0A8 (-bParityViolatingXform@@YAHPEAVDCOBJ@@@Z.c)
 *     ?ulLogPixelsY@PDEVOBJ@@QEAAKXZ @ 0x1C00546C8 (-ulLogPixelsY@PDEVOBJ@@QEAAKXZ.c)
 *     ?ulLogPixelsX@PDEVOBJ@@QEAAKXZ @ 0x1C0054704 (-ulLogPixelsX@PDEVOBJ@@QEAAKXZ.c)
 *     CaptureAndValidateUserModeDpiAwarenessContext @ 0x1C00A3A00 (CaptureAndValidateUserModeDpiAwarenessContext.c)
 *     ?bGetNtoW_Win31@@YAHPEAVMATRIX@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@PEAVDCOBJ@@KH@Z @ 0x1C00A68F0 (-bGetNtoW_Win31@@YAHPEAVMATRIX@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@PEAVDCOBJ@@KH@Z.c)
 *     ?bIsZero@EFLOAT@@QEBAHXZ @ 0x1C00AA41C (-bIsZero@EFLOAT@@QEBAHXZ.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     IsThreadCrossSessionAttached @ 0x1C01637A4 (IsThreadCrossSessionAttached.c)
 *     memset @ 0x1C0166840 (memset.c)
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
  __int64 v24; // r9
  __int64 v25; // r8
  __m128 v26; // xmm0
  __int64 v27; // rax
  int v28; // ecx
  unsigned int v29; // ebx
  int v30; // eax
  int v31; // eax
  int v32; // ecx
  __m128i v33; // xmm0
  int v34; // eax
  __int64 v35; // rax
  struct _KTHREAD *CurrentThread; // rbx
  int v37; // r12d
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 *ThreadWin32Thread; // rax
  __int64 v43; // rbx
  __int64 CurrentProcessWin32Process; // rax
  int v45; // r13d
  bool v46; // cc
  int v47; // r12d
  __int64 *v48; // rax
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r13
  __int64 v52; // rax
  float v53; // xmm6_4
  float v54; // xmm6_4
  __int128 v55; // xmm1
  int v56; // eax
  _DWORD *v57; // [rsp+30h] [rbp-D0h] BYREF
  struct _KTHREAD *v58; // [rsp+38h] [rbp-C8h]
  struct DCOBJ *v59; // [rsp+40h] [rbp-C0h]
  _BYTE *v60; // [rsp+48h] [rbp-B8h] BYREF
  int v61; // [rsp+54h] [rbp-ACh]
  _OWORD v62[2]; // [rsp+58h] [rbp-A8h] BYREF
  int v63; // [rsp+78h] [rbp-88h]
  _BYTE v64[36]; // [rsp+80h] [rbp-80h] BYREF
  _DWORD v65[10]; // [rsp+A8h] [rbp-58h] BYREF
  _BYTE v66[36]; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v67[36]; // [rsp+F8h] [rbp-8h] BYREF

  v59 = a4;
  v10 = a4;
  memset(v66, 0, sizeof(v66));
  memset(v64, 0, sizeof(v64));
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
  result = bGetNtoW_Win31((struct MATRIX *)v66, a2, a3, v10, a5, a7);
  if ( result )
  {
    v25 = *(_QWORD *)v10;
    v60 = v64;
    v61 = 0;
    if ( (*(_DWORD *)(*(_QWORD *)(v25 + 976) + 340LL) & 0x802) == 0x802 || (a5 & 2) != 0 )
    {
      v26 = *(__m128 *)v66;
      *(_DWORD *)&v64[32] = *(_DWORD *)&v66[32];
      *(_OWORD *)&v64[16] = *(_OWORD *)&v66[16];
    }
    else
    {
      if ( !EXFORMOBJ::bMultiply((EXFORMOBJ *)&v60, (struct MATRIX *)v66, (struct MATRIX *)(v25 + 320), 0) )
        return v11;
      v26 = _mm_mul_ps(*(__m128 *)v64, (__m128)_xmm);
    }
    v27 = *(_QWORD *)a3;
    *(__m128 *)v64 = v26;
    v28 = *(_DWORD *)(v27 + 48);
    if ( (v28 & 4) != 0 )
    {
LABEL_65:
      v11 = 1;
      *a1 = *(struct _FD_XFORM *)v64;
      return v11;
    }
    v29 = a2->lfEscapement;
    if ( (v28 & 0x200000) != 0 )
    {
      v30 = lNormAngle(v29);
      v23 = (v30 / 900) & 0x80000003;
      if ( v30 / 900 < 0 )
        v23 = ((unsigned __int8)(((v30 / 900) & 3) - 1) | 0xFFFFFFFC) + 1;
      v29 = 900 * v23;
    }
    if ( v29 && ((a5 & 1) == 0 || gbDBCSCodePage) )
    {
      v31 = bParityViolatingXform((float **)v10);
      v32 = -v29;
      if ( !v31 )
        v32 = v29;
      v33 = (__m128i)COERCE_UNSIGNED_INT((float)v32);
      *(float *)v33.m128i_i32 = *(float *)v33.m128i_i32 / 10.0;
      memset(v65, 0, 0x24uLL);
      memset(v67, 0, sizeof(v67));
      v65[0] = efCos((unsigned int)_mm_cvtsi128_si32(v33));
      v65[3] = v65[0];
      v34 = efSin((unsigned int)_mm_cvtsi128_si32(v33));
      v65[4] = 0;
      v65[5] = 0;
      v65[2] = v34;
      v65[1] = v34 ^ _xmm;
      *(_DWORD *)&v67[32] = *(_DWORD *)&v64[32];
      *(_OWORD *)v67 = *(_OWORD *)v64;
      *(_OWORD *)&v67[16] = *(_OWORD *)&v64[16];
      if ( !EXFORMOBJ::bMultiply((EXFORMOBJ *)&v60, (struct MATRIX *)v67, (struct MATRIX *)v65, 0) )
        return v11;
    }
    v35 = *(_QWORD *)v10;
    LOBYTE(v10) = 18;
    CurrentThread = KeGetCurrentThread();
    LOBYTE(v37) = 18;
    v57 = *(_DWORD **)(v35 + 48);
    if ( !(unsigned int)IsThreadCrossSessionAttached(v57, v23, v25, v24) )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
      {
        v43 = *ThreadWin32Thread;
        if ( *ThreadWin32Thread )
        {
          if ( *(_QWORD *)(v43 + 360) )
            CaptureAndValidateUserModeDpiAwarenessContext(*ThreadWin32Thread);
          if ( *(_DWORD *)(v43 + 340) )
          {
            LOBYTE(v37) = *(_DWORD *)(v43 + 340);
          }
          else
          {
            CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v39, v38);
            if ( CurrentProcessWin32Process )
              v37 = *(_DWORD *)(CurrentProcessWin32Process + 280);
          }
        }
      }
    }
    v45 = 96;
    if ( (v57[10] & 1) == 0 || (v46 = (v37 & 0xFu) - 1 <= 1, v47 = 96, v46) )
      v47 = v57[544];
    v58 = KeGetCurrentThread();
    if ( !(unsigned int)IsThreadCrossSessionAttached(v39, v38, v40, v41) )
    {
      v48 = (__int64 *)PsGetThreadWin32Thread(v58);
      if ( v48 )
      {
        v51 = *v48;
        if ( *v48 )
        {
          if ( *(_QWORD *)(v51 + 360) )
            CaptureAndValidateUserModeDpiAwarenessContext(*v48);
          if ( !*(_DWORD *)(v51 + 340) )
          {
            v52 = PsGetCurrentProcessWin32Process(v50, v49);
            v45 = 96;
            if ( v52 )
              LODWORD(v10) = *(_DWORD *)(v52 + 280);
            goto LABEL_57;
          }
          LOBYTE(v10) = *(_DWORD *)(v51 + 340);
        }
        v45 = 96;
      }
    }
LABEL_57:
    if ( (v57[10] & 1) == 0 || ((unsigned __int8)v10 & 0xFu) - 1 <= 1 )
      v45 = v57[545];
    if ( v47 != v45 )
    {
      v53 = (float)(int)PDEVOBJ::ulLogPixelsX((PDEVOBJ *)&v57);
      v54 = v53 / (float)(int)PDEVOBJ::ulLogPixelsY((PDEVOBJ *)&v57);
      v55 = *(_OWORD *)(*(_QWORD *)v59 + 336LL);
      v56 = *(_DWORD *)(*(_QWORD *)v59 + 352LL);
      v62[0] = *(_OWORD *)(*(_QWORD *)v59 + 320LL);
      v63 = v56;
      v62[1] = v55;
      if ( (unsigned int)EFLOAT::bIsZero((EFLOAT *)((char *)v62 + 4))
        && (unsigned int)EFLOAT::bIsZero((EFLOAT *)((char *)v62 + 8)) )
      {
        *(float *)&v64[4] = *(float *)&v64[4] / v54;
        *(float *)&v64[8] = *(float *)&v64[8] * v54;
      }
      else
      {
        *(float *)v64 = *(float *)v64 * v54;
        *(float *)&v64[12] = *(float *)&v64[12] / v54;
      }
    }
    goto LABEL_65;
  }
  return result;
}
