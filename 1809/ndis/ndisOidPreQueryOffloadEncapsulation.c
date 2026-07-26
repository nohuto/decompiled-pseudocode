/*
 * XREFs of ndisOidPreQueryOffloadEncapsulation @ 0x1C0047AF4
 * Callers:
 *     ndisOidPreOffloadEncapsulation @ 0x1C00CF7C0 (ndisOidPreOffloadEncapsulation.c)
 * Callees:
 *     memmove @ 0x1C0026E40 (memmove.c)
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
  __int64 v9; // rdx
  KIRQL v10; // al
  int v11; // ebx
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v15; // [rsp+60h] [rbp+8h]
  __int64 v16; // [rsp+68h] [rbp+10h]

  v1 = *a1;
  v2 = 0;
  v3 = a1[4];
  v5 = a1[3];
  v6 = 1;
  v7 = 0LL;
  v8 = 0;
  v9 = a1[2];
  v16 = v9;
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
    v15 = *(_QWORD *)(v9 + 32);
    v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v15 + 96));
    *(_QWORD *)(v15 + 520) = KeGetCurrentThread();
    *(_DWORD *)(v15 + 1864) = 2309274;
    v11 = *(_DWORD *)(v16 + 60);
    *(_QWORD *)(v15 + 520) = 0LL;
    *(_DWORD *)(v15 + 1864) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)(v15 + 96), v10);
    if ( (v11 & 1) != 0 )
    {
      v12 = *(_QWORD *)(v15 + 4128);
      v7 = (const void *)((v12 + 788) & -(__int64)(v12 != 0));
      v8 = v12 != 0 ? 0x1C : 0;
      goto LABEL_12;
    }
  }
  else if ( v1 )
  {
    v13 = *(_QWORD *)(v1 + 4128);
    if ( v13 )
    {
      v7 = (const void *)(v13 + 760);
      v8 = 28;
    }
  }
  v6 = 0;
LABEL_12:
  if ( v8 )
    goto LABEL_13;
  return v6;
}
