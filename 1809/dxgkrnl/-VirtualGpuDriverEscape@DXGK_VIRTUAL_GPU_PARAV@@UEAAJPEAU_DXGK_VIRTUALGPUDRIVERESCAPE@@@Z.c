/*
 * XREFs of ?VirtualGpuDriverEscape@DXGK_VIRTUAL_GPU_PARAV@@UEAAJPEAU_DXGK_VIRTUALGPUDRIVERESCAPE@@@Z @ 0x1C01E6730
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     ?VgpuTrace@@YAXEJPEAXPEBG1ZZ @ 0x1C0035FC0 (-VgpuTrace@@YAXEJPEAXPEBG1ZZ.c)
 *     ?VgpuTraceFrequentRead@@YAXEJPEAXPEBG1ZZ @ 0x1C01E0530 (-VgpuTraceFrequentRead@@YAXEJPEAXPEBG1ZZ.c)
 */

__int64 __fastcall DXGK_VIRTUAL_GPU_PARAV::VirtualGpuDriverEscape(
        DXGK_VIRTUAL_GPU_PARAV *this,
        struct _DXGK_VIRTUALGPUDRIVERESCAPE *a2)
{
  unsigned int v3; // ebp
  unsigned __int64 InputBufferSize; // rdx
  __int64 v6; // rcx
  __int64 OutputBufferSize; // rax
  unsigned int *pInputBuffer; // rsi
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  int v13; // ecx
  __int64 v14; // rcx
  bool v15; // zf
  unsigned int v16; // eax
  __int64 v17; // rcx
  __int64 v18; // r8
  PVOID pOutputBuffer; // [rsp+40h] [rbp-28h] BYREF
  __int64 v20; // [rsp+48h] [rbp-20h]
  __int64 v21; // [rsp+50h] [rbp-18h]

  v3 = 0;
  InputBufferSize = a2->InputBufferSize;
  if ( (unsigned int)InputBufferSize < 0xC )
  {
    v6 = WdLogNewEntry5_WdError(this);
    OutputBufferSize = a2->InputBufferSize;
LABEL_3:
    *(_QWORD *)(v6 + 24) = OutputBufferSize;
LABEL_4:
    WdLogEvent5_WdError(v6);
    return 3221225485LL;
  }
  pInputBuffer = (unsigned int *)a2->pInputBuffer;
  v10 = pInputBuffer[2];
  if ( (_DWORD)v10 )
  {
    v11 = (unsigned int)(v10 - 1);
    if ( (_DWORD)v11 )
    {
      v12 = (unsigned int)(v11 - 1);
      if ( (_DWORD)v12 )
      {
        v13 = v12 - 1;
        if ( v13 )
        {
          v14 = (unsigned int)(v13 - 1);
          if ( (_DWORD)v14 )
          {
            if ( (_DWORD)v14 != 1 )
            {
              v6 = WdLogNewEntry5_WdError(v14);
              OutputBufferSize = (int)pInputBuffer[2];
              *(_QWORD *)(v6 + 32) = 486LL;
              goto LABEL_3;
            }
            if ( (unsigned int)InputBufferSize < 0x10 )
            {
              v6 = WdLogNewEntry5_WdError(v14);
              OutputBufferSize = a2->InputBufferSize;
              *(_QWORD *)(v6 + 32) = 475LL;
              goto LABEL_3;
            }
            v15 = bTracingEnabled == 0;
            v16 = pInputBuffer[3];
            *((_DWORD *)this + 38) = v16;
            if ( !v15 )
              VgpuTrace(1, 0, this, L"DXGKVGPU_ESCAPE_TYPE_POWERTRANSITIONCOMPLETE", (wchar_t *)L"%d", v16);
          }
          else
          {
            if ( a2->OutputBufferSize != 4 )
            {
              v6 = WdLogNewEntry5_WdError(v14);
              OutputBufferSize = a2->InputBufferSize;
              *(_QWORD *)(v6 + 32) = 429LL;
              goto LABEL_3;
            }
            *(_DWORD *)a2->pOutputBuffer = 1;
          }
        }
        else
        {
          if ( bTracingEnabled )
            VgpuTrace(1, 0, this, L"DXGKVGPU_ESCAPE_TYPE_RELEASE", 0LL);
          *((_BYTE *)this + 156) = 0;
        }
      }
      else
      {
        if ( (unsigned int)InputBufferSize < 0x1C )
        {
          v6 = WdLogNewEntry5_WdError(v12);
          OutputBufferSize = a2->InputBufferSize;
          *(_QWORD *)(v6 + 32) = 439LL;
          goto LABEL_3;
        }
        v17 = *((_QWORD *)this + 11);
        if ( !v17 )
        {
          v6 = WdLogNewEntry5_WdError(0LL);
          *(_QWORD *)(v6 + 24) = 444LL;
          goto LABEL_4;
        }
        if ( bTracingEnabled )
        {
          VgpuTrace(1, 0, this, L"DXGKVGPU_ESCAPE_TYPE_INITIALIZE", 0LL);
          v17 = *((_QWORD *)this + 11);
        }
        *((_BYTE *)this + 156) = 1;
        *(_OWORD *)(*(_QWORD *)(v17 + 456) + 200LL) = *(_OWORD *)((char *)a2->pInputBuffer + 12);
      }
    }
    else
    {
      if ( (unsigned int)InputBufferSize < 0x14 )
      {
        v6 = WdLogNewEntry5_WdError(v11);
        OutputBufferSize = a2->InputBufferSize;
        *(_QWORD *)(v6 + 32) = 409LL;
        goto LABEL_3;
      }
      v18 = pInputBuffer[4];
      if ( (unsigned int)v18 >= 0xFFFF || (v11 = v18 + 20, InputBufferSize < v18 + 20) )
      {
        v6 = WdLogNewEntry5_WdError(v11);
        OutputBufferSize = a2->InputBufferSize;
        *(_QWORD *)(v6 + 32) = 415LL;
        goto LABEL_3;
      }
      if ( bTracingEnabled )
        VgpuTraceFrequentRead(
          1,
          0,
          this,
          L"DXGKVGPU_ESCAPE_TYPE_WRITE_PCI_CONFIG",
          (wchar_t *)L"(offset, size)  %d %d",
          pInputBuffer[3],
          v18);
    }
  }
  else
  {
    if ( (unsigned int)InputBufferSize < 0x14 )
    {
      v6 = WdLogNewEntry5_WdError(v10);
      OutputBufferSize = a2->InputBufferSize;
      *(_QWORD *)(v6 + 32) = 384LL;
      goto LABEL_3;
    }
    if ( a2->OutputBufferSize < pInputBuffer[4] )
    {
      v6 = WdLogNewEntry5_WdError(v10);
      OutputBufferSize = a2->OutputBufferSize;
      *(_QWORD *)(v6 + 32) = 390LL;
      goto LABEL_3;
    }
    v20 = 0LL;
    v21 = 0LL;
    pOutputBuffer = a2->pOutputBuffer;
    LODWORD(v20) = *((_DWORD *)this + 6);
    HIDWORD(v20) = pInputBuffer[3];
    LODWORD(v21) = pInputBuffer[4];
    v3 = (*(__int64 (__fastcall **)(DXGK_VIRTUAL_GPU_PARAV *, PVOID *))(*(_QWORD *)this + 48LL))(this, &pOutputBuffer);
    if ( bTracingEnabled )
      VgpuTraceFrequentRead(
        1,
        v3,
        this,
        L"DXGKVGPU_ESCAPE_TYPE_READ_PCI_CONFIG",
        (wchar_t *)L"(offset, size) %d %d",
        pInputBuffer[3],
        pInputBuffer[4]);
  }
  return v3;
}
