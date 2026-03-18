/*
 * XREFs of CmosConfigSpaceHandler @ 0x1C004EE00
 * Callers:
 *     <none>
 * Callees:
 *     AMLIGetParent @ 0x1C000FF40 (AMLIGetParent.c)
 *     AMLIDereferenceHandleEx @ 0x1C001145C (AMLIDereferenceHandleEx.c)
 *     _guard_dispatch_icall_nop @ 0x1C00319E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0031D40 (memset.c)
 *     CmosConfigSpaceHandlerWorker @ 0x1C004EF44 (CmosConfigSpaceHandlerWorker.c)
 *     CmosGetOpRegionType @ 0x1C004EFD4 (CmosGetOpRegionType.c)
 */

__int64 __fastcall CmosConfigSpaceHandler(
        int a1,
        volatile signed __int32 *a2,
        int a3,
        int a4,
        __int64 a5,
        int a6,
        __int64 a7,
        __int64 a8)
{
  PVOID PoolWithTag; // rax
  void *v13; // rbx
  __int64 result; // rax
  char v15; // al
  __int64 v16; // rdx
  int OpRegionType; // esi

  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x48uLL, 0x46706341u);
  v13 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  memset(PoolWithTag, 0, 0x48uLL);
  v15 = gdwfAMLI;
  *(_DWORD *)v13 = a1;
  *((_QWORD *)v13 + 1) = a2;
  dword_1C0082858 = 0;
  pszDest = 0;
  if ( (v15 & 4) != 0 )
    _InterlockedIncrement(a2 + 2);
  *((_QWORD *)v13 + 3) = a5;
  *((_DWORD *)v13 + 8) = a6;
  *((_QWORD *)v13 + 5) = a7;
  *((_QWORD *)v13 + 6) = a8;
  *((_DWORD *)v13 + 4) = a3;
  *((_DWORD *)v13 + 5) = a4;
  *((_QWORD *)v13 + 7) = AMLIGetParent((__int64)a2);
  if ( *(_QWORD *)(*(_QWORD *)a2 + 104LL) )
    return CmosConfigSpaceHandlerWorker(a2, 0LL, 0LL, v13);
  OpRegionType = CmosGetOpRegionType(a2, v16, v13);
  result = 259LL;
  if ( OpRegionType == 259 )
    return result;
  if ( OpRegionType >= 0 )
    return CmosConfigSpaceHandlerWorker(a2, 0LL, 0LL, v13);
  (*((void (__fastcall **)(_QWORD))v13 + 5))(*((_QWORD *)v13 + 6));
  AMLIDereferenceHandleEx(*((volatile signed __int32 **)v13 + 1));
  AMLIDereferenceHandleEx(*((volatile signed __int32 **)v13 + 7));
  ExFreePoolWithTag(v13, 0);
  return (unsigned int)OpRegionType;
}
