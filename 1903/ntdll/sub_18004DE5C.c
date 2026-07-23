/*
 * XREFs of sub_18004DE5C @ 0x18004DE5C
 * Callers:
 *     sub_18004DDEC @ 0x18004DDEC (sub_18004DDEC.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     RtlRbRemoveNode @ 0x180039FA0 (RtlRbRemoveNode.c)
 *     sub_18004E040 @ 0x18004E040 (sub_18004E040.c)
 *     sub_18004E0E4 @ 0x18004E0E4 (sub_18004E0E4.c)
 *     sub_18004E264 @ 0x18004E264 (sub_18004E264.c)
 *     sub_18004E2D4 @ 0x18004E2D4 (sub_18004E2D4.c)
 *     sub_18004E370 @ 0x18004E370 (sub_18004E370.c)
 *     sub_18004E9E0 @ 0x18004E9E0 (sub_18004E9E0.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     ZwFreeVirtualMemory @ 0x18009CAA0 (ZwFreeVirtualMemory.c)
 */

PVOID __fastcall sub_18004DE5C(PRTL_SRWLOCK SRWLock, ULONG_PTR *a2, unsigned __int64 a3)
{
  ULONG_PTR v3; // rsi
  unsigned __int64 v4; // rdi
  unsigned __int64 v7; // rcx
  ULONG_PTR v8; // rsi
  _RTL_BALANCED_NODE *v9; // rax
  __int64 v10; // rdi
  __int64 v11; // r14
  void *v12; // r14
  PVOID result; // rax
  __int64 v14; // rax
  char v15; // dl
  ULONG_PTR RegionSize; // [rsp+20h] [rbp-40h] BYREF
  PVOID BaseAddress; // [rsp+28h] [rbp-38h] BYREF
  __int64 v18; // [rsp+30h] [rbp-30h] BYREF
  __int64 v19; // [rsp+38h] [rbp-28h]
  __int64 v20; // [rsp+40h] [rbp-20h]
  ULONG_PTR v21; // [rsp+48h] [rbp-18h]

  v3 = *a2;
  v18 = 0x10000000100000LL;
  v4 = a3;
  v19 = 0x4000000000200000LL;
  if ( !v3 )
    __int2c();
  v7 = (unsigned __int64)(LOWORD(SRWLock[5].Ptr) << 20) >> 1;
  RegionSize = v3;
  if ( v3 <= v7 )
  {
    v8 = v3 >> 20;
    RtlAcquireSRWLockExclusive(SRWLock);
    v9 = (_RTL_BALANCED_NODE *)sub_18004E040(
                                 SRWLock,
                                 (unsigned __int16)v8,
                                 (unsigned __int16)(v4 >> 20),
                                 &v18,
                                 RegionSize);
    v10 = (__int64)v9;
    if ( v9 )
    {
      RtlRbRemoveNode((PRTL_RB_TREE)&SRWLock[1], v9);
      v11 = v18;
      if ( v18 != v10 )
      {
        *(_QWORD *)v10 = 0LL;
        *(_QWORD *)(v10 + 8) = 0LL;
        *(_QWORD *)(v10 + 16) = 0LL;
        *(_BYTE *)v10 = 1;
        *(_BYTE *)(v10 + 1) = BYTE4(SRWLock[5].Ptr);
        sub_18004E264(SRWLock, v10, (v11 - v10) >> 5);
        sub_18004E0E4(SRWLock, v10);
        v10 = v11;
      }
      goto LABEL_7;
    }
    RtlReleaseSRWLockExclusive(SRWLock);
    v10 = sub_18004E2D4(SRWLock);
    if ( v10 )
    {
      RtlAcquireSRWLockExclusive(SRWLock);
LABEL_7:
      v12 = (void *)(*((_QWORD *)SRWLock[3].Ptr + 1)
                   + ((v10 - *((_QWORD *)SRWLock[3].Ptr + 5)) >> *((_DWORD *)SRWLock[3].Ptr + 6) << 20));
      *(_QWORD *)v10 = 0LL;
      *(_QWORD *)(v10 + 8) = 0LL;
      *(_QWORD *)(v10 + 16) = 0LL;
      *(_BYTE *)v10 = 1;
      *(_BYTE *)(v10 + 1) = BYTE4(SRWLock[5].Ptr);
      if ( *(_WORD *)(v10 + 24) > (unsigned __int16)v8 )
      {
        v14 = sub_18004E264(SRWLock, v10, (unsigned __int16)v8);
        sub_18004E0E4(SRWLock, v14);
      }
      BaseAddress = v12;
      RtlReleaseSRWLockExclusive(SRWLock);
      return BaseAddress;
    }
    return 0LL;
  }
  if ( a3 <= *((unsigned int *)&v18 + (((unsigned __int64)BYTE6(SRWLock[5].Ptr) >> 1) & 3)) )
    v4 = *((unsigned int *)&v18 + (((unsigned __int64)BYTE6(SRWLock[5].Ptr) >> 1) & 3));
  RegionSize = v3 - ((v4 - 1) & (v4 + v3 - 1)) + v4 - 1;
  result = (PVOID)sub_18004E9E0(SRWLock, &RegionSize, v4);
  BaseAddress = result;
  if ( result )
  {
    v15 = BYTE4(SRWLock[5].Ptr);
    v18 = 5LL;
    BYTE1(v18) = v15;
    v21 = RegionSize >> 20;
    v19 = 0LL;
    v20 = 0LL;
    if ( sub_18004E370(SRWLock, result, &v18) )
    {
      *a2 = RegionSize;
      return BaseAddress;
    }
    ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
    return 0LL;
  }
  return result;
}
