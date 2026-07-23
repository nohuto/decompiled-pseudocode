/*
 * XREFs of MiReserveBootDriverPtes @ 0x140A16750
 * Callers:
 *     MiInitializeDriverPtes @ 0x140A1630C (MiInitializeDriverPtes.c)
 * Callees:
 *     RtlSetBits @ 0x140007660 (RtlSetBits.c)
 *     memmove @ 0x1401D6880 (memmove.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiReserveBootDriverPtes(unsigned __int64 a1, int a2)
{
  __int64 v3; // rbp
  __int64 v4; // rcx
  const void **v5; // rdi
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // r15
  __int64 v8; // r9
  unsigned __int64 v9; // r10
  __int64 result; // rax
  size_t v11; // r13
  _RTL_BITMAP *v12; // r14
  unsigned int *v13; // rbx
  unsigned int v14; // [rsp+50h] [rbp+8h]

  v3 = ((dword_1404648B0 & 0xFFF) != 0) + a2 + ((unsigned int)dword_1404648B0 >> 12);
  v4 = (__int64)(a1 << 25) >> 16;
  if ( (PVOID)v4 != PsNtosImageBase && (PVOID)v4 != PsHalImageBase )
    v3 = (unsigned int)(dword_14046484C + v3);
  v5 = (const void **)qword_140464928[0];
  v6 = (a1 + 4088 + 8 * v3) & 0xFFFFFFFFFFFFF000uLL;
  v7 = a1 & 0xFFFFFFFFFFFFF000uLL;
  if ( qword_140464928[0] )
  {
    v8 = *((_QWORD *)qword_140464928[0] + 1);
    v9 = v8 + 8LL * *((unsigned int *)qword_140464928[0] + 4);
    if ( a1 + 8 * v3 <= v9 )
    {
      RtlSetBits((PRTL_BITMAP)qword_140464928[0] + 1, (__int64)(a1 - v8) >> 3, v3);
      return 1LL;
    }
    v5 = (const void **)((unsigned __int64)qword_140464928[0] & -(__int64)(a1 < v9));
    if ( v5 )
      v7 = *(_QWORD *)(((unsigned __int64)qword_140464928[0] & -(__int64)(a1 < v9)) + 8);
  }
  v11 = (unsigned __int64)(unsigned int)((__int64)(v6 - v7) >> 3) >> 3;
  v14 = (__int64)(v6 - v7) >> 3;
  result = (__int64)ExAllocatePoolWithTag(NonPagedPoolNx, v11 + 40, 0x70446D4Du);
  v12 = (_RTL_BITMAP *)result;
  if ( result )
  {
    v13 = (unsigned int *)(result + 40);
    memset((void *)(result + 40), 0, v11);
    v12[1].SizeOfBitMap = v14;
    v12[1].Buffer = v13;
    if ( v5 )
    {
      memmove(v13, v5[3], (unsigned __int64)*((unsigned int *)v5 + 4) >> 3);
      qword_140464928[0] = (PVOID)*v5;
      ExFreePoolWithTag(v5, 0);
    }
    RtlSetBits(v12 + 1, (__int64)(a1 - v7) >> 3, v3);
    v12[2].SizeOfBitMap = 0;
    *(&v12[2].SizeOfBitMap + 1) = 1;
    v12->Buffer = (unsigned int *)v7;
    *(PVOID *)&v12->SizeOfBitMap = qword_140464928[0];
    qword_140464928[0] = v12;
    return 1LL;
  }
  return result;
}
