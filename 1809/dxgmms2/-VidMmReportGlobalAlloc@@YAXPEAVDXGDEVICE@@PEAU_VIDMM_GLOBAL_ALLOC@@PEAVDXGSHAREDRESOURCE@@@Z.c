/*
 * XREFs of ?VidMmReportGlobalAlloc@@YAXPEAVDXGDEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAVDXGSHAREDRESOURCE@@@Z @ 0x1C00B3CB4
 * Callers:
 *     VidMmReportContextAllocList @ 0x1C00B41E0 (VidMmReportContextAllocList.c)
 *     VidMmReportMultiGlobalAlloc @ 0x1C00B4410 (VidMmReportMultiGlobalAlloc.c)
 * Callees:
 *     McTemplateK0pppqxqqqqqqqpppqqqqqqqqqqtpht @ 0x1C0018E68 (McTemplateK0pppqxqqqqqqqpppqqqqqqqqqqtpht.c)
 *     McTemplateK0puu @ 0x1C0026ADC (McTemplateK0puu.c)
 */

void __fastcall VidMmReportGlobalAlloc(struct DXGDEVICE *a1, struct _VIDMM_GLOBAL_ALLOC *a2, const GUID *a3)
{
  __int64 v3; // r9
  int v4; // r13d
  __int64 v7; // r10
  int *v8; // rdx
  __int64 v9; // rcx
  int v10; // edi
  int v11; // esi
  int v12; // ebp
  int v13; // r14d
  int v14; // r15d
  int v15; // r12d
  char v16; // al
  __int64 v17; // rcx
  __int64 v18; // [rsp+20h] [rbp-158h]
  __int64 v19; // [rsp+28h] [rbp-150h]
  int v20; // [rsp+48h] [rbp-130h]
  int v21; // [rsp+60h] [rbp-118h]
  int v22; // [rsp+100h] [rbp-78h]
  int v23; // [rsp+104h] [rbp-74h]
  char v24; // [rsp+190h] [rbp+18h]
  int v25; // [rsp+198h] [rbp+20h]

  v24 = (char)a3;
  v3 = *((_QWORD *)a2 + 63);
  LOBYTE(v4) = 0;
  if ( bTracingEnabled )
  {
    v7 = *((_QWORD *)a2 + 5);
    if ( v7 )
      v8 = *(int **)(v7 + 24);
    else
      v8 = 0LL;
    v9 = *((_QWORD *)a2 + 13);
    if ( v9 )
      a3 = *(const GUID **)(*(_QWORD *)(v9 + 8) + 8LL);
    else
      a3 = 0LL;
    LOBYTE(v10) = 0;
    LOBYTE(v11) = 0;
    LOBYTE(v12) = 0;
    LOBYTE(v13) = 0;
    LOBYTE(v14) = 0;
    LOBYTE(v15) = 0;
    LOBYTE(v23) = 0;
    LOBYTE(v22) = 0;
    LOBYTE(v25) = 0;
    v16 = *(_DWORD *)v3;
    if ( v8 )
    {
      v10 = *v8;
      v11 = v8[1];
      v12 = v8[2];
      v13 = v8[3];
      v14 = v8[4];
      v15 = v8[5];
      v4 = v8[6];
      v23 = v8[7];
      v22 = v8[8];
      v25 = v8[9];
      v16 = *(_DWORD *)v3;
    }
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
    {
      McTemplateK0pppqxqqqqqqqpppqqqqqqqqqqtpht(
        *((_QWORD *)a2 + 2),
        &EventReportAdapterAllocation,
        a3,
        (__int64)a3,
        (char)a1,
        *(_QWORD *)(*((_QWORD *)a1 + 2) + 16LL),
        v16,
        *((_QWORD *)a2 + 2),
        *((_DWORD *)a2 + 8),
        v20,
        *((_DWORD *)a2 + 17),
        *((_DWORD *)a2 + 18),
        v21,
        *((_DWORD *)a2 + 16),
        *((_DWORD *)a2 + 94),
        (char)a2,
        v7,
        v24,
        v10,
        v11,
        v12,
        v13,
        v14,
        v15,
        v4,
        v23,
        v22,
        v25,
        (*((_DWORD *)a2 + 21) & 2) != 0,
        *((_QWORD *)a2 + 45),
        *((_DWORD *)a2 + 19) & 0x3F,
        BYTE1(*((_DWORD *)a2 + 19)) & 1);
      v3 = *((_QWORD *)a2 + 63);
    }
  }
  v17 = *(unsigned __int16 *)(v3 + 4);
  if ( (_WORD)v17 && bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
  {
    LOBYTE(v19) = *((_BYTE *)a2 + 432);
    LOBYTE(v18) = *(_WORD *)(v3 + 4);
    McTemplateK0puu(v17, &EventReportOfferAllocation, a3, a2, v18, v19);
  }
}
