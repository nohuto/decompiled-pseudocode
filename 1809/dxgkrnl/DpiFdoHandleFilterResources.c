/*
 * XREFs of DpiFdoHandleFilterResources @ 0x1C015D5A0
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1C0022E80 (memmove.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     DpiDisableInterruptResources @ 0x1C0268558 (DpiDisableInterruptResources.c)
 */

__int64 __fastcall DpiFdoHandleFilterResources(__int64 a1, IRP *a2)
{
  __int64 v2; // rdi
  IRP *v4; // rbp
  __int64 v5; // r15
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 Status; // rbx
  unsigned int *Information; // rsi
  unsigned int v11; // edi
  _OWORD *PoolWithTag; // rax
  __int64 v13; // rcx
  _OWORD *v14; // r14
  unsigned int *v15; // r15
  unsigned int v16; // r12d
  unsigned int *v17; // rdi
  unsigned int *v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax

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
    if ( *(_BYTE *)(v2 + 1148) != 1 )
    {
      v20 = WdLogNewEntry5_WdEvent(v7, v6);
      *(_QWORD *)(v20 + 24) = a1;
      WdLogEvent5_WdEvent(v20);
      goto LABEL_3;
    }
    v7 = *Information;
    v11 = v7 + 96 * Information[7];
    if ( v11 < (unsigned int)v7 )
      goto LABEL_15;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, v11, 0x74727044u);
    v14 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, v11);
      v15 = Information + 8;
      v16 = 0;
      *v14 = *(_OWORD *)Information;
      v14[1] = *((_OWORD *)Information + 1);
      *(_DWORD *)v14 = v11;
      v17 = (unsigned int *)(v14 + 2);
      if ( Information[7] )
      {
        do
        {
          memmove(v17, v15, 32LL * v15[1] + 8);
          ++v16;
          v18 = &v17[8 * v17[1]];
          *((_WORD *)v18 + 4) = 257;
          *((_BYTE *)v18 + 10) = 3;
          *((_WORD *)v18 + 6) = 1;
          v18[4] = 12;
          v18[5] = 1;
          *((_QWORD *)v18 + 3) = 944LL;
          *((_QWORD *)v18 + 4) = 955LL;
          *((_WORD *)v18 + 20) = 257;
          *((_BYTE *)v18 + 42) = 3;
          *((_WORD *)v18 + 22) = 1;
          v18[12] = 32;
          v18[13] = 1;
          *((_QWORD *)v18 + 7) = 960LL;
          *((_QWORD *)v18 + 8) = 991LL;
          *((_WORD *)v18 + 36) = 769;
          *((_BYTE *)v18 + 74) = 3;
          *((_WORD *)v18 + 38) = 0;
          v18[20] = 0x20000;
          v18[21] = 1;
          *((_QWORD *)v18 + 11) = 655360LL;
          *((_QWORD *)v18 + 12) = 786431LL;
          v17[1] += 3;
          v15 += 8 * v15[1] + 2;
          v17 += 8 * v17[1] + 2;
        }
        while ( v16 < Information[7] );
        v4 = a2;
      }
      ExFreePoolWithTag(Information, 0);
      v4->IoStatus.Information = (ULONG_PTR)v14;
    }
    else
    {
      LODWORD(Status) = -1073741801;
      v21 = WdLogNewEntry5_WdLowResource(v13);
      *(_QWORD *)(v21 + 24) = -1073741801LL;
      WdLogEvent5_WdLowResource(v21);
    }
  }
  else if ( !*(_BYTE *)(v2 + 480) && !*(_BYTE *)(v2 + 2623) && !*(_BYTE *)(v2 + 1151) )
  {
LABEL_15:
    v19 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v19 + 24) = Status;
    WdLogEvent5_WdError(v19);
  }
LABEL_3:
  v4->IoStatus.Status = Status;
  IofCompleteRequest(v4, 1);
  return (unsigned int)Status;
}
