/*
 * XREFs of PiQueryPowerRelations @ 0x14070CBE8
 * Callers:
 *     PnpDeviceActionWorker @ 0x14015F400 (PnpDeviceActionWorker.c)
 *     PipProcessRebuildPowerRelationsQueue @ 0x1406ECAB0 (PipProcessRebuildPowerRelationsQueue.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     IoAddTriageDumpDataBlock @ 0x140191E2C (IoAddTriageDumpDataBlock.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     PpDevNodeUnlockTree @ 0x14059CEB4 (PpDevNodeUnlockTree.c)
 *     PpDevNodeLockTree @ 0x14059CF10 (PpDevNodeLockTree.c)
 *     PnpQueryDeviceRelations @ 0x1406E92C0 (PnpQueryDeviceRelations.c)
 *     PiPnpRtlPdoRaiseNtPlugPlayPropertyChangeEvent @ 0x14070CDDC (PiPnpRtlPdoRaiseNtPlugPlayPropertyChangeEvent.c)
 *     PiValidatePowerRelations @ 0x14070CE58 (PiValidatePowerRelations.c)
 *     PiQueryPowerDependencyRelations @ 0x14070CFBC (PiQueryPowerDependencyRelations.c)
 */

__int64 __fastcall PiQueryPowerRelations(__int64 a1, char a2)
{
  unsigned int v2; // ebx
  int DeviceRelations; // edi
  int PowerDependencyRelations; // eax
  PVOID *v6; // rax
  int v7; // ecx
  _QWORD *v9; // r12
  _QWORD *v10; // rsi
  _DWORD *v11; // r8
  unsigned int v12; // r13d
  __int64 v13; // rax
  __int64 v14; // r15
  char *PoolWithTag; // rax
  _QWORD *v16; // rcx
  __int64 v17; // r15
  _QWORD *v18; // rax
  _QWORD *v19; // rcx
  __int64 v20; // rax
  _QWORD *v21; // rcx
  _QWORD *v22; // rdx
  __int64 v23; // r8
  _QWORD *v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rcx
  _WORD *v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // rdi
  __int64 v32; // rcx
  __int64 v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rcx
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // rcx
  __int64 v40; // rdx
  __int64 v41; // rax
  __int64 v42; // rcx
  __int64 v43; // rcx
  __int64 v44; // rdx
  __int64 v45; // rcx
  PVOID P; // [rsp+70h] [rbp+40h] BYREF

  v2 = 0;
  P = 0LL;
  DeviceRelations = 0;
  if ( !a2 )
  {
    DeviceRelations = PnpQueryDeviceRelations(*(_QWORD *)(a1 + 32), 2, 0LL, (__int64)&P);
    if ( DeviceRelations >= 0 )
    {
      v9 = (_QWORD *)(a1 + 176);
      v10 = *(_QWORD **)(a1 + 176);
      while ( v10 != v9 )
      {
        v20 = *v10;
        v21 = v10;
        v10 = (_QWORD *)v20;
        if ( *(_QWORD **)(v20 + 8) != v21
          || (v22 = (_QWORD *)v21[1], (_QWORD *)*v22 != v21)
          || (*v22 = v20, *(_QWORD *)(v20 + 8) = v22, v23 = v21[3], *(_QWORD **)(v23 + 8) != v21 + 3)
          || (v24 = (_QWORD *)v21[4], (_QWORD *)*v24 != v21 + 3) )
        {
LABEL_35:
          __fastfail(3u);
        }
        *v24 = v23;
        *(_QWORD *)(v23 + 8) = v24;
        ExFreePoolWithTag(v21, 0x72775044u);
      }
      v11 = P;
      if ( !P || !*(_DWORD *)P )
      {
        DeviceRelations = 0;
        goto LABEL_2;
      }
      v12 = 0;
      while ( 1 )
      {
        v13 = *(_QWORD *)&v11[2 * v12 + 2];
        if ( !v13 || (v14 = *(_QWORD *)(*(_QWORD *)(v13 + 312) + 40LL)) == 0 || (*(_DWORD *)(v14 + 396) & 0x20000) != 0 )
        {
          v25 = *(_QWORD *)&v11[2 * v12 + 2];
          if ( v25 )
          {
            IoAddTriageDumpDataBlock(v25, *(unsigned __int16 *)(v25 + 2));
            v11 = P;
            v26 = *(_QWORD *)(*((_QWORD *)P + v12 + 1) + 8LL);
            if ( v26 )
            {
              IoAddTriageDumpDataBlock(v26, *(__int16 *)(v26 + 2));
              v11 = P;
              v27 = (_WORD *)(*(_QWORD *)(*((_QWORD *)P + v12 + 1) + 8LL) + 56LL);
              if ( *v27 )
              {
                IoAddTriageDumpDataBlock((int)v27, 2);
                v28 = *(_QWORD *)(*((_QWORD *)P + v12 + 1) + 8LL);
                IoAddTriageDumpDataBlock(*(_QWORD *)(v28 + 64), *(unsigned __int16 *)(v28 + 56));
                v11 = P;
              }
            }
            v29 = *(_QWORD *)&v11[2 * v12 + 2];
            if ( v29 )
              v30 = *(_QWORD *)(*(_QWORD *)(v29 + 312) + 40LL);
            else
              v30 = 0LL;
            if ( v30 )
            {
              if ( v29 )
                v31 = *(_QWORD *)(*(_QWORD *)(v29 + 312) + 40LL);
              else
                v31 = 0LL;
              if ( v29 )
                v32 = *(_QWORD *)(*(_QWORD *)(v29 + 312) + 40LL);
              else
                LODWORD(v32) = 0;
              IoAddTriageDumpDataBlock(v32, 784);
              if ( *(_WORD *)(v31 + 40) )
              {
                IoAddTriageDumpDataBlock(v31 + 40, 2);
                IoAddTriageDumpDataBlock(*(_QWORD *)(v31 + 48), *(unsigned __int16 *)(v31 + 40));
              }
              v11 = P;
              v33 = *((_QWORD *)P + v12 + 1);
              if ( v33 )
                v34 = *(_QWORD *)(*(_QWORD *)(v33 + 312) + 40LL);
              else
                v34 = 0LL;
              if ( *(_WORD *)(v34 + 56) )
              {
                if ( v33 )
                  v35 = *(_QWORD *)(*(_QWORD *)(v33 + 312) + 40LL);
                else
                  LODWORD(v35) = 0;
                IoAddTriageDumpDataBlock(v35 + 56, 2);
                v36 = *((_QWORD *)P + v12 + 1);
                if ( v36 )
                  v37 = *(_QWORD *)(*(_QWORD *)(v36 + 312) + 40LL);
                else
                  v37 = 0LL;
                if ( v36 )
                  v38 = *(_QWORD *)(*(_QWORD *)(v36 + 312) + 40LL);
                else
                  v38 = 0LL;
                IoAddTriageDumpDataBlock(*(_QWORD *)(v38 + 64), *(unsigned __int16 *)(v37 + 56));
                v11 = P;
              }
              v39 = *(_QWORD *)&v11[2 * v12 + 2];
              if ( v39 )
                v40 = *(_QWORD *)(*(_QWORD *)(v39 + 312) + 40LL);
              else
                v40 = 0LL;
              if ( *(_QWORD *)(v40 + 16) )
              {
                v41 = v39 ? *(_QWORD *)(*(_QWORD *)(v39 + 312) + 40LL) : 0LL;
                if ( *(_WORD *)(*(_QWORD *)(v41 + 16) + 56LL) )
                {
                  if ( v39 )
                    v42 = *(_QWORD *)(*(_QWORD *)(v39 + 312) + 40LL);
                  else
                    v42 = 0LL;
                  IoAddTriageDumpDataBlock(*(_QWORD *)(v42 + 16) + 56, 2);
                  v43 = *((_QWORD *)P + v12 + 1);
                  if ( v43 )
                    v44 = *(_QWORD *)(*(_QWORD *)(v43 + 312) + 40LL);
                  else
                    v44 = 0LL;
                  if ( v43 )
                    v45 = *(_QWORD *)(*(_QWORD *)(v43 + 312) + 40LL);
                  else
                    v45 = 0LL;
                  IoAddTriageDumpDataBlock(
                    *(_QWORD *)(*(_QWORD *)(v45 + 16) + 64LL),
                    *(unsigned __int16 *)(*(_QWORD *)(v44 + 16) + 56LL));
                  v11 = P;
                }
              }
            }
          }
          KeBugCheckEx(0xCAu, 2uLL, *(_QWORD *)&v11[2 * v12 + 2], 0LL, 0LL);
        }
        if ( *(_QWORD *)(v14 + 16) )
        {
          PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x38uLL, 0x72775044u);
          if ( !PoolWithTag )
          {
            DeviceRelations = -1073741670;
            goto LABEL_2;
          }
          PoolWithTag[48] = 0;
          *((_QWORD *)PoolWithTag + 2) = a1 + 144;
          *((_QWORD *)PoolWithTag + 5) = v14 + 144;
          v16 = *(_QWORD **)(a1 + 184);
          if ( (_QWORD *)*v16 != v9 )
            goto LABEL_35;
          *(_QWORD *)PoolWithTag = v9;
          v17 = v14 + 160;
          *((_QWORD *)PoolWithTag + 1) = v16;
          *v16 = PoolWithTag;
          *(_QWORD *)(a1 + 184) = PoolWithTag;
          v18 = PoolWithTag + 24;
          v19 = *(_QWORD **)(v17 + 8);
          if ( *v19 != v17 )
            goto LABEL_35;
          *v18 = v17;
          v18[1] = v19;
          *v19 = v18;
          *(_QWORD *)(v17 + 8) = v18;
          v11 = P;
        }
        if ( ++v12 >= *v11 )
          goto LABEL_2;
      }
    }
    P = 0LL;
  }
LABEL_2:
  PowerDependencyRelations = PiQueryPowerDependencyRelations(a1);
  if ( DeviceRelations >= 0 && PowerDependencyRelations < 0 )
    DeviceRelations = PowerDependencyRelations;
  PiValidatePowerRelations(a1);
  v6 = (PVOID *)P;
  if ( P )
  {
    if ( *(_DWORD *)P )
    {
      do
      {
        ObfDereferenceObject(v6[v2 + 1]);
        v6 = (PVOID *)P;
        ++v2;
      }
      while ( v2 < *(_DWORD *)P );
    }
    ExFreePoolWithTag(v6, 0);
  }
  PpDevNodeLockTree(0);
  v7 = *(_DWORD *)(a1 + 300);
  if ( (unsigned int)(v7 - 768) > 1 && (unsigned int)(v7 - 787) > 1 )
    PiPnpRtlPdoRaiseNtPlugPlayPropertyChangeEvent(*(_QWORD *)(a1 + 32));
  PpDevNodeUnlockTree(0);
  return (unsigned int)DeviceRelations;
}
