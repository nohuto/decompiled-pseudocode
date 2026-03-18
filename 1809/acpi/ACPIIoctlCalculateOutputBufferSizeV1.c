/*
 * XREFs of ACPIIoctlCalculateOutputBufferSizeV1 @ 0x1C000BB2C
 * Callers:
 *     ACPIIoctlEvalPostProcessingV1 @ 0x1C000BA4C (ACPIIoctlEvalPostProcessingV1.c)
 *     ACPIIoctlCalculateOutputBufferSizeV1 @ 0x1C000BB2C (ACPIIoctlCalculateOutputBufferSizeV1.c)
 *     ACPIIoctlCalculateOutputBufferV1 @ 0x1C000BC24 (ACPIIoctlCalculateOutputBufferV1.c)
 *     AcpiConvertObjDataToMethodArguments @ 0x1C0058BC8 (AcpiConvertObjDataToMethodArguments.c)
 *     ACPIProcessorContainerComputeIoctlPayloadSize @ 0x1C005AF00 (ACPIProcessorContainerComputeIoctlPayloadSize.c)
 *     ACPIProcessorContainerFillIoctlBuffer @ 0x1C005B174 (ACPIProcessorContainerFillIoctlBuffer.c)
 * Callees:
 *     ACPIIoctlCalculateOutputBufferSizeV1 @ 0x1C000BB2C (ACPIIoctlCalculateOutputBufferSizeV1.c)
 */

__int64 __fastcall ACPIIoctlCalculateOutputBufferSizeV1(__int64 a1, _DWORD *a2, int *a3, char a4, char a5)
{
  __int16 v5; // r10
  int v8; // ebx
  __int64 result; // rax
  int v10; // edx
  int *v11; // r14
  char v12; // al
  int v13; // esi
  unsigned int v14; // eax
  char v15; // [rsp+60h] [rbp+8h] BYREF

  v5 = *(_WORD *)(a1 + 2);
  if ( v5 == 1 )
  {
    v8 = 12;
    if ( a4 != 1 )
      v8 = 8;
LABEL_4:
    *a3 = 1;
LABEL_5:
    *a2 += v8;
    return 0LL;
  }
  if ( (unsigned __int16)(v5 - 2) <= 1u )
  {
    v14 = *(_DWORD *)(a1 + 24);
    if ( v14 < 4 )
      v14 = 4;
    v8 = v14 + 4;
    goto LABEL_4;
  }
  if ( v5 != 4 )
  {
    if ( v5 )
      return 3222536207LL;
    v8 = 0;
    goto LABEL_4;
  }
  v10 = 1;
  v11 = *(int **)(a1 + 32);
  if ( a5 )
    v10 = *v11;
  v12 = -a5;
  *a3 = v10;
  v13 = 0;
  v8 = v12 == 0 ? 4 : 0;
  if ( !*v11 )
    goto LABEL_5;
  while ( 1 )
  {
    result = ACPIIoctlCalculateOutputBufferSizeV1(
               (int)v11 + 8 * (v13 + 4 * v13 + 1),
               (_DWORD)a2,
               (unsigned int)&v15,
               a4,
               0);
    if ( (int)result < 0 )
      return result;
    if ( ++v13 >= (unsigned int)*v11 )
      goto LABEL_5;
  }
}
