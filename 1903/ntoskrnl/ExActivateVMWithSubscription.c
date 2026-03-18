/*
 * XREFs of ExActivateVMWithSubscription @ 0x14090BC4C
 * Callers:
 *     ExpGetVMActivationStatus @ 0x14072ADC0 (ExpGetVMActivationStatus.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401D6880 (memmove.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     sub_14072B4E0 @ 0x14072B4E0 (sub_14072B4E0.c)
 *     ExpGetSubscriptionPfn @ 0x14090C6D4 (ExpGetSubscriptionPfn.c)
 */

__int64 __fastcall ExActivateVMWithSubscription(_DWORD *a1, _DWORD *a2, unsigned int a3, _DWORD *a4, _BYTE *a5)
{
  const wchar_t *v6; // rdi
  unsigned int v7; // ebp
  unsigned int v8; // ebx
  PVOID PoolWithTag; // rax
  void *v10; // r14
  unsigned int v11; // ebx
  int v12; // eax
  PVOID P[9]; // [rsp+60h] [rbp-48h] BYREF

  P[0] = 0LL;
  ExpGetSubscriptionPfn(P);
  v6 = L"8:";
  v7 = 0;
  while ( 1 )
  {
    v8 = *v6 + 2;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, v8, 0x20534C53u);
    v10 = PoolWithTag;
    if ( !PoolWithTag )
      break;
    memset(PoolWithTag, 0, v8);
    memmove(v10, *((const void **)v6 + 1), *v6);
    v11 = qword_1409AD428(P[0], 0LL, 0LL, 0LL, v10, v8, a2, a3, a4, a1, 0LL);
    v12 = -1073741789;
    if ( (int)(v11 + 0x80000000) < 0 || v11 == -1073741789 )
    {
      if ( a3 && v11 != -1073741789 )
      {
        v12 = sub_14072B4E0(a1, a2, a3, a4, 1);
        *a5 = 1;
      }
      v11 = v12;
    }
    ExFreePoolWithTag(v10, 0);
    if ( *a5 != 1 )
    {
      ++v7;
      v6 += 8;
      if ( v7 < 2 )
        continue;
    }
    goto LABEL_13;
  }
  v11 = -1073741801;
LABEL_13:
  if ( P[0] )
    ExFreePoolWithTag(P[0], 0);
  return v11;
}
