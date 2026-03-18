/*
 * XREFs of PspIumGetPhysicalPage @ 0x1408CAD18
 * Callers:
 *     PsDispatchIumService @ 0x140308164 (PsDispatchIumService.c)
 * Callees:
 *     KiStackAttachProcess @ 0x1400CD9F0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400CDDC0 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     PspIumReplenishPartitionPages @ 0x1403090DC (PspIumReplenishPartitionPages.c)
 *     MmVirtualAccessFault @ 0x14089277C (MmVirtualAccessFault.c)
 */

__int64 __fastcall PspIumGetPhysicalPage(__int64 a1)
{
  __int64 v2; // rcx
  int v3; // r14d
  unsigned __int64 v4; // rbx
  _KPROCESS *v5; // rsi
  _KPROCESS *Process; // rbp
  __int64 v7; // rax
  int v8; // ebx
  __int64 result; // rax
  __int64 v10; // [rsp+20h] [rbp-68h] BYREF
  signed __int64 v11[2]; // [rsp+28h] [rbp-60h] BYREF
  _BYTE v12[48]; // [rsp+38h] [rbp-50h] BYREF

  memset(v12, 0, sizeof(v12));
  v2 = *(_QWORD *)(a1 + 32);
  v10 = 0LL;
  v3 = *(_DWORD *)(a1 + 8);
  v4 = *(_QWORD *)(a1 + 16);
  v5 = *(_KPROCESS **)(a1 + 24);
  if ( v2 && *(_DWORD *)(v2 + 4) < 8u )
    PspIumReplenishPartitionPages(v2, 3u);
  if ( v4 >= 0x7FFFFFFF0000LL )
  {
    v8 = -1073741819;
  }
  else
  {
    v11[1] = 4096LL;
    v11[0] = v4 & 0xFFFFFFFFFFFFF000uLL;
    Process = KeGetCurrentThread()->ApcState.Process;
    if ( Process != v5 )
      KiStackAttachProcess(v5, 0, (__int64)v12);
    v7 = v10;
    while ( 1 )
    {
      v10 = v7 & 0xFFFFFFFFFFFFFLL;
      v8 = MmVirtualAccessFault(v11, (__int64)&v10, v3);
      if ( v8 < 0 )
        break;
      v7 = v10;
      if ( (v10 & 0x10000000000000LL) != 0 )
      {
        *(_QWORD *)(a1 + 16) = v10 & 0xFFFFFFFFFFFFFLL;
        break;
      }
    }
    if ( Process != v5 )
      KiUnstackDetachProcess((struct _KTHREAD *)v12, 0);
  }
  result = v8;
  *(_QWORD *)(a1 + 8) = v8;
  return result;
}
