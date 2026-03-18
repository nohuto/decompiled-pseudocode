/*
 * XREFs of ACPIThermalBuildConstraints @ 0x1C008F5E0
 * Callers:
 *     ACPIThermalWorker @ 0x1C0097860 (ACPIThermalWorker.c)
 * Callees:
 *     AMLIEvalNameSpaceObject @ 0x1C000B954 (AMLIEvalNameSpaceObject.c)
 *     ACPIThermalActivateConstraint @ 0x1C000DFF0 (ACPIThermalActivateConstraint.c)
 *     AMLIEvalPkgDataElement @ 0x1C000EC04 (AMLIEvalPkgDataElement.c)
 *     AMLIFreeDataBuffs @ 0x1C001D1E4 (AMLIFreeDataBuffs.c)
 *     memmove @ 0x1C0030D80 (memmove.c)
 *     memset @ 0x1C00310C0 (memset.c)
 */

__int64 __fastcall ACPIThermalBuildConstraints(unsigned __int64 *a1, __int64 a2, char a3, unsigned __int8 a4)
{
  __int64 v5; // rdx
  int v6; // ebx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned int v9; // esi
  __int64 v10; // r15
  unsigned int v11; // r14d
  unsigned int v12; // r12d
  PVOID PoolWithTag; // rax
  __int64 v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  _BYTE v19[2]; // [rsp+20h] [rbp-50h] BYREF
  __int16 v20; // [rsp+22h] [rbp-4Eh]
  size_t Size; // [rsp+38h] [rbp-38h]
  void *Src; // [rsp+40h] [rbp-30h]
  _BYTE v23[2]; // [rsp+48h] [rbp-28h] BYREF
  __int16 v24; // [rsp+4Ah] [rbp-26h]
  unsigned int *v25; // [rsp+68h] [rbp-8h]

  v6 = AMLIEvalNameSpaceObject(a1, v23, 0, 0LL);
  if ( v6 >= 0 )
  {
    if ( v24 == 4 )
    {
      v9 = 0;
      v10 = *(_QWORD *)(a2 + 200);
      v11 = *v25;
      if ( *v25 )
      {
        while ( 1 )
        {
          v6 = AMLIEvalPkgDataElement((__int64)v23, v9, v19);
          if ( v6 < 0 )
            goto LABEL_11;
          if ( v20 != 2 )
            break;
          v12 = Size + 56;
          PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)(Size + 56), 0x54706341u);
          v14 = (__int64)PoolWithTag;
          if ( !PoolWithTag )
          {
            v6 = -1073741670;
LABEL_17:
            AMLIFreeDataBuffs((__int64)v19, v5, v7, v8);
            goto LABEL_11;
          }
          memset(PoolWithTag, 0, v12);
          memmove((void *)(v14 + 56), Src, (unsigned int)Size);
          AMLIFreeDataBuffs((__int64)v19, v15, v16, v17);
          *(_QWORD *)(v14 + 32) = a2;
          *(_DWORD *)(v14 + 48) = v9;
          *(_BYTE *)(v14 + 52) = a3;
          *(_BYTE *)(v14 + 54) = a4;
          if ( a3 )
          {
            *(_BYTE *)(v14 + 53) = *(_BYTE *)(v10 + 96);
            *(_BYTE *)(v14 + 55) = 0;
          }
          else
          {
            *(_BYTE *)(v14 + 53) = 100;
            if ( (unsigned int)a4 >= *(_DWORD *)(v10 + 92) )
              *(_BYTE *)(v14 + 55) = 1;
          }
          ACPIThermalActivateConstraint(v14);
          if ( ++v9 >= v11 )
            goto LABEL_11;
        }
        v6 = -1072431095;
        goto LABEL_17;
      }
    }
    else
    {
      v6 = -1072431095;
    }
LABEL_11:
    AMLIFreeDataBuffs((__int64)v23, v5, v7, v8);
  }
  return (unsigned int)v6;
}
