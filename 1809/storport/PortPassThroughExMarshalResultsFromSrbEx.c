/*
 * XREFs of PortPassThroughExMarshalResultsFromSrbEx @ 0x1C0052A14
 * Callers:
 *     PortpCompleteRequestIrp @ 0x1C0022034 (PortpCompleteRequestIrp.c)
 * Callees:
 *     memmove @ 0x1C002C080 (memmove.c)
 *     PortPassThroughExApplyNormalizedRequest @ 0x1C0052858 (PortPassThroughExApplyNormalizedRequest.c)
 *     PortPassThroughExGetBasicStructureSize @ 0x1C00529EC (PortPassThroughExGetBasicStructureSize.c)
 *     PortPassThroughExNormalize @ 0x1C0052BF4 (PortPassThroughExNormalize.c)
 */

void __fastcall PortPassThroughExMarshalResultsFromSrbEx(PIRP Irp, __int64 a2, char a3, __int64 a4)
{
  NTSTATUS BasicStructureSize; // edi
  unsigned __int64 v9; // rsi
  unsigned __int8 *PoolWithTag; // rbx
  unsigned __int8 v11; // r15
  NTSTATUS v12; // r8d
  unsigned __int8 v13; // cl
  const void *v14; // r9
  unsigned int Length; // r10d
  int *v16; // rax
  int v17; // edx
  unsigned __int8 v18; // dl
  char *v19; // rax
  unsigned __int8 v20; // cl
  unsigned int v21; // eax
  __int64 v22; // rcx
  SIZE_T NumberOfBytes; // [rsp+68h] [rbp+20h] BYREF

  LODWORD(NumberOfBytes) = 0;
  *(_QWORD *)(a4 + 8) = 0LL;
  BasicStructureSize = PortPassThroughExGetBasicStructureSize((__int64)Irp, (ULONG *)&NumberOfBytes);
  if ( BasicStructureSize < 0 )
    goto LABEL_40;
  v9 = (unsigned int)NumberOfBytes;
  PoolWithTag = (unsigned __int8 *)ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)NumberOfBytes, 0x69506C50u);
  if ( !PoolWithTag )
    BasicStructureSize = -1073741670;
  if ( BasicStructureSize >= 0 )
  {
    BasicStructureSize = PortPassThroughExNormalize(PoolWithTag, Irp);
    if ( BasicStructureSize >= 0 )
    {
      v11 = 0;
      v12 = *(_DWORD *)a4;
      v13 = 0;
      v14 = 0LL;
      Length = Irp->Tail.Overlay.CurrentStackLocation->Parameters.Read.Length;
      v16 = (int *)(a2 + *(unsigned int *)(a2 + 120));
      LODWORD(NumberOfBytes) = Length;
      v17 = *v16;
      if ( *v16 == 64 || v17 == 65 )
      {
        v14 = (const void *)*((_QWORD *)v16 + 2);
      }
      else
      {
        if ( v17 != 66 )
          goto LABEL_12;
        v14 = (const void *)*((_QWORD *)v16 + 3);
      }
      v11 = *((_BYTE *)v16 + 8);
      v13 = *((_BYTE *)v16 + 9);
LABEL_12:
      PoolWithTag[16] = v11;
      if ( *(char *)(a2 + 3) >= 0 )
      {
        PoolWithTag[17] = 0;
        v18 = 0;
      }
      else
      {
        v18 = PoolWithTag[17];
        if ( v18 )
        {
          v19 = (char *)Irp->AssociatedIrp.MasterIrp + *((unsigned int *)PoolWithTag + 7);
          if ( v19 )
          {
            PoolWithTag[17] = v13;
            memmove(v19, v14, v13);
            v18 = PoolWithTag[17];
            Length = NumberOfBytes;
          }
        }
        v12 = 0;
      }
      BasicStructureSize = 0;
      v20 = PoolWithTag[18];
      v21 = *(_DWORD *)(a2 + 60);
      if ( (*(_BYTE *)(a2 + 3) & 0x3F) != 0x12 )
        BasicStructureSize = v12;
      if ( v20 == 1 )
      {
        *((_DWORD *)PoolWithTag + 9) = v21;
      }
      else
      {
        *((_DWORD *)PoolWithTag + 8) = v21;
        if ( v20 == 3 && v21 && *((_DWORD *)PoolWithTag + 9) )
          *((_DWORD *)PoolWithTag + 9) = *(_DWORD *)(*(unsigned int *)(a2 + 124) + a2 + 8);
      }
      if ( v18 )
      {
        v9 = (unsigned int)v18 + *((_DWORD *)PoolWithTag + 7);
      }
      else
      {
        *(_QWORD *)(a4 + 8) = v9;
        if ( BasicStructureSize >= 0 || !v11 )
          goto LABEL_32;
        BasicStructureSize = 0;
        v9 = 8LL;
      }
      *(_QWORD *)(a4 + 8) = v9;
LABEL_32:
      if ( !a3 )
      {
        v22 = *((_QWORD *)PoolWithTag + 6);
        if ( v22 )
        {
          v9 = v22 + *((unsigned int *)PoolWithTag + 9);
          *(_QWORD *)(a4 + 8) = v9;
        }
      }
      if ( v9 >= Length )
        v9 = Length;
      *(_QWORD *)(a4 + 8) = v9;
      PortPassThroughExApplyNormalizedRequest((__int128 *)PoolWithTag, Irp);
    }
  }
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0x69506C50u);
LABEL_40:
  *(_DWORD *)a4 = BasicStructureSize;
}
