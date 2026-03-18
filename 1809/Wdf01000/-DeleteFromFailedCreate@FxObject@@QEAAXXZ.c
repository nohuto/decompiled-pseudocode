/*
 * XREFs of ?DeleteFromFailedCreate@FxObject@@QEAAXXZ @ 0x1C005C130
 * Callers:
 *     ?AllocateCompanionTarget@FxDevice@@QEAAJPEAPEAVFxCompanionTarget@@@Z @ 0x1C001BC14 (-AllocateCompanionTarget@FxDevice@@QEAAJPEAPEAVFxCompanionTarget@@@Z.c)
 * Callees:
 *     ?ClearEvtCallbacks@FxObject@@QEAAXXZ @ 0x1C005C030 (-ClearEvtCallbacks@FxObject@@QEAAXXZ.c)
 */

void __fastcall FxObject::DeleteFromFailedCreate(FxObject *this)
{
  __int64 v1; // rcx

  FxObject::ClearEvtCallbacks(this);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 48LL))(v1);
}
