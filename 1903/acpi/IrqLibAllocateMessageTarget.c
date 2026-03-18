/*
 * XREFs of IrqLibAllocateMessageTarget @ 0x1C00B5DC0
 * Callers:
 *     <none>
 * Callees:
 *     IrqLibReleaseArbiterLock @ 0x1C001D974 (IrqLibReleaseArbiterLock.c)
 *     IrqLibAcquireArbiterLock @ 0x1C001D99C (IrqLibAcquireArbiterLock.c)
 *     ProcessorDeleteDeviceIdtAssignment @ 0x1C001E374 (ProcessorDeleteDeviceIdtAssignment.c)
 *     __security_check_cookie @ 0x1C0031700 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00319E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0031D40 (memset.c)
 */

__int64 __fastcall IrqLibAllocateMessageTarget(
        PVOID Owner,
        __int64 a2,
        int a3,
        int a4,
        char a5,
        _DWORD *a6,
        _BYTE *a7,
        _DWORD *a8)
{
  NTSTATUS Range; // ebx
  char *PoolWithTag; // rax
  char *v13; // rdi
  int v14; // eax
  char v17; // [rsp+58h] [rbp-81h]
  ULONGLONG End; // [rsp+60h] [rbp-79h] BYREF
  _QWORD v19[4]; // [rsp+68h] [rbp-71h] BYREF
  _OWORD v20[2]; // [rsp+88h] [rbp-51h] BYREF
  _BYTE v21[40]; // [rsp+A8h] [rbp-31h] BYREF

  v17 = a3;
  memset(v21, 0, sizeof(v21));
  memset(v19, 0, sizeof(v19));
  memset(v20, 0, sizeof(v20));
  if ( !KeGetCurrentIrql() && (unsigned int)(IrqLibRealInterruptModel - 1) <= 3 )
  {
    IrqLibAcquireArbiterLock(1);
    Range = RtlFindRange(RangeList, 0xFFF00000uLL, 0xFFFFFFFEuLL, 1u, 1u, 0, 0, 0LL, 0LL, &End);
    if ( Range >= 0 )
    {
      BYTE1(v19[0]) = 2;
      HIDWORD(v19[2]) = 2;
      BYTE2(v19[0]) = a5 != 0 ? 3 : 1;
      WORD2(v19[0]) = 5 - (a4 != 1);
      LOWORD(v19[2]) = 4;
      WORD1(v19[2]) = *(_WORD *)(a2 + 8);
      v19[3] = *(_QWORD *)a2;
      Range = ((__int64 (__fastcall *)(PVOID, _QWORD *, _QWORD, _BYTE *, int, bool, _DWORD, _DWORD, _OWORD *))ProcessorReserveIdtEntries)(
                Owner,
                v19,
                (unsigned int)End,
                v21,
                a3,
                a4 == 1,
                0,
                0,
                v20);
      if ( Range >= 0 )
      {
        PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 0x78uLL, 0x49706341u);
        v13 = PoolWithTag;
        if ( PoolWithTag )
        {
          memset(PoolWithTag, 0, 0x78uLL);
          v13[26] = v17;
          *(_DWORD *)v13 = 1;
          *((_DWORD *)v13 + 1) = 2;
          *((_DWORD *)v13 + 2) = 3;
          *((_DWORD *)v13 + 12) = a4 == 1;
          *(_OWORD *)(v13 + 56) = v20[0];
          Range = RtlAddRange(RangeList, End, End, 0, 0x10u, v13, Owner);
          if ( Range >= 0 )
          {
            *a7 = HalConvertDeviceIdtToIrql(DWORD1(v20[1]));
            Range = 0;
            v14 = DWORD1(v20[1]);
            *a8 = DWORD1(v20[1]);
            *a6 = v14;
LABEL_12:
            IrqLibReleaseArbiterLock();
            return (unsigned int)Range;
          }
          ExFreePoolWithTag(v13, 0);
        }
        else
        {
          Range = -1073741670;
        }
      }
    }
    if ( DWORD1(v20[1]) )
      ProcessorDeleteDeviceIdtAssignment(Owner, End, DWORD1(v20[1]), 0);
    goto LABEL_12;
  }
  return 3221225659LL;
}
