/*
 * XREFs of ?PromoteToPrimary@MPCInputProviderBase@@UEAAXXZ @ 0x18013E690
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall MPCInputProviderBase::PromoteToPrimary(MPCInputProviderBase *this)
{
  *((_BYTE *)this + 4514) = 0;
  (*(void (__fastcall **)(char *))(*((_QWORD *)this - 3) + 64LL))((char *)this - 24);
}
