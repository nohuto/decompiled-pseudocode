/*
 * XREFs of MiFillPerSessionProtos @ 0x14085D65C
 * Callers:
 *     MiAllocatePerSessionProtos @ 0x1406CA490 (MiAllocatePerSessionProtos.c)
 * Callees:
 *     MiMarkPfnVerified @ 0x14000F960 (MiMarkPfnVerified.c)
 *     MiInitializePageColorBase @ 0x14002C4C0 (MiInitializePageColorBase.c)
 *     MiGetNextPageColor @ 0x140031260 (MiGetNextPageColor.c)
 *     MiPteInShadowRange @ 0x14003D740 (MiPteInShadowRange.c)
 *     MiGetPage @ 0x140049D50 (MiGetPage.c)
 *     MiGetControlAreaPartition @ 0x1400937E8 (MiGetControlAreaPartition.c)
 *     MiCopyPage @ 0x1400B1B90 (MiCopyPage.c)
 *     MiWritePteShadow @ 0x140120F40 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140120FA0 (MiPteHasShadow.c)
 *     MiGetPteFromCopyList @ 0x14012D8D8 (MiGetPteFromCopyList.c)
 *     MiCreatePteCopyList @ 0x14012ECB0 (MiCreatePteCopyList.c)
 *     MiReleasePteCopyList @ 0x140131930 (MiReleasePteCopyList.c)
 *     MiReturnPfnReferenceCount @ 0x14013B8B0 (MiReturnPfnReferenceCount.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     KeCopyPrivilegedPage @ 0x14028DD7C (KeCopyPrivilegedPage.c)
 *     MiInitializeProtoPfn @ 0x1402C4D4C (MiInitializeProtoPfn.c)
 *     MiWaitForFreePage @ 0x1402CB694 (MiWaitForFreePage.c)
 *     MiRelocateImagePfn @ 0x1405E0930 (MiRelocateImagePfn.c)
 *     MiAllocateDriverPage @ 0x140654BD4 (MiAllocateDriverPage.c)
 */

__int64 __fastcall MiFillPerSessionProtos(
        ULONG_PTR a1,
        __int64 a2,
        ULONG_PTR *a3,
        int a4,
        unsigned int a5,
        unsigned int a6,
        __int64 a7,
        __int128 *a8,
        __int128 *a9)
{
  int v11; // ebp
  __int64 v14; // r8
  ULONG_PTR *ControlAreaPartition; // r12
  unsigned int NextPageColor; // r15d
  unsigned int i; // edx
  __int64 DriverPage; // rdi
  int v19; // r9d
  ULONG_PTR v20; // rdx
  NTSTATUS v21; // eax
  __int64 v22; // rdx
  __int64 *v23; // r8
  int v24; // r9d
  bool v25; // zf
  int v26; // [rsp+28h] [rbp-70h]
  _BYTE v27[16]; // [rsp+40h] [rbp-58h] BYREF
  unsigned int v28; // [rsp+50h] [rbp-48h] BYREF
  int v29; // [rsp+54h] [rbp-44h]
  __int64 v31; // [rsp+A8h] [rbp+10h]
  unsigned __int64 PteFromCopyList; // [rsp+D8h] [rbp+40h]

  v11 = a4;
  if ( a8 )
  {
    v29 = 0;
  }
  else
  {
    MiCreatePteCopyList((unsigned int)(a4 + 2 * a4 + 1), (unsigned int)(a4 + 2 * a4 + 1), (__int64)&v28);
    if ( !v29 )
      return 3221225626LL;
    MiInitializePageColorBase(0LL, 0, (__int64)v27);
  }
  ControlAreaPartition = (ULONG_PTR *)MiGetControlAreaPartition(a1);
  if ( v11 )
  {
    v31 = v14 - (_QWORD)a3;
    while ( 1 )
    {
      if ( a8 )
      {
        DriverPage = MiAllocateDriverPage(ControlAreaPartition, a5);
      }
      else
      {
        NextPageColor = MiGetNextPageColor((__int64)v27);
        for ( i = NextPageColor; ; i = NextPageColor )
        {
          DriverPage = MiGetPage((__int64)ControlAreaPartition, i, 0);
          if ( DriverPage != -1 )
            break;
          MiWaitForFreePage(ControlAreaPartition);
        }
      }
      MiInitializeProtoPfn(DriverPage, (__int64 *)((char *)a3 + v31), a5, v19);
      v20 = *a3;
      if ( !a8 )
        break;
      v21 = KeCopyPrivilegedPage(DriverPage, a9, v20, a8, 0LL, 0);
      if ( v21 < 0 )
        KeBugCheckEx(0x1Au, 0x5150AuLL, *a3, DriverPage, v21);
      MiMarkPfnVerified(48 * DriverPage - 0x58000000000LL, 0);
LABEL_28:
      ++a6;
      ++a3;
      --v11;
      if ( a8 )
      {
        *(_QWORD *)a8 += 4096LL;
        *(_QWORD *)a9 += 4096LL;
      }
      if ( !v11 )
        goto LABEL_31;
    }
    MiCopyPage(DriverPage, v20, &v28, 72);
    PteFromCopyList = (unsigned __int64)MiGetPteFromCopyList(&v28, DriverPage, -1LL);
    MiRelocateImagePfn(a1, (__int64)(PteFromCopyList << 25) >> 16, a6, DriverPage, a7, v26, 2);
    if ( MiPteInShadowRange(PteFromCopyList) )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        v24 = 1;
        if ( !HIBYTE(word_14043B26C) )
        {
          v25 = (v22 & 1) == 0;
          goto LABEL_23;
        }
      }
      else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0 )
      {
        v25 = (v22 & 1) == 0;
LABEL_23:
        if ( !v25 )
          v22 |= 0x8000000000000000uLL;
      }
    }
    *v23 = v22;
    if ( v24 )
      MiWritePteShadow((__int64)v23, v22);
    MiReturnPfnReferenceCount(48 * DriverPage - 0x58000000000LL);
    goto LABEL_28;
  }
LABEL_31:
  MiReleasePteCopyList((__int64)&v28);
  return 0LL;
}
