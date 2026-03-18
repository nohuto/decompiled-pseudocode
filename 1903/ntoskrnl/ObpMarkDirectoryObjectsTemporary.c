/*
 * XREFs of ObpMarkDirectoryObjectsTemporary @ 0x1406C7B00
 * Callers:
 *     ObpMarkDirectoryTreeTemporary @ 0x1406C7A88 (ObpMarkDirectoryTreeTemporary.c)
 * Callees:
 *     ObpUnlockDirectory @ 0x140003F00 (ObpUnlockDirectory.c)
 *     KeLeaveCriticalRegion @ 0x14003E220 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x14003E330 (ObfReferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x14003F240 (ExReleasePushLockEx.c)
 *     ObpLockDirectoryExclusive @ 0x14011F12C (ObpLockDirectoryExclusive.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     ObpDeleteSymbolicLinkName @ 0x1406C7D04 (ObpDeleteSymbolicLinkName.c)
 */

void __fastcall ObpMarkDirectoryObjectsTemporary(PVOID Object)
{
  __int64 v2; // rax
  _QWORD **v3; // r12
  _QWORD *v4; // r13
  _QWORD *v5; // rbx
  _QWORD *v6; // rsi
  char *v7; // rcx
  char v8; // r15
  char *v9; // rdi
  char *v10; // r14
  struct _KTHREAD *CurrentThread; // rax
  struct _OBJECT_TYPE *v12; // r15
  _QWORD *v13; // rdi
  struct _KTHREAD *v14; // rax
  __int64 v15; // [rsp+20h] [rbp-78h]
  ULONG_PTR BugCheckParameter2; // [rsp+28h] [rbp-70h]
  _QWORD *v17; // [rsp+30h] [rbp-68h]
  __int128 v18; // [rsp+38h] [rbp-60h] BYREF
  __int64 v19; // [rsp+48h] [rbp-50h]
  __int64 v20; // [rsp+50h] [rbp-48h]
  int v21; // [rsp+58h] [rbp-40h]
  int v22; // [rsp+5Ch] [rbp-3Ch]
  PVOID Objecta; // [rsp+A8h] [rbp+10h]
  _QWORD *v24; // [rsp+B0h] [rbp+18h]
  _QWORD **v25; // [rsp+B8h] [rbp+20h]

  v21 = -60876;
  v19 = 0LL;
  v20 = 0LL;
  v22 = 0;
  v18 = 0LL;
  ObpLockDirectoryExclusive((__int64)&v18, Object);
  v2 = 37LL;
  v25 = (_QWORD **)Object;
  v15 = 37LL;
  v3 = (_QWORD **)Object;
  v4 = Object;
  v24 = Object;
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
        v17 = v6;
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
          v6 = v17;
        else
          v5 = (_QWORD *)*v5;
      }
      while ( v5 );
      v3 = v25;
      v4 = v24;
      v2 = v15;
    }
    ++v4;
    ++v3;
    --v2;
    v24 = v4;
    v15 = v2;
    v25 = v3;
  }
  while ( v2 );
  ObpUnlockDirectory((__int64)Object, (__int64)&v18);
}
