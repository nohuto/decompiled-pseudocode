/*
 * XREFs of CcPurgeAndClearCacheSection @ 0x140125D84
 * Callers:
 *     CcSetFileSizesEx @ 0x14007D170 (CcSetFileSizesEx.c)
 * Callees:
 *     MmSetAddressRangeModifiedEx @ 0x14005E4D0 (MmSetAddressRangeModifiedEx.c)
 *     KeSetEvent @ 0x140067720 (KeSetEvent.c)
 *     CcSetDirtyInMask @ 0x14006EF20 (CcSetDirtyInMask.c)
 *     MmFlushSection @ 0x140077AD0 (MmFlushSection.c)
 *     CcReferenceSharedCacheMapFileObject @ 0x14007F7C8 (CcReferenceSharedCacheMapFileObject.c)
 *     CcDereferenceSharedCacheMapFileObject @ 0x14007FEF4 (CcDereferenceSharedCacheMapFileObject.c)
 *     CcGetVirtualAddress @ 0x1400D61E0 (CcGetVirtualAddress.c)
 *     CcPurgeCacheSection @ 0x1400DF560 (CcPurgeCacheSection.c)
 *     CcUpdateSharedCacheMapFlag @ 0x140126200 (CcUpdateSharedCacheMapFlag.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 */

__int64 __fastcall CcPurgeAndClearCacheSection(__int64 a1, LARGE_INTEGER *a2)
{
  LARGE_INTEGER *v2; // r14
  __int64 v4; // r9
  ULONG_PTR v5; // r13
  BOOLEAN v6; // bl
  __int64 QuadPart; // rbx
  unsigned int v9; // r12d
  __int64 v10; // rbx
  struct _KEVENT *v11; // rcx
  __int64 v12; // r8
  int v13; // [rsp+30h] [rbp-78h] BYREF
  __int64 v14[2]; // [rsp+38h] [rbp-70h] BYREF
  void *VirtualAddress; // [rsp+48h] [rbp-60h]
  volatile signed __int32 *v16; // [rsp+50h] [rbp-58h] BYREF
  _QWORD v17[10]; // [rsp+58h] [rbp-50h] BYREF

  v2 = a2;
  v14[0] = 0LL;
  v17[0] = 0LL;
  v17[1] = 0LL;
  if ( (*(_DWORD *)(a1 + 152) & 0x2000) != 0 )
  {
    if ( ((unsigned __int8)a2 & 1) == 0 )
      return 3221226549LL;
    v2 = (LARGE_INTEGER *)((unsigned __int64)a2 ^ 1);
  }
  v5 = CcReferenceSharedCacheMapFileObject(a1);
  v14[1] = v5;
  if ( (v2->LowPart & 0xFFF) == 0 )
    goto LABEL_3;
  QuadPart = v2->QuadPart;
  v14[0] = v2->QuadPart;
  v2 = (LARGE_INTEGER *)v14;
  if ( *(_QWORD *)(a1 + 168) && *(_QWORD *)(a1 + 88) )
  {
    v9 = 4096 - (QuadPart & 0xFFF);
    VirtualAddress = (void *)CcGetVirtualAddress(a1, QuadPart, (__int64 **)&v16, &v13, 1, 0);
    memset(VirtualAddress, 0, v9);
    if ( QuadPart > *(_QWORD *)(a1 + 48) )
    {
      MmSetAddressRangeModifiedEx((unsigned __int64)VirtualAddress, 1LL);
      LOBYTE(v12) = 1;
      CcUpdateSharedCacheMapFlag(a1, 0x20000LL, v12);
    }
    else
    {
      CcSetDirtyInMask((struct _FAST_MUTEX *)a1, v14, v9, 0LL);
    }
    v14[0] = v9 + QuadPart;
    v10 = *((_QWORD *)v16 + 1);
    if ( !(unsigned __int16)_InterlockedDecrement(v16 + 4) )
    {
      v11 = *(struct _KEVENT **)(v10 + 184);
      if ( v11 )
        KeSetEvent(v11, 0, 0);
      _InterlockedDecrement((volatile signed __int32 *)(v10 + 544));
    }
    goto LABEL_3;
  }
  MmFlushSection(*(_QWORD *)(v5 + 40), v14, 1LL, v4, v17, 0);
  if ( SLODWORD(v17[0]) >= 0 )
  {
LABEL_3:
    v6 = CcPurgeCacheSection(*(PSECTION_OBJECT_POINTERS *)(v5 + 40), v2, 0, 0);
    CcDereferenceSharedCacheMapFileObject(a1, v5);
    return v6 == 0 ? 0xC0000435 : 0;
  }
  return LODWORD(v17[0]);
}
