/*
 * XREFs of ?put_ShouldReconnectTitleBar@ApplicationViewOperation@@UEAAJE@Z @ 0x18018E660
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ApplicationViewOperation::put_ShouldReconnectTitleBar(ApplicationViewOperation *this, char a2)
{
  *((_BYTE *)this + 256) = a2 != 0;
  return 0LL;
}
