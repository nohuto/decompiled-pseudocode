/*
 * XREFs of ?UMPDDrvQueryDeviceSupport@@YAHPEAU_SURFOBJ@@PEAU_XLATEOBJ@@PEAU_XFORMOBJ@@KKPEAXK3@Z @ 0x1C028E850
 * Callers:
 *     <none>
 * Callees:
 *     ?ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z @ 0x1C008B9C4 (-ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z.c)
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1C008DB54 (--1XUMPDOBJ@@QEAA@XZ.c)
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1C008DD04 (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     ?pxlo@UMPDOBJ@@QEAAHPEAPEAU_XLATEOBJ@@@Z @ 0x1C008E07C (-pxlo@UMPDOBJ@@QEAAHPEAPEAU_XLATEOBJ@@@Z.c)
 *     ?GetKernelPtr@UMPDOBJ@@QEAAPEAXPEAX@Z @ 0x1C008E148 (-GetKernelPtr@UMPDOBJ@@QEAAPEAXPEAX@Z.c)
 *     ?pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z @ 0x1C008E1B4 (-pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z.c)
 *     ?ThunkDDIOBJ@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAXKPEAX@Z @ 0x1C008E458 (-ThunkDDIOBJ@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAXKPEAX@Z.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1C008E570 (--0XUMPDOBJ@@QEAA@XZ.c)
 *     ?bThunkLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAPEAX1PEAH2PEAK@Z @ 0x1C00910EC (-bThunkLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAPEAX1PEAH2PEAK@Z.c)
 *     ?_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z @ 0x1C00E2AC4 (-_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     memmove @ 0x1C0163300 (memmove.c)
 *     memset @ 0x1C0163640 (memset.c)
 *     ?bDeleteLargeBitmaps@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@00@Z @ 0x1C0290064 (-bDeleteLargeBitmaps@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@00@Z.c)
 */

__int64 __fastcall UMPDDrvQueryDeviceSupport(
        struct _SURFOBJ *a1,
        struct _XLATEOBJ *a2,
        struct _XFORMOBJ *a3,
        unsigned int a4,
        unsigned int a5,
        void *a6,
        unsigned int Size,
        void *a8)
{
  unsigned int v10; // esi
  UMPDOBJ *v11; // rbx
  ULONG v13; // ecx
  unsigned int v14; // r15d
  int v15; // edx
  unsigned int v16; // edx
  int v17; // r8d
  unsigned int v18; // r8d
  ULONG v19; // eax
  unsigned int v20; // edx
  unsigned int v21; // ecx
  unsigned int v22; // eax
  char *v23; // rdx
  char *KernelPtr; // rax
  int v25; // eax
  size_t v26; // [rsp+20h] [rbp-118h]
  int v27; // [rsp+40h] [rbp-F8h]
  int v28; // [rsp+44h] [rbp-F4h] BYREF
  int v29; // [rsp+48h] [rbp-F0h] BYREF
  unsigned int v30; // [rsp+4Ch] [rbp-ECh] BYREF
  int v31; // [rsp+50h] [rbp-E8h] BYREF
  UMPDOBJ *v32; // [rsp+58h] [rbp-E0h] BYREF
  unsigned int v33; // [rsp+60h] [rbp-D8h] BYREF
  void *v34; // [rsp+68h] [rbp-D0h]
  void *v35; // [rsp+70h] [rbp-C8h] BYREF
  void *v36; // [rsp+78h] [rbp-C0h] BYREF
  int v37; // [rsp+80h] [rbp-B8h]
  unsigned int v38; // [rsp+84h] [rbp-B4h]
  int v39; // [rsp+88h] [rbp-B0h]
  unsigned int v40; // [rsp+8Ch] [rbp-ACh]
  struct _XLATEOBJ *v41; // [rsp+90h] [rbp-A8h]
  struct _XFORMOBJ *v42; // [rsp+98h] [rbp-A0h]
  unsigned __int64 v43; // [rsp+A0h] [rbp-98h]
  struct _SURFOBJ *v44; // [rsp+A8h] [rbp-90h]
  _QWORD v45[10]; // [rsp+B0h] [rbp-88h] BYREF

  v30 = a4;
  v42 = a3;
  v41 = a2;
  v34 = a8;
  v43 = (unsigned __int64)a6;
  v44 = a1;
  v10 = 1;
  v28 = 1;
  v31 = 0;
  v27 = 0;
  v29 = 0;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v32);
  v35 = 0LL;
  v36 = 0LL;
  memset(v45, 0, sizeof(v45));
  v11 = v32;
  if ( !v32 )
  {
LABEL_2:
    XUMPDOBJ::~XUMPDOBJ(&v32);
    return 0LL;
  }
  if ( *((_DWORD *)v32 + 106) )
  {
    if ( a2 )
      v13 = ((4 * a2->cEntries + 7) & 0xFFFFFFF8) + 120;
    else
      v13 = 96;
    v14 = a5;
    v15 = -1;
    if ( a5 + 7 >= a5 )
      v15 = a5 + 7;
    v37 = v15;
    if ( a5 + 7 < a5 )
      goto LABEL_2;
    v16 = v15 & 0xFFFFFFF8;
    v38 = v16;
    v17 = -1;
    if ( Size + 7 >= Size )
      v17 = Size + 7;
    v39 = v17;
    if ( Size + 7 < Size )
      goto LABEL_2;
    v18 = v17 & 0xFFFFFFF8;
    v40 = v18;
    v19 = v13 + v16;
    if ( v13 + v16 < v13 )
      goto LABEL_2;
    v20 = v13 + v16;
    v21 = v19 + v18;
    v22 = -1;
    if ( v20 + v18 >= v20 )
      v22 = v21;
    v33 = v22;
    if ( v21 < v20 )
      goto LABEL_2;
    v10 = UMPDOBJ::bThunkLargeBitmap(v32, a1, &v35, &v36, &v31, &v29, &v33);
    v28 = v10;
    v27 = v29;
  }
  else
  {
    v14 = a5;
  }
  if ( v10 )
  {
    v45[0] = 0x4C00000050LL;
    v45[2] = *(_QWORD *)v11;
    v45[3] = a1;
    v45[4] = v41;
    v45[5] = v42;
    v34 = (void *)((unsigned __int64)v34 & -(__int64)(Size != 0));
    v45[6] = __PAIR64__(v14, v30);
    v45[7] = v43 & -(__int64)(v14 != 0);
    LODWORD(v45[8]) = Size;
    v45[9] = v34;
    if ( (!v14 || (unsigned int)UMPDOBJ::ThunkMemBlock(v11, (const void **)&v45[7], v14))
      && (!Size || (v45[9] = UMPDOBJ::_AllocUserMem(v11, Size, 1)) != 0LL) )
    {
      if ( (unsigned int)UMPDOBJ::pso(v11, (UMPDOBJ *)((char *)v11 + 64), (EVENT_DATA_DESCRIPTOR **)&v45[3], v27) )
      {
        if ( (unsigned int)UMPDOBJ::pxlo(v11, (struct _XLATEOBJ **)&v45[4]) )
        {
          if ( !v45[5]
            || (v30 = 0,
                (unsigned int)UMPDOBJ::ThunkDDIOBJ(
                                v11,
                                (UMPDOBJ *)((char *)v11 + 272),
                                (const void **)&v45[5],
                                4u,
                                &v30)) )
          {
            LODWORD(v26) = 4;
            if ( (unsigned int)UMPDOBJ::Thunk(v11, v45, 0x50u, &v28, v26) != -1 )
            {
              if ( Size )
              {
                v23 = (char *)v45[9];
                if ( (unsigned __int64)Size + v45[9] > MmUserProbeAddress || (unsigned __int64)Size + v45[9] < v45[9] )
                  *(_BYTE *)MmUserProbeAddress = 0;
                KernelPtr = UMPDOBJ::GetKernelPtr(v11, v23);
                memmove(v34, KernelPtr, Size);
              }
              v10 = v28;
              v25 = v27;
              goto LABEL_37;
            }
          }
        }
      }
    }
    v10 = 0;
  }
  v25 = v27;
LABEL_37:
  if ( v31 )
  {
    if ( v25 )
      UMPDOBJ::bDeleteLargeBitmaps(v11, a1, 0LL, 0LL);
    a1->pvBits = v35;
    a1->pvScan0 = v36;
  }
  XUMPDOBJ::~XUMPDOBJ(&v32);
  return v10;
}
