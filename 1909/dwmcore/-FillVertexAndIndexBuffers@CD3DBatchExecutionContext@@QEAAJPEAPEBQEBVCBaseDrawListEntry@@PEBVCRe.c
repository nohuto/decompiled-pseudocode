/*
 * XREFs of ?FillVertexAndIndexBuffers@CD3DBatchExecutionContext@@QEAAJPEAPEBQEBVCBaseDrawListEntry@@PEBVCRenderingEffect@@@Z @ 0x1801B729C
 * Callers:
 *     ??$RenderLoop@$0A@@CDrawListEntryBatch@@AEAAJAEAVCD3DBatchExecutionContext@@@Z @ 0x1801ACF54 (--$RenderLoop@$0A@@CDrawListEntryBatch@@AEAAJAEAVCD3DBatchExecutionContext@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD3DBatchExecutionContext::FillVertexAndIndexBuffers(
        CD3DBatchExecutionContext *this,
        const struct CBaseDrawListEntry *const **a2,
        const struct CRenderingEffect *a3)
{
  signed int v3; // ebx
  const struct CRenderingEffect *v4; // r9
  __int64 v7; // rsi
  _QWORD *v8; // r15
  __int64 v9; // rbp
  signed int v10; // eax
  signed int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rax

  v3 = 0;
  v4 = a3;
  if ( a3 )
  {
    v7 = *((_QWORD *)this + 7);
    v8 = *a2;
    if ( v7 )
    {
      v9 = 0LL;
      if ( *(_DWORD *)(v7 + 40) )
      {
        while ( 1 )
        {
          v10 = (*(__int64 (__fastcall **)(_QWORD, CD3DBatchExecutionContext *, _QWORD, const struct CRenderingEffect *))(**(_QWORD **)(v7 + 24) + 48LL))(
                  *(_QWORD *)(v7 + 24),
                  this,
                  v8[v9 + 1],
                  v4);
          v3 = v10;
          if ( v10 < 0 )
            break;
          v9 = (unsigned int)(v9 + 1);
          if ( (unsigned int)v9 >= *(_DWORD *)(v7 + 40) )
            goto LABEL_8;
        }
        MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, v10, 0x4Fu, 0LL);
      }
LABEL_8:
      if ( v3 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, v3, 0x1E9u, 0LL);
    }
    else
    {
      v11 = (*(__int64 (__fastcall **)(const struct CRenderingEffect *, CD3DBatchExecutionContext *, _QWORD))(*(_QWORD *)a3 + 48LL))(
              a3,
              this,
              *v8);
      v3 = v11;
      if ( v11 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x1EEu, 0LL);
    }
  }
  v13 = *((_QWORD *)this + 7);
  if ( v13 )
  {
    v14 = *(unsigned int *)(v13 + 40);
    dword_180339844 += v14;
    ++dword_180339840;
    *a2 += v14;
    *((_QWORD *)this + 7) = 0LL;
  }
  return (unsigned int)v3;
}
