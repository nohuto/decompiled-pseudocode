/*
 * XREFs of VrpInitializeNamespaceNodeList @ 0x140843E98
 * Callers:
 *     VrpHandleIoctlInitializeJobForVreg @ 0x1408425E8 (VrpHandleIoctlInitializeJobForVreg.c)
 * Callees:
 *     memmove @ 0x1401D6880 (memmove.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ULongLongMult @ 0x1402812BC (ULongLongMult.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall VrpInitializeNamespaceNodeList(__int64 a1)
{
  ULONGLONG *v1; // rdi
  ULONGLONG v2; // rcx
  unsigned int v3; // ebx
  ULONGLONG v4; // rax
  ULONGLONG v5; // rbp
  unsigned __int64 v6; // rax
  ULONGLONG v7; // rbp
  void *v8; // r14
  PVOID PoolWithTag; // rax
  void *v10; // rbx
  size_t v11; // r8
  void *v12; // rcx
  ULONGLONG NumberOfBytes; // [rsp+40h] [rbp+8h] BYREF
  ULONGLONG pullResult; // [rsp+48h] [rbp+10h] BYREF

  v1 = (ULONGLONG *)(a1 + 32);
  memset((void *)(a1 + 32), 0, 0x30uLL);
  v1[3] = 0LL;
  v1[2] = 0LL;
  v1[5] = 0LL;
  v1[4] = 16LL;
  v1[1] = 8LL;
  v2 = v1[3];
  if ( v2 < 0x14 )
  {
    v4 = v1[4];
    v5 = v4 - 1;
    v6 = v4 + 19;
    if ( v6 < 0x14 )
    {
      v3 = -2147483637;
      goto LABEL_20;
    }
    v7 = v6 & ~v5;
    if ( ULongLongMult(v2, 8uLL, &pullResult) < 0 || ULongLongMult(v7, v1[1], &NumberOfBytes) < 0 )
    {
      v3 = -2147483637;
      goto LABEL_17;
    }
    v8 = (void *)v1[5];
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, NumberOfBytes, 0x72615452u);
    v10 = PoolWithTag;
    if ( v8 )
    {
      if ( !PoolWithTag )
        goto LABEL_16;
      memset(PoolWithTag, 0, NumberOfBytes);
      v11 = pullResult;
      if ( pullResult >= NumberOfBytes )
        v11 = NumberOfBytes;
      memmove(v10, v8, v11);
      ExFreePoolWithTag(v8, 0x72615452u);
    }
    else
    {
      if ( !PoolWithTag )
        goto LABEL_16;
      memset(PoolWithTag, 0, NumberOfBytes);
    }
    if ( v10 )
    {
      v1[5] = (ULONGLONG)v10;
      v3 = 0;
      v1[3] = v7;
      goto LABEL_17;
    }
LABEL_16:
    v3 = -2147024882;
LABEL_17:
    if ( !v3 )
      return v3;
    goto LABEL_20;
  }
  v3 = -2147024809;
LABEL_20:
  v12 = (void *)v1[5];
  if ( v12 )
    ExFreePoolWithTag(v12, 0x72615452u);
  memset(v1, 0, 0x30uLL);
  return v3;
}
