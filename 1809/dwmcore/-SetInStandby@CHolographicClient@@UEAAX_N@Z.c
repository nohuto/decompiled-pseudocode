/*
 * XREFs of ?SetInStandby@CHolographicClient@@UEAAX_N@Z @ 0x1800E7CA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CHolographicClient::SetInStandby(CHolographicClient *this, char a2)
{
  *((_BYTE *)this + 160) = a2;
}
