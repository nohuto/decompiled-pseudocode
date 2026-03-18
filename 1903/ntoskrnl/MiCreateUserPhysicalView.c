/*
 * XREFs of MiCreateUserPhysicalView @ 0x14089646C
 * Callers:
 *     MiReserveUserMemory @ 0x140607B60 (MiReserveUserMemory.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14003FB20 (ObfDereferenceObjectWithTag.c)
 *     MiSectionControlArea @ 0x1400717E0 (MiSectionControlArea.c)
 *     MiCheckPurgeAndUpMapCount @ 0x1400725E0 (MiCheckPurgeAndUpMapCount.c)
 *     ExGetCallBackBlockRoutine @ 0x14013D1D0 (ExGetCallBackBlockRoutine.c)
 *     MiReferenceAweHandle @ 0x1402D7910 (MiReferenceAweHandle.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     MiCreateProcessDefaultAweInfo @ 0x14089638C (MiCreateProcessDefaultAweInfo.c)
 */

int __fastcall MiCreateUserPhysicalView(__int64 a1, int a2, _QWORD *a3, _QWORD *a4)
{
  PVOID v4; // rbx
  void *v6; // rcx
  unsigned __int64 v7; // rbp
  char v10; // r10
  unsigned int v11; // r9d
  KPROCESSOR_MODE PreviousMode; // r8
  ACCESS_MASK v13; // edx
  int result; // eax
  __int64 v15; // rsi
  unsigned __int64 v16; // rax
  __int64 v17; // r8
  _QWORD *PoolWithTag; // rax
  _QWORD *v19; // rdi
  __int64 v20[7]; // [rsp+30h] [rbp-38h] BYREF
  PVOID Object; // [rsp+80h] [rbp+18h] BYREF
  PVOID v22; // [rsp+88h] [rbp+20h] BYREF

  *a4 = 0LL;
  v4 = 0LL;
  v20[0] = 0LL;
  v6 = (void *)a3[14];
  v7 = 0LL;
  v22 = 0LL;
  Object = 0LL;
  v10 = a2;
  if ( v6 )
  {
    v11 = (a2 & 4 | 8u) >> 1;
    PreviousMode = KeGetCurrentThread()->PreviousMode;
    v13 = v11 | 8;
    if ( (v10 & 2) == 0 )
      v13 = v11;
    result = MiReferenceAweHandle(v6, v13, PreviousMode, &v22, &Object);
    if ( result >= 0 )
    {
      v4 = Object;
      if ( Object )
      {
        v7 = MiSectionControlArea((__int64)Object);
        v15 = *(_QWORD *)(v7 + 8);
        v16 = ExGetCallBackBlockRoutine(v15) << 12;
        if ( a3[2] < v16 )
          a3[2] = v16;
        v17 = a3[3];
        if ( (v17 & (v16 - 1)) != 0 || a3[1] - *a3 + 1LL == v17 && (*a3 & (v16 - 1)) != 0 )
        {
          ObfDereferenceObjectWithTag(v4, 0x68506D4Du);
          return -1073741811;
        }
        goto LABEL_20;
      }
      if ( v22 )
        ObfDereferenceObjectWithTag(v22, 0x68506D4Du);
      return -1073741816;
    }
  }
  else
  {
    if ( a2 != 4 )
      return -1073741755;
    result = MiCreateProcessDefaultAweInfo(v20);
    if ( result >= 0 )
    {
      v15 = v20[0];
LABEL_20:
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x30uLL, 0x76706D4Du);
      v19 = PoolWithTag;
      if ( PoolWithTag )
      {
        PoolWithTag[3] = a1;
        PoolWithTag[4] = v15;
        PoolWithTag[5] = v4;
        if ( v4 )
          MiCheckPurgeAndUpMapCount(v7);
        v19[2] = 0LL;
        result = 0;
        *a4 = v19;
      }
      else
      {
        if ( v4 )
          ObfDereferenceObjectWithTag(v4, 0x68506D4Du);
        return -1073741670;
      }
    }
  }
  return result;
}
