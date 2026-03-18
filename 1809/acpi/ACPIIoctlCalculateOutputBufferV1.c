/*
 * XREFs of ACPIIoctlCalculateOutputBufferV1 @ 0x1C000BC24
 * Callers:
 *     ACPIIoctlEvalPostProcessingV1 @ 0x1C000BA4C (ACPIIoctlEvalPostProcessingV1.c)
 *     ACPIIoctlCalculateOutputBufferV1 @ 0x1C000BC24 (ACPIIoctlCalculateOutputBufferV1.c)
 *     AcpiConvertObjDataToMethodArguments @ 0x1C0058BC8 (AcpiConvertObjDataToMethodArguments.c)
 *     ACPIProcessorContainerFillIoctlBuffer @ 0x1C005B174 (ACPIProcessorContainerFillIoctlBuffer.c)
 * Callees:
 *     ACPIIoctlCalculateOutputBufferSizeV1 @ 0x1C000BB2C (ACPIIoctlCalculateOutputBufferSizeV1.c)
 *     ACPIIoctlCalculateOutputBufferV1 @ 0x1C000BC24 (ACPIIoctlCalculateOutputBufferV1.c)
 *     memmove @ 0x1C0030D80 (memmove.c)
 */

__int64 __fastcall ACPIIoctlCalculateOutputBufferV1(__int64 a1, __int64 a2, char a3, char a4)
{
  __int16 v5; // cx
  char *v8; // rbx
  __int64 result; // rax
  unsigned int *v10; // r14
  __int64 v11; // r8
  unsigned int v12; // ecx
  unsigned int v13; // ebp
  char *v14; // r15
  __int64 v15; // rax
  int v16; // eax
  int v17[4]; // [rsp+30h] [rbp-38h] BYREF
  int v18; // [rsp+70h] [rbp+8h] BYREF

  v5 = *(_WORD *)(a1 + 2);
  v8 = (char *)a2;
  if ( v5 == 1 )
  {
    *(_WORD *)a2 = 0;
    if ( a3 == 1 )
    {
      *(_WORD *)(a2 + 2) = 8;
      *(_QWORD *)(a2 + 4) = *(_QWORD *)(a1 + 16);
    }
    else
    {
      *(_WORD *)(a2 + 2) = 4;
      *(_DWORD *)(a2 + 4) = *(_DWORD *)(a1 + 16);
    }
    return 0LL;
  }
  if ( (unsigned __int16)(v5 - 2) <= 1u )
  {
    *(_WORD *)a2 = (v5 != 2) + 1;
    *(_WORD *)(a2 + 2) = *(_WORD *)(a1 + 24);
    memmove((void *)(a2 + 4), *(const void **)(a1 + 32), *(unsigned int *)(a1 + 24));
    return 0LL;
  }
  if ( v5 != 4 )
    return 3222536207LL;
  v10 = *(unsigned int **)(a1 + 32);
  if ( !*v10 )
    return 3222536207LL;
  v18 = 0;
  v17[0] = 0;
  result = ACPIIoctlCalculateOutputBufferSizeV1(a1, &v18, v17, a3, 1);
  if ( (int)result >= 0 )
  {
    if ( a4 )
    {
      v12 = (unsigned __int16)v18;
    }
    else
    {
      *(_WORD *)v8 = 3;
      LOWORD(v16) = v18;
      *((_WORD *)v8 + 1) = v18;
      v8 += 4;
      if ( (unsigned __int16)v16 < 4u )
        v16 = 4;
      else
        v16 = (unsigned __int16)v16;
      v12 = v16 + 4;
    }
    v13 = 0;
    v14 = &v8[v12];
    while ( v8 < v14 && v13 < *v10 )
    {
      LOBYTE(v11) = a3;
      result = ACPIIoctlCalculateOutputBufferV1(&v10[8 * v13 + 2 + 2 * v13], v8, v11, 0LL);
      if ( (int)result < 0 )
        return result;
      LOWORD(v15) = *((_WORD *)v8 + 1);
      ++v13;
      if ( (unsigned __int16)v15 < 4u )
        v15 = 4LL;
      else
        v15 = (unsigned __int16)v15;
      v8 += v15 + 4;
    }
    return 0LL;
  }
  return result;
}
