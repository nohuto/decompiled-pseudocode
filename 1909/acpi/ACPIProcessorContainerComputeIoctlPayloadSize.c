/*
 * XREFs of ACPIProcessorContainerComputeIoctlPayloadSize @ 0x1C005CC80
 * Callers:
 *     ACPIProcessorContainerComputeIoctlPayloadSize @ 0x1C005CC80 (ACPIProcessorContainerComputeIoctlPayloadSize.c)
 *     ACPIProcessorContainerGetLpiStatesIoctl @ 0x1C005D0F4 (ACPIProcessorContainerGetLpiStatesIoctl.c)
 * Callees:
 *     ACPIAmliBuildObjectPathnameUnicode @ 0x1C000ABA0 (ACPIAmliBuildObjectPathnameUnicode.c)
 *     ACPIIoctlCalculateOutputBufferSizeV1 @ 0x1C00109E8 (ACPIIoctlCalculateOutputBufferSizeV1.c)
 *     ACPIProcessorContainerComputeIoctlPayloadSize @ 0x1C005CC80 (ACPIProcessorContainerComputeIoctlPayloadSize.c)
 */

__int64 __fastcall ACPIProcessorContainerComputeIoctlPayloadSize(_QWORD *a1, unsigned int *a2)
{
  _QWORD *v2; // rbx
  __int64 result; // rax
  int v6; // edx
  _QWORD *v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rcx
  unsigned int v10; // ebp
  int v11; // ecx
  __int64 v12; // [rsp+30h] [rbp-28h] BYREF
  PVOID P; // [rsp+38h] [rbp-20h]
  int v14; // [rsp+60h] [rbp+8h] BYREF
  int v15; // [rsp+70h] [rbp+18h] BYREF

  v2 = (_QWORD *)*a1;
  v12 = 0LL;
  P = 0LL;
  if ( v2 == a1 )
    return 0LL;
  while ( 1 )
  {
    result = ACPIProcessorContainerComputeIoctlPayloadSize(v2 + 2, a2);
    if ( (int)result < 0 )
      break;
    v6 = 0;
    v7 = (_QWORD *)v2[4];
    while ( v7 != v2 + 4 )
    {
      v7 = (_QWORD *)*v7;
      ++v6;
    }
    v8 = v2[66];
    *a2 = ((*a2 + 3) & 0xFFFFFFFC) + 4 * v6;
    result = ACPIAmliBuildObjectPathnameUnicode(v8, (__int64)&v12);
    if ( (int)result < 0 )
      break;
    ExFreePoolWithTag(P, 0);
    v9 = v2[6];
    v10 = WORD1(v12) + ((*a2 + 1) & 0xFFFFFFFE);
    *a2 = v10;
    if ( v9 )
    {
      v14 = 0;
      v15 = 0;
      result = ACPIIoctlCalculateOutputBufferSizeV1(v9, &v14, &v15, 0, 1);
      if ( (int)result < 0 )
        return result;
      v11 = v14 + 12;
      if ( (unsigned int)(v14 + 12) < 0x14 )
        v11 = 20;
      *a2 = v11 + ((v10 + 3) & 0xFFFFFFFC);
    }
    v2 = (_QWORD *)*v2;
    if ( v2 == a1 )
      return 0LL;
  }
  return result;
}
