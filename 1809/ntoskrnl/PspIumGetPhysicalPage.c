/*
 * XREFs of PspIumGetPhysicalPage @ 0x14088E140
 * Callers:
 *     PsDispatchIumService @ 0x1402EAD84 (PsDispatchIumService.c)
 * Callees:
 *     KiStackAttachProcess @ 0x140016DB0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x140017190 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     PspIumReplenishPartitionPages @ 0x1402EBCA4 (PspIumReplenishPartitionPages.c)
 *     MmVirtualAccessFault @ 0x14085A2D4 (MmVirtualAccessFault.c)
 */

__int64 __fastcall PspIumGetPhysicalPage(__int64 a1)
{
  int v1; // r14d
  unsigned __int64 v3; // rdi
  _KPROCESS *v4; // rsi
  __int64 v5; // rcx
  _KPROCESS *Process; // rbp
  __int64 v7; // rax
  int v8; // edi
  __int64 result; // rax
  __int64 v10; // [rsp+20h] [rbp-68h] BYREF
  signed __int64 v11[2]; // [rsp+28h] [rbp-60h] BYREF
  _BYTE v12[48]; // [rsp+38h] [rbp-50h] BYREF

  v1 = *(_DWORD *)(a1 + 8);
  v3 = *(_QWORD *)(a1 + 16);
  v4 = *(_KPROCESS **)(a1 + 24);
  v5 = *(_QWORD *)(a1 + 32);
  if ( v5 && *(_DWORD *)(v5 + 4) < 8u )
    PspIumReplenishPartitionPages(v5, 3u);
  if ( v3 >= 0x7FFFFFFF0000LL )
  {
    v8 = -1073741819;
  }
  else
  {
    v11[1] = 4096LL;
    v11[0] = v3 & 0xFFFFFFFFFFFFF000uLL;
    Process = KeGetCurrentThread()->ApcState.Process;
    if ( Process != v4 )
      KiStackAttachProcess(v4, 0LL, (__int64)v12);
    v7 = v10;
    while ( 1 )
    {
      v10 = v7 & 0xFFFFFFFFFFFFFLL;
      v8 = MmVirtualAccessFault(v11, (__int64)&v10, v1);
      if ( v8 < 0 )
        break;
      v7 = v10;
      if ( (v10 & 0x10000000000000LL) != 0 )
      {
        *(_QWORD *)(a1 + 16) = v10 & 0xFFFFFFFFFFFFFLL;
        break;
      }
    }
    if ( Process != v4 )
      KiUnstackDetachProcess((__int64)v12, 0LL);
  }
  result = v8;
  *(_QWORD *)(a1 + 8) = v8;
  return result;
}
