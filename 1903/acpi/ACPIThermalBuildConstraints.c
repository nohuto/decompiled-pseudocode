/*
 * XREFs of ACPIThermalBuildConstraints @ 0x1C0093090
 * Callers:
 *     ACPIThermalWorker @ 0x1C0091ED0 (ACPIThermalWorker.c)
 * Callees:
 *     AMLIFreeDataBuffs @ 0x1C000A45C (AMLIFreeDataBuffs.c)
 *     ACPIThermalActivateConstraint @ 0x1C000A480 (ACPIThermalActivateConstraint.c)
 *     AMLIEvalNameSpaceObject @ 0x1C00116EC (AMLIEvalNameSpaceObject.c)
 *     AMLIEvalPkgDataElement @ 0x1C001B48C (AMLIEvalPkgDataElement.c)
 *     memmove @ 0x1C0031A00 (memmove.c)
 *     memset @ 0x1C0031D40 (memset.c)
 */

__int64 __fastcall ACPIThermalBuildConstraints(__int64 *a1, __int64 a2, char a3, unsigned __int8 a4)
{
  int v6; // ebx
  unsigned int v7; // esi
  __int64 v8; // r15
  unsigned int v9; // r14d
  unsigned int v10; // r12d
  _QWORD *PoolWithTag; // rax
  _QWORD *v12; // rdi
  size_t v14[5]; // [rsp+20h] [rbp-50h] BYREF
  _QWORD v15[5]; // [rsp+48h] [rbp-28h] BYREF

  memset(v14, 0, sizeof(v14));
  memset(v15, 0, sizeof(v15));
  v6 = AMLIEvalNameSpaceObject(a1, v15, 0, 0LL);
  if ( v6 >= 0 )
  {
    if ( WORD1(v15[0]) == 4 )
    {
      v7 = 0;
      v8 = *(_QWORD *)(a2 + 200);
      v9 = *(_DWORD *)v15[4];
      if ( *(_DWORD *)v15[4] )
      {
        while ( 1 )
        {
          v6 = AMLIEvalPkgDataElement((__int64)v15, v7, v14);
          if ( v6 < 0 )
            goto LABEL_11;
          if ( WORD1(v14[0]) != 2 )
            break;
          v10 = LODWORD(v14[3]) + 56;
          PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)(LODWORD(v14[3]) + 56), 0x54706341u);
          v12 = PoolWithTag;
          if ( !PoolWithTag )
          {
            v6 = -1073741670;
LABEL_17:
            AMLIFreeDataBuffs(v14);
            goto LABEL_11;
          }
          memset(PoolWithTag, 0, v10);
          memmove(v12 + 7, (const void *)v14[4], LODWORD(v14[3]));
          AMLIFreeDataBuffs(v14);
          v12[4] = a2;
          *((_DWORD *)v12 + 12) = v7;
          *((_BYTE *)v12 + 52) = a3;
          *((_BYTE *)v12 + 54) = a4;
          if ( a3 )
          {
            *((_BYTE *)v12 + 53) = *(_BYTE *)(v8 + 96);
            *((_BYTE *)v12 + 55) = 0;
          }
          else
          {
            *((_BYTE *)v12 + 53) = 100;
            if ( (unsigned int)a4 >= *(_DWORD *)(v8 + 92) )
              *((_BYTE *)v12 + 55) = 1;
          }
          ACPIThermalActivateConstraint(v12);
          if ( ++v7 >= v9 )
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
    AMLIFreeDataBuffs(v15);
  }
  return (unsigned int)v6;
}
