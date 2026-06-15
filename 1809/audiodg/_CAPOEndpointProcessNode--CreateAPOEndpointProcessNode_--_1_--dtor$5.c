/*
 * XREFs of _CAPOEndpointProcessNode::CreateAPOEndpointProcessNode_::_1_::dtor$5 @ 0x14003B7F7
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CComPtr@UIAudioEndpoint@@@ATL@@QEAA@XZ @ 0x140030E1C (--1-$CComPtr@UIAudioEndpoint@@@ATL@@QEAA@XZ.c)
 */

__int64 __fastcall CAPOEndpointProcessNode::CreateAPOEndpointProcessNode_::_1_::dtor_5(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 48) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 48) &= ~1u;
    return ATL::CComPtr<IAudioEndpoint>::~CComPtr<IAudioEndpoint>((__int64 *)(a2 + 64));
  }
  return result;
}
