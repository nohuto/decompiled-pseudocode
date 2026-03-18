/*
 * XREFs of ?bSendLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAH@Z @ 0x1C027CCD8
 * Callers:
 *     ?bThunkLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAPEAX1PEAH2PEAK@Z @ 0x1C001890C (-bThunkLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAPEAX1PEAH2PEAK@Z.c)
 * Callees:
 *     ?GetKernelPtr@UMPDOBJ@@QEAAPEAXPEAX@Z @ 0x1C0018844 (-GetKernelPtr@UMPDOBJ@@QEAAPEAXPEAX@Z.c)
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1C0018974 (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     ?_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z @ 0x1C0018B80 (-_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     memmove @ 0x1C013D380 (memmove.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 *     ?UMPDAllocUserMem@UMPDOBJ@@QEAAPEAXK@Z @ 0x1C0279134 (-UMPDAllocUserMem@UMPDOBJ@@QEAAPEAXK@Z.c)
 *     ?bDeleteLargeBitmaps@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@00@Z @ 0x1C027CB58 (-bDeleteLargeBitmaps@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@00@Z.c)
 *     ?ulGetMaxSize@UMPDOBJ@@QEBAKXZ @ 0x1C027D004 (-ulGetMaxSize@UMPDOBJ@@QEBAKXZ.c)
 */

__int64 __fastcall UMPDOBJ::bSendLargeBitmap(UMPDOBJ *this, struct _SURFOBJ *a2, int *a3)
{
  unsigned int v3; // ebx
  __int64 v6; // r13
  char *v7; // r15
  unsigned int MaxSize; // eax
  unsigned int v10; // r12d
  ULONG cjBits; // r14d
  unsigned int v12; // edx
  char *v13; // rax
  char *KernelPtr; // rax
  __int64 v15; // rax
  char *v16; // rax
  __int64 v17; // rcx
  size_t v18; // [rsp+20h] [rbp-60h]
  __int64 v19; // [rsp+30h] [rbp-50h] BYREF
  void *Src; // [rsp+38h] [rbp-48h]
  int *v21; // [rsp+40h] [rbp-40h]
  _QWORD v22[6]; // [rsp+48h] [rbp-38h] BYREF

  v3 = 0;
  v21 = a3;
  v19 = 0LL;
  LODWORD(v6) = 0;
  memset(v22, 0, sizeof(v22));
  v7 = (char *)UMPDOBJ::UMPDAllocUserMem(this, a2->cjBits);
  if ( !v7 )
    return 0LL;
  v22[2] = *(_QWORD *)this;
  v22[0] = 0x7600000030LL;
  v22[4] = v7;
  MaxSize = UMPDOBJ::ulGetMaxSize(this);
  v10 = MaxSize < 0x38 ? -1 : MaxSize - 56;
  if ( MaxSize < 0x38 )
    return 0LL;
  cjBits = a2->cjBits;
  Src = a2->pvBits;
  while ( cjBits )
  {
    v12 = cjBits;
    if ( cjBits > v10 )
      v12 = v10;
    LODWORD(v22[5]) = v12;
    v13 = UMPDOBJ::_AllocUserMem(this, v12, 0);
    v22[3] = v13;
    if ( !v13 )
      break;
    KernelPtr = UMPDOBJ::GetKernelPtr(this, v13);
    memmove(KernelPtr, Src, LODWORD(v22[5]));
    LODWORD(v18) = 8;
    if ( (unsigned int)UMPDOBJ::Thunk(this, v22, 0x30u, &v19, v18) == -1 || !v19 )
      break;
    v6 = (unsigned int)(LODWORD(v22[5]) + v6);
    cjBits -= LODWORD(v22[5]);
    v22[4] = &v7[v6];
    Src = (char *)a2->pvBits + (unsigned int)v6;
    v15 = *((_QWORD *)this + 49);
    if ( v15 )
      *(_DWORD *)(v15 + 56) = 0;
  }
  v16 = &v7[LODWORD(a2->pvScan0) - LODWORD(a2->pvBits)];
  a2->pvBits = v7;
  a2->pvScan0 = v16;
  if ( cjBits )
  {
    v17 = *((_QWORD *)this + 49);
    if ( v17 )
      *(_DWORD *)(v17 + 56) = 0;
    UMPDOBJ::bDeleteLargeBitmaps(this, a2, 0LL, 0LL);
  }
  else
  {
    v3 = 1;
    *v21 = 1;
  }
  return v3;
}
