/*
 * XREFs of ?UMPDDrvQueryDeviceSupport@@YAHPEAU_SURFOBJ@@PEAU_XLATEOBJ@@PEAU_XFORMOBJ@@KKPEAXK3@Z @ 0x1C02A42F0
 * Callers:
 *     <none>
 * Callees:
 *     ?_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z @ 0x1C00952BC (-_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z.c)
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1C009958C (--1XUMPDOBJ@@QEAA@XZ.c)
 *     ?pxlo@UMPDOBJ@@QEAAHPEAPEAU_XLATEOBJ@@@Z @ 0x1C0099604 (-pxlo@UMPDOBJ@@QEAAHPEAPEAU_XLATEOBJ@@@Z.c)
 *     ?GetKernelPtr@UMPDOBJ@@QEAAPEAXPEAX@Z @ 0x1C00996D0 (-GetKernelPtr@UMPDOBJ@@QEAAPEAXPEAX@Z.c)
 *     ?pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z @ 0x1C0099828 (-pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z.c)
 *     ?ThunkDDIOBJ@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAXKPEAX@Z @ 0x1C0099A50 (-ThunkDDIOBJ@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAXKPEAX@Z.c)
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1C0099C30 (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1C0099F38 (--0XUMPDOBJ@@QEAA@XZ.c)
 *     ?ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z @ 0x1C009A1A8 (-ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z.c)
 *     ?bThunkLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAPEAX1PEAH2PEAK@Z @ 0x1C00F0AC0 (-bThunkLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAPEAX1PEAH2PEAK@Z.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     memmove @ 0x1C0168100 (memmove.c)
 *     memset @ 0x1C0168440 (memset.c)
 *     ?bDeleteLargeBitmaps@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@00@Z @ 0x1C02A5A9C (-bDeleteLargeBitmaps@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@00@Z.c)
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
  UMPDOBJ *v12; // rbx
  ULONG v14; // ecx
  unsigned int v15; // r14d
  unsigned int v16; // r8d
  ULONG v17; // eax
  unsigned int v18; // eax
  char *v19; // rdx
  char *KernelPtr; // rax
  size_t v21; // [rsp+20h] [rbp-128h]
  int v22; // [rsp+40h] [rbp-108h] BYREF
  int v23; // [rsp+44h] [rbp-104h] BYREF
  unsigned int v24; // [rsp+48h] [rbp-100h] BYREF
  int v25; // [rsp+4Ch] [rbp-FCh] BYREF
  UMPDOBJ *v26; // [rsp+50h] [rbp-F8h] BYREF
  unsigned int v27; // [rsp+58h] [rbp-F0h] BYREF
  void *v28; // [rsp+60h] [rbp-E8h]
  void *v29; // [rsp+68h] [rbp-E0h] BYREF
  void *v30; // [rsp+70h] [rbp-D8h] BYREF
  int v31; // [rsp+78h] [rbp-D0h]
  unsigned int v32; // [rsp+7Ch] [rbp-CCh]
  int v33; // [rsp+80h] [rbp-C8h]
  unsigned int v34; // [rsp+84h] [rbp-C4h]
  struct _XLATEOBJ *v35; // [rsp+88h] [rbp-C0h]
  struct _XFORMOBJ *v36; // [rsp+90h] [rbp-B8h]
  unsigned __int64 v37; // [rsp+98h] [rbp-B0h]
  struct _SURFOBJ *v38; // [rsp+A0h] [rbp-A8h]
  _QWORD v39[10]; // [rsp+B0h] [rbp-98h] BYREF

  v24 = a4;
  v36 = a3;
  v35 = a2;
  v28 = a8;
  v37 = (unsigned __int64)a6;
  v38 = a1;
  v10 = 1;
  v22 = 1;
  v25 = 0;
  v11 = 0;
  v23 = 0;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v26);
  v29 = 0LL;
  v30 = 0LL;
  memset(v39, 0, sizeof(v39));
  v12 = v26;
  if ( !v26 )
  {
LABEL_2:
    XUMPDOBJ::~XUMPDOBJ(&v26);
    return 0LL;
  }
  if ( *((_DWORD *)v26 + 106) )
  {
    if ( a2 )
      v14 = ((4 * a2->cEntries + 7) & 0xFFFFFFF8) + 120;
    else
      v14 = 96;
    v15 = a5;
    if ( a5 + 7 < a5 )
      goto LABEL_2;
    v31 = a5 + 7;
    v32 = (a5 + 7) & 0xFFFFFFF8;
    if ( Size + 7 < Size )
      goto LABEL_2;
    v33 = Size + 7;
    v16 = (Size + 7) & 0xFFFFFFF8;
    v34 = v16;
    v17 = v14 + ((a5 + 7) & 0xFFFFFFF8);
    if ( v17 < v14 )
      goto LABEL_2;
    v18 = v17 + v16;
    if ( v14 + ((a5 + 7) & 0xFFFFFFF8) + v16 < v14 + ((a5 + 7) & 0xFFFFFFF8) )
      goto LABEL_2;
    v27 = v18;
    v10 = UMPDOBJ::bThunkLargeBitmap(v26, a1, &v29, &v30, &v25, &v23, &v27);
    v22 = v10;
    v11 = v23;
  }
  else
  {
    v15 = a5;
  }
  if ( v10 )
  {
    v39[0] = 0x4C00000050LL;
    v39[2] = *(_QWORD *)v12;
    v39[3] = a1;
    v39[4] = v35;
    v39[5] = v36;
    v28 = (void *)((unsigned __int64)v28 & -(__int64)(Size != 0));
    v39[6] = __PAIR64__(v15, v24);
    v39[7] = v37 & -(__int64)(v15 != 0);
    LODWORD(v39[8]) = Size;
    v39[9] = v28;
    if ( (!v15 || (unsigned int)UMPDOBJ::ThunkMemBlock(v12, (const void **)&v39[7], v15))
      && (!Size || (v39[9] = UMPDOBJ::_AllocUserMem(v12, Size, 1)) != 0LL)
      && (unsigned int)UMPDOBJ::pso(v12, (UMPDOBJ *)((char *)v12 + 64), (struct _SURFOBJ **)&v39[3], v11)
      && (unsigned int)UMPDOBJ::pxlo(v12, (struct _XLATEOBJ **)&v39[4])
      && (!v39[5]
       || (v24 = 0,
           (unsigned int)UMPDOBJ::ThunkDDIOBJ(v12, (UMPDOBJ *)((char *)v12 + 272), (const void **)&v39[5], 4u, &v24)))
      && (LODWORD(v21) = 4, (unsigned int)UMPDOBJ::Thunk(v12, v39, 80LL, &v22, v21) != -1) )
    {
      if ( Size )
      {
        v19 = (char *)v39[9];
        if ( (unsigned __int64)Size + v39[9] > MmUserProbeAddress || (unsigned __int64)Size + v39[9] < v39[9] )
          *(_BYTE *)MmUserProbeAddress = 0;
        KernelPtr = UMPDOBJ::GetKernelPtr(v12, v19);
        memmove(v28, KernelPtr, Size);
      }
      v10 = v22;
    }
    else
    {
      v10 = 0;
    }
  }
  if ( v25 )
  {
    if ( v11 )
      UMPDOBJ::bDeleteLargeBitmaps(v12, a1, 0LL, 0LL);
    a1->pvBits = v29;
    a1->pvScan0 = v30;
  }
  XUMPDOBJ::~XUMPDOBJ(&v26);
  return v10;
}
