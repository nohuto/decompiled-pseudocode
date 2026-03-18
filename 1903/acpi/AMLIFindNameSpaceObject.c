/*
 * XREFs of AMLIFindNameSpaceObject @ 0x1C00084CC
 * Callers:
 *     ACPIIoctlEnumChildren @ 0x1C000819C (ACPIIoctlEnumChildren.c)
 * Callees:
 *     GetObjectPath @ 0x1C0006C18 (GetObjectPath.c)
 *     FindNSObjMainNoLock @ 0x1C0008600 (FindNSObjMainNoLock.c)
 *     GetBaseObject @ 0x1C0010D44 (GetBaseObject.c)
 *     DereferenceObjectEx @ 0x1C0013B20 (DereferenceObjectEx.c)
 *     PrintDebugMessage @ 0x1C0020B04 (PrintDebugMessage.c)
 *     __security_check_cookie @ 0x1C0031700 (__security_check_cookie.c)
 *     memmove @ 0x1C0031A00 (memmove.c)
 */

__int64 __fastcall AMLIFindNameSpaceObject(__int64 a1, __int64 a2, __int64 a3, _BYTE *a4)
{
  size_t v7; // rbx
  _BYTE *PoolWithTag; // rdi
  __int64 BaseObject; // rax
  __int64 v10; // rbp
  __int64 v11; // rax
  KIRQL v12; // bl
  unsigned int NSObjMainNoLock; // esi
  _QWORD *ObjectPath; // rax
  unsigned int CurrentThread; // edx
  void *v17; // r8
  void *v18; // rbx
  _BYTE P[128]; // [rsp+30h] [rbp-C8h] BYREF

  v7 = -1LL;
  do
    ++v7;
  while ( a4[v7] );
  if ( v7 + 1 >= 0x80 )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v7 + 1, 0x69706341u);
    if ( !PoolWithTag )
      return 3221225626LL;
  }
  else
  {
    PoolWithTag = P;
  }
  memmove(PoolWithTag, a4, v7);
  PoolWithTag[v7] = 0;
  if ( (*(_BYTE *)(*(_QWORD *)a1 + 64LL) & 4) != 0 )
  {
    NSObjMainNoLock = -1073741738;
  }
  else
  {
    BaseObject = GetBaseObject();
    v10 = BaseObject;
    if ( (gDebugger & 8) != 0 )
    {
      ObjectPath = GetObjectPath(BaseObject);
      CurrentThread = (unsigned int)KeGetCurrentThread();
      v17 = &unk_1C006FE7D;
      v18 = ObjectPath;
      if ( ObjectPath )
        LODWORD(v17) = (_DWORD)ObjectPath;
      PrintDebugMessage(53, CurrentThread, (_DWORD)v17, 0, 0LL);
      if ( v18 )
        ExFreePoolWithTag(v18, 0);
    }
    v11 = *(_QWORD *)(a2 + 8);
    *(_DWORD *)(a2 + 24) = 0;
    *(_QWORD *)(a2 + 16) = 0LL;
    *(_WORD *)(a2 + 2) = 2;
    *(_DWORD *)(v11 + 24) = 0;
    *(_WORD *)(*(_QWORD *)(a2 + 8) + 2LL) = 2;
    *(_QWORD *)(*(_QWORD *)(a2 + 8) + 16LL) = 0LL;
    v12 = ExAcquireSpinLockShared(&ACPINamespaceLock);
    NSObjMainNoLock = FindNSObjMainNoLock(PoolWithTag);
    ExReleaseSpinLockShared(&ACPINamespaceLock, v12);
    DereferenceObjectEx(v10);
  }
  if ( P != PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  return NSObjMainNoLock;
}
