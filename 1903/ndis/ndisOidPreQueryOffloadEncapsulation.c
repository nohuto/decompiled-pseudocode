/*
 * XREFs of ndisOidPreQueryOffloadEncapsulation @ 0x1C006E05C
 * Callers:
 *     ndisOidPreOffloadEncapsulation @ 0x1C00255E0 (ndisOidPreOffloadEncapsulation.c)
 * Callees:
 *     memmove @ 0x1C0041100 (memmove.c)
 */

char __fastcall ndisOidPreQueryOffloadEncapsulation(__int64 *a1)
{
  __int64 v1; // rax
  int v2; // esi
  __int64 v3; // r13
  __int64 v5; // rcx
  char v6; // r14
  const void *v7; // r15
  unsigned int v8; // ebp
  __int64 v9; // rbx
  KIRQL v10; // al
  int v11; // ebx
  KSPIN_LOCK v12; // rdx
  __int64 v13; // rax
  KSPIN_LOCK *v15; // [rsp+50h] [rbp+8h]

  v1 = *a1;
  v2 = 0;
  v3 = a1[4];
  v5 = a1[3];
  v6 = 1;
  v7 = 0LL;
  v8 = 0;
  v9 = a1[2];
  if ( v5 )
  {
    v7 = *(const void **)(v5 + 696);
    if ( !v7 )
    {
      *((_DWORD *)a1 + 10) = 0;
      *(_DWORD *)(v3 + 52) = 0;
      return 1;
    }
    v8 = 28;
LABEL_13:
    if ( v8 > *(_DWORD *)(v3 + 48) )
    {
      *(_DWORD *)(v3 + 56) = v8;
      v2 = -1073676266;
    }
    else
    {
      memmove(*(void **)(v3 + 40), v7, v8);
      *(_DWORD *)(v3 + 52) = v8;
    }
    *((_DWORD *)a1 + 10) = v2;
    return 1;
  }
  if ( v9 )
  {
    v15 = *(KSPIN_LOCK **)(v9 + 32);
    v10 = KeAcquireSpinLockRaiseToDpc(v15 + 12);
    v15[65] = (KSPIN_LOCK)KeGetCurrentThread();
    v11 = *(_DWORD *)(v9 + 60);
    v15[65] = 0LL;
    KeReleaseSpinLock(v15 + 12, v10);
    if ( (v11 & 1) != 0 )
    {
      v12 = v15[512];
      v7 = (const void *)((v12 + 900) & -(__int64)(v12 != 0));
      v8 = v12 != 0 ? 0x1C : 0;
      goto LABEL_12;
    }
  }
  else if ( v1 )
  {
    v13 = *(_QWORD *)(v1 + 4096);
    if ( v13 )
    {
      v7 = (const void *)(v13 + 872);
      v8 = 28;
    }
  }
  v6 = 0;
LABEL_12:
  if ( v8 )
    goto LABEL_13;
  return v6;
}
