/*
 * XREFs of ObpMarkDirectoryObjectsTemporary @ 0x14068EC98
 * Callers:
 *     ObpMarkDirectoryTreeTemporary @ 0x14068EC20 (ObpMarkDirectoryTreeTemporary.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x14004E220 (ObfReferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x14004F160 (ExReleasePushLockEx.c)
 *     KeLeaveCriticalRegion @ 0x14004F410 (KeLeaveCriticalRegion.c)
 *     ObpUnlockDirectory @ 0x140109F98 (ObpUnlockDirectory.c)
 *     ObpLockDirectoryExclusive @ 0x14010A050 (ObpLockDirectoryExclusive.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     ObpDeleteSymbolicLinkName @ 0x14068F354 (ObpDeleteSymbolicLinkName.c)
 */

void __fastcall ObpMarkDirectoryObjectsTemporary(PVOID Object)
{
  __int64 v2; // rax
  _QWORD **v3; // r12
  _QWORD *v4; // r13
  _QWORD *v5; // rbx
  _QWORD *v6; // r14
  char *v7; // rcx
  char v8; // bp
  char *v9; // rdi
  char *v10; // r15
  struct _KTHREAD *CurrentThread; // rax
  struct _OBJECT_TYPE *v12; // rbp
  _QWORD *v13; // rdi
  struct _KTHREAD *v14; // rax
  ULONG_PTR BugCheckParameter2; // [rsp+20h] [rbp-78h]
  _QWORD *v16; // [rsp+28h] [rbp-70h]
  __int128 v17; // [rsp+30h] [rbp-68h] BYREF
  __int16 v18; // [rsp+4Eh] [rbp-4Ah]
  int v19; // [rsp+50h] [rbp-48h]
  PVOID Objecta; // [rsp+A8h] [rbp+10h]
  _QWORD **v21; // [rsp+B0h] [rbp+18h]
  __int64 v22; // [rsp+B8h] [rbp+20h]

  v18 = 0;
  v19 = -60876;
  v17 = 0LL;
  ObpLockDirectoryExclusive((__int64)&v17, Object);
  v2 = 37LL;
  v21 = (_QWORD **)Object;
  v22 = 37LL;
  v3 = (_QWORD **)Object;
  v4 = Object;
  do
  {
    v5 = *v3;
    v6 = v4;
    if ( *v3 )
    {
      do
      {
        v7 = (char *)v5[1];
        v8 = 0;
        v16 = v6;
        Objecta = v7;
        v9 = v7 - 48;
        if ( (*(v7 - 22) & 2) != 0 )
          v10 = &v9[-ObpInfoMaskToOffset[*(v7 - 22) & 3]];
        else
          v10 = 0LL;
        ObfReferenceObject(v7);
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        BugCheckParameter2 = (ULONG_PTR)(v9 + 16);
        ExAcquirePushLockExclusiveEx((ULONG_PTR)(v9 + 16), 0LL);
        v9[27] &= ~0x10u;
        if ( !*((_QWORD *)v9 + 1) && !*((_DWORD *)v10 + 6) )
        {
          v12 = (struct _OBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)v9[24] ^ (unsigned __int64)BYTE1(v9)];
          if ( v12 == ObpSymbolicLinkObjectType )
            ObpDeleteSymbolicLinkName(v9 + 48);
          v13 = v5;
          *v6 = *v5;
          v5 = (_QWORD *)*v5;
          if ( v12 == ObpDirectoryObjectType )
          {
            v14 = KeGetCurrentThread();
            --v14->KernelApcDisable;
            ExAcquirePushLockExclusiveEx((ULONG_PTR)&ObpPendingObjectDirectoryListLock, 0LL);
            *v13 = ObpPendingObjectDirectoryList;
            ObpPendingObjectDirectoryList = v13;
            ExReleasePushLockEx((ULONG_PTR)&ObpPendingObjectDirectoryListLock, 0LL);
            KeLeaveCriticalRegion();
          }
          else
          {
            ObfDereferenceObject(Objecta);
            ExFreePoolWithTag(v13, 0);
          }
          *(_QWORD *)v10 = 0LL;
          ObfDereferenceObject(Object);
          v8 = 1;
        }
        v6 = v5;
        ExReleasePushLockEx(BugCheckParameter2, 0LL);
        KeLeaveCriticalRegion();
        ObfDereferenceObject(Objecta);
        if ( v8 )
          v6 = v16;
        else
          v5 = (_QWORD *)*v5;
      }
      while ( v5 );
      v3 = v21;
      v2 = v22;
    }
    ++v3;
    ++v4;
    --v2;
    v21 = v3;
    v22 = v2;
  }
  while ( v2 );
  ObpUnlockDirectory((__int64)Object, (__int64)&v17);
}
