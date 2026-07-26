/*
 * XREFs of ?ndisImmediateReadWriteSharedMemory@@YAXPEAXKPEAEKE@Z @ 0x1C00807F8
 * Callers:
 *     NdisImmediateReadSharedMemory @ 0x1C0081380 (NdisImmediateReadSharedMemory.c)
 *     NdisImmediateWriteSharedMemory @ 0x1C0081430 (NdisImmediateWriteSharedMemory.c)
 * Callees:
 *     ndisTranslateResources @ 0x1C002EA28 (ndisTranslateResources.c)
 *     ?ndisStartMapping@@YAJW4_INTERFACE_TYPE@@KKKKPEAPEAXPEAE@Z @ 0x1C00808E0 (-ndisStartMapping@@YAJW4_INTERFACE_TYPE@@KKKKPEAPEAXPEAE@Z.c)
 */

void __fastcall ndisImmediateReadWriteSharedMemory(
        _QWORD *a1,
        unsigned int a2,
        unsigned __int8 *a3,
        unsigned int a4,
        unsigned __int8 a5)
{
  __int64 v5; // rcx
  enum _INTERFACE_TYPE v8; // r14d
  unsigned int v9; // r15d
  enum _INTERFACE_TYPE v11; // ecx
  PVOID v12; // rax
  signed __int32 v13[8]; // [rsp+0h] [rbp-50h] BYREF
  __int64 v14; // [rsp+40h] [rbp-10h] BYREF
  unsigned int v15[2]; // [rsp+48h] [rbp-8h] BYREF
  PVOID BaseAddress; // [rsp+80h] [rbp+30h] BYREF
  unsigned __int8 v17; // [rsp+88h] [rbp+38h] BYREF

  v5 = a1[1];
  *(_QWORD *)v15 = 0LL;
  v14 = 0LL;
  v8 = *(_DWORD *)(v5 + 3720);
  v9 = *(_DWORD *)(v5 + 3724);
  if ( !(unsigned int)ndisTranslateResources(v5, 3LL, a2, &v14, v15) )
  {
    v11 = InterfaceTypeUndefined;
    LODWORD(BaseAddress) = v14;
    if ( !*(_QWORD *)v15 )
      v11 = v8;
    if ( (int)ndisStartMapping(v11, v9, a2, a4, 0, &BaseAddress, &v17) >= 0 )
    {
      if ( a5 )
      {
        v12 = BaseAddress;
        qmemcpy(a3, BaseAddress, a4);
      }
      else
      {
        qmemcpy(BaseAddress, a3, a4);
        _InterlockedOr(v13, 0);
        v12 = BaseAddress;
      }
      if ( v17 )
        MmUnmapIoSpace(v12, a4);
    }
  }
}
