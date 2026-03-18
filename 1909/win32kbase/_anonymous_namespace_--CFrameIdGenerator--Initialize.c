/*
 * XREFs of _anonymous_namespace_::CFrameIdGenerator::Initialize @ 0x1C00A94FC
 * Callers:
 *     InitializeInputComponents @ 0x1C00A90D8 (InitializeInputComponents.c)
 * Callees:
 *     Win32AllocPool @ 0x1C0013080 (Win32AllocPool.c)
 *     ?Initialize@CInpLockGuard@@QEAAHXZ @ 0x1C005EAF8 (-Initialize@CInpLockGuard@@QEAAHXZ.c)
 */

__int64 anonymous_namespace_::CFrameIdGenerator::Initialize()
{
  _DWORD *v0; // rax
  struct A0xad387374::CFrameIdGenerator *v1; // rbx

  v0 = (_DWORD *)Win32AllocPool(56LL, 0x70694843u);
  v1 = (struct A0xad387374::CFrameIdGenerator *)v0;
  if ( v0 )
  {
    *v0 = 1;
    CInpLockGuard::Initialize((CInpLockGuard *)(v0 + 2));
  }
  else
  {
    v1 = 0LL;
  }
  `anonymous namespace'::CFrameIdGenerator::s_pInstance = v1;
  return v1 == 0LL ? 0xC0000017 : 0;
}
