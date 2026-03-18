/*
 * XREFs of ?UMPDDrvEscape@@YAKPEAU_SURFOBJ@@KKPEAXK1@Z @ 0x1C00785F0
 * Callers:
 *     <none>
 * Callees:
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1C004FD7C (--1XUMPDOBJ@@QEAA@XZ.c)
 *     ?GetKernelPtr@UMPDOBJ@@QEAAPEAXPEAX@Z @ 0x1C004FEC0 (-GetKernelPtr@UMPDOBJ@@QEAAPEAXPEAX@Z.c)
 *     ?pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z @ 0x1C0050018 (-pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z.c)
 *     ?ThunkDDIOBJ@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAXKPEAX@Z @ 0x1C00501E4 (-ThunkDDIOBJ@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAXKPEAX@Z.c)
 *     ?bNeedThunk@UMPDOBJ@@QEBAHPEAX@Z @ 0x1C0050398 (-bNeedThunk@UMPDOBJ@@QEBAHPEAX@Z.c)
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

__int64 __fastcall UMPDDrvEscape(
        struct _SURFOBJ *a1,
        int a2,
        unsigned int a3,
        unsigned __int64 a4,
        unsigned int Size,
        void *a6)
{
  unsigned int v7; // edi
  int v9; // r12d
  __int64 v10; // r9
  UMPDOBJ *v11; // rbx
  unsigned int v12; // ecx
  unsigned int v13; // eax
  int v14; // eax
  void *v15; // r15
  UMPDOBJ *v16; // rcx
  char *KernelPtr; // rax
  size_t v19; // [rsp+20h] [rbp-B9h]
  int v20; // [rsp+40h] [rbp-99h] BYREF
  int v21; // [rsp+44h] [rbp-95h] BYREF
  int v22; // [rsp+48h] [rbp-91h] BYREF
  void *v23; // [rsp+50h] [rbp-89h] BYREF
  unsigned int v24; // [rsp+58h] [rbp-81h] BYREF
  void *v25; // [rsp+60h] [rbp-79h]
  void *v26; // [rsp+68h] [rbp-71h] BYREF
  void *v27; // [rsp+70h] [rbp-69h] BYREF
  UMPDOBJ *v28; // [rsp+78h] [rbp-61h] BYREF
  unsigned __int64 v29; // [rsp+80h] [rbp-59h]
  _QWORD v30[8]; // [rsp+90h] [rbp-49h] BYREF

  v7 = -1;
  v25 = a6;
  v21 = -1;
  v29 = a4;
  LODWORD(v23) = a2;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v28);
  v22 = 0;
  v9 = 0;
  v26 = 0LL;
  v27 = 0LL;
  v20 = 0;
  memset(v30, 0, sizeof(v30));
  v11 = v28;
  if ( !v28 )
    goto LABEL_19;
  if ( !*((_DWORD *)v28 + 106) )
    goto LABEL_8;
  if ( a3 + 7 < a3 )
    goto LABEL_19;
  if ( Size + 7 < Size )
    goto LABEL_19;
  v12 = (Size + 7) & 0xFFFFFFF8;
  v13 = ((a3 + 7) & 0xFFFFFFF8) + 80;
  if ( v13 < 0x50 || v13 + v12 < v13 )
    goto LABEL_19;
  v24 = v13 + v12;
  v14 = UMPDOBJ::bThunkLargeBitmap(v28, a1, &v26, &v27, &v22, &v20, &v24);
  v9 = v20;
  if ( v14 )
  {
LABEL_8:
    v30[0] = 0x1800000040LL;
    v30[2] = *(_QWORD *)v11;
    v30[3] = a1;
    v30[4] = __PAIR64__(a3, (unsigned int)v23);
    v15 = (void *)(v29 & -(__int64)(a3 != 0));
    v30[5] = v15;
    LODWORD(v30[6]) = Size;
    v25 = (void *)((unsigned __int64)v25 & -(__int64)(Size != 0));
    v30[7] = v25;
    if ( (_DWORD)v23 != 25 || *((int *)a1->hdev + 456) >= 0 )
      goto LABEL_9;
    if ( v15 )
    {
      v23 = *(void **)((v29 & -(__int64)(a3 != 0)) + 0x18);
      if ( (unsigned int)UMPDOBJ::ThunkDDIOBJ(v11, (UMPDOBJ *)((char *)v11 + 272), (const void **)&v23, 4u, 0LL) )
      {
        *(_QWORD *)(v30[5] + 24LL) = v23;
LABEL_9:
        if ( (!a3
           || !(unsigned int)UMPDOBJ::bNeedThunk(v11, v15)
           || (unsigned int)UMPDOBJ::ThunkMemBlock(v16, (const void **)&v30[5], a3))
          && (!Size || (v30[7] = UMPDOBJ::_AllocUserMem(v11, Size, 1LL, v10)) != 0LL) )
        {
          if ( (unsigned int)UMPDOBJ::pso(v11, (UMPDOBJ *)((char *)v11 + 64), (struct _SURFOBJ **)&v30[3], v9) )
          {
            LODWORD(v19) = 4;
            if ( (unsigned int)UMPDOBJ::Thunk(v11, v30, 64LL, &v21, v19) != -1 )
            {
              if ( Size )
              {
                KernelPtr = UMPDOBJ::GetKernelPtr(v11, (char *)v30[7]);
                memmove(v25, KernelPtr, Size);
              }
              v7 = v21;
            }
          }
        }
      }
    }
  }
  if ( v22 )
  {
    if ( v9 )
      UMPDOBJ::bDeleteLargeBitmaps(v11, a1, 0LL, 0LL);
    a1->pvBits = v26;
    a1->pvScan0 = v27;
  }
LABEL_19:
  XUMPDOBJ::~XUMPDOBJ(&v28);
  return v7;
}
