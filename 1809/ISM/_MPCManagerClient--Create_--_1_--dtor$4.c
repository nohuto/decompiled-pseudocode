/*
 * XREFs of _MPCManagerClient::Create_::_1_::dtor$4 @ 0x180134537
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@VMPCManagerClient@@@WRL@Microsoft@@QEAA@XZ @ 0x1800DB080 (--1-$ComPtr@VMPCManagerClient@@@WRL@Microsoft@@QEAA@XZ.c)
 */

__int64 __fastcall MPCManagerClient::Create_::_1_::dtor_4(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 144) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 144) &= ~1u;
    return Microsoft::WRL::ComPtr<MPCManagerClient>::~ComPtr<MPCManagerClient>((__int64 *)(a2 + 40));
  }
  return result;
}
