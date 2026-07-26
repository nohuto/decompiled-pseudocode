/*
 * XREFs of NdisAllocateRefCount @ 0x1C00252E0
 * Callers:
 *     ndisAllocateOpenBlock @ 0x1C0024A4C (ndisAllocateOpenBlock.c)
 *     ?ndisIfRegisterInterfaceEx@@YAHPEAXT_NET_LUID_LH@@0PEAU_NET_IF_INFORMATION@@W4NdisIfBlockSource@@KPEAK@Z @ 0x1C0024C70 (-ndisIfRegisterInterfaceEx@@YAHPEAXT_NET_LUID_LH@@0PEAU_NET_IF_INFORMATION@@W4NdisIfBlockSource@.c)
 *     ndisMInitializeMiniportBlock @ 0x1C002F2E8 (ndisMInitializeMiniportBlock.c)
 *     ndisIfUpdateInterfaceOnAddDevice @ 0x1C003DAE8 (ndisIfUpdateInterfaceOnAddDevice.c)
 *     ndisInitializeRef @ 0x1C010372C (ndisInitializeRef.c)
 *     ndisInitializeZeroBasedRef @ 0x1C010B15C (ndisInitializeZeroBasedRef.c)
 * Callees:
 *     memset @ 0x1C00416C0 (memset.c)
 */

__int64 __fastcall NdisAllocateRefCount(unsigned __int8 a1, char a2)
{
  char v2; // di
  char v4; // si
  unsigned int v5; // eax
  unsigned int v6; // r14d
  _BYTE *PoolWithTag; // rax
  _BYTE *v8; // rbx
  __int64 result; // rax

  v2 = a2;
  if ( !ndisDebugLoggingMode )
    return 2LL;
  v4 = 1;
  if ( ndisDebugLoggingMode == 2 )
    v2 = a2 | 1;
  if ( (v2 & 1) != 0 )
  {
    v5 = (a1 << 6) + 8;
  }
  else
  {
    v5 = (((((unsigned __int64)a1 + 7) >> 3) + 3) & 0xFFFFFFFC) + 16;
    v4 = 0;
  }
  v6 = v5;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v5, 0x7872444Eu);
  v8 = PoolWithTag;
  if ( !PoolWithTag )
    return 3LL;
  memset(PoolWithTag, 0, v6);
  result = (__int64)v8;
  *v8 = v2;
  v8[1] = v4;
  v8[2] = a1;
  return result;
}
