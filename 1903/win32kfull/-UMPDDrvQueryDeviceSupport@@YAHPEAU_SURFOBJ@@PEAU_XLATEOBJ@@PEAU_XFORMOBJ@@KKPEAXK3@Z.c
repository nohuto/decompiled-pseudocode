/*
 * XREFs of ?UMPDDrvQueryDeviceSupport@@YAHPEAU_SURFOBJ@@PEAU_XLATEOBJ@@PEAU_XFORMOBJ@@KKPEAXK3@Z @ 0x1C02A47D0
 * Callers:
 *     <none>
 * Callees:
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1C004FD7C (--1XUMPDOBJ@@QEAA@XZ.c)
 *     ?pxlo@UMPDOBJ@@QEAAHPEAPEAU_XLATEOBJ@@@Z @ 0x1C004FDF4 (-pxlo@UMPDOBJ@@QEAAHPEAPEAU_XLATEOBJ@@@Z.c)
 *     ?GetKernelPtr@UMPDOBJ@@QEAAPEAXPEAX@Z @ 0x1C004FEC0 (-GetKernelPtr@UMPDOBJ@@QEAAPEAXPEAX@Z.c)
 *     ?pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z @ 0x1C0050018 (-pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z.c)
 *     ?ThunkDDIOBJ@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAXKPEAX@Z @ 0x1C00501E4 (-ThunkDDIOBJ@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAXKPEAX@Z.c)
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1C00503C4 (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1C00506CC (--0XUMPDOBJ@@QEAA@XZ.c)
 *     ?ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z @ 0x1C005093C (-ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z.c)
 *     ?_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z @ 0x1C00777AC (-_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z.c)
 *     ?bThunkLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAPEAX1PEAH2PEAK@Z @ 0x1C007A1D0 (-bThunkLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAPEAX1PEAH2PEAK@Z.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     memmove @ 0x1C0166500 (memmove.c)
 *     memset @ 0x1C0166840 (memset.c)
 *     ?bDeleteLargeBitmaps@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@00@Z @ 0x1C02A5F4C (-bDeleteLargeBitmaps@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@00@Z.c)
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
  int v11; // r12d
  __int64 v12; // r9
  UMPDOBJ *v13; // rbx
  ULONG v15; // ecx
  unsigned int v16; // r15d
  unsigned int v17; // r8d
  ULONG v18; // eax
  unsigned int v19; // eax
  void *v20; // rsi
  char *v21; // rdx
  char *KernelPtr; // rax
  size_t v23; // [rsp+20h] [rbp-128h]
  int v24; // [rsp+40h] [rbp-108h] BYREF
  int v25; // [rsp+44h] [rbp-104h] BYREF
  int v26; // [rsp+48h] [rbp-100h] BYREF
  UMPDOBJ *v27; // [rsp+50h] [rbp-F8h] BYREF
  unsigned int v28; // [rsp+58h] [rbp-F0h] BYREF
  unsigned int v29; // [rsp+5Ch] [rbp-ECh]
  void *v30; // [rsp+60h] [rbp-E8h] BYREF
  void *v31; // [rsp+68h] [rbp-E0h] BYREF
  int v32; // [rsp+70h] [rbp-D8h]
  unsigned int v33; // [rsp+74h] [rbp-D4h]
  int v34; // [rsp+78h] [rbp-D0h]
  unsigned int v35; // [rsp+7Ch] [rbp-CCh]
  struct _XLATEOBJ *v36; // [rsp+80h] [rbp-C8h]
  struct _XFORMOBJ *v37; // [rsp+88h] [rbp-C0h]
  unsigned __int64 v38; // [rsp+90h] [rbp-B8h]
  unsigned __int64 v39; // [rsp+98h] [rbp-B0h]
  struct _SURFOBJ *v40; // [rsp+A0h] [rbp-A8h]
  _QWORD v41[10]; // [rsp+B0h] [rbp-98h] BYREF

  v29 = a4;
  v37 = a3;
  v36 = a2;
  v38 = (unsigned __int64)a8;
  v39 = (unsigned __int64)a6;
  v40 = a1;
  v10 = 1;
  v24 = 1;
  v26 = 0;
  v11 = 0;
  v25 = 0;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v27);
  v30 = 0LL;
  v31 = 0LL;
  memset(v41, 0, sizeof(v41));
  v13 = v27;
  if ( !v27 )
  {
LABEL_2:
    XUMPDOBJ::~XUMPDOBJ(&v27);
    return 0LL;
  }
  if ( *((_DWORD *)v27 + 106) )
  {
    if ( a2 )
      v15 = ((4 * a2->cEntries + 7) & 0xFFFFFFF8) + 120;
    else
      v15 = 96;
    v16 = a5;
    if ( a5 + 7 < a5 )
      goto LABEL_2;
    v32 = a5 + 7;
    v33 = (a5 + 7) & 0xFFFFFFF8;
    if ( Size + 7 < Size )
      goto LABEL_2;
    v34 = Size + 7;
    v17 = (Size + 7) & 0xFFFFFFF8;
    v35 = v17;
    v18 = v15 + ((a5 + 7) & 0xFFFFFFF8);
    if ( v18 < v15 )
      goto LABEL_2;
    v19 = v18 + v17;
    if ( v15 + ((a5 + 7) & 0xFFFFFFF8) + v17 < v15 + ((a5 + 7) & 0xFFFFFFF8) )
      goto LABEL_2;
    v28 = v19;
    v10 = UMPDOBJ::bThunkLargeBitmap(v27, a1, &v30, &v31, &v26, &v25, &v28);
    v24 = v10;
    v11 = v25;
  }
  else
  {
    v16 = a5;
  }
  if ( v10 )
  {
    v41[0] = 0x4C00000050LL;
    v41[2] = *(_QWORD *)v13;
    v41[3] = a1;
    v41[4] = v36;
    v41[5] = v37;
    v20 = (void *)(v38 & -(__int64)(Size != 0));
    v41[6] = __PAIR64__(v16, v29);
    v41[7] = v39 & -(__int64)(v16 != 0);
    LODWORD(v41[8]) = Size;
    v41[9] = v20;
    if ( (!v16 || (unsigned int)UMPDOBJ::ThunkMemBlock(v13, (const void **)&v41[7], v16))
      && (!Size || (v41[9] = UMPDOBJ::_AllocUserMem(v13, Size, 1LL, v12)) != 0LL)
      && (unsigned int)UMPDOBJ::pso(v13, (UMPDOBJ *)((char *)v13 + 64), (struct _SURFOBJ **)&v41[3], v11)
      && (unsigned int)UMPDOBJ::pxlo(v13, (struct _XLATEOBJ **)&v41[4])
      && (unsigned int)UMPDOBJ::ThunkDDIOBJ(v13, (UMPDOBJ *)((char *)v13 + 272), (const void **)&v41[5], 4u, 0LL)
      && (LODWORD(v23) = 4, (unsigned int)UMPDOBJ::Thunk(v13, v41, 80LL, &v24, v23) != -1) )
    {
      if ( Size )
      {
        v21 = (char *)v41[9];
        if ( (unsigned __int64)Size + v41[9] > MmUserProbeAddress || (unsigned __int64)Size + v41[9] < v41[9] )
          *(_BYTE *)MmUserProbeAddress = 0;
        KernelPtr = UMPDOBJ::GetKernelPtr(v13, v21);
        memmove(v20, KernelPtr, Size);
      }
      v10 = v24;
    }
    else
    {
      v10 = 0;
    }
  }
  if ( v26 )
  {
    if ( v11 )
      UMPDOBJ::bDeleteLargeBitmaps(v13, a1, 0LL, 0LL);
    a1->pvBits = v30;
    a1->pvScan0 = v31;
  }
  XUMPDOBJ::~XUMPDOBJ(&v27);
  return v10;
}
