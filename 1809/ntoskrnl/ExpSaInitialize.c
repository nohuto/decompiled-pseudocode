/*
 * XREFs of ExpSaInitialize @ 0x14018FDE0
 * Callers:
 *     ExpInitSystemPhase1 @ 0x1409B1434 (ExpInitSystemPhase1.c)
 * Callees:
 *     KeGetPrcb @ 0x1400A6204 (KeGetPrcb.c)
 *     KeQueryMaximumProcessorCountEx @ 0x1400A69C0 (KeQueryMaximumProcessorCountEx.c)
 *     KeSetSystemGroupAffinityThread @ 0x1400D6F10 (KeSetSystemGroupAffinityThread.c)
 *     KeRevertToUserGroupAffinityThread @ 0x1400D8290 (KeRevertToUserGroupAffinityThread.c)
 *     ExpSaAllocatorInitialize @ 0x140190014 (ExpSaAllocatorInitialize.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 */

char ExpSaInitialize()
{
  char v0; // bl
  PVOID PoolWithTag; // rax
  ULONG MaximumProcessorCount; // eax
  SIZE_T v3; // rdi
  ULONG v4; // ebp
  PVOID v5; // rax
  ULONG v6; // r15d
  ULONG v7; // edi
  __int64 v8; // rsi
  int *v9; // r14
  unsigned int v10; // ecx
  struct _GROUP_AFFINITY *p_PreviousAffinity; // rdx
  PVOID v12; // rax
  __int64 Prcb; // rax
  PVOID v14; // rax
  PVOID v15; // rax
  struct _GROUP_AFFINITY Affinity; // [rsp+20h] [rbp-48h] BYREF
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+30h] [rbp-38h] BYREF

  ExSaPageGroupDescriptorArray = 0LL;
  ExSaPageArrays = 0LL;
  ExSaNonPagedSlotAllocator = 0LL;
  ExSaPagedSlotAllocator = 0LL;
  ExSaPageGroupDescriptorArrayLock = 0LL;
  v0 = 0;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x80uLL, 0x61537845u);
  ExSaPageGroupDescriptorArray = (__int64)PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x80uLL);
    MaximumProcessorCount = KeQueryMaximumProcessorCountEx(0xFFFFu);
    v3 = 8LL * MaximumProcessorCount;
    v4 = MaximumProcessorCount;
    v5 = ExAllocatePoolWithTag(NonPagedPoolNx, v3, 0x61537845u);
    ExSaPageArrays = (__int64)v5;
    if ( v5 )
    {
      memset(v5, 0, v3);
      v6 = KeNumberProcessors_0;
      v7 = 0;
      if ( v4 )
      {
        v8 = 0LL;
        v9 = KiProcessorIndexToNumberMappingTable;
        while ( 1 )
        {
          if ( v7 < v6 )
          {
            v10 = *v9;
            Affinity.Reserved[1] = 0;
            Affinity.Reserved[2] = 0;
            *(_DWORD *)&Affinity.Group = (unsigned __int16)(v10 >> 6);
            Affinity.Mask = 1LL << (v10 & 0x3F);
            if ( v0 )
            {
              p_PreviousAffinity = 0LL;
            }
            else
            {
              v0 = 1;
              p_PreviousAffinity = &PreviousAffinity;
            }
            KeSetSystemGroupAffinityThread(&Affinity, p_PreviousAffinity);
          }
          v12 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x80uLL, 0x61537845u);
          *(_QWORD *)(v8 + ExSaPageArrays) = v12;
          if ( !v12 )
            break;
          memset(v12, 0, 0x80uLL);
          Prcb = KeGetPrcb(v7);
          if ( Prcb )
            *(_QWORD *)(Prcb + 24624) = *(_QWORD *)(v8 + ExSaPageArrays);
          ++v7;
          ++v9;
          v8 += 8LL;
          if ( v7 >= v4 )
            goto LABEL_13;
        }
      }
      else
      {
LABEL_13:
        if ( v0 )
          KeRevertToUserGroupAffinityThread(&PreviousAffinity);
        v0 = 0;
        v14 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x48uLL, 0x61537845u);
        ExSaNonPagedSlotAllocator = (__int64)v14;
        if ( v14 )
        {
          ExpSaAllocatorInitialize(v14, 0LL);
          v15 = ExAllocatePoolWithTag(PagedPool, 0x48uLL, 0x61537845u);
          ExSaPagedSlotAllocator = (ULONG_PTR)v15;
          if ( v15 )
          {
            ExpSaAllocatorInitialize(v15, 1LL);
            return 1;
          }
        }
      }
      if ( v0 )
        KeRevertToUserGroupAffinityThread(&PreviousAffinity);
    }
  }
  return 0;
}
