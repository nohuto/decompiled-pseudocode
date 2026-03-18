/*
 * XREFs of ?OnRemovedFromDrawList@CStateSettingDrawListEntry@@UEAAXPEBVCDrawListEntryBatch@@@Z @ 0x180010BC0
 * Callers:
 *     <none>
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180022680 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ModuleFailFastForHRESULT @ 0x1801E0F18 (ModuleFailFastForHRESULT.c)
 */

void __fastcall CStateSettingDrawListEntry::OnRemovedFromDrawList(
        CStateSettingDrawListEntry *this,
        const struct CDrawListEntryBatch *a2)
{
  int v2; // eax
  int v5; // eax
  __int64 v6; // rcx
  __int64 v7; // r10
  unsigned int v8; // eax
  unsigned int v9; // edx
  int v10; // ebx
  int v11; // eax
  unsigned int v12; // ecx
  void *retaddr; // [rsp+38h] [rbp+0h]
  CStateSettingDrawListEntry *v14; // [rsp+40h] [rbp+8h] BYREF

  v2 = *((_DWORD *)this + 4);
  if ( !v2 )
    ModuleFailFastForHRESULT(2291662981LL, retaddr);
  v5 = v2 - 1;
  *((_DWORD *)this + 4) = v5;
  if ( !v5 )
  {
    v6 = *((_QWORD *)this + 3);
    *((_QWORD *)this + 3) = 0LL;
    if ( v6 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
    v7 = *((_QWORD *)a2 + 3);
    v14 = this;
    v8 = *(_DWORD *)(v7 + 72);
    v9 = v8 + 1;
    v10 = v8 + 1 < v8 ? 0x80070216 : 0;
    if ( v8 + 1 < v8 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v10, 0xB5u);
    }
    else if ( v9 > *(_DWORD *)(v7 + 68) )
    {
      v11 = DynArrayImpl<0>::AddMultipleAndSet(v7 + 48, 8LL, 1LL, &v14);
      v10 = v11;
      if ( v11 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0xC0u);
    }
    else
    {
      *(_QWORD *)(*(_QWORD *)(v7 + 48) + 8LL * v8) = v14;
      *(_DWORD *)(v7 + 72) = v9;
    }
    if ( v10 >= 0 )
      _InterlockedIncrement((volatile signed __int32 *)v14 + 2);
  }
}
