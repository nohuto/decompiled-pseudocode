/*
 * XREFs of xxEngNineGrid @ 0x1C00E08E0
 * Callers:
 *     EngNineGrid @ 0x1C00E0830 (EngNineGrid.c)
 * Callees:
 *     ??XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z @ 0x1C00539F4 (--XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z.c)
 *     ?bWrapped@ERECTL@@QEBAHXZ @ 0x1C00A3A98 (-bWrapped@ERECTL@@QEBAHXZ.c)
 *     RenderNineGrid @ 0x1C00E0E0C (RenderNineGrid.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     memset @ 0x1C0163640 (memset.c)
 */

__int64 __fastcall xxEngNineGrid(
        struct _SURFOBJ *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        signed int *a5,
        _DWORD *a6,
        _DWORD *a7,
        __int64 a8)
{
  signed int v10; // edi
  int v11; // r9d
  signed int v12; // esi
  int v13; // ecx
  unsigned int v14; // r11d
  unsigned int v15; // r8d
  int v16; // r10d
  int v17; // edx
  int v18; // ebx
  int v19; // esi
  int v20; // r15d
  BOOL v21; // eax
  char v22; // r8
  int v23; // r9d
  int v24; // r10d
  char v25; // dl
  int v26; // r15d
  int v27; // esi
  __int64 v28; // r12
  signed int ClearBits; // eax
  __int64 v30; // r13
  _QWORD *v31; // rcx
  unsigned int v32; // eax
  __int64 v33; // rdi
  SURFOBJ *v34; // rax
  __int64 v35; // r8
  int v36; // edi
  int v37; // ecx
  int v38; // edx
  int v39; // r13d
  int v40; // r15d
  int v41; // r8d
  int v42; // esi
  BOOL v43; // ecx
  int v44; // r14d
  int v45; // eax
  int v46; // eax
  int v47; // eax
  int v49; // [rsp+60h] [rbp-A0h]
  int v50; // [rsp+60h] [rbp-A0h]
  int v51; // [rsp+64h] [rbp-9Ch]
  __int64 v52; // [rsp+68h] [rbp-98h] BYREF
  char v53; // [rsp+70h] [rbp-90h]
  int v54; // [rsp+74h] [rbp-8Ch]
  __int64 v55; // [rsp+78h] [rbp-88h]
  signed int v56; // [rsp+80h] [rbp-80h]
  __int64 v57; // [rsp+88h] [rbp-78h]
  __int64 v58; // [rsp+90h] [rbp-70h]
  __int64 v59; // [rsp+98h] [rbp-68h]
  __int64 v60; // [rsp+A0h] [rbp-60h]
  __int64 v61; // [rsp+A8h] [rbp-58h]
  __int64 v62; // [rsp+B0h] [rbp-50h]
  struct _SURFOBJ *v63; // [rsp+B8h] [rbp-48h]
  _QWORD v64[4]; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v65[2]; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v66[2]; // [rsp+F0h] [rbp-10h] BYREF
  _DWORD v67[4]; // [rsp+100h] [rbp+0h] BYREF

  v63 = a1;
  v57 = a8;
  v60 = a4;
  v61 = a3;
  v62 = a2;
  v59 = (__int64)a6;
  v58 = (__int64)a7;
  v55 = SURFOBJ_TO_SURFACE(a2);
  SURFOBJ_TO_SURFACE(a1);
  v10 = *a5;
  v11 = v10;
  v12 = a5[2];
  v13 = v12;
  v14 = a5[1];
  v15 = a5[3];
  v66[1] = __PAIR64__(v15, v12);
  v49 = v10;
  v66[0] = __PAIR64__(v14, v10);
  v51 = v12;
  if ( v10 > v12 )
  {
    v13 = v10;
    LODWORD(v66[0]) = v12;
    LODWORD(v66[1]) = v10;
    v11 = v12;
  }
  if ( (*a7 & 0x20) != 0 )
  {
    v16 = a6[2] - *a6;
    v17 = a6[3] - a6[1];
    if ( v13 - v11 > v16 )
    {
      if ( v10 <= v12 )
        LODWORD(v66[1]) = v16 + v11;
      else
        LODWORD(v66[0]) = v13 - v16;
    }
    if ( (int)(v15 - v14) > v17 )
    {
      if ( v10 <= v12 )
        HIDWORD(v66[1]) = v14 + v17;
      else
        HIDWORD(v66[0]) = v15 - v17;
    }
  }
  v18 = 0;
  *(_OWORD *)v65 = *(_OWORD *)v66;
  if ( a3 && *(_BYTE *)(a3 + 20) )
    ERECTL::operator*=((int *)v65, (int *)(a3 + 4));
  v19 = HIDWORD(v65[1]);
  v20 = v65[1];
  v21 = ERECTL::bWrapped((ERECTL *)v65);
  v25 = 0;
  if ( !v21 )
    v25 = v22;
  if ( v24 != v20 && v23 != v19 && v25 )
  {
    v26 = v20 - v24;
    v52 = 0LL;
    v27 = v19 - v23;
    v53 = 0;
    v54 = 0;
    v28 = 0LL;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(&nineGridPushLock, 0LL);
    ClearBits = RtlFindClearBits(&apsoNineGridBitmapHeader, 1u, 0);
    v30 = ClearBits;
    v56 = ClearBits;
    if ( ClearBits == -1 || (v28 = apsoNineGrid[ClearBits]) == 0 )
    {
      memset(v64, 0, sizeof(v64));
      v31 = *(_QWORD **)(v55 + 128);
      if ( v31 )
      {
        v32 = *(_DWORD *)(v55 + 96);
        LODWORD(v64[1]) = 64;
        v64[0] = v32 | 0x10000000000LL;
        LODWORD(v64[3]) = 0;
        v64[2] = *v31;
        if ( SURFMEM::bCreateDIB((SURFMEM *)&v52, (struct _DEVBITMAPINFO *)v64, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0) )
        {
          v33 = v52;
          if ( (_DWORD)v30 != -1 )
          {
            v34 = EngLockSurface(*(HSURF *)(v52 + 32));
            v53 |= 1u;
            apsoNineGrid[v30] = v34;
            LOBYTE(v35) = 5;
            HmgSetOwner(*(_QWORD *)(v52 + 32), 0LL, v35);
            *(_DWORD *)(v52 + 92) = 0;
          }
          v28 = 0LL;
          if ( v33 )
            v28 = v33 + 24;
          v10 = v49;
        }
      }
    }
    if ( (_DWORD)v30 != -1 )
      RtlSetBits(&apsoNineGridBitmapHeader, v30, 1u);
    ExReleasePushLockExclusiveEx(&nineGridPushLock, 0LL);
    KeLeaveCriticalRegion();
    if ( v28 )
    {
      if ( v26 > 256 || v27 > 64 )
      {
        v36 = HIDWORD(v65[0]);
        v37 = HIDWORD(v65[1]);
        if ( SHIDWORD(v65[0]) < SHIDWORD(v65[1]) )
        {
          v38 = v65[1];
          v39 = v49;
          do
          {
            v40 = v36 + 64;
            v50 = v36 + 64;
            v41 = v36 + 64;
            if ( v36 + 64 > v37 || v40 < v36 )
            {
              v41 = v37;
              v50 = v37;
            }
            v42 = v65[0];
            if ( SLODWORD(v65[0]) < v38 )
            {
              v43 = v39 > v51;
              LODWORD(v55) = v43;
              do
              {
                v44 = v42 + 256;
                v45 = v42 + 256;
                if ( v42 + 256 > v38 || v44 < v42 )
                  v45 = v38;
                v67[2] = v45;
                v67[3] = v41;
                v67[0] = v42;
                v67[1] = v36;
                RenderNineGrid(v63, (__int64)v67, v60, (__int64)v66, v59, v58, v57, v43);
                v38 = v65[1];
                v46 = v42;
                v42 += 256;
                if ( v44 < v46 )
                  break;
                v43 = v55;
                v41 = v50;
              }
              while ( v44 < SLODWORD(v65[1]) );
              v37 = HIDWORD(v65[1]);
            }
            v47 = v36;
            v36 += 64;
          }
          while ( v40 >= v47 && v40 < v37 );
          LODWORD(v30) = v56;
        }
      }
      else
      {
        LOBYTE(v18) = v10 > v51;
        RenderNineGrid(v63, (__int64)v65, v60, (__int64)v66, v59, v58, v57, v18);
      }
    }
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(&nineGridPushLock, 0LL);
    if ( (_DWORD)v30 != -1 )
      RtlClearBits(&apsoNineGridBitmapHeader, v30, 1u);
    ExReleasePushLockExclusiveEx(&nineGridPushLock, 0LL);
    KeLeaveCriticalRegion();
    SURFMEM::~SURFMEM((SURFMEM *)&v52);
  }
  return 1LL;
}
