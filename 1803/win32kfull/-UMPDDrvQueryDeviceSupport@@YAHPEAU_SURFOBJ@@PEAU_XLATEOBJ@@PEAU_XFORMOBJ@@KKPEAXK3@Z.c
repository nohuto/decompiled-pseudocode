/*
 * XREFs of ?UMPDDrvQueryDeviceSupport@@YAHPEAU_SURFOBJ@@PEAU_XLATEOBJ@@PEAU_XFORMOBJ@@KKPEAXK3@Z @ 0x1C027B3D0
 * Callers:
 *     <none>
 * Callees:
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1C0018734 (--1XUMPDOBJ@@QEAA@XZ.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1C00187A4 (--0XUMPDOBJ@@QEAA@XZ.c)
 *     ?GetKernelPtr@UMPDOBJ@@QEAAPEAXPEAX@Z @ 0x1C0018844 (-GetKernelPtr@UMPDOBJ@@QEAAPEAXPEAX@Z.c)
 *     ?bThunkLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAPEAX1PEAH2PEAK@Z @ 0x1C001890C (-bThunkLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAPEAX1PEAH2PEAK@Z.c)
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1C0018974 (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     ?_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z @ 0x1C0018B80 (-_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z.c)
 *     ?ThunkDDIOBJ@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAXKPEAX@Z @ 0x1C0018CD4 (-ThunkDDIOBJ@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAXKPEAX@Z.c)
 *     ?ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z @ 0x1C0018DB4 (-ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z.c)
 *     ?pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z @ 0x1C0018E4C (-pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z.c)
 *     ?pxlo@UMPDOBJ@@QEAAHPEAPEAU_XLATEOBJ@@@Z @ 0x1C011FF2C (-pxlo@UMPDOBJ@@QEAAHPEAPEAU_XLATEOBJ@@@Z.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     memmove @ 0x1C013D380 (memmove.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 *     ?bDeleteLargeBitmaps@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@00@Z @ 0x1C027CB58 (-bDeleteLargeBitmaps@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@00@Z.c)
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
  ULONG v13; // edx
  unsigned int v14; // r15d
  int v15; // eax
  int v16; // eax
  unsigned int v17; // eax
  unsigned int v18; // ecx
  unsigned int v19; // eax
  void *v20; // rsi
  char *v21; // rdx
  char *KernelPtr; // rax
  int v23; // eax
  size_t v24; // [rsp+20h] [rbp-118h]
  int v25; // [rsp+40h] [rbp-F8h]
  int v26; // [rsp+44h] [rbp-F4h] BYREF
  int v27; // [rsp+48h] [rbp-F0h] BYREF
  int v28; // [rsp+4Ch] [rbp-ECh] BYREF
  UMPDOBJ *v29; // [rsp+50h] [rbp-E8h] BYREF
  unsigned int v30; // [rsp+58h] [rbp-E0h]
  unsigned int v31; // [rsp+5Ch] [rbp-DCh]
  unsigned int v32; // [rsp+60h] [rbp-D8h] BYREF
  unsigned int v33; // [rsp+64h] [rbp-D4h]
  void *v34; // [rsp+68h] [rbp-D0h] BYREF
  void *v35; // [rsp+70h] [rbp-C8h] BYREF
  int v36; // [rsp+78h] [rbp-C0h]
  int v37; // [rsp+7Ch] [rbp-BCh]
  struct _XLATEOBJ *v38; // [rsp+80h] [rbp-B8h]
  struct _XFORMOBJ *v39; // [rsp+88h] [rbp-B0h]
  unsigned __int64 v40; // [rsp+90h] [rbp-A8h]
  unsigned __int64 v41; // [rsp+98h] [rbp-A0h]
  struct _SURFOBJ *v42; // [rsp+A0h] [rbp-98h]
  _QWORD v43[10]; // [rsp+B0h] [rbp-88h] BYREF

  v33 = a4;
  v39 = a3;
  v38 = a2;
  v40 = (unsigned __int64)a8;
  v41 = (unsigned __int64)a6;
  v42 = a1;
  v10 = 1;
  v26 = 1;
  v28 = 0;
  v25 = 0;
  v27 = 0;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v29);
  v34 = 0LL;
  v35 = 0LL;
  memset(v43, 0, sizeof(v43));
  v11 = v29;
  if ( !v29 )
  {
LABEL_2:
    XUMPDOBJ::~XUMPDOBJ(&v29);
    return 0LL;
  }
  if ( *((_DWORD *)v29 + 106) )
  {
    if ( a2 )
      v13 = ((4 * a2->cEntries + 7) & 0xFFFFFFF8) + 120;
    else
      v13 = 96;
    v14 = a5;
    v15 = -1;
    if ( a5 + 7 >= a5 )
      v15 = a5 + 7;
    v36 = v15;
    if ( a5 + 7 < a5 )
      goto LABEL_2;
    v30 = v15 & 0xFFFFFFF8;
    v16 = -1;
    if ( Size + 7 >= Size )
      v16 = Size + 7;
    v37 = v16;
    if ( Size + 7 < Size )
      goto LABEL_2;
    v17 = v16 & 0xFFFFFFF8;
    v31 = v17;
    if ( v13 + v30 < v13 )
      goto LABEL_2;
    v18 = v13 + v30 + v17;
    v19 = -1;
    if ( v18 >= v13 + v30 )
      v19 = v18;
    v32 = v19;
    if ( v18 < v13 + v30 )
      goto LABEL_2;
    v10 = UMPDOBJ::bThunkLargeBitmap(v29, a1, &v34, &v35, &v28, &v27, &v32);
    v26 = v10;
    v25 = v27;
  }
  else
  {
    v14 = a5;
  }
  if ( v10 )
  {
    v43[0] = 0x4C00000050LL;
    v43[2] = *(_QWORD *)v11;
    v43[3] = a1;
    v43[4] = v38;
    v43[5] = v39;
    v20 = (void *)(v40 & -(__int64)(Size != 0));
    v43[6] = __PAIR64__(v14, v33);
    v43[7] = v41 & -(__int64)(v14 != 0);
    LODWORD(v43[8]) = Size;
    v43[9] = v20;
    if ( (!v14 || (unsigned int)UMPDOBJ::ThunkMemBlock(v11, (const void **)&v43[7], v14))
      && (!Size || (v43[9] = UMPDOBJ::_AllocUserMem(v11, Size, 1)) != 0LL) )
    {
      if ( (unsigned int)UMPDOBJ::pso(v11, (UMPDOBJ *)((char *)v11 + 64), (struct _SURFOBJ **)&v43[3], v25) )
      {
        if ( (unsigned int)UMPDOBJ::pxlo(v11, (struct _XLATEOBJ **)&v43[4]) )
        {
          if ( (unsigned int)UMPDOBJ::ThunkDDIOBJ(v11, (UMPDOBJ *)((char *)v11 + 272), (const void **)&v43[5], 4u, 0LL) )
          {
            LODWORD(v24) = 4;
            if ( (unsigned int)UMPDOBJ::Thunk(v11, v43, 0x50u, &v26, v24) != -1 )
            {
              if ( Size )
              {
                v21 = (char *)v43[9];
                if ( (unsigned __int64)Size + v43[9] > MmUserProbeAddress || (unsigned __int64)Size + v43[9] < v43[9] )
                  *(_BYTE *)MmUserProbeAddress = 0;
                KernelPtr = UMPDOBJ::GetKernelPtr(v11, v21);
                memmove(v20, KernelPtr, Size);
              }
              v10 = v26;
              v23 = v25;
              goto LABEL_36;
            }
          }
        }
      }
    }
    v10 = 0;
  }
  v23 = v25;
LABEL_36:
  if ( v28 )
  {
    if ( v23 )
      UMPDOBJ::bDeleteLargeBitmaps(v11, a1, 0LL, 0LL);
    a1->pvBits = v34;
    a1->pvScan0 = v35;
  }
  XUMPDOBJ::~XUMPDOBJ(&v29);
  return v10;
}
