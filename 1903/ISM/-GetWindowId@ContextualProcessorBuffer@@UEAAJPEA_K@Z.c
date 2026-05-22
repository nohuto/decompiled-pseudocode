/*
 * XREFs of ?GetWindowId@ContextualProcessorBuffer@@UEAAJPEA_K@Z @ 0x1800FAE60
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIFocusInputTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x1800081A0 (-InternalRelease@-$ComPtr@UIFocusInputTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ??$As@UIFocusInputTarget@@@?$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIFocusInputTarget@@@WRL@Microsoft@@@Details@12@@Z @ 0x180053458 (--$As@UIFocusInputTarget@@@-$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@U.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ContextualProcessorBuffer::GetWindowId(ContextualProcessorBuffer *this, unsigned __int64 *a2)
{
  __int64 (__fastcall ****v3)(_QWORD, GUID *, __int64 *); // rcx
  unsigned int v4; // ebx
  __int64 v6; // [rsp+40h] [rbp+8h] BYREF

  v6 = 0LL;
  v3 = (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))((char *)this + 88);
  if ( *v3 && (int)Microsoft::WRL::ComPtr<IInputTarget>::As<IFocusInputTarget>(v3, &v6) >= 0 )
    v4 = (*(__int64 (__fastcall **)(__int64, unsigned __int64 *))(*(_QWORD *)v6 + 64LL))(v6, a2);
  else
    v4 = -2147467259;
  Microsoft::WRL::ComPtr<IFocusInputTarget>::InternalRelease(&v6);
  return v4;
}
