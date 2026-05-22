/*
 * XREFs of ?GetInputSinkHandle@DWMInputTarget@@AEBAPEAXXZ @ 0x1800C74F0
 * Callers:
 *     ?GetInputSink@DWMInputTarget@@UEBAPEAXXZ @ 0x1800C74E0 (-GetInputSink@DWMInputTarget@@UEBAPEAXXZ.c)
 *     ?IsSameAsTarget@DWMInputTarget@@UEBA_NAEBUtagMsgRoutingInfo@@PEAX@Z @ 0x1800C7580 (-IsSameAsTarget@DWMInputTarget@@UEBA_NAEBUtagMsgRoutingInfo@@PEAX@Z.c)
 * Callees:
 *     <none>
 */

void *__fastcall DWMInputTarget::GetInputSinkHandle(DWMInputTarget *this)
{
  __int64 v1; // rdx
  void *result; // rax

  v1 = *((_QWORD *)this + 15);
  result = 0LL;
  if ( v1 )
  {
    if ( *(_BYTE *)(v1 + 384) )
      return *(void **)(v1 + 32);
  }
  return result;
}
