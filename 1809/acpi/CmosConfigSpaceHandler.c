/*
 * XREFs of CmosConfigSpaceHandler @ 0x1C004D540
 * Callers:
 *     <none>
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x1C000B920 (AMLIDereferenceHandleEx.c)
 *     AMLIGetParent @ 0x1C001AEEC (AMLIGetParent.c)
 *     _guard_dispatch_icall_nop @ 0x1C0030D60 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00310C0 (memset.c)
 *     CmosConfigSpaceHandlerWorker @ 0x1C004D684 (CmosConfigSpaceHandlerWorker.c)
 *     CmosGetOpRegionType @ 0x1C004D714 (CmosGetOpRegionType.c)
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
  _QWORD *PoolWithTag; // rax
  _QWORD *v13; // rbx
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
  v13[1] = a2;
  dword_1C0080868 = 0;
  pszDest = 0;
  if ( (v15 & 4) != 0 )
    _InterlockedIncrement(a2 + 2);
  v13[3] = a5;
  *((_DWORD *)v13 + 8) = a6;
  v13[5] = a7;
  v13[6] = a8;
  *((_DWORD *)v13 + 4) = a3;
  *((_DWORD *)v13 + 5) = a4;
  v13[7] = AMLIGetParent((__int64)a2);
  if ( *(_QWORD *)(*(_QWORD *)a2 + 104LL) )
    return CmosConfigSpaceHandlerWorker(a2, 0LL, 0LL, v13);
  OpRegionType = CmosGetOpRegionType(a2, v16, v13);
  result = 259LL;
  if ( OpRegionType == 259 )
    return result;
  if ( OpRegionType >= 0 )
    return CmosConfigSpaceHandlerWorker(a2, 0LL, 0LL, v13);
  ((void (__fastcall *)(_QWORD))v13[5])(v13[6]);
  AMLIDereferenceHandleEx(v13[1]);
  AMLIDereferenceHandleEx(v13[7]);
  ExFreePoolWithTag(v13, 0);
  return (unsigned int)OpRegionType;
}
