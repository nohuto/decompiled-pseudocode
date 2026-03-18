/*
 * XREFs of DpiFdoHandleFilterResources @ 0x1C0181A60
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1C0025100 (memmove.c)
 *     memset @ 0x1C0025440 (memset.c)
 *     DpiDisableInterruptResources @ 0x1C029E5D8 (DpiDisableInterruptResources.c)
 */

__int64 __fastcall DpiFdoHandleFilterResources(__int64 a1, IRP *a2)
{
  __int64 v2; // rdi
  IRP *v4; // rbp
  __int64 v5; // r15
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 Status; // rbx
  unsigned int *Information; // rsi
  unsigned int v12; // edi
  _OWORD *PoolWithTag; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  _OWORD *v18; // r14
  unsigned int *v19; // r15
  unsigned int v20; // r12d
  unsigned int *v21; // rdi
  unsigned int *v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax

  v2 = *(_QWORD *)(a1 + 64);
  v4 = a2;
  v5 = *(_QWORD *)(v2 + 40);
  IoForwardIrpSynchronously(*(PDEVICE_OBJECT *)(v2 + 160), a2);
  Status = v4->IoStatus.Status;
  if ( (int)Status >= 0 )
  {
    Information = (unsigned int *)v4->IoStatus.Information;
    if ( !*(_QWORD *)(v5 + 184) )
      DpiDisableInterruptResources(v4->IoStatus.Information);
    if ( *(_BYTE *)(v2 + 1156) != 1 )
    {
      v24 = WdLogNewEntry5_WdEvent(v7);
      *(_QWORD *)(v24 + 24) = a1;
      WdLogEvent5_WdEvent(v24);
      goto LABEL_3;
    }
    v7 = *Information;
    v12 = v7 + 96 * Information[7];
    if ( v12 < (unsigned int)v7 )
      goto LABEL_15;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, v12, 0x74727044u);
    v18 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, v12);
      v19 = Information + 8;
      v20 = 0;
      *v18 = *(_OWORD *)Information;
      v18[1] = *((_OWORD *)Information + 1);
      *(_DWORD *)v18 = v12;
      v21 = (unsigned int *)(v18 + 2);
      if ( Information[7] )
      {
        do
        {
          memmove(v21, v19, 32LL * v19[1] + 8);
          ++v20;
          v22 = &v21[8 * v21[1]];
          *((_WORD *)v22 + 4) = 257;
          *((_BYTE *)v22 + 10) = 3;
          *((_WORD *)v22 + 6) = 1;
          v22[4] = 12;
          v22[5] = 1;
          *((_QWORD *)v22 + 3) = 944LL;
          *((_QWORD *)v22 + 4) = 955LL;
          *((_WORD *)v22 + 20) = 257;
          *((_BYTE *)v22 + 42) = 3;
          *((_WORD *)v22 + 22) = 1;
          v22[12] = 32;
          v22[13] = 1;
          *((_QWORD *)v22 + 7) = 960LL;
          *((_QWORD *)v22 + 8) = 991LL;
          *((_WORD *)v22 + 36) = 769;
          *((_BYTE *)v22 + 74) = 3;
          *((_WORD *)v22 + 38) = 0;
          v22[20] = 0x20000;
          v22[21] = 1;
          *((_QWORD *)v22 + 11) = 655360LL;
          *((_QWORD *)v22 + 12) = 786431LL;
          v21[1] += 3;
          v19 += 8 * v19[1] + 2;
          v21 += 8 * v21[1] + 2;
        }
        while ( v20 < Information[7] );
        v4 = a2;
      }
      ExFreePoolWithTag(Information, 0);
      v4->IoStatus.Information = (ULONG_PTR)v18;
    }
    else
    {
      LODWORD(Status) = -1073741801;
      v25 = WdLogNewEntry5_WdLowResource(v15, v14, v16, v17);
      *(_QWORD *)(v25 + 24) = -1073741801LL;
      WdLogEvent5_WdLowResource(v25);
    }
  }
  else if ( !*(_BYTE *)(v2 + 480) && !*(_BYTE *)(v2 + 2695) && !*(_BYTE *)(v2 + 1159) )
  {
LABEL_15:
    v23 = WdLogNewEntry5_WdError(v7, v6, v8);
    *(_QWORD *)(v23 + 24) = Status;
    WdLogEvent5_WdError(v23);
  }
LABEL_3:
  v4->IoStatus.Status = Status;
  IofCompleteRequest(v4, 1);
  return (unsigned int)Status;
}
