/*
 * XREFs of ?_GetNthMostDominantColorFromBits@@YA_NPEAUtagRGBQUAD@@HHHI_N1PEAK@Z @ 0x1803C0010
 * Callers:
 *     ?CreateIconBitmap@ImmersiveIcons@@YAJUtagSIZE@@00K_NAEBUIconData2@1@1PEAPEAUHBITMAP__@@@Z @ 0x1803A94B0 (-CreateIconBitmap@ImmersiveIcons@@YAJUtagSIZE@@00K_NAEBUIconData2@1@1PEAPEAUHBITMAP__@@@Z.c)
 * Callees:
 *     ?Realloc@CTCoAllocPolicy@@SAJPEAXK0_KPEAPEAX@Z @ 0x18005C770 (-Realloc@CTCoAllocPolicy@@SAJPEAXK0_KPEAPEAX@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180084460 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x180084E20 (--3@YAXPEAX@Z.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x1800F6B54 (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V-$C.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x180119FDC (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x180148174 (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ??$_MergeSort@VCBucketComparator@@@?$CTSimpleArray@PEAUBUCKET@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@PEAUBUCKET@@@@V?$CSimpleArrayStandardCompareHelper@PEAUBUCKET@@@@V?$CSimpleArrayStandardMergeHelper@PEAUBUCKET@@@@@@QEAAXAEBVCBucketComparator@@_K1@Z @ 0x1803BFA98 (--$_MergeSort@VCBucketComparator@@@-$CTSimpleArray@PEAUBUCKET@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@P.c)
 *     ??0BUCKET@@QEAA@XZ @ 0x1803BFC70 (--0BUCKET@@QEAA@XZ.c)
 *     ?Destroy@?$CDPA_Base@UtagRGBQUAD@@V?$CTContainer_PolicyUnOwned@UtagRGBQUAD@@@@@@QEAAHXZ @ 0x1803BFD18 (-Destroy@-$CDPA_Base@UtagRGBQUAD@@V-$CTContainer_PolicyUnOwned@UtagRGBQUAD@@@@@@QEAAHXZ.c)
 *     DPA_Clone @ 0x1803C0570 (DPA_Clone.c)
 *     DPA_InsertPtr @ 0x1803C0800 (DPA_InsertPtr.c)
 */

char __fastcall _GetNthMostDominantColorFromBits(
        struct tagRGBQUAD *p,
        unsigned int a2,
        int a3,
        int a4,
        unsigned int a5,
        bool a6,
        bool a7,
        unsigned int *a8)
{
  unsigned int *v8; // r15
  __int64 v10; // rsi
  char v13; // r13
  void *v14; // r8
  int v15; // r12d
  __int64 v16; // r15
  __int64 v17; // rdi
  __int64 v18; // r14
  int v19; // r14d
  unsigned __int128 v20; // rax
  HDPA *v21; // rdi
  __int64 v22; // rsi
  BUCKET *v23; // rax
  HDPA *v24; // rbx
  void *v25; // r8
  unsigned __int64 v26; // r8
  HDPA **v27; // rcx
  __int64 v28; // rcx
  int v29; // edi
  int v30; // r10d
  int v31; // ebx
  int v32; // r11d
  int v33; // r9d
  __int64 v34; // r8
  int v35; // esi
  unsigned __int8 **v36; // rdx
  unsigned __int8 *v37; // rcx
  unsigned int v38; // esi
  __int64 v39; // rdi
  struct _DPA **v40; // rbx
  __int64 v42; // [rsp+38h] [rbp-D0h] BYREF
  LPVOID v43; // [rsp+40h] [rbp-C8h] BYREF
  void *v44; // [rsp+48h] [rbp-C0h]
  LPVOID pv; // [rsp+50h] [rbp-B8h] BYREF
  void *v46; // [rsp+58h] [rbp-B0h]
  unsigned int *v47; // [rsp+60h] [rbp-A8h]
  HDPA hdpa[28]; // [rsp+68h] [rbp-A0h] BYREF

  v8 = a8;
  v10 = a2;
  v47 = a8;
  v13 = 0;
  `vector constructor iterator'((char *)hdpa, 8LL, 27LL, (void (__fastcall *)(char *))BUCKET::BUCKET);
  v15 = 0;
  if ( a3 > 0 )
  {
    v16 = (unsigned int)a3;
    v17 = 4LL * (a4 - (int)v10);
    do
    {
      if ( (int)v10 > 0 )
      {
        v18 = v10;
        do
        {
          if ( p->rgbReserved )
          {
            DPA_InsertPtr(hdpa[p->rgbBlue / 0x56u + 3 * (p->rgbGreen / 0x56u + 3 * (p->rgbRed / 0x56u))], 0x7FFFFFFF, p);
            ++v15;
          }
          ++p;
          --v18;
        }
        while ( v18 );
      }
      p = (struct tagRGBQUAD *)((char *)p + v17);
      --v16;
    }
    while ( v16 );
    v8 = v47;
  }
  v19 = 0;
  v43 = 0LL;
  v44 = 0LL;
  pv = 0LL;
  v46 = 0LL;
  if ( (int)CTSimpleArray<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>>::_EnsureCapacity(
              (__int64)&v43,
              0x1BuLL,
              v14) < 0 )
    goto LABEL_45;
  v21 = hdpa;
  v22 = 27LL;
  do
  {
    v23 = (BUCKET *)operator new(8uLL, (const struct std::nothrow_t *)&std::nothrow);
    if ( v23 )
      v24 = (HDPA *)BUCKET::BUCKET(v23);
    else
      v24 = 0LL;
    if ( !v24 )
      goto LABEL_21;
    DPA_Clone(*v21, *v24);
    v25 = v44;
    if ( v44 == v46 )
    {
      if ( (int)CTSimpleArray<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>>::_EnsureCapacity(
                  (__int64)&v43,
                  (unsigned __int64)v44 + 1,
                  v44) < 0 )
        goto LABEL_21;
      v25 = v44;
    }
    v26 = (unsigned __int64)v25 + 1;
    v44 = (void *)v26;
    v27 = (HDPA **)((char *)v43 + 8 * v26 - 8);
    if ( !v27 )
      goto LABEL_22;
    *v27 = v24;
LABEL_21:
    v26 = (unsigned __int64)v44;
LABEL_22:
    ++v21;
    --v22;
  }
  while ( v22 );
  if ( v26 <= 1 )
    goto LABEL_27;
  pv = 0LL;
  v20 = (v26 >> 1) * (unsigned __int128)8u;
  if ( is_mul_ok(v26 >> 1, 8uLL) )
  {
    if ( (int)CTCoAllocPolicy::Realloc(&pv, *((__int64 *)&v20 + 1), 0LL, 8 * (v26 >> 1), &pv) < 0 )
      goto LABEL_37;
    CTSimpleArray<BUCKET *,4294967294,CTPolicyCoTaskMem<BUCKET *>,CSimpleArrayStandardCompareHelper<BUCKET *>,CSimpleArrayStandardMergeHelper<BUCKET *>>::_MergeSort<CBucketComparator>(
      &v43,
      (__int64)&v42,
      0LL,
      (unsigned __int64)v44);
    CoTaskMemFree(pv);
    v26 = (unsigned __int64)v44;
    pv = 0LL;
LABEL_27:
    *((_QWORD *)&v20 + 1) = *((_QWORD *)v43 + v26 - 1);
    if ( *((_QWORD *)&v20 + 1) )
    {
      v28 = **((_QWORD **)&v20 + 1);
      v29 = 0;
      v30 = 0;
      v31 = 0;
      v32 = 0;
      if ( **((_QWORD **)&v20 + 1) )
        v33 = *(_DWORD *)v28;
      else
        v33 = 0;
      v34 = v33;
      v35 = 0;
      if ( v33 > 0 )
      {
        v36 = *(unsigned __int8 ***)(v28 + 8);
        v29 = v33;
        do
        {
          v37 = *v36++;
          v32 += v37[2];
          v31 += v37[1];
          v19 = v32;
          v30 += *v37;
          v35 = v30;
          --v34;
        }
        while ( v34 );
      }
      if ( MulDiv(v33, 100, v15) >= 7 && v15 >= 5 )
      {
        v13 = 1;
        *((_QWORD *)&v20 + 1) = (unsigned int)(v19 >> 31);
        DWORD2(v20) = v19 % v29;
        *v8 = (unsigned __int8)(v19 / v29) | ((unsigned __int8)(v35 / v29) << 16) | ((unsigned __int8)(v31 / v29) << 8);
      }
LABEL_37:
      v26 = (unsigned __int64)v44;
    }
  }
  v38 = 0;
  if ( v26 )
  {
    v39 = 0LL;
    do
    {
      v40 = (struct _DPA **)*((_QWORD *)v43 + v39);
      if ( v40 )
      {
        CDPA_Base<tagRGBQUAD,CTContainer_PolicyUnOwned<tagRGBQUAD>>::Destroy(*((struct _DPA ***)v43 + v39));
        if ( *v40 )
          CDPA_Base<tagRGBQUAD,CTContainer_PolicyUnOwned<tagRGBQUAD>>::Destroy(v40);
        operator delete(v40);
      }
      ++v38;
      *((_QWORD *)v43 + v39) = 0LL;
      v39 = v38;
    }
    while ( v38 < (unsigned __int64)v44 );
  }
LABEL_45:
  if ( v43 )
  {
    CoTaskMemFree(v43);
    v43 = 0LL;
  }
  v44 = 0LL;
  v46 = 0LL;
  `vector destructor iterator'((char *)hdpa, *((__int64 *)&v20 + 1), 27LL, (void (__fastcall *)(char *))BUCKET::~BUCKET);
  return v13;
}
