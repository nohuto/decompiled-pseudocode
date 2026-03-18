/*
 * XREFs of ?bSendLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAH@Z @ 0x1C02A60B0
 * Callers:
 *     ?bThunkLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAPEAX1PEAH2PEAK@Z @ 0x1C007A1D0 (-bThunkLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAPEAX1PEAH2PEAK@Z.c)
 * Callees:
 *     ?GetKernelPtr@UMPDOBJ@@QEAAPEAXPEAX@Z @ 0x1C004FEC0 (-GetKernelPtr@UMPDOBJ@@QEAAPEAXPEAX@Z.c)
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1C00503C4 (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     ?_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z @ 0x1C00777AC (-_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     memmove @ 0x1C0166500 (memmove.c)
 *     ?UMPDAllocUserMem@UMPDOBJ@@QEAAPEAXK@Z @ 0x1C02A28DC (-UMPDAllocUserMem@UMPDOBJ@@QEAAPEAXK@Z.c)
 *     ?bDeleteLargeBitmaps@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@00@Z @ 0x1C02A5F4C (-bDeleteLargeBitmaps@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@00@Z.c)
 *     ?ulGetMaxSize@UMPDOBJ@@QEBAKXZ @ 0x1C02A63CC (-ulGetMaxSize@UMPDOBJ@@QEBAKXZ.c)
 */

__int64 __fastcall UMPDOBJ::bSendLargeBitmap(UMPDOBJ *this, struct _SURFOBJ *a2, int *a3)
{
  unsigned int v3; // ebx
  ULONG cjBits; // edx
  __int64 v6; // r12
  char *v8; // r15
  unsigned int MaxSize; // eax
  __int64 v10; // r9
  ULONG v11; // r14d
  ULONG v12; // eax
  char *pvBits; // r13
  __int64 v14; // rdx
  char *v15; // rax
  char *KernelPtr; // rax
  __int64 v17; // rax
  char *v18; // rax
  __int64 v19; // rax
  size_t v21; // [rsp+20h] [rbp-60h]
  ULONG i; // [rsp+30h] [rbp-50h]
  __int64 v23; // [rsp+38h] [rbp-48h] BYREF
  int *v24; // [rsp+40h] [rbp-40h]
  _DWORD v25[2]; // [rsp+48h] [rbp-38h] BYREF
  __int64 v26; // [rsp+50h] [rbp-30h]
  __int64 v27; // [rsp+58h] [rbp-28h]
  char *v28; // [rsp+60h] [rbp-20h]
  char *v29; // [rsp+68h] [rbp-18h]
  size_t Size; // [rsp+70h] [rbp-10h]

  v3 = 0;
  v24 = a3;
  v23 = 0LL;
  cjBits = a2->cjBits;
  LODWORD(v6) = 0;
  v26 = 0LL;
  v28 = 0LL;
  Size = 0LL;
  v8 = (char *)UMPDOBJ::UMPDAllocUserMem(this, cjBits);
  if ( !v8 )
    return 0LL;
  v27 = *(_QWORD *)this;
  v25[0] = 48;
  v25[1] = 118;
  v29 = v8;
  MaxSize = UMPDOBJ::ulGetMaxSize(this);
  if ( MaxSize < 0x38 )
    return 0LL;
  v11 = a2->cjBits;
  v12 = MaxSize - 56;
  pvBits = (char *)a2->pvBits;
  for ( i = v12; v11; v12 = i )
  {
    v14 = v11;
    if ( v11 > v12 )
      v14 = v12;
    LODWORD(Size) = v14;
    v15 = UMPDOBJ::_AllocUserMem(this, v14, 0LL, v10);
    v28 = v15;
    if ( !v15 )
      break;
    KernelPtr = UMPDOBJ::GetKernelPtr(this, v15);
    memmove(KernelPtr, pvBits, (unsigned int)Size);
    LODWORD(v21) = 8;
    if ( (unsigned int)UMPDOBJ::Thunk(this, v25, 48LL, &v23, v21) == -1 || !v23 )
      break;
    v6 = (unsigned int)(Size + v6);
    v11 -= Size;
    pvBits = (char *)a2->pvBits + (unsigned int)v6;
    v29 = &v8[v6];
    v17 = *((_QWORD *)this + 49);
    if ( v17 )
      *(_DWORD *)(v17 + 56) = 0;
  }
  v18 = &v8[LODWORD(a2->pvScan0) - LODWORD(a2->pvBits)];
  a2->pvBits = v8;
  a2->pvScan0 = v18;
  if ( v11 )
  {
    v19 = *((_QWORD *)this + 49);
    if ( v19 )
      *(_DWORD *)(v19 + 56) = 0;
    UMPDOBJ::bDeleteLargeBitmaps(this, a2, 0LL, 0LL);
  }
  else
  {
    v3 = 1;
    *v24 = 1;
  }
  return v3;
}
