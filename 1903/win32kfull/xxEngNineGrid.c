/*
 * XREFs of xxEngNineGrid @ 0x1C00E9FEC
 * Callers:
 *     EngNineGrid @ 0x1C00E9F30 (EngNineGrid.c)
 * Callees:
 *     ??XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z @ 0x1C00600A4 (--XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C0091FF0 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     RenderNineGrid @ 0x1C00EA4FC (RenderNineGrid.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     memset @ 0x1C0166840 (memset.c)
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
  signed int v10; // edx
  signed int v11; // r8d
  int v12; // ecx
  unsigned int v13; // r11d
  unsigned int v14; // r10d
  unsigned __int8 v15; // r13
  int v16; // r9d
  int v17; // r8d
  LONG bottom; // edi
  LONG right; // r14d
  BOOL v20; // eax
  char v21; // r8
  int v22; // r9d
  int v23; // r10d
  char v24; // dl
  int v25; // r14d
  int v26; // edi
  __int64 v27; // r15
  signed int ClearBits; // eax
  __int64 v29; // r12
  _QWORD *v30; // rax
  __int64 v31; // rbx
  SURFOBJ *v32; // rax
  __int64 v33; // r8
  LONG top; // ebx
  LONG v35; // ecx
  LONG v36; // edx
  LONG v37; // r14d
  LONG v38; // r13d
  LONG left; // edi
  int v40; // ecx
  LONG v41; // esi
  LONG v42; // eax
  LONG v43; // eax
  LONG v44; // eax
  unsigned __int8 v46; // [rsp+60h] [rbp-A0h]
  __int64 v47; // [rsp+68h] [rbp-98h] BYREF
  char v48; // [rsp+70h] [rbp-90h]
  int v49; // [rsp+74h] [rbp-8Ch]
  __int64 v50; // [rsp+78h] [rbp-88h]
  signed int v51; // [rsp+80h] [rbp-80h]
  __int64 v52; // [rsp+88h] [rbp-78h]
  __int64 v53; // [rsp+90h] [rbp-70h]
  __int64 v54; // [rsp+98h] [rbp-68h]
  __int64 v55; // [rsp+A0h] [rbp-60h]
  __int64 v56; // [rsp+A8h] [rbp-58h]
  __int64 v57; // [rsp+B0h] [rbp-50h]
  struct _SURFOBJ *v58; // [rsp+B8h] [rbp-48h]
  _QWORD v59[4]; // [rsp+C0h] [rbp-40h] BYREF
  struct tagRECT v60; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v61[2]; // [rsp+F0h] [rbp-10h] BYREF
  _DWORD v62[4]; // [rsp+100h] [rbp+0h] BYREF

  v58 = a1;
  v52 = a8;
  v55 = a4;
  v56 = a3;
  v57 = a2;
  v54 = (__int64)a6;
  v53 = (__int64)a7;
  v50 = SURFOBJ_TO_SURFACE(a2);
  SURFOBJ_TO_SURFACE(a1);
  v10 = *a5;
  v11 = a5[2];
  v12 = v11;
  v13 = a5[1];
  v14 = a5[3];
  v61[0] = __PAIR64__(v13, v10);
  v61[1] = __PAIR64__(v14, v11);
  if ( v10 <= v11 )
  {
    v15 = 0;
    v46 = 0;
  }
  else
  {
    v12 = v10;
    LODWORD(v61[1]) = v10;
    v10 = v11;
    v15 = 1;
    LODWORD(v61[0]) = v11;
    v46 = 1;
  }
  if ( (*a7 & 0x20) != 0 )
  {
    v16 = a6[2] - *a6;
    v17 = a6[3] - a6[1];
    if ( v12 - v10 > v16 )
    {
      if ( v15 )
        LODWORD(v61[0]) = v12 - v16;
      else
        LODWORD(v61[1]) = v16 + v10;
    }
    if ( (int)(v14 - v13) > v17 )
    {
      if ( v15 )
        HIDWORD(v61[0]) = v14 - v17;
      else
        HIDWORD(v61[1]) = v13 + v17;
    }
  }
  v60 = *(struct tagRECT *)v61;
  if ( a3 && *(_BYTE *)(a3 + 20) )
    ERECTL::operator*=(&v60.left, (int *)(a3 + 4));
  bottom = v60.bottom;
  right = v60.right;
  v20 = IsRectEmptyInl(&v60);
  v24 = 0;
  if ( !v20 )
    v24 = v21;
  if ( v23 != right && v22 != bottom && v24 )
  {
    v25 = right - v23;
    v47 = 0LL;
    v26 = bottom - v22;
    v48 = 0;
    v49 = 0;
    v27 = 0LL;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(&nineGridPushLock, 0LL);
    ClearBits = RtlFindClearBits(&apsoNineGridBitmapHeader, 1u, 0);
    v29 = ClearBits;
    v51 = ClearBits;
    if ( ClearBits == -1 || (v27 = apsoNineGrid[ClearBits]) == 0 )
    {
      memset(v59, 0, sizeof(v59));
      v30 = *(_QWORD **)(v50 + 128);
      if ( v30 )
      {
        LODWORD(v59[0]) = *(_DWORD *)(v50 + 96);
        HIDWORD(v59[0]) = 256;
        LODWORD(v59[1]) = 64;
        LODWORD(v59[3]) = 0;
        v59[2] = *v30;
        if ( SURFMEM::bCreateDIB((SURFMEM *)&v47, (struct _DEVBITMAPINFO *)v59, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0) )
        {
          v31 = v47;
          if ( (_DWORD)v29 != -1 )
          {
            v32 = EngLockSurface(*(HSURF *)(v47 + 32));
            v48 |= 1u;
            apsoNineGrid[v29] = v32;
            LOBYTE(v33) = 5;
            HmgSetOwner(*(_QWORD *)(v47 + 32), 0LL, v33);
            *(_DWORD *)(v47 + 92) = 0;
          }
          if ( v31 )
            v27 = v31 + 24;
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
        top = v60.top;
        v35 = v60.bottom;
        if ( v60.top < v60.bottom )
        {
          v36 = v60.right;
          do
          {
            v37 = top + 64;
            v38 = top + 64;
            if ( top + 64 > v35 || v37 < top )
              v38 = v35;
            left = v60.left;
            if ( v60.left < v36 )
            {
              v40 = v46;
              LODWORD(v50) = v46;
              do
              {
                v41 = left + 256;
                v42 = left + 256;
                if ( left + 256 > v36 || v41 < left )
                  v42 = v36;
                v62[2] = v42;
                v62[0] = left;
                v62[1] = top;
                v62[3] = v38;
                RenderNineGrid(v58, (__int64)v62, v55, (__int64)v61, v54, v53, v52, v40);
                v36 = v60.right;
                v43 = left;
                left += 256;
                if ( v41 < v43 )
                  break;
                v40 = v50;
              }
              while ( v41 < v60.right );
              v35 = v60.bottom;
            }
            v44 = top;
            top += 64;
          }
          while ( v37 >= v44 && v37 < v35 );
          LODWORD(v29) = v51;
        }
      }
      else
      {
        RenderNineGrid(v58, (__int64)&v60, v55, (__int64)v61, (__int64)a6, v53, v52, v15);
      }
    }
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(&nineGridPushLock, 0LL);
    if ( (_DWORD)v29 != -1 )
      RtlClearBits(&apsoNineGridBitmapHeader, v29, 1u);
    ExReleasePushLockExclusiveEx(&nineGridPushLock, 0LL);
    KeLeaveCriticalRegion();
    SURFMEM::~SURFMEM((SURFMEM *)&v47);
  }
  return 1LL;
}
