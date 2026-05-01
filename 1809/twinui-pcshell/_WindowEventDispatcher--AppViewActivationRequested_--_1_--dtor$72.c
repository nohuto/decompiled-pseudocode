/*
 * XREFs of _WindowEventDispatcher::AppViewActivationRequested_::_1_::dtor$72 @ 0x1800AC550
 * Callers:
 *     <none>
 * Callees:
 *     ??1CopyableHString@ExperienceManagerUtils@@QEAA@XZ @ 0x1800EBADC (--1CopyableHString@ExperienceManagerUtils@@QEAA@XZ.c)
 */

void __fastcall WindowEventDispatcher::AppViewActivationRequested_::_1_::dtor_72(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 88) & 0x100) != 0 )
  {
    *(_DWORD *)(a2 + 88) &= ~0x100u;
    ExperienceManagerUtils::CopyableHString::~CopyableHString((ExperienceManagerUtils::CopyableHString *)(a2 + 160));
  }
}
