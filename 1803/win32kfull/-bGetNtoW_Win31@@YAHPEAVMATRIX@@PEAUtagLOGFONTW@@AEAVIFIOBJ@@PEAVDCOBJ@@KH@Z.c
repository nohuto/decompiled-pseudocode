/*
 * XREFs of ?bGetNtoW_Win31@@YAHPEAVMATRIX@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@PEAVDCOBJ@@KH@Z @ 0x1C003DA20
 * Callers:
 *     ?bGetNtoD_Win31@@YAHPEAU_FD_XFORM@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@PEAVDCOBJ@@KQEAU_POINTL@@H@Z @ 0x1C003EDCC (-bGetNtoD_Win31@@YAHPEAU_FD_XFORM@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@PEAVDCOBJ@@KQEAU_POINTL@@H@Z.c)
 * Callees:
 *     CaptureAndValidateUserModeDpiAwarenessContext @ 0x1C0042C10 (CaptureAndValidateUserModeDpiAwarenessContext.c)
 *     ?bIsZero@EFLOAT@@QEBAHXZ @ 0x1C0096D1C (-bIsZero@EFLOAT@@QEBAHXZ.c)
 *     ?bIs1@EFLOAT@@QEBAHXZ @ 0x1C0096D3C (-bIs1@EFLOAT@@QEBAHXZ.c)
 *     ?vAbs@EFLOAT@@QEAAXXZ @ 0x1C0096D7C (-vAbs@EFLOAT@@QEAAXXZ.c)
 *     ?ulLogPixelsX@PDEVOBJ@@QEAAKXZ @ 0x1C00CE3D8 (-ulLogPixelsX@PDEVOBJ@@QEAAKXZ.c)
 *     ?ulLogPixelsY@PDEVOBJ@@QEAAKXZ @ 0x1C00CE480 (-ulLogPixelsY@PDEVOBJ@@QEAAKXZ.c)
 *     bFToL @ 0x1C00DDEAC (bFToL.c)
 *     ?lGetDefaultWorldHeight@@YAJPEAVDCOBJ@@@Z @ 0x1C012CFDC (-lGetDefaultWorldHeight@@YAJPEAVDCOBJ@@@Z.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     IsThreadCrossSessionAttached @ 0x1C0139D6C (IsThreadCrossSessionAttached.c)
 */

__int64 __fastcall bGetNtoW_Win31(
        struct MATRIX *a1,
        struct tagLOGFONTW *a2,
        struct IFIOBJ *a3,
        struct DCOBJ *a4,
        char a5,
        int a6)
{
  __int64 v6; // r10
  unsigned int v7; // edi
  int v10; // r8d
  int IsZero; // eax
  int v12; // r12d
  char v13; // r15
  LONG lfHeight; // ebx
  int v15; // r13d
  LONG DefaultWorldHeight; // eax
  struct IFIOBJ *v17; // r11
  __int16 *v18; // rax
  int v19; // ecx
  float v20; // xmm5_4
  float v21; // xmm2_4
  __int64 v22; // rax
  float v23; // xmm3_4
  float v24; // xmm1_4
  int *v25; // rcx
  int v26; // edx
  float v27; // xmm2_4
  float v28; // xmm0_4
  float v29; // xmm4_4
  int v30; // edx
  __int64 v31; // rcx
  struct tagLOGFONTW *v32; // r14
  int lfWidth; // eax
  __int64 v34; // rbx
  int v35; // r10d
  int v36; // r8d
  __int64 v37; // rcx
  float v38; // xmm6_4
  float v39; // xmm4_4
  __int64 v40; // rax
  __int64 v41; // rax
  int v42; // r9d
  float v43; // xmm1_4
  __int64 v44; // rdx
  int v45; // r15d
  struct _KTHREAD *CurrentThread; // rbx
  int v47; // r14d
  __int64 v48; // rdx
  __int64 v49; // rcx
  _QWORD *ThreadWin32Thread; // rax
  __int64 v51; // rbx
  __int64 CurrentProcessWin32Process; // rax
  _DWORD *v53; // rbx
  int v54; // r12d
  int v55; // r13d
  struct _KTHREAD *v56; // r14
  _QWORD *v57; // rax
  __int64 v58; // rcx
  __int64 v59; // r14
  __int64 v60; // rax
  unsigned int v61; // eax
  int v62; // ebx
  unsigned int v63; // eax
  int v64; // ecx
  struct IFIOBJ *v65; // r8
  __int64 v66; // rax
  int lfOrientation; // eax
  __m128i v68; // xmm0
  __int32 v69; // eax
  __int128 v70; // xmm1
  int v71; // eax
  __int128 v72; // xmm0
  float v74; // [rsp+28h] [rbp-A9h] BYREF
  float v75; // [rsp+2Ch] [rbp-A5h] BYREF
  float v76; // [rsp+30h] [rbp-A1h] BYREF
  float v77; // [rsp+34h] [rbp-9Dh] BYREF
  float v78; // [rsp+38h] [rbp-99h] BYREF
  float v79; // [rsp+40h] [rbp-91h] BYREF
  int v80; // [rsp+44h] [rbp-8Dh]
  __int64 v81; // [rsp+48h] [rbp-89h]
  _DWORD *v82; // [rsp+50h] [rbp-81h] BYREF
  __int64 v83; // [rsp+58h] [rbp-79h]
  struct tagLOGFONTW *v84; // [rsp+60h] [rbp-71h]
  struct IFIOBJ *v85; // [rsp+68h] [rbp-69h]
  struct MATRIX *v86; // [rsp+70h] [rbp-61h] BYREF
  int v87; // [rsp+7Ch] [rbp-55h]
  _DWORD v88[10]; // [rsp+80h] [rbp-51h] BYREF
  _OWORD v89[2]; // [rsp+A8h] [rbp-29h] BYREF
  int v90; // [rsp+C8h] [rbp-9h]

  v6 = *(_QWORD *)a4;
  v7 = 0;
  v85 = a3;
  v84 = a2;
  v10 = 1;
  if ( *(float *)(v6 + 460) == 0.0 || (IsZero = EFLOAT::bIsZero((EFLOAT *)(v6 + 464)), v12 = v10, IsZero) )
    v12 = 0;
  v80 = v12;
  if ( (a5 & 2) != 0 || !v12 && (*(_DWORD *)(*(_QWORD *)(v6 + 80) + 352LL) & 0x1000) != 0 )
    v13 = 0;
  else
    v13 = v10;
  lfHeight = a2->lfHeight;
  v15 = v10;
  LODWORD(v81) = v10;
  if ( !lfHeight )
  {
    DefaultWorldHeight = lGetDefaultWorldHeight(a4);
    a2 = v84;
    lfHeight = DefaultWorldHeight;
  }
  if ( gbShellFontCompatible && !_wcsicmp(a2->lfFaceName, L"MS Shell Dlg") && !a6 )
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
  v17 = v85;
  v18 = *(__int16 **)v85;
  if ( lfHeight <= 0 )
  {
    v19 = v18[28];
    lfHeight = -lfHeight;
  }
  else
  {
    v19 = v18[30] + v18[31];
  }
  v20 = (float)lfHeight / (float)v19;
  v21 = v20;
  v77 = v20;
  *((float *)a1 + 3) = v20;
  if ( !v13 )
  {
    v23 = v74;
    goto LABEL_42;
  }
  v22 = *(_QWORD *)a4;
  if ( v12 )
  {
    v23 = *(float *)(v22 + 460);
    v24 = *(float *)(v22 + 464);
  }
  else
  {
    v25 = *(int **)(v22 + 80);
    v26 = v25[88];
    if ( (v26 & 0x1000) != 0 )
    {
      v23 = v74;
      v24 = v76;
      goto LABEL_37;
    }
    if ( (v26 & 2) == 0 )
    {
      v27 = (float)v25[87];
      v28 = (float)v25[83];
      v23 = (float)v25[86] / (float)v25[82];
      v74 = v23;
      v24 = v27 / v28;
      v76 = v27 / v28;
      goto LABEL_37;
    }
    v23 = *(float *)(v22 + 328) * 0.0625;
    v24 = *(float *)(v22 + 340) * 0.0625;
  }
  v74 = v23;
  v76 = v24;
LABEL_37:
  LODWORD(v81) = EFLOAT::bIs1((EFLOAT *)&v74);
  v15 = v81;
  if ( !(unsigned int)EFLOAT::bIs1((EFLOAT *)&v76) )
    v77 = v29 * v24;
  EFLOAT::vAbs((EFLOAT *)&v77);
  v21 = v77;
  if ( v30 )
    *((_DWORD *)a1 + 3) ^= _xmm;
LABEL_42:
  v31 = *(_QWORD *)(*(_QWORD *)a4 + 48LL);
  v82 = (_DWORD *)v31;
  if ( v31 )
  {
    v32 = v84;
    lfWidth = v84->lfWidth;
    if ( !lfWidth )
      goto LABEL_60;
    v34 = *(_QWORD *)v17;
    v35 = 1;
    v36 = abs32(lfWidth);
    v37 = (unsigned int)*(__int16 *)(*(_QWORD *)v17 + 76LL);
    v78 = *(float *)&v36;
    v38 = (float)(int)v37;
    v39 = (float)(int)v37 * v21;
    v79 = (float)v36;
    if ( v13 )
    {
      if ( !v15 )
      {
        v79 = (float)v36 * v23;
        bFToL(v37, &v78, 6LL);
      }
      EFLOAT::vAbs((EFLOAT *)&v79);
      if ( v36 < 0 )
        v36 = -v36;
    }
    v78 = v39;
    v31 = (unsigned int)(unsigned __int8)(SLODWORD(v39) >> 23) - 118;
    if ( (int)v31 <= 40 )
    {
      v40 = LODWORD(v39) & 0x7FFFFF | 0x800000LL;
      if ( (int)v31 < 0 )
        v41 = v40 >> (118 - (unsigned __int8)(SLODWORD(v39) >> 23));
      else
        v41 = v40 << ((unsigned __int8)(SLODWORD(v39) >> 23) - 118);
      v31 = (v41 + 0x80000000LL) >> 32;
      v42 = -((unsigned __int64)(v41 + 0x80000000LL) >> 32);
      if ( v39 >= 0.0 )
        v42 = (unsigned __int64)(v41 + 0x80000000LL) >> 32;
      if ( v42 > 0 && v35 && v36 / 256 < v42 )
        goto LABEL_59;
    }
    if ( (*(_DWORD *)(v34 + 48) & 4) != 0 )
    {
LABEL_59:
      v43 = v79 / v38;
    }
    else
    {
LABEL_60:
      v44 = *(_QWORD *)v17;
      if ( (*(_DWORD *)(*(_QWORD *)v17 + 48LL) & 4) != 0 )
      {
        v75 = v20;
        if ( !v15 )
        {
          v75 = v20 * v23;
          EFLOAT::vAbs((EFLOAT *)&v75);
        }
      }
      else
      {
        v75 = v21;
      }
      LOBYTE(v45) = 18;
      CurrentThread = KeGetCurrentThread();
      LOBYTE(v47) = 18;
      v83 = *(_QWORD *)(v44 + 128);
      if ( !(unsigned int)IsThreadCrossSessionAttached(v31, v44) )
      {
        ThreadWin32Thread = (_QWORD *)PsGetThreadWin32Thread(CurrentThread);
        if ( ThreadWin32Thread )
        {
          v51 = *ThreadWin32Thread;
          if ( *ThreadWin32Thread )
          {
            if ( *(_QWORD *)(v51 + 360) )
              CaptureAndValidateUserModeDpiAwarenessContext(*ThreadWin32Thread);
            if ( *(_DWORD *)(v51 + 340) )
            {
              LOBYTE(v47) = *(_DWORD *)(v51 + 340);
            }
            else
            {
              CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v49);
              if ( CurrentProcessWin32Process )
                v47 = *(_DWORD *)(CurrentProcessWin32Process + 280);
            }
          }
        }
      }
      v53 = v82;
      v54 = 96;
      if ( (v82[10] & 1) == 0 || (v55 = 96, (v47 & 0xFu) - 1 <= 1) )
        v55 = v82[542];
      v56 = KeGetCurrentThread();
      if ( !(unsigned int)IsThreadCrossSessionAttached(v49, v48) )
      {
        v57 = (_QWORD *)PsGetThreadWin32Thread(v56);
        if ( v57 )
        {
          v59 = *v57;
          if ( *v57 )
          {
            if ( *(_QWORD *)(v59 + 360) )
              CaptureAndValidateUserModeDpiAwarenessContext(*v57);
            if ( *(_DWORD *)(v59 + 340) )
            {
              LOBYTE(v45) = *(_DWORD *)(v59 + 340);
            }
            else
            {
              v60 = PsGetCurrentProcessWin32Process(v58);
              if ( v60 )
                v45 = *(_DWORD *)(v60 + 280);
            }
          }
        }
      }
      if ( (v53[10] & 1) == 0 || (v45 & 0xFu) - 1 <= 1 )
        v54 = v82[543];
      if ( v55 == v54 || v80 )
      {
        v62 = HIDWORD(v83);
        v64 = v83;
      }
      else
      {
        v61 = PDEVOBJ::ulLogPixelsX((PDEVOBJ *)&v82);
        v62 = v61 * HIDWORD(v83);
        v63 = PDEVOBJ::ulLogPixelsY((PDEVOBJ *)&v82);
        v64 = v63 * v83;
      }
      v23 = v74;
      v32 = v84;
      if ( v64 == v62 )
        v43 = v75;
      else
        v43 = (float)((float)v62 * v75) / (float)v64;
    }
    if ( !(_DWORD)v81 )
      v43 = v43 / v23;
    *(float *)a1 = v43;
    v65 = v85;
    *((_QWORD *)a1 + 2) = 0LL;
    *(_QWORD *)((char *)a1 + 4) = 0LL;
    v86 = a1;
    v66 = *(_QWORD *)v65;
    v87 = 0;
    if ( (*(_DWORD *)(v66 + 48) & 4) == 0 )
      goto LABEL_100;
    lfOrientation = v32->lfOrientation;
    if ( !lfOrientation )
      goto LABEL_100;
    v68 = (__m128i)COERCE_UNSIGNED_INT((float)lfOrientation);
    *(float *)v68.m128i_i32 = *(float *)v68.m128i_i32 / 10.0;
    v88[0] = efCos((unsigned int)_mm_cvtsi128_si32(v68));
    v88[3] = v88[0];
    v69 = efSin((unsigned int)_mm_cvtsi128_si32(v68));
    v70 = *((_OWORD *)a1 + 1);
    v88[4] = 0;
    v88[5] = 0;
    v68.m128i_i32[0] = v69;
    v71 = *((_DWORD *)a1 + 8);
    v88[1] = v68.m128i_i32[0];
    v88[2] = v68.m128i_i32[0] ^ _xmm;
    v72 = *(_OWORD *)a1;
    v90 = v71;
    v89[1] = v70;
    v89[0] = v72;
    if ( EXFORMOBJ::bMultiply((EXFORMOBJ *)&v86, (struct MATRIX *)v89, (struct MATRIX *)v88, 0) )
    {
LABEL_100:
      *((_DWORD *)a1 + 1) ^= _xmm;
      *((_DWORD *)a1 + 3) ^= _xmm;
      EXFORMOBJ::vComputeAccelFlags((EXFORMOBJ *)&v86, 8u);
      return 1;
    }
  }
  return v7;
}
