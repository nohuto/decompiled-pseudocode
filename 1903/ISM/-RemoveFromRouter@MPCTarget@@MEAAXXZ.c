/*
 * XREFs of ?RemoveFromRouter@MPCTarget@@MEAAXXZ @ 0x180057E30
 * Callers:
 *     ??1MPCTarget@@UEAA@XZ @ 0x180057514 (--1MPCTarget@@UEAA@XZ.c)
 * Callees:
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x180021840 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 */

void __fastcall MPCTarget::RemoveFromRouter(MPCTarget *this)
{
  struct MPCHolographicInputManager *Instance; // rax

  Instance = MPCHolographicInputManager::GetInstance();
  (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)Instance + 287) + 56LL))(
    *((_QWORD *)Instance + 287),
    *((_QWORD *)this + 7));
}
