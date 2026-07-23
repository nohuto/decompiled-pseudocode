/*
 * XREFs of KiInitializeMTRR @ 0x1409C66F4
 * Callers:
 *     KiInitMachineDependent @ 0x1401816E0 (KiInitMachineDependent.c)
 * Callees:
 *     MiLockPagableImageSection @ 0x14009AAF0 (MiLockPagableImageSection.c)
 *     DbgPrintEx @ 0x140160560 (DbgPrintEx.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     KiReadFixedMtrr @ 0x14056F88C (KiReadFixedMtrr.c)
 *     KiMaskToLength @ 0x140574238 (KiMaskToLength.c)
 *     KeRestoreMtrrBroadcast @ 0x140574264 (KeRestoreMtrrBroadcast.c)
 *     MmLockPagableSectionByHandle @ 0x140620240 (MmLockPagableSectionByHandle.c)
 */

void __fastcall KiInitializeMTRR(char a1)
{
  char v1; // di
  char v2; // r15
  unsigned __int64 v3; // r9
  struct _KPRCB *CurrentPrcb; // r10
  PVOID PoolWithTag; // rax
  size_t v6; // rbx
  PVOID v7; // rax
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // r12
  unsigned int v11; // ebp
  __int64 v12; // rsi
  unsigned int v13; // r14d
  unsigned __int64 v14; // rdi
  unsigned __int64 v15; // rax
  __int64 v16; // r13
  unsigned __int64 v17; // rbx
  __int64 v18; // rsi

  v1 = a1;
  v2 = 1;
  if ( !KeGetPcr()->Prcb.Number )
  {
    v3 = __readmsr(0xFEu);
    qword_14041C4C8 = v3;
    KiMtrrInfo = __readmsr(0x2FFu);
    CurrentPrcb = KeGetCurrentPrcb();
    byte_14041C4D1 = 0;
    if ( CurrentPrcb->CpuVendor == 1 )
      byte_14041C4D1 = (__readmsr(0xC0010010) & 0x40000) != 0;
    if ( (KiMtrrInfo & 0x800) != 0 && (_BYTE)qword_14041C4C8 )
    {
      if ( (v3 & 0x400) != 0 && (KeFeatureBits & 0x40) == 0 )
        qword_14041C4C8 &= ~0x400uLL;
      PoolWithTag = qword_14041C4D8;
      v6 = 16 * (unsigned int)(unsigned __int8)qword_14041C4C8;
      if ( qword_14041C4D8
        || (PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)v6, 0x2020654Bu),
            (qword_14041C4D8 = PoolWithTag) != 0LL) )
      {
        memset(PoolWithTag, 0, v6);
      }
      v7 = qword_14041C4E0;
      if ( qword_14041C4E0
        || (qword_14041C4C8 & 0x100) != 0
        && (v7 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x58uLL, 0x2020654Bu), (qword_14041C4E0 = v7) != 0LL) )
      {
        memset(v7, 0, 0x58uLL);
      }
    }
    else
    {
      if ( (KeFeatureBits & 0x40) != 0
        && (qword_14041C4C8 & 0x1FF) != 0
        && (KiMtrrInfo & 0x800) == 0
        && (CurrentPrcb->CpuVendor != 1 || (_BYTE)KiMtrrInfo != 6)
        && (_BYTE)KdDebuggerEnabled )
      {
        DbgPrintEx(0x65u, 0, "Caching is disabled by incorrect MTRR settings.\n");
        __debugbreak();
      }
      v2 = 0;
    }
  }
  if ( qword_14041C4D8 && (qword_14041C4E0 || (qword_14041C4C8 & 0x100) == 0) )
  {
    v8 = __readmsr(0xFEu);
    v9 = v8;
    if ( (v8 & 0x400) != 0 && (KeFeatureBits & 0x40) == 0 )
      v9 = v8 & 0xFFFFFFFFFFFFFBFFuLL;
    if ( v9 != qword_14041C4C8 )
      KeBugCheckEx(0x3Eu, 0x40uLL, 0LL, 0LL, 0LL);
    if ( __readmsr(0x2FFu) != KiMtrrInfo )
      DbgPrintEx(0x65u, 0, "KiInitializeMTRR: MTRR_MSR_DEFAULT is not consistent between processors.\n");
  }
  else
  {
    v2 = 0;
    LOBYTE(v9) = 0;
  }
  if ( !v2 )
    goto LABEL_50;
  if ( !KeGetPcr()->Prcb.Number )
  {
    if ( qword_14041C4E0 )
      KiReadFixedMtrr(qword_14041C4E0);
    v10 = (unsigned __int8)v9;
    v11 = 0;
    if ( (_BYTE)v9 )
    {
      v12 = 0LL;
      v13 = 513;
      do
      {
        v14 = __readmsr(v13 - 1);
        v15 = __readmsr(v13);
        v17 = v15;
        if ( (v15 & 0x800) != 0 )
        {
          v16 = v15 & KiMtrrMaskMask;
          if ( ((v16 + KiMaskToLength(v15 & KiMtrrMaskMask)) & ~(1LL << KiMtrrMaxRangeShift)) != 0 )
          {
            DbgPrintEx(0x65u, 0, "KiInitializeMTRR: Found non-contiguous MTRR mask!\n");
            v2 = 0;
          }
          v18 = 2 * v12;
          *((_QWORD *)qword_14041C4D8 + v18) = v14;
          *((_QWORD *)qword_14041C4D8 + v18 + 1) = v17;
        }
        ++v11;
        v13 += 2;
        v12 = v11;
      }
      while ( v11 < v10 );
      v1 = a1;
    }
  }
  if ( v2 )
  {
    if ( v1 )
    {
      byte_14041C4D0 = 1;
      if ( KeGetCurrentIrql() < 2u )
      {
        MmLockPagableSectionByHandle(ExPageLockHandle);
        KeRestoreMtrrBroadcast();
        MiLockPagableImageSection((ULONG_PTR)ExPageLockHandle, 0LL);
      }
    }
  }
  else
  {
LABEL_50:
    if ( qword_14041C4D8 )
    {
      ExFreePoolWithTag(qword_14041C4D8, 0);
      qword_14041C4D8 = 0LL;
    }
    if ( qword_14041C4E0 )
    {
      ExFreePoolWithTag(qword_14041C4E0, 0);
      qword_14041C4E0 = 0LL;
    }
  }
}
