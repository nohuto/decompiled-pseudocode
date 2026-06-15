/*
 * XREFs of _CPipeInstance::CreateSubmixPipeInstance_::_1_::dtor$4 @ 0x14001A64F
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CComPtr@UIAudioEndpoint@@@ATL@@QEAA@XZ @ 0x14002920C (--1-$CComPtr@UIAudioEndpoint@@@ATL@@QEAA@XZ.c)
 */

__int64 __fastcall CPipeInstance::CreateSubmixPipeInstance_::_1_::dtor_4(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 68) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 68) &= ~1u;
    return ATL::CComPtr<IAudioEndpoint>::~CComPtr<IAudioEndpoint>(a2 + 80);
  }
  return result;
}
