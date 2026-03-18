/*
 * XREFs of ?Serialize@DMMVIDEOPRESENTSOURCE@@QEBAXQEAU_DMM_VIDEOPRESENTSOURCE_SERIALIZATION@@@Z @ 0x1C02879E8
 * Callers:
 *     ?Serialize@DMMVIDEOPRESENTSOURCESET@@QEBAJPEAV?$AutoBuffer@U_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION@@@DMM@@@Z @ 0x1C0287B30 (-Serialize@DMMVIDEOPRESENTSOURCESET@@QEBAJPEAV-$AutoBuffer@U_DMM_VIDEOPRESENTSOURCESET_SERIALIZA.c)
 * Callees:
 *     ?IsVidPnSourceVisible@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C0002210 (-IsVidPnSourceVisible@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C00106CC (-IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?IsPartOfDesktop@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C0013164 (-IsPartOfDesktop@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 */

void __fastcall DMMVIDEOPRESENTSOURCE::Serialize(
        DMMVIDEOPRESENTSOURCE *this,
        struct _DMM_VIDEOPRESENTSOURCE_SERIALIZATION *const a2)
{
  unsigned __int8 IsVidPnSourceVisible; // bl
  __int64 v5; // rax
  __int64 v6; // rsi
  __int64 v7; // rax
  __int64 v8; // rsi
  DXGADAPTER **v9; // rcx
  unsigned int v10; // r14d
  __int64 v11; // rax
  ADAPTER_DISPLAY *v12; // rcx
  unsigned int v13; // r14d
  __int64 v14; // rax
  ADAPTER_DISPLAY *v15; // rcx
  unsigned int v16; // ebp
  __int64 v17; // rax

  IsVidPnSourceVisible = 0;
  if ( !a2 )
  {
    v5 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v5);
  }
  *(_DWORD *)a2 = *((_DWORD *)this + 6);
  v6 = *((_QWORD *)this + 5);
  if ( !v6 )
  {
    v7 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v7);
    v6 = *((_QWORD *)this + 5);
  }
  v8 = *(_QWORD *)(v6 + 88);
  if ( v8 )
  {
    v9 = *(DXGADAPTER ***)(v8 + 8);
    v10 = *((_DWORD *)this + 6);
    if ( !v9 )
    {
      v11 = WdLogNewEntry5_WdAssertion(0LL);
      WdLogEvent5_WdAssertion(v11);
      v9 = *(DXGADAPTER ***)(v8 + 8);
    }
    *((_BYTE *)a2 + 4) = ADAPTER_DISPLAY::IsPartOfDesktop(v9, v10);
    v12 = *(ADAPTER_DISPLAY **)(v8 + 8);
    v13 = *((_DWORD *)this + 6);
    if ( !v12 )
    {
      v14 = WdLogNewEntry5_WdAssertion(0LL);
      WdLogEvent5_WdAssertion(v14);
      v12 = *(ADAPTER_DISPLAY **)(v8 + 8);
    }
    *((_BYTE *)a2 + 5) = ADAPTER_DISPLAY::IsVidPnSourceActive(v12, v13);
    v15 = *(ADAPTER_DISPLAY **)(v8 + 8);
    v16 = *((_DWORD *)this + 6);
    if ( !v15 )
    {
      v17 = WdLogNewEntry5_WdAssertion(0LL);
      WdLogEvent5_WdAssertion(v17);
      v15 = *(ADAPTER_DISPLAY **)(v8 + 8);
    }
    IsVidPnSourceVisible = ADAPTER_DISPLAY::IsVidPnSourceVisible(v15, v16);
  }
  else
  {
    *((_WORD *)a2 + 2) = 0;
  }
  *((_BYTE *)a2 + 6) = IsVidPnSourceVisible;
}
