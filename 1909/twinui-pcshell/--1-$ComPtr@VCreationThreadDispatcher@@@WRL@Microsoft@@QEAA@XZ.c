/*
 * XREFs of ??1?$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@QEAA@XZ @ 0x1801CAE9C
 * Callers:
 *     _wil::MakeAndInitializeOrThrow_CreationThreadDispatcher__::_1_::dtor$0 @ 0x18030AA7B (_wil--MakeAndInitializeOrThrow_CreationThreadDispatcher__--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<CreationThreadDispatcher>::~ComPtr<CreationThreadDispatcher>(__int64 a1)
{
  return Microsoft::WRL::ComPtr<CreationThreadDispatcher>::InternalRelease(a1);
}
