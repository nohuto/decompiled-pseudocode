/*
 * XREFs of MiCreateUserPhysicalView @ 0x140850D4C
 * Callers:
 *     MiReserveUserMemory @ 0x1405F2600 (MiReserveUserMemory.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     MiSectionControlArea @ 0x140075E60 (MiSectionControlArea.c)
 *     MiCheckPurgeAndUpMapCount @ 0x140077DC0 (MiCheckPurgeAndUpMapCount.c)
 *     ExGetCallBackBlockRoutine @ 0x140088BA0 (ExGetCallBackBlockRoutine.c)
 *     MiReferenceAweHandle @ 0x1402B1D5C (MiReferenceAweHandle.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     MiCreateProcessDefaultAweInfo @ 0x140850C6C (MiCreateProcessDefaultAweInfo.c)
 */

int __fastcall MiCreateUserPhysicalView(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  PVOID v3; // rbx
  void *v5; // rcx
  unsigned __int64 v6; // rbp
  int v9; // r9d
  ACCESS_MASK v10; // edx
  int result; // eax
  __int64 v12; // rsi
  unsigned __int64 v13; // rax
  __int64 v14; // r8
  _QWORD *PoolWithTag; // rax
  _QWORD *v16; // rdi
  PVOID Object; // [rsp+60h] [rbp+8h] BYREF
  PVOID v18; // [rsp+68h] [rbp+10h] BYREF
  __int64 v19; // [rsp+70h] [rbp+18h] BYREF

  *a3 = 0LL;
  v3 = 0LL;
  v19 = 0LL;
  v5 = (void *)a2[13];
  v6 = 0LL;
  v18 = 0LL;
  Object = 0LL;
  v9 = *(_DWORD *)(a1 + 48);
  if ( !v5 )
  {
    if ( (v9 & 0xF8) == 0x20 )
    {
      result = MiCreateProcessDefaultAweInfo(&v19);
      if ( result < 0 )
        return result;
      v12 = v19;
      goto LABEL_22;
    }
    return -1073741755;
  }
  if ( (v9 & 0x38) == 0x20 )
  {
    v10 = 6;
    goto LABEL_6;
  }
  if ( (v9 & 0x38) != 8 )
    return -1073741755;
  v10 = 4;
LABEL_6:
  result = MiReferenceAweHandle(v5, v10, KeGetCurrentThread()->PreviousMode, &v18, &Object);
  if ( result < 0 )
    return result;
  v3 = Object;
  if ( Object )
  {
    v6 = MiSectionControlArea((__int64)Object);
    v12 = *(_QWORD *)(v6 + 8);
    v13 = ExGetCallBackBlockRoutine(v12) << 12;
    if ( a2[2] < v13 )
      a2[2] = v13;
    v14 = a2[3];
    if ( (v14 & (v13 - 1)) != 0 || a2[1] - *a2 + 1LL == v14 && (*a2 & (v13 - 1)) != 0 )
    {
      ObfDereferenceObjectWithTag(v3, 0x68506D4Du);
      return -1073741811;
    }
LABEL_22:
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x30uLL, 0x76706D4Du);
    v16 = PoolWithTag;
    if ( PoolWithTag )
    {
      PoolWithTag[3] = a1;
      PoolWithTag[4] = v12;
      PoolWithTag[5] = v3;
      if ( v3 )
        MiCheckPurgeAndUpMapCount(v6);
      v16[2] = 0LL;
      result = 0;
      *a3 = v16;
    }
    else
    {
      if ( v3 )
        ObfDereferenceObjectWithTag(v3, 0x68506D4Du);
      return -1073741670;
    }
    return result;
  }
  if ( v18 )
    ObfDereferenceObjectWithTag(v18, 0x68506D4Du);
  return -1073741816;
}
