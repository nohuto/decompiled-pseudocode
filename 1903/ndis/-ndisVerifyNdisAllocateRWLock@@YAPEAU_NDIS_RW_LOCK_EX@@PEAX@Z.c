/*
 * XREFs of ?ndisVerifyNdisAllocateRWLock@@YAPEAU_NDIS_RW_LOCK_EX@@PEAX@Z @ 0x1C00C3E60
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00410C0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0041440 (memset.c)
 *     ?ndisInitializeRWLock@@YAEPEAU_NDIS_RW_LOCK_EX@@PEAX@Z @ 0x1C00C3D08 (-ndisInitializeRWLock@@YAEPEAU_NDIS_RW_LOCK_EX@@PEAX@Z.c)
 */

struct _NDIS_RW_LOCK_EX *__fastcall ndisVerifyNdisAllocateRWLock(void *a1)
{
  _QWORD *v2; // rax
  _QWORD *v3; // rbx
  void *retaddr; // [rsp+38h] [rbp+0h]

  v2 = (_QWORD *)(*((__int64 (__fastcall **)(__int64, __int64, __int64, __int64, void *))ndisVerifierWdmDispatch + 6))(
                   512LL,
                   112LL,
                   2003977294LL,
                   16LL,
                   retaddr);
  v3 = v2;
  if ( !v2 )
    return 0LL;
  memset(v2, 0, 0x28uLL);
  v3[5] = 0LL;
  v3[6] = 0LL;
  v3[7] = 0LL;
  v3[8] = 0LL;
  v3[9] = 0LL;
  v3[10] = 0LL;
  v3[11] = 0LL;
  v3[12] = 0LL;
  *((_DWORD *)v3 + 26) = 0;
  *((_DWORD *)v3 + 27) = 0;
  *(_DWORD *)v3 = 1447843666;
  if ( !ndisInitializeRWLock((struct _NDIS_RW_LOCK_EX *)v3, a1) )
  {
    ExFreePoolWithTag(v3, 0x7772444Eu);
    return 0LL;
  }
  return (struct _NDIS_RW_LOCK_EX *)v3;
}
