/*
 * XREFs of ?AddPublicReference@SharedObjectBase@@IEAAIXZ @ 0x1800D4C74
 * Callers:
 *     ?AddRef@?$SharedUnknownBase@UISIPCServer@@UIUnknown@@U2@U2@U2@U2@U2@U2@U2@U2@@@UEAAKXZ @ 0x1800D4CA0 (-AddRef@-$SharedUnknownBase@UISIPCServer@@UIUnknown@@U2@U2@U2@U2@U2@U2@U2@U2@@@UEAAKXZ.c)
 *     ?QueryInterface@?$SharedUnknownBase@UISIPCEndpoint@@UIUnknown@@U2@U2@U2@U2@U2@U2@U2@U2@@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800D6840 (-QueryInterface@-$SharedUnknownBase@UISIPCEndpoint@@UIUnknown@@U2@U2@U2@U2@U2@U2@U2@U2@@@UEAAJAE.c)
 *     ?QueryInterface@?$SharedUnknownBase@UISIPCServer@@UIUnknown@@U2@U2@U2@U2@U2@U2@U2@U2@@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800D68C0 (-QueryInterface@-$SharedUnknownBase@UISIPCServer@@UIUnknown@@U2@U2@U2@U2@U2@U2@U2@U2@@@UEAAJAEBU.c)
 * Callees:
 *     <none>
 */

signed __int64 __fastcall SharedObjectBase::AddPublicReference(SharedObjectBase *this)
{
  signed __int64 result; // rax

  result = _InterlockedExchangeAdd64((volatile signed __int64 *)this + 1, 1uLL);
  if ( (unsigned int)(result + 1) <= 2 )
    __fastfail(0xEu);
  return result;
}
