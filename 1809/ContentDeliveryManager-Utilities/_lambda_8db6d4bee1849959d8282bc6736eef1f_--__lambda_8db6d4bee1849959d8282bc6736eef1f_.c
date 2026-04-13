/*
 * XREFs of _lambda_8db6d4bee1849959d8282bc6736eef1f_::__lambda_8db6d4bee1849959d8282bc6736eef1f_ @ 0x18000E9BC
 * Callers:
 *     _ContentManagement::IdentityManager::TryGetSecondaryMSATicketAsync_::_1_::dtor$1 @ 0x1800C85E1 (_ContentManagement--IdentityManager--TryGetSecondaryMSATicketAsync_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall lambda_8db6d4bee1849959d8282bc6736eef1f_::__lambda_8db6d4bee1849959d8282bc6736eef1f_(__int64 a1)
{
  HRESULT result; // eax

  result = WindowsDeleteString(*(HSTRING *)(a1 + 8));
  *(_QWORD *)(a1 + 8) = 0LL;
  return result;
}
