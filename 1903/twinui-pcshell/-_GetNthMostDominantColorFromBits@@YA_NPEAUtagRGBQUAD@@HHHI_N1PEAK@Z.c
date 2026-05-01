/*
 * XREFs of ?_GetNthMostDominantColorFromBits@@YA_NPEAUtagRGBQUAD@@HHHI_N1PEAK@Z @ 0x180422928
 * Callers:
 *     ?TryGetDominantColorFromHBITMAP@@YA_NPEAUHBITMAP__@@_N1PEAKPEA_N@Z @ 0x1804227D8 (-TryGetDominantColorFromHBITMAP@@YA_NPEAUHBITMAP__@@_N1PEAKPEA_N@Z.c)
 * Callees:
 *     ?Realloc@CTCoAllocPolicy@@SAJPEAXK0_KPEAPEAX@Z @ 0x180069F68 (-Realloc@CTCoAllocPolicy@@SAJPEAXK0_KPEAPEAX@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800870F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x180087AB0 (--3@YAXPEAX@Z.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x18010F6F8 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x18011BE3C (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V-$C.c)
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x180173DEC (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ??$_MergeSort@VCBucketComparator@@@?$CTSimpleArray@PEAUBUCKET@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@PEAUBUCKET@@@@V?$CSimpleArrayStandardCompareHelper@PEAUBUCKET@@@@V?$CSimpleArrayStandardMergeHelper@PEAUBUCKET@@@@@@QEAAXAEBVCBucketComparator@@_K1@Z @ 0x180422338 (--$_MergeSort@VCBucketComparator@@@-$CTSimpleArray@PEAUBUCKET@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@P.c)
 *     ??0BUCKET@@QEAA@XZ @ 0x180422510 (--0BUCKET@@QEAA@XZ.c)
 *     ?Destroy@?$CDPA_Base@UtagRGBQUAD@@V?$CTContainer_PolicyUnOwned@UtagRGBQUAD@@@@@@QEAAHXZ @ 0x1804225B8 (-Destroy@-$CDPA_Base@UtagRGBQUAD@@V-$CTContainer_PolicyUnOwned@UtagRGBQUAD@@@@@@QEAAHXZ.c)
 *     DPA_Clone @ 0x180422E80 (DPA_Clone.c)
 *     DPA_InsertPtr @ 0x180423100 (DPA_InsertPtr.c)
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
  unsigned __int64 v8; // r15
  __int64 v11; // rsi
  char v13; // r13
  void *v14; // r8
  int v15; // r12d
  __int64 v16; // rdi
  __int64 v17; // r14
  unsigned __int128 v18; // rax
  __int64 v19; // rsi
  HDPA *v20; // rdi
  HDPA *v21; // rbx
  void *v22; // r8
  unsigned __int64 v23; // r8
  HDPA **v24; // rcx
  __int64 *v25; // r10
  __int64 v26; // rcx
  int v27; // esi
  int v28; // r11d
  int v29; // ebx
  int v30; // edi
  int v31; // r9d
  __int64 v32; // rdx
  int v33; // r14d
  unsigned __int8 **v34; // r8
  unsigned __int8 *v35; // rcx
  unsigned int v36; // esi
  unsigned __int64 v37; // rdi
  struct _DPA **v38; // rbx
  __int64 v40; // [rsp+38h] [rbp-D0h] BYREF
  LPVOID v41; // [rsp+40h] [rbp-C8h] BYREF
  void *v42; // [rsp+48h] [rbp-C0h]
  LPVOID pv; // [rsp+50h] [rbp-B8h] BYREF
  void *v44; // [rsp+58h] [rbp-B0h]
  unsigned int *v45; // [rsp+60h] [rbp-A8h]
  HDPA hdpa[28]; // [rsp+68h] [rbp-A0h] BYREF

  v8 = 0LL;
  v11 = a2;
  v45 = a8;
  v13 = 0;
  `vector constructor iterator'((char *)hdpa, 8LL, 27LL, (void (__fastcall *)(char *))BUCKET::BUCKET);
  v15 = 0;
  if ( a3 > 0 )
  {
    v8 = (unsigned int)a3;
    v16 = 4LL * (a4 - (int)v11);
    do
    {
      if ( (int)v11 > 0 )
      {
        v17 = v11;
        do
        {
          if ( p->rgbReserved )
          {
            DPA_InsertPtr(hdpa[p->rgbBlue / 0x56u + 3 * (p->rgbGreen / 0x56u + 3 * (p->rgbRed / 0x56u))], 0x7FFFFFFF, p);
            ++v15;
          }
          ++p;
          --v17;
        }
        while ( v17 );
      }
      p = (struct tagRGBQUAD *)((char *)p + v16);
      --v8;
    }
    while ( v8 );
  }
  v41 = (LPVOID)v8;
  v42 = (void *)v8;
  pv = (LPVOID)v8;
  v44 = (void *)v8;
  if ( (int)CTSimpleArray<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>>::_EnsureCapacity(
              (__int64)&v41,
              0x1BuLL,
              v14) < 0 )
    goto LABEL_45;
  v19 = 27LL;
  v20 = hdpa;
  do
  {
    *(_QWORD *)&v18 = operator new(8uLL, (const struct std::nothrow_t *)&std::nothrow);
    if ( (_QWORD)v18 )
      v21 = (HDPA *)BUCKET::BUCKET((BUCKET *)v18);
    else
      v21 = (HDPA *)v8;
    if ( !v21 )
      goto LABEL_20;
    DPA_Clone(*v20, *v21);
    v22 = v42;
    if ( v42 == v44 )
    {
      if ( (int)CTSimpleArray<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>>::_EnsureCapacity(
                  (__int64)&v41,
                  (unsigned __int64)v42 + 1,
                  v42) < 0 )
        goto LABEL_20;
      v22 = v42;
    }
    v23 = (unsigned __int64)v22 + 1;
    v42 = (void *)v23;
    v24 = (HDPA **)((char *)v41 + 8 * v23 - 8);
    if ( !v24 )
      goto LABEL_21;
    *v24 = v21;
LABEL_20:
    v23 = (unsigned __int64)v42;
LABEL_21:
    ++v20;
    --v19;
  }
  while ( v19 );
  if ( v23 <= 1 )
    goto LABEL_26;
  pv = (LPVOID)v8;
  v18 = (v23 >> 1) * (unsigned __int128)8uLL;
  if ( is_mul_ok(v23 >> 1, 8uLL) )
  {
    if ( (int)CTCoAllocPolicy::Realloc((IMalloc *)&pv, *((__int64 *)&v18 + 1), 0LL, 8 * (v23 >> 1), &pv) < 0 )
      goto LABEL_37;
    CTSimpleArray<BUCKET *,4294967294,CTPolicyCoTaskMem<BUCKET *>,CSimpleArrayStandardCompareHelper<BUCKET *>,CSimpleArrayStandardMergeHelper<BUCKET *>>::_MergeSort<CBucketComparator>(
      &v41,
      (__int64)&v40,
      0LL,
      (unsigned __int64)v42);
    CoTaskMemFree(pv);
    v23 = (unsigned __int64)v42;
    pv = (LPVOID)v8;
LABEL_26:
    v25 = (__int64 *)*((_QWORD *)v41 + v23 - 1);
    if ( v25 )
    {
      v26 = *v25;
      v27 = v8;
      v28 = v8;
      v29 = v8;
      v30 = v8;
      if ( *v25 )
        v31 = *(_DWORD *)v26;
      else
        v31 = v8;
      v32 = v31;
      v33 = v8;
      if ( v31 > 0 )
      {
        v34 = *(unsigned __int8 ***)(v26 + 8);
        v29 = 0;
        v27 = v31;
        do
        {
          v35 = *v34++;
          v30 += v35[2];
          v29 += v35[1];
          LODWORD(v8) = v30;
          v28 += *v35;
          v33 = v28;
          --v32;
        }
        while ( v32 );
      }
      if ( MulDiv(v31, 100, v15) >= 7 && v15 >= 5 )
      {
        v13 = 1;
        *((_QWORD *)&v18 + 1) = (unsigned int)((int)v8 >> 31);
        DWORD2(v18) = (int)v8 % v27;
        *v45 = (unsigned __int8)((int)v8 / v27) | ((unsigned __int8)(v33 / v27) << 16) | ((unsigned __int8)(v29 / v27) << 8);
      }
      v8 = 0LL;
LABEL_37:
      v23 = (unsigned __int64)v42;
    }
  }
  v36 = v8;
  if ( v23 )
  {
    v37 = v8;
    do
    {
      v38 = (struct _DPA **)*((_QWORD *)v41 + v37);
      if ( v38 )
      {
        CDPA_Base<tagRGBQUAD,CTContainer_PolicyUnOwned<tagRGBQUAD>>::Destroy(*((struct _DPA ***)v41 + v37));
        if ( *v38 != (struct _DPA *)v8 )
          CDPA_Base<tagRGBQUAD,CTContainer_PolicyUnOwned<tagRGBQUAD>>::Destroy(v38);
        operator delete(v38);
      }
      ++v36;
      *((_QWORD *)v41 + v37) = v8;
      v37 = v36;
    }
    while ( v36 < (unsigned __int64)v42 );
  }
LABEL_45:
  if ( v41 )
  {
    CoTaskMemFree(v41);
    v41 = (LPVOID)v8;
  }
  v42 = (void *)v8;
  v44 = (void *)v8;
  `vector destructor iterator'((char *)hdpa, *((__int64 *)&v18 + 1), 27LL, (void (__fastcall *)(char *))BUCKET::~BUCKET);
  return v13;
}
