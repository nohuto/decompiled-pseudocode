/*
 * XREFs of ?UMPDDrvEscape@@YAKPEAU_SURFOBJ@@KKPEAXK1@Z @ 0x1C0090DF0
 * Callers:
 *     <none>
 * Callees:
 *     ?ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z @ 0x1C008B9C4 (-ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z.c)
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1C008DB54 (--1XUMPDOBJ@@QEAA@XZ.c)
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1C008DD04 (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     ?GetKernelPtr@UMPDOBJ@@QEAAPEAXPEAX@Z @ 0x1C008E148 (-GetKernelPtr@UMPDOBJ@@QEAAPEAXPEAX@Z.c)
 *     ?pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z @ 0x1C008E1B4 (-pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z.c)
 *     ?ThunkDDIOBJ@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAXKPEAX@Z @ 0x1C008E458 (-ThunkDDIOBJ@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAXKPEAX@Z.c)
 *     ?bNeedThunk@UMPDOBJ@@QEBAHPEAX@Z @ 0x1C008E544 (-bNeedThunk@UMPDOBJ@@QEBAHPEAX@Z.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1C008E570 (--0XUMPDOBJ@@QEAA@XZ.c)
 *     ?bThunkLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAPEAX1PEAH2PEAK@Z @ 0x1C00910EC (-bThunkLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAPEAX1PEAH2PEAK@Z.c)
 *     ?_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z @ 0x1C00E2AC4 (-_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     memmove @ 0x1C0163300 (memmove.c)
 *     memset @ 0x1C0163640 (memset.c)
 *     ?bDeleteLargeBitmaps@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@00@Z @ 0x1C0290064 (-bDeleteLargeBitmaps@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@00@Z.c)
 */

__int64 __fastcall UMPDDrvEscape(
        struct _SURFOBJ *a1,
        unsigned int a2,
        unsigned int a3,
        unsigned __int64 a4,
        unsigned int Size,
        void *a6)
{
  unsigned int v7; // edi
  int v9; // r13d
  UMPDOBJ *v10; // rbx
  unsigned int v11; // ecx
  unsigned int v12; // r8d
  unsigned int v13; // edx
  unsigned int v14; // ecx
  int v15; // eax
  int v16; // eax
  _QWORD *v17; // r12
  _QWORD *v18; // rcx
  void *v19; // rax
  UMPDOBJ *v20; // rcx
  char *KernelPtr; // rax
  size_t v23; // [rsp+20h] [rbp-A9h]
  int v24; // [rsp+40h] [rbp-89h] BYREF
  int v25; // [rsp+44h] [rbp-85h] BYREF
  unsigned int v26; // [rsp+48h] [rbp-81h] BYREF
  int v27; // [rsp+4Ch] [rbp-7Dh] BYREF
  void *v28; // [rsp+50h] [rbp-79h] BYREF
  void *v29; // [rsp+58h] [rbp-71h]
  void *v30; // [rsp+60h] [rbp-69h] BYREF
  void *v31; // [rsp+68h] [rbp-61h] BYREF
  UMPDOBJ *v32; // [rsp+70h] [rbp-59h] BYREF
  unsigned __int64 v33; // [rsp+78h] [rbp-51h]
  _QWORD v34[8]; // [rsp+80h] [rbp-49h] BYREF

  v7 = -1;
  v29 = a6;
  v25 = -1;
  v33 = a4;
  v26 = a2;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v32);
  v27 = 0;
  v9 = 0;
  v30 = 0LL;
  v31 = 0LL;
  v24 = 0;
  memset(v34, 0, sizeof(v34));
  v10 = v32;
  if ( !v32 )
    goto LABEL_31;
  if ( !*((_DWORD *)v32 + 106) )
  {
LABEL_10:
    v34[0] = 0x1800000040LL;
    v34[2] = *(_QWORD *)v10;
    v34[3] = a1;
    v34[4] = __PAIR64__(a3, v26);
    v17 = (_QWORD *)(v33 & -(__int64)(a3 != 0));
    LODWORD(v34[6]) = Size;
    v18 = v17;
    v34[5] = v17;
    v29 = (void *)((unsigned __int64)v29 & -(__int64)(Size != 0));
    v34[7] = v29;
    if ( v26 != 25 || *((int *)a1->hdev + 456) >= 0 )
      goto LABEL_17;
    if ( v17 )
    {
      v19 = *(void **)((v33 & -(__int64)(a3 != 0)) + 0x18);
      v28 = v19;
      if ( !v19 )
      {
LABEL_16:
        v18[3] = v19;
LABEL_17:
        if ( (!a3
           || !(unsigned int)UMPDOBJ::bNeedThunk(v10, v17)
           || (unsigned int)UMPDOBJ::ThunkMemBlock(v20, (const void **)&v34[5], a3))
          && (!Size || (v34[7] = UMPDOBJ::_AllocUserMem(v10, Size, 1)) != 0LL) )
        {
          if ( (unsigned int)UMPDOBJ::pso(v10, (UMPDOBJ *)((char *)v10 + 64), (EVENT_DATA_DESCRIPTOR **)&v34[3], v9) )
          {
            LODWORD(v23) = 4;
            if ( (unsigned int)UMPDOBJ::Thunk(v10, v34, 0x40u, &v25, v23) != -1 )
            {
              if ( Size )
              {
                KernelPtr = UMPDOBJ::GetKernelPtr(v10, (char *)v34[7]);
                memmove(v29, KernelPtr, Size);
              }
              v7 = v25;
            }
          }
        }
        goto LABEL_27;
      }
      v26 = 0;
      if ( (unsigned int)UMPDOBJ::ThunkDDIOBJ(v10, (UMPDOBJ *)((char *)v10 + 272), (const void **)&v28, 4u, &v26) )
      {
        v18 = (_QWORD *)v34[5];
        v19 = v28;
        goto LABEL_16;
      }
    }
LABEL_27:
    if ( v27 )
    {
      if ( v9 )
        UMPDOBJ::bDeleteLargeBitmaps(v10, a1, 0LL, 0LL);
      a1->pvBits = v30;
      a1->pvScan0 = v31;
    }
    goto LABEL_31;
  }
  if ( a3 + 7 >= a3 )
  {
    v11 = (a3 + 7) & 0xFFFFFFF8;
    if ( Size + 7 >= Size )
    {
      v12 = (Size + 7) & 0xFFFFFFF8;
      if ( v11 < 0xFFFFFFB0 )
      {
        v13 = v11 + 80;
        v14 = v11 + 80 + v12;
        v15 = -1;
        if ( v13 + v12 >= v13 )
          v15 = v14;
        LODWORD(v28) = v15;
        if ( v14 >= v13 )
        {
          v16 = UMPDOBJ::bThunkLargeBitmap(v32, a1, &v30, &v31, &v27, &v24, (unsigned int *)&v28);
          v9 = v24;
          if ( !v16 )
            goto LABEL_27;
          goto LABEL_10;
        }
      }
    }
  }
LABEL_31:
  XUMPDOBJ::~XUMPDOBJ(&v32);
  return v7;
}
