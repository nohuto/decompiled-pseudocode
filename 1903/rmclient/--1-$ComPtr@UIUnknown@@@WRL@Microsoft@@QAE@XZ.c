/*
 * XREFs of ??1?$ComPtr@UIUnknown@@@WRL@Microsoft@@QAE@XZ @ 0x1000B7E4
 * Callers:
 *     ??1EventTargetArray@Details@WRL@Microsoft@@UAE@XZ @ 0x1000B780 (--1EventTargetArray@Details@WRL@Microsoft@@UAE@XZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
int __thiscall Microsoft::WRL::ComPtr<IUnknown>::~ComPtr<IUnknown>(void *this)
{
  return Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(this);
}
