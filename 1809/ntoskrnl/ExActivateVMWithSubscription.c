/*
 * XREFs of ExActivateVMWithSubscription @ 0x1408CF948
 * Callers:
 *     ExpGetVMActivationStatus @ 0x140705308 (ExpGetVMActivationStatus.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     sub_140705868 @ 0x140705868 (sub_140705868.c)
 *     ExpGetSubscriptionPfn @ 0x1408D0344 (ExpGetSubscriptionPfn.c)
 */

__int64 __fastcall ExActivateVMWithSubscription(_DWORD *a1, _DWORD *a2, unsigned int a3, _DWORD *a4, _BYTE *a5)
{
  const wchar_t *v7; // rdi
  unsigned int v8; // esi
  unsigned int v9; // ebx
  PVOID PoolWithTag; // rax
  void *v11; // rbp
  unsigned int v12; // ebx
  int v13; // eax
  _QWORD v15[9]; // [rsp+60h] [rbp-48h] BYREF

  v15[0] = 0LL;
  ExpGetSubscriptionPfn(v15);
  v7 = L"8:";
  v8 = 0;
  while ( 1 )
  {
    v9 = *v7 + 2;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, v9, 0x20534C53u);
    v11 = PoolWithTag;
    if ( !PoolWithTag )
      break;
    memset(PoolWithTag, 0, v9);
    memmove(v11, *((const void **)v7 + 1), *v7);
    v12 = qword_14096E398(v15[0], 0LL, 0LL, 0LL, v11, v9, a2, a3, a4, a1, 0LL);
    v13 = -1073741789;
    if ( (int)(v12 + 0x80000000) < 0 || v12 == -1073741789 )
    {
      if ( a3 && v12 != -1073741789 )
      {
        v13 = sub_140705868(a1, a2, a3, a4, 1);
        *a5 = 1;
      }
      v12 = v13;
    }
    ExFreePoolWithTag(v11, 0);
    if ( *a5 != 1 )
    {
      ++v8;
      v7 += 8;
      if ( v8 < 2 )
        continue;
    }
    return v12;
  }
  return (unsigned int)-1073741801;
}
