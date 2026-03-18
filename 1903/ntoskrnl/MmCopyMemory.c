/*
 * XREFs of MmCopyMemory @ 0x1400F48A0
 * Callers:
 *     <none>
 * Callees:
 *     MiReservePtes @ 0x140030210 (MiReservePtes.c)
 *     MiGetSystemRegionType @ 0x14003ED30 (MiGetSystemRegionType.c)
 *     MiUnlockProtoPoolPage @ 0x140054F90 (MiUnlockProtoPoolPage.c)
 *     MiReleasePtes @ 0x14006AEF0 (MiReleasePtes.c)
 *     MiGetSessionVm @ 0x140075D74 (MiGetSessionVm.c)
 *     MiGetEffectivePagePriorityThread @ 0x14008DCDC (MiGetEffectivePagePriorityThread.c)
 *     MiUnlockSystemVa @ 0x1400A15F4 (MiUnlockSystemVa.c)
 *     MiCopySinglePage @ 0x1400F4B8C (MiCopySinglePage.c)
 *     MiTranslatePageForCopy @ 0x1400F4DC8 (MiTranslatePageForCopy.c)
 *     MiPrefetchVirtualMemory @ 0x1400F5100 (MiPrefetchVirtualMemory.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     ZwReadVirtualMemory @ 0x1401C08B0 (ZwReadVirtualMemory.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     MiCheckPhysicalAddressRange @ 0x1402D0620 (MiCheckPhysicalAddressRange.c)
 */

NTSTATUS __fastcall MmCopyMemory(
        char *Buffer,
        unsigned __int64 BaseAddress,
        SIZE_T NumberOfBytesToRead,
        int a4,
        PSIZE_T NumberOfBytesRead)
{
  PSIZE_T v5; // r13
  unsigned __int64 v10; // rdi
  SIZE_T v11; // r15
  int v12; // esi
  SIZE_T v13; // r12
  ULONG_PTR v14; // rdx
  int v15; // ecx
  unsigned __int64 v16; // rax
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // r13
  unsigned __int64 v20; // r8
  unsigned __int64 v21; // rdi
  __int64 v22; // rdx
  __int64 v24; // rax
  int SystemRegionType; // eax
  unsigned __int64 SessionVm; // r8
  __int64 v27; // r10
  SIZE_T v28; // rdx
  char *v29; // rcx
  int v30; // [rsp+38h] [rbp-C8h]
  unsigned __int64 v31; // [rsp+40h] [rbp-C0h] BYREF
  char *v32; // [rsp+48h] [rbp-B8h]
  ULONG_PTR v33; // [rsp+50h] [rbp-B0h]
  int v34; // [rsp+58h] [rbp-A8h]
  __int64 v35; // [rsp+60h] [rbp-A0h]
  __int64 v36; // [rsp+68h] [rbp-98h] BYREF
  ULONG_PTR v37; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int64 v38; // [rsp+78h] [rbp-88h] BYREF
  __int64 v39; // [rsp+80h] [rbp-80h]
  struct _KTHREAD *CurrentThread; // [rsp+88h] [rbp-78h]
  _KPROCESS *Process; // [rsp+90h] [rbp-70h]
  ULONG_PTR v42; // [rsp+98h] [rbp-68h]
  _QWORD v43[16]; // [rsp+A0h] [rbp-60h] BYREF

  v5 = NumberOfBytesRead;
  v32 = Buffer;
  v34 = a4;
  memset(v43, 0, sizeof(v43));
  v35 = 0LL;
  *NumberOfBytesRead = 0LL;
  if ( !a4 || (a4 & 0xFFFFFFFC) != 0 || ((a4 - 1) & a4) != 0 || KeGetCurrentIrql() > 1u )
    return -1073741582;
  v30 = a4 & 1;
  if ( (a4 & 1) != 0 )
  {
    if ( (unsigned int)MiCheckPhysicalAddressRange(BaseAddress, NumberOfBytesToRead) )
      goto LABEL_9;
    return -1073741800;
  }
  if ( BaseAddress + NumberOfBytesToRead <= BaseAddress )
    return -1073741800;
  if ( BaseAddress <= 0x7FFFFFFEFFFFLL )
  {
    if ( BaseAddress + NumberOfBytesToRead <= 0x7FFFFFFEFFFFLL )
      return ZwReadVirtualMemory(
               (HANDLE)0xFFFFFFFFFFFFFFFFLL,
               (PVOID)BaseAddress,
               Buffer,
               NumberOfBytesToRead,
               NumberOfBytesRead);
    return -1073741800;
  }
  if ( BaseAddress < 0xFFFF800000000000uLL )
    return -1073741800;
LABEL_9:
  v10 = BaseAddress & 0xFFF;
  v11 = (v10 + NumberOfBytesToRead + 4095) >> 12;
  if ( v11 >= 0x100000000LL )
    return -1073741583;
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  v12 = 0;
  v42 = MiReservePtes((__int64)&qword_1404669C0, (unsigned __int64 *)(unsigned int)v11);
  v33 = v42;
  v13 = NumberOfBytesToRead;
  v14 = v42;
  if ( 4096 - v10 <= NumberOfBytesToRead )
    v13 = 4096 - v10;
  v15 = v30;
  if ( v30 )
    v16 = BaseAddress >> 12;
  else
    v16 = -1LL;
  v31 = v16;
  if ( !NumberOfBytesToRead )
    goto LABEL_30;
  while ( 1 )
  {
    v37 = 0LL;
    v36 = 0LL;
    if ( v15 )
    {
      v19 = 0LL;
      goto LABEL_19;
    }
    v17 = MiTranslatePageForCopy(BaseAddress, v43, &v31, &v37, &v36);
    v12 = v17;
    if ( v17 >= 0 )
    {
      v19 = v43[3];
      if ( v17 == 273 )
      {
        MiUnlockSystemVa((__int64)v43, v18);
        v12 = 0;
        v28 = v13;
        if ( v13 )
        {
          v29 = &v32[-v10];
          do
          {
            v29[v10] = *((_BYTE *)&v36 + (v10 & 7));
            ++v10;
            --v28;
          }
          while ( v28 );
        }
LABEL_24:
        v35 += v13;
        NumberOfBytesToRead -= v13;
        v32 += v13;
        BaseAddress += v13;
        ++v31;
        v14 = v33;
        v13 = NumberOfBytesToRead;
        if ( NumberOfBytesToRead > 0x1000 )
          v13 = 4096LL;
        v10 = 0LL;
        if ( v33 )
        {
          v14 = v33 + 8;
          v33 += 8LL;
        }
        goto LABEL_28;
      }
      v14 = v33;
LABEL_19:
      v20 = v10;
      v21 = v31;
      v12 = MiCopySinglePage(v32, v31, v20, v13, v14, v34);
      if ( v19 )
      {
        _InterlockedAnd64((volatile signed __int64 *)(48 * v21 - 0x57FFFFFFFE8LL), 0x7FFFFFFFFFFFFFFFuLL);
        if ( v37 )
          MiUnlockProtoPoolPage(v37, 2u);
        MiUnlockSystemVa((__int64)v43, v22);
      }
      if ( v12 < 0 )
        goto LABEL_29;
      goto LABEL_24;
    }
    if ( v17 != -1073741608 )
      goto LABEL_29;
    v38 = 0LL;
    v39 = 0LL;
    MiGetEffectivePagePriorityThread((__int64)CurrentThread);
    v38 = BaseAddress;
    v24 = NumberOfBytesToRead;
    if ( NumberOfBytesToRead > 0x200000 - (BaseAddress & 0x1FFFFF) )
      v24 = 0x200000 - (BaseAddress & 0x1FFFFF);
    v39 = v24;
    SystemRegionType = MiGetSystemRegionType(BaseAddress);
    if ( SystemRegionType == (_DWORD)v27 )
      break;
LABEL_49:
    if ( BaseAddress >= qword_1404675B0 && BaseAddress <= qword_140465EE0 )
    {
      v12 = -1073741585;
      goto LABEL_29;
    }
    v12 = MiPrefetchVirtualMemory(v27, &v38, SessionVm);
    if ( v12 < 0 )
      goto LABEL_29;
    v14 = v33;
LABEL_28:
    if ( !NumberOfBytesToRead )
      goto LABEL_29;
    v15 = v30;
  }
  if ( Process[1].ActiveProcessors.Bitmap[1] && (Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) == 0 )
  {
    SessionVm = MiGetSessionVm();
    goto LABEL_49;
  }
  v12 = -1073741819;
LABEL_29:
  v5 = NumberOfBytesRead;
LABEL_30:
  if ( v42 )
    MiReleasePtes((__int64)&qword_1404669C0, v42, v11);
  *v5 += v35;
  return v12;
}
