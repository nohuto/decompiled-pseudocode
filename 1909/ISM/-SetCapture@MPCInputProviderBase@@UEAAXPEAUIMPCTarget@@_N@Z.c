/*
 * XREFs of ?SetCapture@MPCInputProviderBase@@UEAAXPEAUIMPCTarget@@_N@Z @ 0x180091F50
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAAEAV012@PEAUIUnknown@@@Z @ 0x180091B90 (--4-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAAEAV012@PEAUIUnknown@@@Z.c)
 */

void __fastcall MPCInputProviderBase::SetCapture(MPCInputProviderBase *this, struct IMPCTarget *a2, char a3)
{
  Microsoft::WRL::ComPtr<IUnknown>::operator=((__int64 *)this + 571, (__int64)a2);
  *((_BYTE *)this + 4592) = a3;
}
