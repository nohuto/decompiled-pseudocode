/*
 * XREFs of _MobilityExperience::CDPActivityHelper::FindAllUserAccounts_::_1_::dtor$9 @ 0x1800CA6D0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@UILauncherOptions2@System@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180011120 (--1-$ComPtr@UILauncherOptions2@System@Windows@@@WRL@Microsoft@@QEAA@XZ.c)
 */

_QWORD *__fastcall MobilityExperience::CDPActivityHelper::FindAllUserAccounts_::_1_::dtor_9(__int64 a1, __int64 a2)
{
  _QWORD *result; // rax

  result = (_QWORD *)(*(_DWORD *)(a2 + 32) & 8);
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 32) &= ~8u;
    return Microsoft::WRL::ComPtr<Windows::System::ILauncherOptions2>::~ComPtr<Windows::System::ILauncherOptions2>((_QWORD *)(a2 + 112));
  }
  return result;
}
