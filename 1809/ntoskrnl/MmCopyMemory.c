/*
 * XREFs of MmCopyMemory @ 0x1400EA8F0
 * Callers:
 *     <none>
 * Callees:
 *     MiGetEffectivePagePriorityThread @ 0x14001AEA8 (MiGetEffectivePagePriorityThread.c)
 *     MiUnlockProtoPoolPage @ 0x14002F1F0 (MiUnlockProtoPoolPage.c)
 *     MiReleasePtes @ 0x1400340E0 (MiReleasePtes.c)
 *     MiGetSystemRegionType @ 0x14004EC30 (MiGetSystemRegionType.c)
 *     MiReservePtes @ 0x14005C890 (MiReservePtes.c)
 *     MiGetSessionVm @ 0x1400E94DC (MiGetSessionVm.c)
 *     MiTranslatePageForCopy @ 0x1400E9CB0 (MiTranslatePageForCopy.c)
 *     MiPrefetchVirtualMemory @ 0x1400EA1C0 (MiPrefetchVirtualMemory.c)
 *     MiCopySinglePage @ 0x1400EA6A8 (MiCopySinglePage.c)
 *     MiUnlockSystemVa @ 0x1400ECE44 (MiUnlockSystemVa.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ZwReadVirtualMemory @ 0x1401B8AD0 (ZwReadVirtualMemory.c)
 *     MiCheckPhysicalAddressRange @ 0x1402BA67C (MiCheckPhysicalAddressRange.c)
 */

NTSTATUS __fastcall MmCopyMemory(char *Buffer, char *a2, SIZE_T NumberOfBytesToRead, int a4, PSIZE_T NumberOfBytesRead)
{
  PSIZE_T v5; // r13
  unsigned __int64 v6; // rsi
  unsigned __int64 v7; // rbx
  __int16 v8; // ax
  unsigned __int64 v9; // r12
  unsigned __int64 v10; // r12
  unsigned __int64 v11; // r14
  int v12; // edi
  size_t v13; // r15
  unsigned __int64 v14; // rdx
  int v15; // ecx
  unsigned __int64 v16; // rax
  int v17; // eax
  __int64 v18; // r13
  __int64 v19; // r8
  unsigned __int64 v20; // r14
  __int64 v22; // rax
  int SystemRegionType; // eax
  unsigned __int64 SessionVm; // r8
  int v25; // r9d
  unsigned __int64 v26; // r10
  size_t v27; // rdx
  char *v28; // rcx
  int v29; // [rsp+38h] [rbp-C8h]
  unsigned __int64 v30; // [rsp+40h] [rbp-C0h] BYREF
  char *v31; // [rsp+48h] [rbp-B8h]
  ULONG_PTR v32; // [rsp+50h] [rbp-B0h]
  int v33; // [rsp+58h] [rbp-A8h]
  __int64 v34; // [rsp+60h] [rbp-A0h]
  __int64 v35; // [rsp+68h] [rbp-98h] BYREF
  __int64 v36; // [rsp+70h] [rbp-90h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+78h] [rbp-88h]
  _KPROCESS *Process; // [rsp+80h] [rbp-80h]
  ULONG_PTR v39; // [rsp+88h] [rbp-78h]
  _QWORD v40[2]; // [rsp+90h] [rbp-70h] BYREF
  char v41[24]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v42; // [rsp+B8h] [rbp-48h]

  v5 = NumberOfBytesRead;
  v6 = NumberOfBytesToRead;
  v34 = 0LL;
  v7 = (unsigned __int64)a2;
  v33 = a4;
  v31 = Buffer;
  *NumberOfBytesRead = 0LL;
  if ( !a4 || (a4 & 0xFFFFFFFC) != 0 || ((a4 - 1) & a4) != 0 || KeGetCurrentIrql() > 1u )
    return -1073741582;
  v29 = a4 & 1;
  if ( (a4 & 1) != 0 )
  {
    if ( (unsigned int)MiCheckPhysicalAddressRange(a2, NumberOfBytesToRead) )
    {
      v8 = v7;
      v9 = v6 + 4095;
      goto LABEL_10;
    }
    return -1073741800;
  }
  if ( &a2[NumberOfBytesToRead] <= a2 )
    return -1073741800;
  if ( (unsigned __int64)a2 <= 0x7FFFFFFEFFFFLL )
  {
    if ( (unsigned __int64)&a2[NumberOfBytesToRead] <= 0x7FFFFFFEFFFFLL )
      return ZwReadVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, a2, Buffer, NumberOfBytesToRead, NumberOfBytesRead);
    return -1073741800;
  }
  if ( (unsigned __int64)a2 < 0xFFFF800000000000uLL )
    return -1073741800;
  v8 = (__int16)a2;
  v9 = NumberOfBytesToRead + 4095;
LABEL_10:
  v10 = ((v8 & 0xFFF) + v9) >> 12;
  if ( v10 >= 0x100000000LL )
    return -1073741583;
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  v11 = v7 & 0xFFF;
  v39 = MiReservePtes((__int64)&qword_14043C060, (unsigned __int64 *)(unsigned int)v10);
  v32 = v39;
  v12 = 0;
  v13 = v6;
  v14 = v39;
  if ( 4096 - v11 <= v6 )
    v13 = 4096 - v11;
  v15 = v29;
  if ( v29 )
    v16 = v7 >> 12;
  else
    v16 = -1LL;
  v30 = v16;
  if ( !v6 )
    goto LABEL_31;
  while ( 1 )
  {
    v36 = 0LL;
    v35 = 0LL;
    if ( v15 )
    {
      v18 = 0LL;
      goto LABEL_20;
    }
    v17 = MiTranslatePageForCopy(v7, v41, &v30, &v36, (unsigned __int64 *)&v35);
    v12 = v17;
    if ( v17 >= 0 )
    {
      v18 = v42;
      if ( v17 == 273 )
      {
        MiUnlockSystemVa(v41);
        v12 = 0;
        v27 = v13;
        if ( v13 )
        {
          v28 = &v31[-v11];
          do
          {
            v28[v11] = *((_BYTE *)&v35 + (v11 & 7));
            ++v11;
            --v27;
          }
          while ( v27 );
        }
LABEL_25:
        v34 += v13;
        v6 -= v13;
        v31 += v13;
        v7 += v13;
        ++v30;
        v14 = v32;
        v13 = v6;
        if ( v6 > 0x1000 )
          v13 = 4096LL;
        v11 = 0LL;
        if ( v32 )
        {
          v14 = v32 + 8;
          v32 += 8LL;
        }
        goto LABEL_29;
      }
      v14 = v32;
LABEL_20:
      v19 = v11;
      v20 = v30;
      v12 = MiCopySinglePage(v31, v30, v19, v13, v14, v33);
      if ( v18 )
      {
        _InterlockedAnd64((volatile signed __int64 *)(48 * v20 - 0x57FFFFFFFE8LL), 0x7FFFFFFFFFFFFFFFuLL);
        if ( v36 )
          MiUnlockProtoPoolPage(v36, 2u);
        MiUnlockSystemVa(v41);
      }
      if ( v12 < 0 )
        goto LABEL_30;
      goto LABEL_25;
    }
    if ( v17 != -1073741608 )
      goto LABEL_30;
    MiGetEffectivePagePriorityThread((__int64)CurrentThread);
    v40[0] = v7;
    v22 = v6;
    if ( v6 > 0x200000 - (v7 & 0x1FFFFF) )
      v22 = 0x200000 - (v7 & 0x1FFFFF);
    v40[1] = v22;
    SystemRegionType = MiGetSystemRegionType(v7);
    if ( SystemRegionType == (_DWORD)v26 )
      break;
LABEL_50:
    if ( v7 >= qword_14043CB80 && v7 <= qword_14043B5F0 )
    {
      v12 = -1073741585;
      goto LABEL_30;
    }
    v12 = MiPrefetchVirtualMemory(v26, (__int64)v40, SessionVm, v25);
    if ( v12 < 0 )
      goto LABEL_30;
    v14 = v32;
LABEL_29:
    if ( !v6 )
      goto LABEL_30;
    v15 = v29;
  }
  if ( Process[1].ActiveProcessors.Bitmap[2] && (Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) == 0 )
  {
    SessionVm = MiGetSessionVm();
    goto LABEL_50;
  }
  v12 = -1073741819;
LABEL_30:
  v5 = NumberOfBytesRead;
LABEL_31:
  if ( v39 )
    MiReleasePtes((__int64)&qword_14043C060, v39, v10);
  *v5 += v34;
  return v12;
}
