/*
 * XREFs of CmpRegisterCallbackInternal @ 0x14075F0E8
 * Callers:
 *     CmRegisterCallback @ 0x14075F0C0 (CmRegisterCallback.c)
 *     CmRegisterCallbackEx @ 0x1407EADA0 (CmRegisterCallbackEx.c)
 *     VrpIncrementSiloCount @ 0x140807C08 (VrpIncrementSiloCount.c)
 * Callees:
 *     CmCleanupThreadInfo @ 0x1401B2F1C (CmCleanupThreadInfo.c)
 *     CmpInitializeThreadInfo @ 0x1401B2F5C (CmpInitializeThreadInfo.c)
 *     memmove @ 0x1401D1440 (memmove.c)
 *     memset @ 0x1401D1780 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034B010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 *     CmpInsertCallbackInListByAltitude @ 0x14075F21C (CmpInsertCallbackInListByAltitude.c)
 */

__int64 __fastcall CmpRegisterCallbackInternal(
        __int64 a1,
        __int64 a2,
        const void **a3,
        char a4,
        unsigned __int8 a5,
        _QWORD *a6)
{
  _QWORD *PoolWithTag; // rax
  _QWORD *v11; // rbx
  int inserted; // edi
  int v13; // eax
  PVOID v14; // rax
  __int64 v15; // rdx
  void *v16; // rcx
  PVOID v18[3]; // [rsp+20h] [rbp-18h] BYREF

  CmpInitializeThreadInfo(v18);
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x50uLL, 0x62634D43u);
  v11 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x50uLL);
    v11[1] = v11;
    *v11 = v11;
    v11[9] = v11 + 8;
    v11[8] = v11 + 8;
    v13 = (*((_DWORD *)v11 + 5) ^ a5) & 1;
    *((_DWORD *)v11 + 4) = 0;
    *((_DWORD *)v11 + 5) ^= v13;
    v11[4] = a2;
    v11[5] = a1;
    LOWORD(v13) = *(_WORD *)a3;
    *((_WORD *)v11 + 25) = *(_WORD *)a3;
    *((_WORD *)v11 + 24) = v13;
    v14 = ExAllocatePoolWithTag(PagedPool, *(unsigned __int16 *)a3, 0x61634D43u);
    v11[7] = v14;
    if ( v14 )
    {
      memmove(v14, a3[1], *(unsigned __int16 *)a3);
      LOBYTE(v15) = a4;
      inserted = CmpInsertCallbackInListByAltitude(v11, v15);
      *a6 = v11[3];
      if ( inserted >= 0 )
        goto LABEL_9;
    }
    else
    {
      inserted = -1073741670;
    }
    v16 = (void *)v11[7];
    if ( v16 )
      ExFreePoolWithTag(v16, 0);
    ExFreePoolWithTag(v11, 0);
  }
  else
  {
    inserted = -1073741670;
  }
LABEL_9:
  CmCleanupThreadInfo(v18);
  return (unsigned int)inserted;
}
