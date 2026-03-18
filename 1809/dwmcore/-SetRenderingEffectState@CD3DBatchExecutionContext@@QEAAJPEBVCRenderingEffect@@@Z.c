/*
 * XREFs of ?SetRenderingEffectState@CD3DBatchExecutionContext@@QEAAJPEBVCRenderingEffect@@@Z @ 0x180187BB0
 * Callers:
 *     ??$RenderLoop@$0A@@CDrawListEntryBatch@@AEAAJAEAVCD3DBatchExecutionContext@@@Z @ 0x180189B28 (--$RenderLoop@$0A@@CDrawListEntryBatch@@AEAAJAEAVCD3DBatchExecutionContext@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?FromKey@VertexShaderDesc@@SA?AU1@W4Enum@VertexShaderKey@@@Z @ 0x180189A24 (-FromKey@VertexShaderDesc@@SA-AU1@W4Enum@VertexShaderKey@@@Z.c)
 */

__int64 __fastcall CD3DBatchExecutionContext::SetRenderingEffectState(
        CD3DBatchExecutionContext *this,
        const struct CRenderingEffect *a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  _DWORD *v6; // r14
  int v7; // eax
  __int64 v8; // rcx
  unsigned int v9; // esi
  __int64 v10; // rdi
  __int64 v11; // rax
  __int64 v12; // r8
  __int64 v14; // [rsp+60h] [rbp+8h] BYREF
  __int64 v15; // [rsp+68h] [rbp+10h] BYREF

  if ( *((_QWORD *)this + 6) && !*((_BYTE *)this + 80) )
  {
    v4 = *((_QWORD *)this + 4);
    v5 = *((_QWORD *)this + 2);
    v14 = *(_QWORD *)(v4 + 304);
    (*(void (__fastcall **)(__int64, __int64, __int64, __int64 *))(*(_QWORD *)v5 + 56LL))(v5, 2LL, 1LL, &v14);
    v15 = *(_QWORD *)(*((_QWORD *)this + 4) + 592LL);
    (*(void (__fastcall **)(_QWORD, __int64, __int64, __int64 *))(**((_QWORD **)this + 2) + 128LL))(
      *((_QWORD *)this + 2),
      1LL,
      1LL,
      &v15);
    *((_BYTE *)this + 80) = 1;
  }
  v6 = (_DWORD *)((char *)this + 68);
  v7 = (*(__int64 (__fastcall **)(const struct CRenderingEffect *, CD3DBatchExecutionContext *, char *))(*(_QWORD *)a2 + 40LL))(
         a2,
         this,
         (char *)this + 68);
  v9 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x120u);
  }
  else
  {
    v10 = *((_QWORD *)this + 4);
    if ( *(_BYTE *)(v10 + 120) )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, __int64, _DWORD, _DWORD))(**(_QWORD **)(*((_QWORD *)this + 1) + 640LL)
                                                                                      + 384LL))(
        *(_QWORD *)(*((_QWORD *)this + 1) + 640LL),
        *(_QWORD *)(v10 + 112),
        0LL,
        0LL,
        v10 + 128,
        0,
        0);
      *(_BYTE *)(v10 + 120) = 0;
    }
    if ( *v6 != 8 )
    {
      v11 = VertexShaderDesc::FromKey((unsigned int)*v6);
      LOBYTE(v14) = v11;
      HIDWORD(v14) = HIDWORD(v11);
      if ( (_BYTE)v11 != *((_BYTE *)this + 72) || HIDWORD(v11) != *((_DWORD *)this + 19) )
      {
        if ( HIDWORD(v11) == 2 )
        {
          v12 = (_BYTE)v11 != 0 ? 2 : 0;
        }
        else
        {
          v12 = 4LL;
          if ( HIDWORD(v11) == 4 )
            v12 = (_BYTE)v11 != 0 ? 3LL : 1LL;
        }
        (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 2) + 136LL))(
          *((_QWORD *)this + 2),
          *(_QWORD *)(*((_QWORD *)this + 1) + 8 * v12 + 1152));
        *((_QWORD *)this + 9) = v14;
        *((_BYTE *)this + 81) = 1;
      }
    }
  }
  return v9;
}
