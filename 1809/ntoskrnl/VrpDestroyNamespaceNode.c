/*
 * XREFs of VrpDestroyNamespaceNode @ 0x14080B39C
 * Callers:
 *     VrpHandleIoctlCreateMultipleNamespaceNodes @ 0x14080974C (VrpHandleIoctlCreateMultipleNamespaceNodes.c)
 *     VrpHandleIoctlCreateNamespaceNode @ 0x140809AA4 (VrpHandleIoctlCreateNamespaceNode.c)
 *     VrpHandleIoctlUnloadDynamicallyLoadedHives @ 0x14080AAB0 (VrpHandleIoctlUnloadDynamicallyLoadedHives.c)
 *     VrpDestroyNamespaceNodeList @ 0x14080B640 (VrpDestroyNamespaceNodeList.c)
 *     VrpPostUnloadKey @ 0x14080C7F0 (VrpPostUnloadKey.c)
 *     VrpPreLoadKey @ 0x14080C964 (VrpPreLoadKey.c)
 * Callees:
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x1400BF8F0 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     ZwOpenKey @ 0x1401B8530 (ZwOpenKey.c)
 *     ZwDeleteKey @ 0x1401B9CB0 (ZwDeleteKey.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ULongLongMult @ 0x14026D9D8 (ULongLongMult.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     VrpFindExactNamespaceNode @ 0x14080B6F4 (VrpFindExactNamespaceNode.c)
 */

__int64 __fastcall VrpDestroyNamespaceNode(ULONGLONG *a1, __int64 a2)
{
  unsigned int v4; // r13d
  __int64 v5; // r9
  ULONGLONG v6; // rdx
  char *v7; // r14
  __int64 v8; // rdi
  __int64 v9; // r9
  ULONGLONG v10; // r8
  unsigned __int64 v11; // r8
  ULONGLONG v12; // rcx
  ULONGLONG v13; // r15
  size_t v14; // r14
  void *v15; // r12
  PVOID PoolWithTag; // rax
  void *v17; // rdi
  size_t v18; // r8
  void *v19; // rcx
  void *v20; // rcx
  void *v21; // rcx
  void *v22; // rcx
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+20h] [rbp-30h] BYREF
  ULONGLONG ullMultiplier; // [rsp+98h] [rbp+48h] BYREF
  ULONGLONG pullResult; // [rsp+A0h] [rbp+50h] BYREF

  v4 = 0;
  if ( VrpFindExactNamespaceNode(a1, a2, &ullMultiplier) == a2 )
  {
    v4 = 1;
    if ( ullMultiplier < a1[6] && ULongLongMult(a1[5], ullMultiplier, &ullMultiplier) >= 0 )
    {
      v6 = a1[9];
      if ( v6 + ullMultiplier >= v6 )
      {
        v7 = (char *)(v6 + ullMultiplier);
        v8 = a1[6] - v5 - 1;
        ullMultiplier = v8;
        if ( v8 )
        {
          if ( ULongLongMult(v8, a1[5], &ullMultiplier) < 0 )
            goto LABEL_24;
          if ( ULongLongMult(a1[5], v9 + 1, &pullResult) < 0 )
            goto LABEL_24;
          v10 = a1[9];
          if ( v10 + pullResult < v10 )
            goto LABEL_24;
          v8 = ullMultiplier;
          memmove(v7, (const void *)(v10 + pullResult), ullMultiplier);
        }
        memset(&v7[v8], 0, a1[5]);
        v11 = --a1[6];
        if ( v11 > 0x10 )
        {
          v12 = a1[7];
          if ( v12 * a1[5] >= 0x400 && v11 < v12 >> 2 )
          {
            v13 = v12 >> 1;
            if ( ULongLongMult(v12, a1[5], &pullResult) >= 0 && ULongLongMult(v13, a1[5], &ullMultiplier) >= 0 )
            {
              v14 = ullMultiplier;
              v15 = (void *)a1[9];
              PoolWithTag = ExAllocatePoolWithTag(PagedPool, ullMultiplier, 0x72615452u);
              v17 = PoolWithTag;
              if ( v15 )
              {
                if ( !PoolWithTag )
                  goto LABEL_24;
                memset(PoolWithTag, 0, v14);
                v18 = pullResult;
                if ( pullResult >= v14 )
                  v18 = v14;
                memmove(v17, v15, v18);
                ExFreePoolWithTag(v15, 0x72615452u);
              }
              else
              {
                if ( !PoolWithTag )
                  goto LABEL_24;
                memset(PoolWithTag, 0, v14);
              }
              if ( v17 )
              {
                a1[9] = (ULONGLONG)v17;
                a1[7] = v13;
              }
            }
          }
        }
      }
    }
  }
LABEL_24:
  if ( (*(_DWORD *)(a2 + 56) & 0xC0000000) == 0xC0000000 )
  {
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)(a2 + 40);
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwOpenKey((PHANDLE)&ullMultiplier, 0xF003Fu, &ObjectAttributes) >= 0 )
    {
      ZwDeleteKey((HANDLE)ullMultiplier);
      ZwClose((HANDLE)ullMultiplier);
    }
  }
  v19 = *(void **)(a2 + 16);
  if ( v19 )
    ObDereferenceObjectDeferDeleteWithTag(v19, 0x67655256u);
  v20 = *(void **)(a2 + 8);
  if ( v20 )
    ExFreePoolWithTag(v20, 0x67655256u);
  v21 = *(void **)(a2 + 32);
  if ( v21 )
    ExFreePoolWithTag(v21, 0x67655256u);
  v22 = *(void **)(a2 + 48);
  if ( v22 )
    ExFreePoolWithTag(v22, 0x67655256u);
  ExFreePoolWithTag((PVOID)a2, 0x67655256u);
  return v4;
}
