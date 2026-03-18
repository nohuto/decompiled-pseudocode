/*
 * XREFs of ACPIProcessorContainerFillIoctlBuffer @ 0x1C005B174
 * Callers:
 *     ACPIProcessorContainerFillIoctlBuffer @ 0x1C005B174 (ACPIProcessorContainerFillIoctlBuffer.c)
 *     ACPIProcessorContainerGetLpiStatesIoctl @ 0x1C005B360 (ACPIProcessorContainerGetLpiStatesIoctl.c)
 * Callees:
 *     ACPIIoctlCalculateOutputBufferSizeV1 @ 0x1C000BB2C (ACPIIoctlCalculateOutputBufferSizeV1.c)
 *     ACPIIoctlCalculateOutputBufferV1 @ 0x1C000BC24 (ACPIIoctlCalculateOutputBufferV1.c)
 *     ACPIAmliBuildObjectPathnameUnicode @ 0x1C0010510 (ACPIAmliBuildObjectPathnameUnicode.c)
 *     memmove @ 0x1C0030D80 (memmove.c)
 *     ACPIProcessorContainerFillIoctlBuffer @ 0x1C005B174 (ACPIProcessorContainerFillIoctlBuffer.c)
 */

__int64 __fastcall ACPIProcessorContainerFillIoctlBuffer(_QWORD *a1, int a2, __int64 a3, int *a4, int a5)
{
  _QWORD *v5; // rbx
  int v10; // r13d
  __int64 v11; // rax
  __int64 v12; // rsi
  __int64 result; // rax
  int v14; // eax
  __int64 v15; // rax
  int v16; // r8d
  _QWORD *v17; // rdx
  __int64 v18; // r9
  int v19; // eax
  __int64 v20; // rcx
  size_t v21; // r8
  void *v22; // rdx
  __int64 v23; // rcx
  int v24; // eax
  bool v25; // zf
  __int64 v26; // rax
  int v27; // ebp
  __int64 v28; // rcx
  _DWORD *v29; // rsi
  int v30; // ecx
  int v31; // eax
  int v32; // [rsp+30h] [rbp-48h] BYREF
  char v33[2]; // [rsp+38h] [rbp-40h] BYREF
  unsigned __int16 v34; // [rsp+3Ah] [rbp-3Eh]
  void *Src; // [rsp+40h] [rbp-38h]
  int v36; // [rsp+80h] [rbp+8h] BYREF

  v5 = (_QWORD *)*a1;
  if ( (_QWORD *)*a1 == a1 )
    return 0LL;
  v10 = a5;
  while ( 1 )
  {
    v11 = *((unsigned int *)v5 + 14);
    v12 = 3 * v11;
    *(_DWORD *)(a3 + 24 * v11 + 8) = v11;
    if ( a2 != -1 )
      LODWORD(v11) = a2;
    *(_DWORD *)(a3 + 8 * v12 + 12) = v11;
    result = ACPIProcessorContainerFillIoctlBuffer((int)v5 + 16, *(_DWORD *)(a3 + 8 * v12 + 8), a3, (_DWORD)a4, v10);
    if ( (int)result < 0 )
      break;
    v14 = *a4;
    *(_DWORD *)(a3 + 8 * v12 + 24) = 0;
    v15 = (v14 + 3) & 0xFFFFFFFC;
    v16 = v15;
    *(_DWORD *)(a3 + 8 * v12 + 28) = v15;
    v17 = (_QWORD *)v5[4];
    v18 = a3 + v15;
    *a4 = v15;
    v19 = 0;
    while ( v17 != v5 + 4 )
    {
      *(_DWORD *)(v18 + 4LL * *(unsigned int *)(a3 + 8 * v12 + 24)) = *((_DWORD *)v17 - 1);
      v19 = *(_DWORD *)(a3 + 8 * v12 + 24) + 1;
      *(_DWORD *)(a3 + 8 * v12 + 24) = v19;
      v17 = (_QWORD *)*v17;
    }
    v20 = v5[66];
    *a4 = v16 + 4 * v19;
    result = ACPIAmliBuildObjectPathnameUnicode(v20, (__int64)v33);
    if ( (int)result < 0 )
      break;
    v21 = v34;
    v22 = Src;
    v23 = (*a4 + 1) & 0xFFFFFFFE;
    *a4 = v23;
    *(_DWORD *)(a3 + 8 * v12 + 16) = v23;
    memmove((void *)(a3 + v23), v22, v21);
    ExFreePoolWithTag(Src, 0);
    v24 = v34 + *a4;
    v25 = v5[6] == 0LL;
    *a4 = v24;
    if ( v25 )
    {
      *(_DWORD *)(a3 + 8 * v12 + 20) = 0;
    }
    else
    {
      v36 = 0;
      v32 = 0;
      v26 = (v24 + 3) & 0xFFFFFFFC;
      v27 = v26;
      *(_DWORD *)(a3 + 8 * v12 + 20) = v26;
      v28 = v5[6];
      *a4 = v26;
      v29 = (_DWORD *)(a3 + v26);
      result = ACPIIoctlCalculateOutputBufferSizeV1(v28, &v36, &v32, 0, 1);
      if ( (int)result < 0 )
        return result;
      v30 = v36 + 12;
      v31 = v36 + 12;
      if ( (unsigned int)(v36 + 12) < 0x14 )
      {
        v30 = 20;
        v31 = 20;
      }
      *v29 = 1114596673;
      *a4 = v27 + v31;
      v29[2] = v32;
      v29[1] = v30;
      result = ACPIIoctlCalculateOutputBufferV1(v5[6], (__int64)(v29 + 3), 0, 1);
      if ( (int)result < 0 )
        return result;
    }
    v5 = (_QWORD *)*v5;
    if ( v5 == a1 )
      return 0LL;
  }
  return result;
}
