/*
 * XREFs of ?VirtualGpuDriverEscape@DXGK_VIRTUAL_GPU_PARAV@@UEAAJPEAU_DXGK_VIRTUALGPUDRIVERESCAPE@@@Z @ 0x1C0215B70
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 *     ?VgpuTrace@@YAXEJPEAXPEBG1ZZ @ 0x1C003C3E0 (-VgpuTrace@@YAXEJPEAXPEBG1ZZ.c)
 *     ?VgpuTraceFrequentRead@@YAXEJPEAXPEBG1ZZ @ 0x1C020F8A0 (-VgpuTraceFrequentRead@@YAXEJPEAXPEBG1ZZ.c)
 */

__int64 __fastcall DXGK_VIRTUAL_GPU_PARAV::VirtualGpuDriverEscape(
        DXGK_VIRTUAL_GPU_PARAV *this,
        struct _DXGK_VIRTUALGPUDRIVERESCAPE *a2,
        __int64 a3)
{
  unsigned int v4; // ebp
  unsigned __int64 InputBufferSize; // rdx
  __int64 v7; // rcx
  __int64 OutputBufferSize; // rax
  unsigned int *pInputBuffer; // rsi
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  int v14; // ecx
  __int64 v15; // rcx
  bool v16; // zf
  unsigned int v17; // eax
  __int64 v18; // rcx
  __int64 v19; // r8
  PVOID pOutputBuffer; // rax
  PVOID v21; // [rsp+40h] [rbp-28h] BYREF
  int v22; // [rsp+48h] [rbp-20h]
  __int64 v23; // [rsp+4Ch] [rbp-1Ch]
  int v24; // [rsp+54h] [rbp-14h]

  v4 = 0;
  InputBufferSize = a2->InputBufferSize;
  if ( (unsigned int)InputBufferSize < 0xC )
  {
    v7 = WdLogNewEntry5_WdError(this, InputBufferSize, a3);
    OutputBufferSize = a2->InputBufferSize;
LABEL_3:
    *(_QWORD *)(v7 + 24) = OutputBufferSize;
LABEL_4:
    WdLogEvent5_WdError(v7);
    return 3221225485LL;
  }
  pInputBuffer = (unsigned int *)a2->pInputBuffer;
  v11 = pInputBuffer[2];
  if ( (_DWORD)v11 )
  {
    v12 = (unsigned int)(v11 - 1);
    if ( (_DWORD)v12 )
    {
      v13 = (unsigned int)(v12 - 1);
      if ( (_DWORD)v13 )
      {
        v14 = v13 - 1;
        if ( v14 )
        {
          v15 = (unsigned int)(v14 - 1);
          if ( (_DWORD)v15 )
          {
            if ( (_DWORD)v15 != 1 )
            {
              v7 = WdLogNewEntry5_WdError(v15, InputBufferSize, a3);
              OutputBufferSize = (int)pInputBuffer[2];
              *(_QWORD *)(v7 + 32) = 485LL;
              goto LABEL_3;
            }
            if ( (unsigned int)InputBufferSize < 0x10 )
            {
              v7 = WdLogNewEntry5_WdError(v15, InputBufferSize, a3);
              OutputBufferSize = a2->InputBufferSize;
              *(_QWORD *)(v7 + 32) = 474LL;
              goto LABEL_3;
            }
            v16 = bTracingEnabled == 0;
            v17 = pInputBuffer[3];
            *((_DWORD *)this + 38) = v17;
            if ( !v16 )
              VgpuTrace(1, 0, this, L"DXGKVGPU_ESCAPE_TYPE_POWERTRANSITIONCOMPLETE", (wchar_t *)L"%d", v17);
          }
          else
          {
            if ( a2->OutputBufferSize != 4 )
            {
              v7 = WdLogNewEntry5_WdError(v15, InputBufferSize, a3);
              OutputBufferSize = a2->InputBufferSize;
              *(_QWORD *)(v7 + 32) = 428LL;
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
          v7 = WdLogNewEntry5_WdError(v13, InputBufferSize, a3);
          OutputBufferSize = a2->InputBufferSize;
          *(_QWORD *)(v7 + 32) = 438LL;
          goto LABEL_3;
        }
        v18 = *((_QWORD *)this + 11);
        if ( !v18 )
        {
          v7 = WdLogNewEntry5_WdError(0LL, InputBufferSize, a3);
          *(_QWORD *)(v7 + 24) = 443LL;
          goto LABEL_4;
        }
        if ( bTracingEnabled )
        {
          VgpuTrace(1, 0, this, L"DXGKVGPU_ESCAPE_TYPE_INITIALIZE", 0LL);
          v18 = *((_QWORD *)this + 11);
        }
        *((_BYTE *)this + 156) = 1;
        *(_OWORD *)(*(_QWORD *)(v18 + 432) + 200LL) = *(_OWORD *)((char *)a2->pInputBuffer + 12);
      }
    }
    else
    {
      if ( (unsigned int)InputBufferSize < 0x14 )
      {
        v7 = WdLogNewEntry5_WdError(v12, InputBufferSize, a3);
        OutputBufferSize = a2->InputBufferSize;
        *(_QWORD *)(v7 + 32) = 408LL;
        goto LABEL_3;
      }
      v19 = pInputBuffer[4];
      if ( (unsigned int)v19 >= 0xFFFF || (v12 = v19 + 20, InputBufferSize < v19 + 20) )
      {
        v7 = WdLogNewEntry5_WdError(v12, InputBufferSize, v19);
        OutputBufferSize = a2->InputBufferSize;
        *(_QWORD *)(v7 + 32) = 414LL;
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
          v19);
    }
  }
  else
  {
    if ( (unsigned int)InputBufferSize < 0x14 )
    {
      v7 = WdLogNewEntry5_WdError(v11, InputBufferSize, a3);
      OutputBufferSize = a2->InputBufferSize;
      *(_QWORD *)(v7 + 32) = 383LL;
      goto LABEL_3;
    }
    if ( a2->OutputBufferSize < pInputBuffer[4] )
    {
      v7 = WdLogNewEntry5_WdError(v11, InputBufferSize, a3);
      OutputBufferSize = a2->OutputBufferSize;
      *(_QWORD *)(v7 + 32) = 389LL;
      goto LABEL_3;
    }
    v23 = 0LL;
    pOutputBuffer = a2->pOutputBuffer;
    v24 = 0;
    v21 = pOutputBuffer;
    v22 = *((_DWORD *)this + 6);
    v23 = *(_QWORD *)(pInputBuffer + 3);
    v4 = (*(__int64 (__fastcall **)(DXGK_VIRTUAL_GPU_PARAV *, PVOID *))(*(_QWORD *)this + 48LL))(this, &v21);
    if ( bTracingEnabled )
      VgpuTraceFrequentRead(
        1,
        v4,
        this,
        L"DXGKVGPU_ESCAPE_TYPE_READ_PCI_CONFIG",
        (wchar_t *)L"(offset, size) %d %d",
        pInputBuffer[3],
        pInputBuffer[4]);
  }
  return v4;
}
