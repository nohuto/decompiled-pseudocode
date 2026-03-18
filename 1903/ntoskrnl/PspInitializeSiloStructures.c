/*
 * XREFs of PspInitializeSiloStructures @ 0x140A03634
 * Callers:
 *     PspInitPhase0 @ 0x140A0457C (PspInitPhase0.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     PspSiloInitializeSharedUserSessionId @ 0x1406F0380 (PspSiloInitializeSharedUserSessionId.c)
 *     PspStorageAllocSlot @ 0x1407599D8 (PspStorageAllocSlot.c)
 *     ObCreateObjectType @ 0x140759A60 (ObCreateObjectType.c)
 *     PspAllocStorage @ 0x14077FAD4 (PspAllocStorage.c)
 *     PspStorageFreeSlot @ 0x1408CD878 (PspStorageFreeSlot.c)
 */

char PspInitializeSiloStructures()
{
  PVOID PoolWithTag; // rax
  unsigned int v2; // ecx
  PVOID v3; // rcx
  _QWORD v4[16]; // [rsp+20h] [rbp-29h] BYREF

  dword_14058C980 = 1;
  dword_14058C984 = 259;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x248uLL, 0x476C6953u);
  qword_14058C990 = (__int64)PoolWithTag;
  if ( !PoolWithTag )
    return 0;
  memset(PoolWithTag, 0, 0x248uLL);
  if ( (int)PspSiloInitializeSharedUserSessionId(qword_14058C990) < 0
    || (int)PspStorageAllocSlot((ULONG *)&PsObjectDirectorySiloContextSlot) < 0 )
  {
    return 0;
  }
  if ( (int)PspStorageAllocSlot((ULONG *)&PsObjectDirectoryTeardownSlot) < 0 )
  {
    v2 = PsObjectDirectorySiloContextSlot;
LABEL_13:
    PspStorageFreeSlot(v2);
    return 0;
  }
  if ( (int)PspStorageAllocSlot((ULONG *)&PsSystemRootSiloContextSlot) < 0 )
  {
    PspStorageFreeSlot(PsObjectDirectorySiloContextSlot);
    v2 = PsObjectDirectoryTeardownSlot;
    goto LABEL_13;
  }
  PspSiloMonitorLock = 0LL;
  qword_140436A68 = (__int64)&PspSiloMonitorList;
  PspSiloMonitorList = (__int64)&PspSiloMonitorList;
  memset(v4, 0, 0x78uLL);
  BYTE2(v4[0]) |= 0x84u;
  LOWORD(v4[0]) = 120;
  HIDWORD(v4[1]) = 0x20000;
  v4[2] = 0x2000000020000LL;
  HIDWORD(v4[4]) = 1;
  v4[3] = 0xF0000000F0000LL;
  v4[9] = PspDeleteSiloContext;
  if ( (int)ObCreateObjectType((const UNICODE_STRING *)L"$&", (__int64)v4, 0LL, (__int64)&PsSiloContextPagedType) >= 0 )
  {
    HIDWORD(v4[4]) = 512;
    if ( (int)ObCreateObjectType((const UNICODE_STRING *)L"*,", (__int64)v4, 0LL, (__int64)&PsSiloContextNonPagedType) < 0 )
    {
      v3 = PsSiloContextPagedType;
    }
    else
    {
      if ( (int)PspAllocStorage(&qword_14058C978) >= 0 )
        return 1;
      ObfDereferenceObject(PsSiloContextPagedType);
      v3 = PsSiloContextNonPagedType;
    }
    ObfDereferenceObject(v3);
  }
  return 0;
}
