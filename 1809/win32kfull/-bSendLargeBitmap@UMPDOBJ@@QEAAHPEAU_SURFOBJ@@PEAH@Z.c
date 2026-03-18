/*
 * XREFs of ?bSendLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAH@Z @ 0x1C02901E4
 * Callers:
 *     ?bThunkLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAPEAX1PEAH2PEAK@Z @ 0x1C00910EC (-bThunkLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAPEAX1PEAH2PEAK@Z.c)
 * Callees:
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1C008DD04 (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     ?GetKernelPtr@UMPDOBJ@@QEAAPEAXPEAX@Z @ 0x1C008E148 (-GetKernelPtr@UMPDOBJ@@QEAAPEAXPEAX@Z.c)
 *     ?_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z @ 0x1C00E2AC4 (-_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     memmove @ 0x1C0163300 (memmove.c)
 *     memset @ 0x1C0163640 (memset.c)
 *     ?UMPDAllocUserMem@UMPDOBJ@@QEAAPEAXK@Z @ 0x1C028C8A0 (-UMPDAllocUserMem@UMPDOBJ@@QEAAPEAXK@Z.c)
 *     ?bDeleteLargeBitmaps@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@00@Z @ 0x1C0290064 (-bDeleteLargeBitmaps@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@00@Z.c)
 *     ?ulGetMaxSize@UMPDOBJ@@QEBAKXZ @ 0x1C0290518 (-ulGetMaxSize@UMPDOBJ@@QEBAKXZ.c)
 */

__int64 __fastcall UMPDOBJ::bSendLargeBitmap(UMPDOBJ *this, struct _SURFOBJ *a2, int *a3)
{
  unsigned int v3; // ebx
  __int64 v6; // r13
  char *v7; // r15
  unsigned int MaxSize; // eax
  unsigned int v9; // r12d
  ULONG cjBits; // r14d
  __int64 v11; // rdx
  char *v12; // rax
  char *KernelPtr; // rax
  __int64 v14; // rax
  char *v15; // rax
  __int64 v16; // rcx
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
  v9 = MaxSize < 0x38 ? -1 : MaxSize - 56;
  if ( MaxSize < 0x38 )
    return 0LL;
  cjBits = a2->cjBits;
  Src = a2->pvBits;
  while ( cjBits )
  {
    v11 = cjBits;
    if ( cjBits > v9 )
      v11 = v9;
    LODWORD(v22[5]) = v11;
    v12 = UMPDOBJ::_AllocUserMem(this, v11, 0);
    v22[3] = v12;
    if ( !v12 )
      break;
    KernelPtr = UMPDOBJ::GetKernelPtr(this, v12);
    memmove(KernelPtr, Src, LODWORD(v22[5]));
    LODWORD(v18) = 8;
    if ( (unsigned int)UMPDOBJ::Thunk(this, v22, 0x30u, &v19, v18) == -1 || !v19 )
      break;
    v6 = (unsigned int)(LODWORD(v22[5]) + v6);
    cjBits -= LODWORD(v22[5]);
    v22[4] = &v7[v6];
    Src = (char *)a2->pvBits + (unsigned int)v6;
    v14 = *((_QWORD *)this + 49);
    if ( v14 )
      *(_DWORD *)(v14 + 48) = 0;
  }
  v15 = &v7[LODWORD(a2->pvScan0) - LODWORD(a2->pvBits)];
  a2->pvBits = v7;
  a2->pvScan0 = v15;
  if ( cjBits )
  {
    v16 = *((_QWORD *)this + 49);
    if ( v16 )
      *(_DWORD *)(v16 + 48) = 0;
    UMPDOBJ::bDeleteLargeBitmaps(this, a2, 0LL, 0LL);
  }
  else
  {
    v3 = 1;
    *v21 = 1;
  }
  return v3;
}
