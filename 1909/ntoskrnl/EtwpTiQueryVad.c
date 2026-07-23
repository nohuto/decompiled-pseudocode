/*
 * XREFs of EtwpTiQueryVad @ 0x1408F9AE0
 * Callers:
 *     EtwpTiVadQueryEventWriteCallback @ 0x1408F9C40 (EtwpTiVadQueryEventWriteCallback.c)
 * Callees:
 *     KiStackAttachProcess @ 0x1400CD9F0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400CDDC0 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     ZwQueryVirtualMemory @ 0x1401C10B0 (ZwQueryVirtualMemory.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpTiQueryVad(__int64 a1, _KPROCESS *a2, PVOID *a3, unsigned int a4, char a5)
{
  int v9; // ebp
  unsigned int v10; // esi
  unsigned int v11; // edi
  PVOID *v12; // rbx
  char *v13; // r14
  NTSTATUS VirtualMemory; // eax
  PVOID PoolWithTag; // rax
  _BYTE v17[48]; // [rsp+30h] [rbp-78h] BYREF

  memset(v17, 0, sizeof(v17));
  if ( a2 == KeGetCurrentThread()->ApcState.Process )
  {
    v9 = 0;
  }
  else
  {
    KiStackAttachProcess(a2, 0, (__int64)v17);
    v9 = 1;
  }
  v10 = 0;
  v11 = 0;
  if ( a4 )
  {
    v12 = (PVOID *)(a1 + 48);
    v13 = (char *)(a1 + 8);
    do
    {
      VirtualMemory = ZwQueryVirtualMemory(
                        (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                        *a3,
                        MemoryRegionInformation,
                        v13,
                        0x28uLL,
                        0LL);
      *((_DWORD *)v12 - 12) = VirtualMemory;
      if ( VirtualMemory >= 0 )
      {
        v10 |= 1 << v11;
        if ( a5 )
        {
          PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x200uLL, 0x6E734954u);
          *v12 = PoolWithTag;
          if ( !PoolWithTag
            || ZwQueryVirtualMemory(
                 (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                 *a3,
                 MemoryMappedFilenameInformation,
                 PoolWithTag,
                 0x200uLL,
                 0LL) >= 0 )
          {
            goto LABEL_12;
          }
          ExFreePoolWithTag(*v12, 0);
        }
        *v12 = 0LL;
      }
LABEL_12:
      ++v11;
      v13 += 56;
      ++a3;
      v12 += 7;
    }
    while ( v11 < a4 );
  }
  if ( v9 )
    KiUnstackDetachProcess((struct _KTHREAD *)v17, 0);
  return v10;
}
