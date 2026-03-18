/*
 * XREFs of ?UMPDDrvEscape@@YAKPEAU_SURFOBJ@@KKPEAXK1@Z @ 0x1C00F65E0
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
 *     ?bNeedThunk@UMPDOBJ@@QEBAHPEAX@Z @ 0x1C0018D88 (-bNeedThunk@UMPDOBJ@@QEBAHPEAX@Z.c)
 *     ?ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z @ 0x1C0018DB4 (-ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z.c)
 *     ?pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z @ 0x1C0018E4C (-pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     memmove @ 0x1C013D380 (memmove.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 *     ?bDeleteLargeBitmaps@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@00@Z @ 0x1C027CB58 (-bDeleteLargeBitmaps@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@00@Z.c)
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
  UMPDOBJ *v10; // rbx
  unsigned int v11; // ecx
  unsigned int v12; // eax
  unsigned int v13; // edx
  unsigned int v14; // ecx
  unsigned int v15; // eax
  unsigned int v16; // edx
  unsigned int v17; // ecx
  unsigned int v18; // eax
  int v19; // eax
  void *v20; // r14
  UMPDOBJ *v21; // rcx
  char *KernelPtr; // rax
  size_t v24; // [rsp+20h] [rbp-A9h]
  int v25; // [rsp+40h] [rbp-89h] BYREF
  int v26; // [rsp+44h] [rbp-85h] BYREF
  void *v27; // [rsp+48h] [rbp-81h] BYREF
  int v28; // [rsp+50h] [rbp-79h] BYREF
  unsigned int v29; // [rsp+54h] [rbp-75h] BYREF
  void *v30; // [rsp+58h] [rbp-71h]
  void *v31; // [rsp+60h] [rbp-69h] BYREF
  void *v32; // [rsp+68h] [rbp-61h] BYREF
  UMPDOBJ *v33; // [rsp+70h] [rbp-59h] BYREF
  unsigned __int64 v34; // [rsp+78h] [rbp-51h]
  _QWORD v35[8]; // [rsp+80h] [rbp-49h] BYREF

  v7 = -1;
  v30 = a6;
  v26 = -1;
  v34 = a4;
  LODWORD(v27) = a2;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v33);
  v28 = 0;
  v9 = 0;
  v31 = 0LL;
  v32 = 0LL;
  v25 = 0;
  memset(v35, 0, sizeof(v35));
  v10 = v33;
  if ( !v33 )
    goto LABEL_25;
  if ( !*((_DWORD *)v33 + 106) )
  {
LABEL_14:
    v35[0] = 0x1800000040LL;
    v35[2] = *(_QWORD *)v10;
    v35[3] = a1;
    v35[4] = __PAIR64__(a3, (unsigned int)v27);
    v20 = (void *)(v34 & -(__int64)(a3 != 0));
    v35[5] = v20;
    LODWORD(v35[6]) = Size;
    v30 = (void *)((unsigned __int64)v30 & -(__int64)(Size != 0));
    v35[7] = v30;
    if ( (_DWORD)v27 != 25 || *((int *)a1->hdev + 454) >= 0 )
      goto LABEL_15;
    if ( v20 )
    {
      v27 = *(void **)((v34 & -(__int64)(a3 != 0)) + 0x18);
      if ( (unsigned int)UMPDOBJ::ThunkDDIOBJ(v10, (UMPDOBJ *)((char *)v10 + 272), (const void **)&v27, 4u, 0LL) )
      {
        *(_QWORD *)(v35[5] + 24LL) = v27;
LABEL_15:
        if ( (!a3
           || !(unsigned int)UMPDOBJ::bNeedThunk(v10, v20)
           || (unsigned int)UMPDOBJ::ThunkMemBlock(v21, (const void **)&v35[5], a3))
          && (!Size || (v35[7] = UMPDOBJ::_AllocUserMem(v10, Size, 1)) != 0LL) )
        {
          if ( (unsigned int)UMPDOBJ::pso(v10, (UMPDOBJ *)((char *)v10 + 64), (struct _SURFOBJ **)&v35[3], v9) )
          {
            LODWORD(v24) = 4;
            if ( (unsigned int)UMPDOBJ::Thunk(v10, v35, 0x40u, &v26, v24) != -1 )
            {
              if ( Size )
              {
                KernelPtr = UMPDOBJ::GetKernelPtr(v10, (char *)v35[7]);
                memmove(v30, KernelPtr, Size);
              }
              v7 = v26;
            }
          }
        }
      }
    }
LABEL_24:
    if ( v28 )
    {
      if ( v9 )
        UMPDOBJ::bDeleteLargeBitmaps(v10, a1, 0LL, 0LL);
      a1->pvBits = v31;
      a1->pvScan0 = v32;
    }
    goto LABEL_25;
  }
  v11 = a3 + 7;
  if ( a3 + 7 < a3 )
    v12 = (unsigned int)v27;
  else
    v12 = v11 & 0xFFFFFFF8;
  if ( v11 >= a3 )
  {
    v13 = Size + 7;
    v14 = Size + 7 < Size ? (unsigned int)v27 : v13 & 0xFFFFFFF8;
    if ( v13 >= Size )
    {
      v15 = v12 + 80;
      if ( v15 >= 0x50 )
      {
        v16 = v15;
        v17 = v15 + v14;
        v18 = -1;
        if ( v17 >= v16 )
          v18 = v17;
        v29 = v18;
        if ( v17 >= v16 )
        {
          v19 = UMPDOBJ::bThunkLargeBitmap(v33, a1, &v31, &v32, &v28, &v25, &v29);
          v9 = v25;
          if ( !v19 )
            goto LABEL_24;
          goto LABEL_14;
        }
      }
    }
  }
LABEL_25:
  XUMPDOBJ::~XUMPDOBJ(&v33);
  return v7;
}
