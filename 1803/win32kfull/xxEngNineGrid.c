/*
 * XREFs of xxEngNineGrid @ 0x1C00A8890
 * Callers:
 *     EngNineGrid @ 0x1C00A87E0 (EngNineGrid.c)
 * Callees:
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C00733F0 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     ??XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z @ 0x1C00A51E0 (--XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z.c)
 *     RenderNineGrid @ 0x1C00A8D24 (RenderNineGrid.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     memset @ 0x1C013D6C0 (memset.c)
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
  int v10; // r9d
  int v11; // r11d
  signed int v12; // r10d
  int v13; // ecx
  int v14; // edi
  unsigned int v15; // r8d
  int v16; // ebx
  int v17; // edx
  LONG bottom; // edi
  LONG right; // esi
  BOOL v20; // eax
  int v21; // r8d
  int v22; // r9d
  char v23; // dl
  char v24; // dl
  int v25; // esi
  int v26; // edi
  __int64 v27; // r15
  signed int ClearBits; // eax
  __int64 v29; // r12
  _QWORD *v30; // rcx
  unsigned int v31; // eax
  __int64 v32; // rbx
  SURFOBJ *v33; // rax
  __int64 v34; // r8
  LONG top; // ebx
  LONG v36; // ecx
  LONG v37; // edx
  LONG v38; // r14d
  LONG v39; // r13d
  LONG left; // edi
  int v41; // ecx
  LONG v42; // esi
  LONG v43; // eax
  LONG v44; // eax
  LONG v45; // eax
  bool v47; // [rsp+60h] [rbp-A0h]
  __int64 v48; // [rsp+68h] [rbp-98h] BYREF
  char v49; // [rsp+70h] [rbp-90h]
  int v50; // [rsp+74h] [rbp-8Ch]
  __int64 v51; // [rsp+78h] [rbp-88h]
  signed int v52; // [rsp+80h] [rbp-80h]
  __int64 v53; // [rsp+88h] [rbp-78h]
  __int64 v54; // [rsp+90h] [rbp-70h]
  __int64 v55; // [rsp+98h] [rbp-68h]
  __int64 v56; // [rsp+A0h] [rbp-60h]
  __int64 v57; // [rsp+A8h] [rbp-58h]
  struct _SURFOBJ *v58; // [rsp+B0h] [rbp-50h]
  __int64 v59; // [rsp+B8h] [rbp-48h]
  _QWORD v60[4]; // [rsp+C0h] [rbp-40h] BYREF
  struct tagRECT v61; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v62[2]; // [rsp+F0h] [rbp-10h] BYREF
  _DWORD v63[4]; // [rsp+100h] [rbp+0h] BYREF

  v58 = a1;
  v53 = a8;
  v56 = a4;
  v59 = a3;
  v57 = a2;
  v55 = (__int64)a6;
  v54 = (__int64)a7;
  v51 = SURFOBJ_TO_SURFACE(a2);
  SURFOBJ_TO_SURFACE(a1);
  v10 = *a5;
  v11 = v10;
  v12 = a5[2];
  v13 = v12;
  v14 = a5[1];
  v15 = a5[3];
  v47 = *a5 > v12;
  LODWORD(v62[0]) = *a5;
  HIDWORD(v62[0]) = v14;
  v62[1] = __PAIR64__(v15, v12);
  if ( v10 > v12 )
  {
    v13 = v10;
    LODWORD(v62[0]) = v12;
    LODWORD(v62[1]) = v10;
    v11 = v12;
  }
  if ( (*a7 & 0x20) != 0 )
  {
    v16 = a6[2] - *a6;
    v17 = a6[3] - a6[1];
    if ( v13 - v11 > v16 )
    {
      if ( v10 <= v12 )
        LODWORD(v62[1]) = v16 + v11;
      else
        LODWORD(v62[0]) = v13 - v16;
    }
    if ( (int)(v15 - v14) > v17 )
    {
      if ( v10 <= v12 )
        HIDWORD(v62[1]) = v14 + v17;
      else
        HIDWORD(v62[0]) = v15 - v17;
    }
  }
  v61 = *(struct tagRECT *)v62;
  if ( a3 && *(_BYTE *)(a3 + 20) )
    ERECTL::operator*=(&v61.left, (int *)(a3 + 4));
  bottom = v61.bottom;
  right = v61.right;
  v20 = IsRectEmptyInl(&v61);
  v24 = !v20 & v23;
  if ( v22 != right && v21 != bottom && v24 )
  {
    v25 = right - v22;
    v48 = 0LL;
    v26 = bottom - v21;
    v49 = 0;
    v50 = 0;
    v27 = 0LL;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(&nineGridPushLock, 0LL);
    ClearBits = RtlFindClearBits(&apsoNineGridBitmapHeader, 1u, 0);
    v29 = ClearBits;
    v52 = ClearBits;
    if ( ClearBits == -1 || (v27 = apsoNineGrid[ClearBits]) == 0 )
    {
      memset(v60, 0, sizeof(v60));
      v30 = *(_QWORD **)(v51 + 128);
      if ( v30 )
      {
        v31 = *(_DWORD *)(v51 + 96);
        LODWORD(v60[1]) = 64;
        v60[0] = v31 | 0x10000000000LL;
        LODWORD(v60[3]) = 0;
        v60[2] = *v30;
        if ( SURFMEM::bCreateDIB((SURFMEM *)&v48, (struct _DEVBITMAPINFO *)v60, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0) )
        {
          v32 = v48;
          if ( (_DWORD)v29 != -1 )
          {
            v33 = EngLockSurface(*(HSURF *)(v48 + 32));
            v49 |= 1u;
            apsoNineGrid[v29] = v33;
            LOBYTE(v34) = 5;
            HmgSetOwner(*(_QWORD *)(v48 + 32), 0LL, v34);
            *(_DWORD *)(v48 + 92) = 0;
          }
          if ( v32 )
            v27 = v32 + 24;
          else
            v27 = 0LL;
        }
      }
    }
    if ( (_DWORD)v29 != -1 )
      RtlSetBits(&apsoNineGridBitmapHeader, v29, 1u);
    ExReleasePushLockExclusiveEx(&nineGridPushLock, 0LL);
    KeLeaveCriticalRegion();
    if ( v27 )
    {
      if ( v25 > 256 || v26 > 64 )
      {
        top = v61.top;
        v36 = v61.bottom;
        if ( v61.top < v61.bottom )
        {
          v37 = v61.right;
          do
          {
            v38 = top + 64;
            v39 = top + 64;
            if ( top + 64 > v36 || v38 < top )
              v39 = v36;
            left = v61.left;
            if ( v61.left < v37 )
            {
              v41 = v47;
              LODWORD(v51) = v47;
              do
              {
                v42 = left + 256;
                v43 = left + 256;
                if ( left + 256 > v37 || v42 < left )
                  v43 = v37;
                v63[2] = v43;
                v63[0] = left;
                v63[1] = top;
                v63[3] = v39;
                RenderNineGrid(v58, (__int64)v63, v56, (__int64)v62, v55, v54, v53, v41);
                v37 = v61.right;
                v44 = left;
                left += 256;
                if ( v42 < v44 )
                  break;
                v41 = v51;
              }
              while ( v42 < v61.right );
              v36 = v61.bottom;
            }
            v45 = top;
            top += 64;
          }
          while ( v38 >= v45 && v38 < v36 );
          LODWORD(v29) = v52;
        }
      }
      else
      {
        RenderNineGrid(a1, (__int64)&v61, v56, (__int64)v62, v55, v54, v53, v47);
      }
    }
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(&nineGridPushLock, 0LL);
    if ( (_DWORD)v29 != -1 )
      RtlClearBits(&apsoNineGridBitmapHeader, v29, 1u);
    ExReleasePushLockExclusiveEx(&nineGridPushLock, 0LL);
    KeLeaveCriticalRegion();
    SURFMEM::~SURFMEM((SURFMEM *)&v48);
  }
  return 1LL;
}
