/*
 * XREFs of VidSchExitIndependentFlip @ 0x1C0016D20
 * Callers:
 *     <none>
 * Callees:
 *     ?ProcessHwQueues@HwQueueStagingList@@QEAAXXZ @ 0x1C00073A0 (-ProcessHwQueues@HwQueueStagingList@@QEAAXXZ.c)
 *     ?Release@AcquireSpinLock@@QEAAXXZ @ 0x1C0011474 (-Release@AcquireSpinLock@@QEAAXXZ.c)
 *     ??0AcquireSpinLock@@QEAA@AEA_K_N1@Z @ 0x1C0011694 (--0AcquireSpinLock@@QEAA@AEA_K_N1@Z.c)
 *     VidSchExitIndependentFlipInternal @ 0x1C00171B4 (VidSchExitIndependentFlipInternal.c)
 */

_QWORD *__fastcall VidSchExitIndependentFlip(
        __int64 a1,
        __int64 a2,
        struct _LUID *a3,
        int a4,
        __int64 a5,
        int a6,
        char a7,
        _DWORD *a8,
        _QWORD *a9)
{
  _DWORD *v9; // rbx
  _QWORD *v11; // rdi
  __int64 v13; // r8
  _QWORD *result; // rax
  _QWORD v15[2]; // [rsp+40h] [rbp-40h] BYREF
  char v16; // [rsp+50h] [rbp-30h]
  _BYTE v17[40]; // [rsp+58h] [rbp-28h] BYREF
  struct _LUID DestinationLuid; // [rsp+A0h] [rbp+20h] BYREF

  v9 = a8;
  v11 = a9;
  *a8 = 0;
  *v11 = 0LL;
  if ( *(_BYTE *)(a1 + 47) )
  {
    RtlCopyLuid(&DestinationLuid, a3);
    a9 = 0LL;
    LOBYTE(a8) = 0;
    AcquireSpinLock::AcquireSpinLock((AcquireSpinLock *)v17, (unsigned __int64 *)(a1 + 1648), v13, 0);
    v16 = 0;
    v15[1] = v15;
    v15[0] = v15;
    VidSchExitIndependentFlipInternal(
      (unsigned int)v15,
      a1,
      (unsigned int)&DestinationLuid,
      a4,
      a6,
      a7,
      (__int64)&a8,
      (__int64)&a9);
    if ( !v16 )
      HwQueueStagingList::ProcessHwQueues((HwQueueStagingList *)v15);
    AcquireSpinLock::Release((AcquireSpinLock *)v17);
    *v9 = (unsigned __int8)a8;
    result = a9;
    *v11 = a9;
  }
  return result;
}
