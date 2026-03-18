/*
 * XREFs of MiFillPerSessionProtos @ 0x1408987B4
 * Callers:
 *     MiAllocatePerSessionProtos @ 0x1406E9D44 (MiAllocatePerSessionProtos.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14002AC50 (MiPteInShadowRange.c)
 *     MiCopyPage @ 0x14002C9C0 (MiCopyPage.c)
 *     MiMarkPfnVerified @ 0x14008D844 (MiMarkPfnVerified.c)
 *     MiInitializePageColorBase @ 0x1400938D8 (MiInitializePageColorBase.c)
 *     MiGetControlAreaPartition @ 0x1400979D0 (MiGetControlAreaPartition.c)
 *     MiGetPage @ 0x1400AFCC0 (MiGetPage.c)
 *     MiGetNextPageColor @ 0x1400BAD8C (MiGetNextPageColor.c)
 *     MiWritePteShadow @ 0x1400F8750 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1400F87B0 (MiPteHasShadow.c)
 *     MiReturnPfnReferenceCount @ 0x1400FF01C (MiReturnPfnReferenceCount.c)
 *     MiCreatePteCopyList @ 0x14012FB84 (MiCreatePteCopyList.c)
 *     MiReleasePteCopyList @ 0x1401322E8 (MiReleasePteCopyList.c)
 *     MiGetPteFromCopyList @ 0x140138004 (MiGetPteFromCopyList.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 *     KeCopyPrivilegedPage @ 0x1402A441C (KeCopyPrivilegedPage.c)
 *     MiInitializeProtoPfn @ 0x1402DE7F0 (MiInitializeProtoPfn.c)
 *     MiWaitForFreePage @ 0x1402E5760 (MiWaitForFreePage.c)
 *     MiRelocateImagePfn @ 0x140607190 (MiRelocateImagePfn.c)
 *     MiAllocateDriverPage @ 0x140650F8C (MiAllocateDriverPage.c)
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
  int v11; // r14d
  __int64 v14; // r8
  ULONG_PTR *ControlAreaPartition; // r13
  unsigned int NextPageColor; // r12d
  unsigned int i; // edx
  __int64 DriverPage; // rdi
  int v19; // r9d
  ULONG_PTR v20; // rdx
  NTSTATUS v21; // eax
  __int64 v22; // rdx
  _QWORD *v23; // r8
  int v24; // r9d
  bool v25; // zf
  int v26; // [rsp+28h] [rbp-48h]
  _QWORD v27[2]; // [rsp+40h] [rbp-30h] BYREF
  __int64 v28[4]; // [rsp+50h] [rbp-20h] BYREF
  __int64 v30; // [rsp+A8h] [rbp+38h]
  unsigned __int64 PteFromCopyList; // [rsp+D8h] [rbp+68h]

  v27[0] = 0LL;
  v27[1] = 0LL;
  v11 = a4;
  memset(v28, 0, 24);
  if ( !a8 )
  {
    MiCreatePteCopyList((unsigned int)(a4 + 2 * a4 + 1), (unsigned int)(a4 + 2 * a4 + 1), (__int64)v28);
    if ( !HIDWORD(v28[0]) )
      return 3221225626LL;
    MiInitializePageColorBase(0LL, 0, (__int64)v27);
  }
  ControlAreaPartition = (ULONG_PTR *)MiGetControlAreaPartition(a1);
  if ( v11 )
  {
    v30 = v14 - (_QWORD)a3;
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
          DriverPage = MiGetPage((__int64)ControlAreaPartition, i, 0LL);
          if ( DriverPage != -1 )
            break;
          MiWaitForFreePage(ControlAreaPartition);
        }
      }
      MiInitializeProtoPfn(DriverPage, (ULONG_PTR *)((char *)a3 + v30), a5, v19);
      v20 = *a3;
      if ( !a8 )
        break;
      v21 = KeCopyPrivilegedPage(DriverPage, a9, v20, a8, 0LL, 0);
      if ( v21 < 0 )
        KeBugCheckEx(0x1Au, 0x5150AuLL, *a3, DriverPage, v21);
      MiMarkPfnVerified(48 * DriverPage - 0x58000000000LL, 0);
LABEL_27:
      ++a6;
      ++a3;
      --v11;
      if ( a8 )
      {
        *(_QWORD *)a8 += 4096LL;
        *(_QWORD *)a9 += 4096LL;
      }
      if ( !v11 )
        goto LABEL_30;
    }
    MiCopyPage(DriverPage, v20, v28, 72);
    PteFromCopyList = (unsigned __int64)MiGetPteFromCopyList((unsigned int *)v28, DriverPage, -1LL);
    MiRelocateImagePfn(a1, (__int64)(PteFromCopyList << 25) >> 16, a6, DriverPage, a7, v26, 2);
    if ( MiPteInShadowRange(PteFromCopyList) )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        v24 = 1;
        if ( !HIBYTE(word_1404658EC) )
        {
          v25 = (v22 & 1) == 0;
          goto LABEL_22;
        }
      }
      else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0 )
      {
        v25 = (v22 & 1) == 0;
LABEL_22:
        if ( !v25 )
          v22 |= 0x8000000000000000uLL;
      }
    }
    *v23 = v22;
    if ( v24 )
      MiWritePteShadow((__int64)v23);
    MiReturnPfnReferenceCount(48 * DriverPage - 0x58000000000LL);
    goto LABEL_27;
  }
LABEL_30:
  MiReleasePteCopyList((__int64)v28);
  return 0LL;
}
