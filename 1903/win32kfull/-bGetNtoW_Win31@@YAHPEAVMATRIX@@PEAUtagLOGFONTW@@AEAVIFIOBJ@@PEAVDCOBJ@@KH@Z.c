/*
 * XREFs of ?bGetNtoW_Win31@@YAHPEAVMATRIX@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@PEAVDCOBJ@@KH@Z @ 0x1C00A68F0
 * Callers:
 *     ?bGetNtoD_Win31@@YAHPEAU_FD_XFORM@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@PEAVDCOBJ@@KQEAU_POINTL@@H@Z @ 0x1C00A58FC (-bGetNtoD_Win31@@YAHPEAU_FD_XFORM@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@PEAVDCOBJ@@KQEAU_POINTL@@H@Z.c)
 * Callees:
 *     ?ulLogPixelsY@PDEVOBJ@@QEAAKXZ @ 0x1C00546C8 (-ulLogPixelsY@PDEVOBJ@@QEAAKXZ.c)
 *     ?ulLogPixelsX@PDEVOBJ@@QEAAKXZ @ 0x1C0054704 (-ulLogPixelsX@PDEVOBJ@@QEAAKXZ.c)
 *     ?vAbs@EFLOAT@@QEAAXXZ @ 0x1C00738B8 (-vAbs@EFLOAT@@QEAAXXZ.c)
 *     CaptureAndValidateUserModeDpiAwarenessContext @ 0x1C00A3A00 (CaptureAndValidateUserModeDpiAwarenessContext.c)
 *     ?bIsZero@EFLOAT@@QEBAHXZ @ 0x1C00AA41C (-bIsZero@EFLOAT@@QEBAHXZ.c)
 *     bFToL @ 0x1C01014BC (bFToL.c)
 *     ?lGetDefaultWorldHeight@@YAJPEAVDCOBJ@@@Z @ 0x1C015667C (-lGetDefaultWorldHeight@@YAJPEAVDCOBJ@@@Z.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     IsThreadCrossSessionAttached @ 0x1C01637A4 (IsThreadCrossSessionAttached.c)
 */

__int64 __fastcall bGetNtoW_Win31(
        struct MATRIX *a1,
        struct tagLOGFONTW *a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        char a5,
        int a6)
{
  __int64 v6; // r10
  struct DCOBJ *v7; // rsi
  struct tagLOGFONTW *v8; // r12
  BOOL v10; // r15d
  bool v11; // r14
  LONG lfHeight; // ebx
  int v13; // r13d
  struct IFIOBJ *v14; // r11
  __int16 *v15; // rax
  int v16; // ecx
  float v17; // xmm3_4
  float v18; // xmm4_4
  __int64 v19; // rax
  float v20; // xmm6_4
  float v21; // xmm1_4
  int *v22; // rcx
  int v23; // edx
  __int64 v24; // rcx
  int lfWidth; // eax
  __int64 v27; // rbx
  int v28; // r10d
  __int64 v29; // rcx
  float v30; // xmm5_4
  float v31; // xmm2_4
  __int64 v32; // rax
  __int64 v33; // rax
  float v34; // xmm1_4
  __int64 v35; // rdx
  int v36; // r14d
  struct _KTHREAD *CurrentThread; // rbx
  int v38; // esi
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 *ThreadWin32Thread; // rax
  __int64 v44; // rbx
  __int64 CurrentProcessWin32Process; // rax
  _DWORD *v46; // rbx
  int v47; // r15d
  int v48; // r12d
  struct _KTHREAD *v49; // rsi
  __int64 *v50; // rax
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // rsi
  __int64 v54; // rax
  int v55; // eax
  int v56; // ebx
  int v57; // eax
  int v58; // ecx
  struct IFIOBJ *v59; // r8
  __int64 v60; // rax
  int lfOrientation; // eax
  __m128i v62; // xmm0
  int v63; // eax
  __int128 v64; // xmm1
  __int128 v65; // xmm0
  float v66; // [rsp+28h] [rbp-B9h] BYREF
  float v67; // [rsp+2Ch] [rbp-B5h]
  float v68; // [rsp+30h] [rbp-B1h] BYREF
  __int64 v69; // [rsp+38h] [rbp-A9h] BYREF
  _DWORD *v70; // [rsp+40h] [rbp-A1h] BYREF
  __int64 v71; // [rsp+48h] [rbp-99h]
  struct IFIOBJ *v72; // [rsp+50h] [rbp-91h]
  struct tagLOGFONTW *v73; // [rsp+58h] [rbp-89h]
  struct MATRIX *v74; // [rsp+60h] [rbp-81h] BYREF
  int v75; // [rsp+6Ch] [rbp-75h]
  __int64 v76; // [rsp+70h] [rbp-71h] BYREF
  __int64 v77; // [rsp+78h] [rbp-69h]
  __int64 v78; // [rsp+80h] [rbp-61h]
  __int64 v79; // [rsp+88h] [rbp-59h]
  int v80; // [rsp+90h] [rbp-51h]
  __int128 v81; // [rsp+98h] [rbp-49h] BYREF
  __int128 v82; // [rsp+A8h] [rbp-39h]
  int v83; // [rsp+B8h] [rbp-29h]

  v6 = *(_QWORD *)a4;
  v7 = (struct DCOBJ *)a4;
  v8 = a2;
  v72 = (struct IFIOBJ *)a3;
  v73 = a2;
  v10 = *(float *)(v6 + 452) != 0.0 && !(unsigned int)EFLOAT::bIsZero((EFLOAT *)(v6 + 456));
  v67 = *(float *)&v10;
  v11 = (a5 & 2) == 0 && (v10 || (*(_DWORD *)(*(_QWORD *)(v6 + 976) + 340LL) & 0x1000) == 0);
  lfHeight = a2->lfHeight;
  v13 = 1;
  if ( !a2->lfHeight )
    lfHeight = lGetDefaultWorldHeight(v7);
  if ( gbShellFontCompatible && !_wcsicmp(v8->lfFaceName, L"MS Shell Dlg") && !a6 )
  {
    if ( lfHeight <= 0 )
    {
      if ( (unsigned int)(lfHeight + 12) > 3 )
      {
        if ( (unsigned int)(lfHeight + 15) <= 2 )
          lfHeight = -13;
      }
      else
      {
        lfHeight = -11;
      }
    }
    else if ( lfHeight >= 12 )
    {
      if ( lfHeight > 15 )
      {
        if ( lfHeight <= 19 )
          lfHeight = 16;
      }
      else
      {
        lfHeight = 14;
      }
    }
  }
  v14 = v72;
  v15 = *(__int16 **)v72;
  if ( lfHeight <= 0 )
  {
    v16 = v15[28];
    lfHeight = -lfHeight;
  }
  else
  {
    v16 = v15[30] + v15[31];
  }
  v17 = (float)lfHeight / (float)v16;
  v18 = v17;
  *((float *)a1 + 3) = v17;
  if ( v11 )
  {
    v19 = *(_QWORD *)v7;
    if ( v10 )
    {
      v20 = *(float *)(v19 + 452);
      v21 = *(float *)(v19 + 456);
    }
    else
    {
      v22 = *(int **)(v19 + 976);
      v23 = v22[85];
      if ( (v23 & 0x1000) != 0 )
      {
        v20 = v67;
        v21 = v67;
      }
      else if ( (v23 & 2) != 0 )
      {
        v20 = *(float *)(v19 + 320) * 0.0625;
        v21 = *(float *)(v19 + 332) * 0.0625;
      }
      else
      {
        v20 = (float)v22[83] / (float)v22[79];
        v21 = (float)v22[84] / (float)v22[80];
      }
    }
    if ( v20 != 1.0 )
      v13 = 0;
    if ( v21 != 1.0 )
      v17 = v21 * v17;
    if ( v17 < 0.0 )
      LODWORD(v17) ^= _xmm;
    if ( v21 < 0.0 )
      *((_DWORD *)a1 + 3) ^= _xmm;
  }
  else
  {
    v20 = v67;
  }
  v24 = *(_QWORD *)(*(_QWORD *)v7 + 48LL);
  v70 = (_DWORD *)v24;
  if ( !v24 )
    return 0LL;
  lfWidth = v8->lfWidth;
  if ( !lfWidth )
    goto LABEL_65;
  v27 = *(_QWORD *)v14;
  v28 = 1;
  a3 = abs32(lfWidth);
  v29 = (unsigned int)*(__int16 *)(*(_QWORD *)v14 + 76LL);
  v68 = *(float *)&a3;
  v30 = (float)(int)v29;
  v31 = (float)(int)v29 * v17;
  *(float *)&v69 = (float)(int)a3;
  if ( v11 )
  {
    if ( !v13 )
    {
      *(float *)&v69 = (float)(int)a3 * v20;
      bFToL(v29, &v68, 6LL);
    }
    EFLOAT::vAbs((EFLOAT *)&v69);
    if ( (a3 & 0x80000000) != 0LL )
      a3 = (unsigned int)-(int)a3;
  }
  v68 = v31;
  v24 = (unsigned int)(unsigned __int8)(SLODWORD(v31) >> 23) - 118;
  if ( (int)v24 <= 40 )
  {
    v32 = LODWORD(v31) & 0x7FFFFF | 0x800000LL;
    if ( (int)v24 < 0 )
      v33 = v32 >> (118 - (unsigned __int8)(SLODWORD(v31) >> 23));
    else
      v33 = v32 << ((unsigned __int8)(SLODWORD(v31) >> 23) - 118);
    v24 = (v33 + 0x80000000LL) >> 32;
    a4 = (unsigned int)-((unsigned __int64)(v33 + 0x80000000LL) >> 32);
    if ( v31 >= 0.0 )
      a4 = (unsigned int)v24;
    if ( (int)a4 > 0 && v28 && (int)a3 / 256 < (int)a4 )
      goto LABEL_64;
  }
  if ( (*(_DWORD *)(v27 + 48) & 4) != 0 )
  {
LABEL_64:
    v34 = *(float *)&v69 / v30;
  }
  else
  {
LABEL_65:
    v35 = *(_QWORD *)v14;
    if ( (*(_DWORD *)(*(_QWORD *)v14 + 48LL) & 4) != 0 )
    {
      v66 = v18;
      if ( !v13 )
      {
        v66 = v18 * v20;
        EFLOAT::vAbs((EFLOAT *)&v66);
      }
    }
    else
    {
      v66 = v17;
    }
    LOBYTE(v36) = 18;
    CurrentThread = KeGetCurrentThread();
    LOBYTE(v38) = 18;
    v71 = *(_QWORD *)(v35 + 128);
    if ( !(unsigned int)IsThreadCrossSessionAttached(v24, v35, a3, a4) )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
      {
        v44 = *ThreadWin32Thread;
        if ( *ThreadWin32Thread )
        {
          if ( *(_QWORD *)(v44 + 360) )
            CaptureAndValidateUserModeDpiAwarenessContext(*ThreadWin32Thread);
          if ( *(_DWORD *)(v44 + 340) )
          {
            LOBYTE(v38) = *(_DWORD *)(v44 + 340);
          }
          else
          {
            CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v40, v39);
            if ( CurrentProcessWin32Process )
              v38 = *(_DWORD *)(CurrentProcessWin32Process + 280);
          }
        }
      }
    }
    v46 = v70;
    v47 = 96;
    if ( (v70[10] & 1) == 0 || (v48 = 96, (v38 & 0xFu) - 1 <= 1) )
      v48 = v70[544];
    v49 = KeGetCurrentThread();
    if ( !(unsigned int)IsThreadCrossSessionAttached(v40, v39, v41, v42) )
    {
      v50 = (__int64 *)PsGetThreadWin32Thread(v49);
      if ( v50 )
      {
        v53 = *v50;
        if ( *v50 )
        {
          if ( *(_QWORD *)(v53 + 360) )
            CaptureAndValidateUserModeDpiAwarenessContext(*v50);
          if ( *(_DWORD *)(v53 + 340) )
          {
            LOBYTE(v36) = *(_DWORD *)(v53 + 340);
          }
          else
          {
            v54 = PsGetCurrentProcessWin32Process(v52, v51);
            if ( v54 )
              v36 = *(_DWORD *)(v54 + 280);
          }
        }
      }
    }
    if ( (v46[10] & 1) == 0 || (v36 & 0xFu) - 1 <= 1 )
      v47 = v70[545];
    if ( v48 == v47 || v67 != 0.0 )
    {
      v56 = HIDWORD(v71);
      v58 = v71;
    }
    else
    {
      v55 = PDEVOBJ::ulLogPixelsX((PDEVOBJ *)&v70);
      v56 = v55 * HIDWORD(v71);
      v57 = PDEVOBJ::ulLogPixelsY((PDEVOBJ *)&v70);
      v58 = v57 * v71;
    }
    v8 = v73;
    if ( v58 == v56 )
      v34 = v66;
    else
      v34 = (float)((float)v56 * v66) / (float)v58;
  }
  if ( !v13 )
    v34 = v34 / v20;
  *(float *)a1 = v34;
  v59 = v72;
  *((_QWORD *)a1 + 2) = 0LL;
  *(_QWORD *)((char *)a1 + 4) = 0LL;
  v74 = a1;
  v60 = *(_QWORD *)v59;
  v75 = 0;
  if ( (*(_DWORD *)(v60 + 48) & 4) != 0 )
  {
    lfOrientation = v8->lfOrientation;
    if ( lfOrientation )
    {
      v62 = (__m128i)COERCE_UNSIGNED_INT((float)lfOrientation);
      v76 = 0LL;
      v77 = 0LL;
      v78 = 0LL;
      v79 = 0LL;
      v80 = 0;
      *(float *)v62.m128i_i32 = *(float *)v62.m128i_i32 / 10.0;
      v81 = 0uLL;
      v82 = 0uLL;
      v83 = 0;
      LODWORD(v76) = efCos((unsigned int)_mm_cvtsi128_si32(v62));
      HIDWORD(v77) = v76;
      v63 = efSin((unsigned int)_mm_cvtsi128_si32(v62));
      v64 = *((_OWORD *)a1 + 1);
      v83 = *((_DWORD *)a1 + 8);
      HIDWORD(v76) = v63;
      v78 = 0LL;
      LODWORD(v77) = v63 ^ _xmm;
      v65 = *(_OWORD *)a1;
      v82 = v64;
      v81 = v65;
      if ( !EXFORMOBJ::bMultiply((EXFORMOBJ *)&v74, (struct MATRIX *)&v81, (struct MATRIX *)&v76, 0) )
        return 0LL;
    }
  }
  *((_DWORD *)a1 + 1) ^= _xmm;
  *((_DWORD *)a1 + 3) ^= _xmm;
  EXFORMOBJ::vComputeAccelFlags((EXFORMOBJ *)&v74, 8u);
  return 1LL;
}
