/*
 * XREFs of MiSelectUserAddress @ 0x14060C3A0
 * Callers:
 *     MiMapViewOfImageSection @ 0x1405EAA40 (MiMapViewOfImageSection.c)
 *     MiReserveUserMemory @ 0x140609670 (MiReserveUserMemory.c)
 *     MiAllocateNewSubAllocatedRegion @ 0x14067F064 (MiAllocateNewSubAllocatedRegion.c)
 *     MiMapLockedPagesInUserSpace @ 0x140713B18 (MiMapLockedPagesInUserSpace.c)
 *     MiMapViewOfPhysicalSection @ 0x14077D4A4 (MiMapViewOfPhysicalSection.c)
 *     MiAllocateEnclaveVad @ 0x14089286C (MiAllocateEnclaveVad.c)
 * Callees:
 *     MiFindEmptyAddressRange @ 0x14060C040 (MiFindEmptyAddressRange.c)
 *     MiFindEmptyAddressRangeDown @ 0x1406BE090 (MiFindEmptyAddressRangeDown.c)
 */

__int64 __fastcall MiSelectUserAddress(
        int a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        unsigned int a8,
        __int64 *a9,
        _QWORD *a10)
{
  __int64 *v11; // r14
  unsigned __int64 v13; // r8
  unsigned __int64 v14; // r10
  struct _KTHREAD *CurrentThread; // rax
  __int64 v16; // rcx
  _KPROCESS *Process; // rsi
  unsigned __int64 v18; // rdx
  __int64 v19; // rdi
  __int64 v20; // rbp
  int v21; // r15d
  int v22; // ebx
  __int64 v23; // r12
  _QWORD *v24; // r14
  __int64 result; // rax
  int v26; // [rsp+A0h] [rbp+8h]
  int v28; // [rsp+B0h] [rbp+18h] BYREF
  unsigned __int64 v29; // [rsp+B8h] [rbp+20h]

  v29 = a4;
  v11 = a9;
  v26 = 0;
  v28 = 0;
  v13 = a2;
  *a10 = 0LL;
  v14 = a4;
  CurrentThread = KeGetCurrentThread();
  *v11 = 0LL;
  v16 = a8 >> 31;
  Process = CurrentThread->ApcState.Process;
  v18 = Process[1].ActiveProcessors.Bitmap[17];
  if ( a3 > v18 - 1 && v18 <= 0x100000000LL )
    v16 = 2LL;
  v19 = *(_QWORD *)&Process[1].IdealNode[14] + 8 * (v16 + 8 * v16 + 6);
  if ( (a1 & 0x20400000) != 541065216 && (a1 & 0x20000000) != 0 && a4 >= 0x40000000 )
  {
    v20 = a5;
    if ( a5 == 0x200000 )
    {
      v20 = 0x40000000LL;
      v26 = 1;
    }
  }
  else
  {
    v20 = a5;
  }
  v21 = a7;
  v22 = a1 & 0x100000;
  v23 = a6;
  v24 = a10;
  while ( 1 )
  {
    result = v22 || (Process[1].DirectoryTableBase & 0x20000000000000LL) != 0
           ? MiFindEmptyAddressRangeDown(v19, v14, v20, v23, v13, a3, v21, (__int64)v24)
           : MiFindEmptyAddressRange(v19, v14, v20, v23, v13, a3, v21, v24, &v28);
    if ( (int)result >= 0 || v26 != 1 )
      break;
    v14 = v29;
    v20 = 0x200000LL;
    v13 = a2;
    v26 = 0;
  }
  if ( v20 == 0x10000 && v28 == 1 )
    *a9 = v19;
  return result;
}
