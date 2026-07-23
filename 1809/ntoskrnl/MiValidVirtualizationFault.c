/*
 * XREFs of MiValidVirtualizationFault @ 0x1402BC950
 * Callers:
 *     MiValidFault @ 0x1400B6D30 (MiValidFault.c)
 *     MiLargePageFault @ 0x1402BC5C8 (MiLargePageFault.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     MiCopyOnWrite @ 0x1400B4520 (MiCopyOnWrite.c)
 *     MiPerformSafePdeWrite @ 0x140160618 (MiPerformSafePdeWrite.c)
 *     MiCompleteSecureProcessFault @ 0x1402BBDF4 (MiCompleteSecureProcessFault.c)
 *     MiFillVirtualFaultInfo @ 0x1402BC198 (MiFillVirtualFaultInfo.c)
 *     MiGetVirtualFaultPageInfo @ 0x1402BC3F0 (MiGetVirtualFaultPageInfo.c)
 *     MiSetFaultPacketDirectives @ 0x1402BC930 (MiSetFaultPacketDirectives.c)
 */

__int64 __fastcall MiValidVirtualizationFault(unsigned __int64 *a1, __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 *VirtualFaultPageInfo; // r14
  __int64 v7; // rax
  __int64 v8; // rcx
  signed __int64 v9; // r10
  unsigned int v11; // ebx
  int v12; // eax
  unsigned int v13; // eax
  unsigned __int64 v14; // rax
  __int64 v15; // r10
  __int64 v16; // [rsp+50h] [rbp+8h] BYREF
  ULONG_PTR v17; // [rsp+58h] [rbp+10h] BYREF

  VirtualFaultPageInfo = (unsigned __int64 *)MiGetVirtualFaultPageInfo(a2, *a1);
  v7 = MI_READ_PTE_LOCK_FREE(a3);
  v8 = *(unsigned int *)(a2 + 56);
  v9 = v7;
  v16 = v7;
  if ( (v8 & 1) != 0 && (v7 & 0x42) == 0 )
    return 0LL;
  v11 = 1;
  if ( (v8 & 0x20) != 0 )
  {
    v17 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v16) >> 12) & 0xFFFFFFFFFLL)
        - 0x58000000000LL;
    if ( *(__int64 *)(v17 + 8) >= 0 )
    {
      v12 = MiCopyOnWrite((__int64)(a3 << 25) >> 16, a3, 0xFFFFFFFFFFFFFFFFuLL, 0);
      if ( v12 < 0 )
      {
        MiSetFaultPacketDirectives((__int64)a1, v12);
        return 0LL;
      }
      v16 = MI_READ_PTE_LOCK_FREE(a3);
      v17 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v16) >> 12) & 0xFFFFFFFFFLL)
          - 0x58000000000LL;
    }
    v13 = MiCompleteSecureProcessFault(&v17, &v16, (_QWORD *)(a2 + 48));
    v9 = v16;
    v11 = v13;
  }
  if ( (v9 & 0x20) == 0 )
  {
    MiPerformSafePdeWrite(v8, a3, v9, 1);
    v16 = MI_READ_PTE_LOCK_FREE(a3);
  }
  if ( v11 )
  {
    v14 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v16);
    MiFillVirtualFaultInfo(VirtualFaultPageInfo, (v14 >> 12) & 0xFFFFFFFFFLL, v15);
  }
  return v11;
}
