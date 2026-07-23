/*
 * XREFs of IopLiveDumpWriteDumpFileWithHvPages @ 0x14085A994
 * Callers:
 *     IoCaptureLiveDump @ 0x140858F44 (IoCaptureLiveDump.c)
 * Callees:
 *     RtlClearAllBitsEx @ 0x1400A9490 (RtlClearAllBitsEx.c)
 *     MmFreeIndependentPages @ 0x14010DB20 (MmFreeIndependentPages.c)
 *     RtlMergeBitMapsEx @ 0x140197600 (RtlMergeBitMapsEx.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memmove @ 0x1401D6880 (memmove.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     SecureDump_Get_SecureDumpHeader @ 0x14029BB50 (SecureDump_Get_SecureDumpHeader.c)
 *     RtlNumberOfSetBitsEx @ 0x14030DAB0 (RtlNumberOfSetBitsEx.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     IopLiveDumpCheckTermination @ 0x140859FE4 (IopLiveDumpCheckTermination.c)
 *     IopLiveDumpFreeDumpBuffers @ 0x14085A0A8 (IopLiveDumpFreeDumpBuffers.c)
 *     IopLiveDumpGetHvMergePages @ 0x14085A1D4 (IopLiveDumpGetHvMergePages.c)
 *     IopLiveDumpGetNtMergePages @ 0x14085A368 (IopLiveDumpGetNtMergePages.c)
 *     IopLiveDumpWriteBuffer @ 0x14085A6A8 (IopLiveDumpWriteBuffer.c)
 */

__int64 __fastcall IopLiveDumpWriteDumpFileWithHvPages(__int64 a1)
{
  unsigned int v2; // r12d
  __int64 v3; // rsi
  _OWORD *v4; // r14
  LARGE_INTEGER v5; // rax
  void *v6; // rax
  struct _KTHREAD *CurrentThread; // rbx
  char HvMergePages; // al
  int v9; // r13d
  unsigned __int64 *v10; // r8
  unsigned int v11; // r15d
  __int64 *v12; // rax
  int SecureDumpHeader; // ebx
  unsigned __int64 *v14; // r8
  unsigned __int64 *v15; // r9
  char v16; // r10
  __int64 v17; // r11
  ULONG v18; // ebx
  char v19; // al
  bool v20; // zf
  char *v21; // rax
  __int64 v22; // rbx
  char v23; // cl
  _OWORD *PoolWithTag; // rax
  HANDLE v25; // r13
  __int64 v26; // rcx
  __int128 v27; // xmm0
  int v28; // eax
  int v29; // r15d
  unsigned int v30; // ebx
  SIZE_T v31; // rdx
  _DWORD *v32; // rax
  void *v33; // r15
  char v35; // [rsp+38h] [rbp-D0h]
  char v36; // [rsp+39h] [rbp-CFh]
  char v37; // [rsp+3Ah] [rbp-CEh]
  LARGE_INTEGER ByteOffset; // [rsp+40h] [rbp-C8h] BYREF
  int v39; // [rsp+48h] [rbp-C0h] BYREF
  unsigned int v40; // [rsp+4Ch] [rbp-BCh] BYREF
  unsigned __int64 *v41; // [rsp+50h] [rbp-B8h]
  char *v42; // [rsp+58h] [rbp-B0h] BYREF
  char *v43; // [rsp+60h] [rbp-A8h] BYREF
  __int64 *v44; // [rsp+68h] [rbp-A0h]
  __int64 v45; // [rsp+70h] [rbp-98h]
  __int64 v46; // [rsp+78h] [rbp-90h] BYREF
  __int64 v47; // [rsp+80h] [rbp-88h] BYREF
  PVOID Buffer; // [rsp+88h] [rbp-80h]
  unsigned int v49; // [rsp+90h] [rbp-78h]
  HANDLE FileHandle; // [rsp+98h] [rbp-70h]
  __int64 v51; // [rsp+A0h] [rbp-68h] BYREF
  struct _KTHREAD *v52; // [rsp+A8h] [rbp-60h]
  void *v53; // [rsp+B0h] [rbp-58h]
  __int64 v54; // [rsp+B8h] [rbp-50h]
  __int128 v55; // [rsp+C0h] [rbp-48h] BYREF
  _DWORD Src[10]; // [rsp+D0h] [rbp-38h] BYREF
  _BYTE v57[512]; // [rsp+F8h] [rbp-10h] BYREF
  unsigned __int64 v58[64]; // [rsp+2F8h] [rbp+1F0h] BYREF

  v55 = 0uLL;
  v2 = 32;
  memset(Src, 0, 0x20uLL);
  v3 = *(_QWORD *)(a1 + 384);
  v54 = a1 + 488;
  v4 = 0LL;
  v53 = 0LL;
  v49 = 0;
  if ( *(_BYTE *)(a1 + 656) )
    v5.QuadPart = *(_QWORD *)(v3 + 8224) + *(unsigned int *)(a1 + 664);
  else
    v5 = *(LARGE_INTEGER *)(v3 + 8224);
  ByteOffset = v5;
  v6 = *(void **)(a1 + 64);
  CurrentThread = KeGetCurrentThread();
  v51 = -1LL;
  *(_QWORD *)(a1 + 528) = 0LL;
  *(_QWORD *)(a1 + 536) = 0LL;
  FileHandle = v6;
  v45 = 0LL;
  v35 = 0;
  v52 = CurrentThread;
  IopLiveDumpGetNtMergePages((_RTL_BITMAP_EX *)a1, (__int64)v57, &v42, &v39, &v46);
  v44 = (__int64 *)v57;
  RtlClearAllBitsEx((PRTL_BITMAP_EX)(a1 + 440));
  HvMergePages = IopLiveDumpGetHvMergePages(a1, v58, &v43, &v40, &v47);
  v9 = v39;
  v10 = v58;
  v11 = v40;
  v41 = v58;
  v36 = HvMergePages;
  while ( v11 || v9 )
  {
    if ( v9 )
    {
      v12 = &v51;
      if ( v11 )
        v12 = (__int64 *)v10;
      v41 = (unsigned __int64 *)v12;
    }
    else
    {
      v44 = &v51;
    }
    SecureDumpHeader = IopLiveDumpCheckTermination(a1, (__int64)CurrentThread);
    if ( SecureDumpHeader < 0 )
      goto LABEL_70;
    if ( v11 && v14[v11 - 1] < *v15 )
    {
      Buffer = v43;
      v18 = v11 << 12;
      v45 = v47;
      v35 = v16;
      v19 = IopLiveDumpGetHvMergePages(a1, v58, &v43, &v40, &v47);
      goto LABEL_30;
    }
    if ( v9 && v15[v9 - 1] < *v14 )
    {
      Buffer = v42;
      v45 = v46;
      v18 = v9 << 12;
      v35 = 1;
      IopLiveDumpGetNtMergePages((_RTL_BITMAP_EX *)a1, (__int64)v57, &v42, &v39, &v46);
      v9 = v39;
      v44 = (__int64 *)v57;
      goto LABEL_31;
    }
    v37 = 0;
    v20 = *v15 == *v14;
    if ( *v15 < *v14 )
    {
      v21 = v42;
      Buffer = v42;
      goto LABEL_23;
    }
    Buffer = v43;
    v37 = 1;
    if ( v20 )
    {
      v21 = v42;
LABEL_23:
      v20 = v9-- == 1;
      v39 = v9;
      if ( v20 )
      {
        v35 = 1;
        v45 = v46;
        IopLiveDumpGetNtMergePages((_RTL_BITMAP_EX *)a1, (__int64)v57, &v42, &v39, &v46);
        v9 = v39;
        v14 = v41;
        v17 = 4096LL;
        v16 = v36;
        v44 = (__int64 *)v57;
      }
      else
      {
        v42 = &v21[v17];
        v44 = (__int64 *)(v15 + 1);
      }
    }
    v18 = v17;
    if ( !v37 )
      goto LABEL_31;
    v20 = v11-- == 1;
    v40 = v11;
    if ( !v20 )
    {
      v43 += v17;
      v41 = v14 + 1;
      goto LABEL_31;
    }
    v35 = v16;
    v45 = v47;
    v19 = IopLiveDumpGetHvMergePages(a1, v58, &v43, &v40, &v47);
    v18 = 4096;
LABEL_30:
    v11 = v40;
    v36 = v19;
    v41 = v58;
LABEL_31:
    SecureDumpHeader = IopLiveDumpWriteBuffer(FileHandle, Buffer, v18, &ByteOffset, a1, 0);
    if ( SecureDumpHeader < 0 )
      goto LABEL_70;
    v10 = v41;
    CurrentThread = v52;
    if ( v35 )
    {
      v22 = v45;
      MmFreeIndependentPages(*(_QWORD *)(*(_QWORD *)(a1 + 552) + 8 * v45), 0x40000uLL);
      v10 = v41;
      *(_QWORD *)(*(_QWORD *)(a1 + 552) + 8 * v22) = 0LL;
      CurrentThread = v52;
      v35 = 0;
    }
  }
  v23 = *(_BYTE *)(a1 + 656);
  if ( v23 )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x1000uLL, 0x706D644Cu);
    v4 = PoolWithTag;
    if ( !PoolWithTag )
    {
      SecureDumpHeader = -1073741670;
      goto LABEL_70;
    }
    memset(PoolWithTag, 0, 0x1000uLL);
    v23 = *(_BYTE *)(a1 + 656);
  }
  v25 = FileHandle;
  *(_QWORD *)&v55 = 0x626F6C42706D7544LL;
  DWORD2(v55) = 16;
  HIDWORD(v55) = -(KernelVersionBump != 1) - 268417093;
  if ( v23 )
  {
    v26 = 16LL;
    *v4 = v55;
    goto LABEL_42;
  }
  SecureDumpHeader = IopLiveDumpWriteBuffer(FileHandle, &v55, 0x10u, &ByteOffset, a1, 1);
  if ( SecureDumpHeader >= 0 )
  {
    v26 = v49;
LABEL_42:
    v27 = *(_OWORD *)(a1 + 144);
    Src[7] = 0;
    v20 = *(_BYTE *)(a1 + 656) == 0;
    v28 = *(_DWORD *)(a1 + 168);
    *(_OWORD *)&Src[1] = v27;
    Src[0] = 32;
    Src[5] = v28;
    if ( !v20 )
    {
      v29 = 4096;
      Src[6] = 4064 - v26;
      memmove((char *)v4 + v26, Src, 0x20uLL);
      while ( 1 )
      {
        SecureDumpHeader = IopLiveDumpWriteBuffer(v25, v4, 0x1000u, &ByteOffset, a1, 0);
        if ( SecureDumpHeader < 0 )
          goto LABEL_68;
        v29 -= 4096;
        memset(v4, 0, 0x1000uLL);
        if ( v2 != Src[0] )
        {
          v30 = Src[0] - v2;
          if ( Src[0] - v2 > 0x1000 )
            v30 = 4096;
          memmove(v4, (char *)Src + v2, v30);
          v2 += v30;
        }
        if ( !v29 )
          goto LABEL_53;
      }
    }
    Src[6] = ((ByteOffset.LowPart + 4127) & 0xFFFFF000) - ByteOffset.LowPart;
    SecureDumpHeader = IopLiveDumpWriteBuffer(v25, Src, 0x20u, &ByteOffset, a1, 1);
    if ( SecureDumpHeader < 0 )
      goto LABEL_68;
    ByteOffset.QuadPart += Src[6];
LABEL_53:
    SecureDumpHeader = IopLiveDumpWriteBuffer(v25, *(PVOID *)(a1 + 160), *(_DWORD *)(a1 + 168), &ByteOffset, a1, 0);
    if ( SecureDumpHeader < 0 )
      goto LABEL_68;
    RtlMergeBitMapsEx((unsigned __int64 *)(a1 + 368), (__int64 *)(a1 + 440));
    *(_DWORD *)(v3 + 0x2000) = 1347241043;
    *(_DWORD *)(v3 + 8196) = 1347245380;
    *(_QWORD *)(v3 + 8232) = RtlNumberOfSetBitsEx((_QWORD *)(a1 + 368));
    if ( *(_BYTE *)(a1 + 656) )
      *(_QWORD *)(v3 + 4000) = ByteOffset.QuadPart - *(unsigned int *)(a1 + 664);
    else
      *(LARGE_INTEGER *)(v3 + 4000) = ByteOffset;
    *(_DWORD *)(v3 + 4176) |= 0x10u;
    if ( *(_BYTE *)(a1 + 656) )
    {
      v31 = *(unsigned int *)(a1 + 664);
      ByteOffset.QuadPart = v31;
      v32 = ExAllocatePoolWithTag(NonPagedPoolNx, v31, 0x706D644Cu);
      v33 = v32;
      if ( !v32 )
      {
        SecureDumpHeader = -1073741670;
        goto LABEL_68;
      }
      SecureDumpHeader = SecureDump_Get_SecureDumpHeader(v3, v32, *(_DWORD *)(a1 + 664));
      if ( SecureDumpHeader >= 0 )
      {
LABEL_63:
        SecureDumpHeader = IopLiveDumpWriteBuffer(v25, (PVOID)v3, *(_DWORD *)(v3 + 8224), &ByteOffset, a1, 0);
        if ( SecureDumpHeader >= 0 && *(_BYTE *)(a1 + 656) )
        {
          ByteOffset.QuadPart = 0LL;
          SecureDumpHeader = IopLiveDumpWriteBuffer(v25, v33, *(_DWORD *)(a1 + 664), &ByteOffset, a1, 1);
        }
      }
      if ( v33 )
        ExFreePoolWithTag(v33, 0);
      goto LABEL_68;
    }
    ByteOffset.QuadPart = 0LL;
    v33 = v53;
    goto LABEL_63;
  }
LABEL_68:
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
LABEL_70:
  IopLiveDumpFreeDumpBuffers(v54);
  return (unsigned int)SecureDumpHeader;
}
