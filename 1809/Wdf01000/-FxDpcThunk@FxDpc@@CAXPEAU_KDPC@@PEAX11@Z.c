/*
 * XREFs of ?FxDpcThunk@FxDpc@@CAXPEAU_KDPC@@PEAX11@Z @ 0x1C0013FC0
 * Callers:
 *     <none>
 * Callees:
 *     FX_TRACK_DRIVER @ 0x1C0014240 (FX_TRACK_DRIVER.c)
 */

void __fastcall FxDpc::FxDpcThunk(
        _KDPC *Dpc,
        unsigned __int64 DeferredContext,
        void *SystemArgument1,
        void *SystemArgument2)
{
  void (__fastcall **v5)(unsigned __int64); // rdi
  void (__fastcall *v6)(unsigned __int64, __int64, __int64, __int64, char); // rax
  _QWORD *v7; // rsi
  _FX_DRIVER_GLOBALS *v8; // rcx
  _WORD *v9; // rbp
  unsigned __int64 v10; // rbx
  __int64 v11; // rdx
  char v12; // [rsp+58h] [rbp+10h] BYREF

  FX_TRACK_DRIVER(*(_FX_DRIVER_GLOBALS **)(DeferredContext + 16));
  v5 = (void (__fastcall **)(unsigned __int64))(DeferredContext + 208);
  if ( *(_QWORD *)(DeferredContext + 208) )
  {
    v6 = *(void (__fastcall **)(unsigned __int64, __int64, __int64, __int64, char))(unk_1C00ABE90 + 8LL);
    if ( v6 )
      v6(DeferredContext + 208, 8LL, 2164260864LL, 3938LL, 2);
    v7 = (_QWORD *)(DeferredContext + 192);
    v8 = *(_FX_DRIVER_GLOBALS **)(DeferredContext + 192);
    v9 = (_WORD *)(DeferredContext + 10);
    v10 = DeferredContext ^ 0xFFFFFFFFFFFFFFF8uLL;
    if ( v8 )
    {
      v12 = 0;
      ((void (__fastcall *)(_FX_DRIVER_GLOBALS *, char *))v8->Linkage.Flink[1].Flink)(v8, &v12);
      if ( !*v9 )
        v10 = 0LL;
      (*v5)(v10);
      LOBYTE(v11) = v12;
      (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v7 + 24LL))(*v7, v11);
    }
    else
    {
      if ( !*v9 )
        v10 = 0LL;
      (*v5)(v10);
    }
  }
}
