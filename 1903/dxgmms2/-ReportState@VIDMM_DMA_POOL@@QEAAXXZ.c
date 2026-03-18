/*
 * XREFs of ?ReportState@VIDMM_DMA_POOL@@QEAAXXZ @ 0x1C00B608C
 * Callers:
 *     VidMmReportDmaPoolState @ 0x1C0024BB0 (VidMmReportDmaPoolState.c)
 *     ?ReportVidMmStateWorker@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C00AF214 (-ReportVidMmStateWorker@VIDMM_GLOBAL@@QEAAXXZ.c)
 * Callees:
 *     McTemplateK0pppqxqqqqqqqpppqqqqqqqqqqtpht @ 0x1C001812C (McTemplateK0pppqxqqqqqqqpppqqqqqqqqqqtpht.c)
 *     McTemplateK0pppppppppppp @ 0x1C0025B08 (McTemplateK0pppppppppppp.c)
 *     McTemplateK0pqx @ 0x1C002647C (McTemplateK0pqx.c)
 *     McTemplateK0pppxxxp @ 0x1C002756C (McTemplateK0pppxxxp.c)
 */

void __fastcall VIDMM_DMA_POOL::ReportState(VIDMM_DMA_POOL *this, __int64 a2, const GUID *a3)
{
  char *v3; // r15
  char *v5; // rdi
  int v6; // r13d
  __int64 v7; // rbx
  __int64 v8; // rsi
  __int64 v9; // rsi
  int *v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r9
  int v13; // r11d
  int v14; // ebp
  int v15; // r12d
  int v16; // r10d
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // [rsp+20h] [rbp-168h]
  __int64 v21; // [rsp+48h] [rbp-140h]
  int v22; // [rsp+60h] [rbp-128h]
  char v23; // [rsp+B0h] [rbp-D8h]
  int v24; // [rsp+100h] [rbp-88h]
  int v25; // [rsp+104h] [rbp-84h]
  int v26; // [rsp+198h] [rbp+10h]
  int v27; // [rsp+1A0h] [rbp+18h]
  int v28; // [rsp+1A8h] [rbp+20h]

  v3 = (char *)this + 96;
  v5 = (char *)*((_QWORD *)this + 12);
  if ( v5 != (char *)this + 96 )
  {
    LOBYTE(v6) = 0;
    while ( 1 )
    {
      v7 = *((_QWORD *)v5 + 7);
      if ( !v7 )
        goto LABEL_29;
      v8 = *((_QWORD *)this + 3);
      if ( v8 )
        v9 = *(_QWORD *)(v8 + 16);
      else
        v9 = 0LL;
      if ( bTracingEnabled )
      {
        a3 = *(const GUID **)(v7 + 40);
        if ( a3 )
          v10 = *(int **)a3[1].Data4;
        else
          v10 = 0LL;
        v11 = *(_QWORD *)(v7 + 104);
        if ( v11 )
          v12 = *(_QWORD *)(*(_QWORD *)(v11 + 8) + 8LL);
        else
          v12 = 0LL;
        LOBYTE(v13) = 0;
        LOBYTE(v14) = 0;
        LOBYTE(v15) = 0;
        LOBYTE(v16) = 0;
        LOBYTE(v25) = 0;
        LOBYTE(v24) = 0;
        LOBYTE(v28) = 0;
        LOBYTE(v27) = 0;
        LOBYTE(v26) = 0;
        v3 = (char *)this + 96;
        if ( v10 )
        {
          v16 = *v10;
          v13 = v10[1];
          v14 = v10[2];
          v15 = v10[3];
          v6 = v10[4];
          v25 = v10[5];
          v24 = v10[6];
          v28 = v10[7];
          v27 = v10[8];
          v3 = (char *)this + 96;
          v26 = v10[9];
        }
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
        {
          v23 = v6;
          LOBYTE(v6) = 0;
          McTemplateK0pppqxqqqqqqqpppqqqqqqqqqqtpht(
            *(_QWORD *)(v7 + 16),
            &EventReportAdapterAllocation,
            a3,
            v12,
            v9,
            *(_QWORD *)(*(_QWORD *)this + 24LL),
            **(_DWORD **)(v7 + 504),
            *(_QWORD *)(v7 + 16),
            *(_DWORD *)(v7 + 32),
            v21,
            *(_DWORD *)(v7 + 68),
            *(_DWORD *)(v7 + 72),
            v22,
            *(_DWORD *)(v7 + 64),
            *(_DWORD *)(v7 + 376),
            v7,
            (char)a3,
            0,
            v16,
            v13,
            v14,
            v15,
            v23,
            v25,
            v24,
            v28,
            v27,
            v26,
            (*(_DWORD *)(v7 + 84) & 2) != 0,
            *(_QWORD *)(v7 + 360),
            *(_BYTE *)(v7 + 76) & 0x3F,
            BYTE1(*(_DWORD *)(v7 + 76)) & 1);
        }
        else
        {
          LOBYTE(v6) = 0;
        }
      }
      if ( !v9 )
        break;
      a3 = (const GUID *)*((_QWORD *)v5 + 8);
      if ( bTracingEnabled )
      {
        if ( (**(_DWORD **)(v7 + 504) & 8) != 0 )
          v17 = *(_QWORD *)(v7 + 368);
        else
          v17 = *(_QWORD *)(*(_QWORD *)&a3->Data1 + 16LL);
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
        {
          v22 = 0;
          LODWORD(v21) = 0;
          McTemplateK0pppppppppppp(
            v17,
            &EventReportDeviceAllocation,
            a3,
            *(_QWORD *)(*(_QWORD *)(v9 + 40) + 64LL),
            v9,
            *(_QWORD *)(*(_QWORD *)(v9 + 16) + 16LL),
            a3,
            v7,
            0LL);
        }
LABEL_29:
        if ( bTracingEnabled )
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          {
            v21 = *((_QWORD *)v5 + 7);
            McTemplateK0pppxxxp(
              *((unsigned int *)v5 + 13),
              *((unsigned int *)v5 + 12),
              *(const GUID **)this,
              *((_QWORD *)this + 3),
              *(_QWORD *)(*(_QWORD *)this + 24LL),
              v5,
              *((_QWORD *)v5 + 5),
              *((unsigned int *)v5 + 12),
              *((unsigned int *)v5 + 13));
          }
        }
      }
      v5 = *(char **)v5;
      if ( v5 == v3 )
        return;
    }
    v18 = *(_QWORD *)(v7 + 136);
    if ( v18 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    {
      v19 = (unsigned int)(*(_DWORD *)(v18 + 16) + 1);
      LODWORD(v20) = v19;
      McTemplateK0pqx(v19, &EventReportCommittedGlobalAllocation, a3, v7, v20, *(_QWORD *)(v7 + 144));
    }
    goto LABEL_29;
  }
}
