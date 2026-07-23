/*
 * XREFs of MmGetEnclaveModuleList @ 0x1402BEDB0
 * Callers:
 *     PsGetProcessEnclaveModuleInfo @ 0x1402EC0C0 (PsGetProcessEnclaveModuleInfo.c)
 * Callees:
 *     MiObtainReferencedVadEx @ 0x1400747D0 (MiObtainReferencedVadEx.c)
 *     MiUnlockAndDereferenceVadShared @ 0x140075490 (MiUnlockAndDereferenceVadShared.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall MmGetEnclaveModuleList(unsigned __int64 a1, _QWORD *a2, unsigned int *a3)
{
  __int64 v5; // rax
  unsigned int v6; // ebx
  char *v7; // rsi
  __int64 **v9; // rdi
  unsigned int v10; // ecx
  __int64 **v11; // rax
  _QWORD *PoolWithTag; // r8
  __int64 *v13; // rdx
  unsigned int v14; // r9d
  __int64 v15; // rax
  __int64 v16; // rcx
  unsigned int v17; // [rsp+58h] [rbp+20h] BYREF

  v5 = MiObtainReferencedVadEx(a1, 2, (int *)&v17);
  v6 = 0;
  v7 = (char *)v5;
  if ( !v5 )
    return v17;
  if ( (*(_DWORD *)(v5 + 48) & 0x20000) == 0 || (*(_DWORD *)(v5 + 64) & 1) != 0 )
  {
    v6 = -1073741800;
  }
  else
  {
    v9 = (__int64 **)(v5 + 80);
    v10 = 0;
    v11 = *(__int64 ***)(v5 + 80);
    while ( v11 != v9 )
    {
      if ( v10 == -1 )
        goto LABEL_10;
      v11 = (__int64 **)*v11;
      ++v10;
    }
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 24LL * v10, 0x4C4D4556u);
    if ( !PoolWithTag )
    {
LABEL_10:
      v6 = -1073741670;
      goto LABEL_16;
    }
    v13 = *v9;
    v14 = 0;
    while ( v13 != (__int64 *)v9 )
    {
      v15 = v14++;
      v16 = 3 * v15;
      PoolWithTag[v16] = v13[2];
      PoolWithTag[v16 + 1] = v13[3];
      LODWORD(PoolWithTag[v16 + 2]) = *((_DWORD *)v13 + 9);
      HIDWORD(PoolWithTag[v16 + 2]) = *((_DWORD *)v13 + 10);
      v13 = (__int64 *)*v13;
    }
    *a2 = PoolWithTag;
    *a3 = v14;
  }
LABEL_16:
  MiUnlockAndDereferenceVadShared(v7);
  return v6;
}
