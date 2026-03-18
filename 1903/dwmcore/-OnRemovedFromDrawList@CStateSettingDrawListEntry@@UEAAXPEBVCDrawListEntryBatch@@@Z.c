/*
 * XREFs of ?OnRemovedFromDrawList@CStateSettingDrawListEntry@@UEAAXPEBVCDrawListEntryBatch@@@Z @ 0x1800152E0
 * Callers:
 *     <none>
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18008D2DC (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ModuleFailFastForHRESULT @ 0x180159A90 (ModuleFailFastForHRESULT.c)
 */

void __fastcall CStateSettingDrawListEntry::OnRemovedFromDrawList(
        CStateSettingDrawListEntry *this,
        const struct CDrawListEntryBatch *a2,
        __int64 a3)
{
  int v3; // eax
  int v6; // eax
  __int64 v7; // rcx
  __int64 v8; // r10
  unsigned int v9; // eax
  unsigned int v10; // edx
  int v11; // eax
  unsigned int v12; // ecx
  int v13; // ebx
  void *retaddr; // [rsp+38h] [rbp+0h]
  CStateSettingDrawListEntry *v15; // [rsp+40h] [rbp+8h] BYREF

  v3 = *((_DWORD *)this + 4);
  if ( !v3 )
    ModuleFailFastForHRESULT(2291662981LL, retaddr, a3);
  v6 = v3 - 1;
  *((_DWORD *)this + 4) = v6;
  if ( !v6 )
  {
    v7 = *((_QWORD *)this + 3);
    *((_QWORD *)this + 3) = 0LL;
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
    v8 = *((_QWORD *)a2 + 3);
    v15 = this;
    v9 = *(_DWORD *)(v8 + 72);
    v10 = v9 + 1;
    if ( v9 + 1 < v9 )
    {
      v13 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, -2147024362, 0xB8u, 0LL);
    }
    else
    {
      if ( v10 <= *(_DWORD *)(v8 + 68) )
      {
        *(_QWORD *)(*(_QWORD *)(v8 + 48) + 8LL * v9) = v15;
        *(_DWORD *)(v8 + 72) = v10;
LABEL_8:
        _InterlockedIncrement((volatile signed __int32 *)v15 + 2);
        return;
      }
      v11 = DynArrayImpl<0>::AddMultipleAndSet(v8 + 48, 8LL, 1LL, &v15);
      v13 = v11;
      if ( v11 >= 0 )
        goto LABEL_8;
      MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0xC3u, 0LL);
    }
    if ( v13 >= 0 )
      goto LABEL_8;
  }
}
