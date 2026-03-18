/*
 * XREFs of ?Initialize@CCursorClip@@SAJXZ @ 0x1C00A9914
 * Callers:
 *     InitializeInputComponents @ 0x1C00A90D8 (InitializeInputComponents.c)
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C0012FC0 (Win32AllocPoolZInit.c)
 *     ?RegisterCoreMsgProvider@InputExtensibilityCallout@@QEAAXW4_MIT_ENDPOINT@@W4SendMessageWhen@@W4StateOfInterest@@PEAXP6AX23@Z@Z @ 0x1C00A52B0 (-RegisterCoreMsgProvider@InputExtensibilityCallout@@QEAAXW4_MIT_ENDPOINT@@W4SendMessageWhen@@W4S.c)
 *     memset @ 0x1C00BF640 (memset.c)
 */

__int64 CCursorClip::Initialize(void)
{
  _QWORD *v0; // rax
  __int64 v1; // rcx
  unsigned int v2; // ebx
  _QWORD *v3; // rdi

  v0 = Win32AllocPoolZInit(0x60uLL, 1919964227LL);
  v2 = 0;
  v3 = v0;
  if ( v0 )
  {
    memset(v0, 0, 0x20uLL);
    v3[5] = 0LL;
    v3[4] = &CPushLock::`vftable';
    v3[6] = 0LL;
    v3[7] = 0LL;
    v3[8] = 0LL;
    *((_DWORD *)v3 + 18) = 0;
    v3[10] = 0LL;
    *((_DWORD *)v3 + 22) = 0;
    *((_WORD *)v3 + 46) = 0;
  }
  else
  {
    v3 = 0LL;
  }
  gpCursorClip = (CCursorClip *)v3;
  if ( v3 )
    InputExtensibilityCallout::RegisterCoreMsgProvider(
      v1,
      1LL,
      0LL,
      2,
      0LL,
      (__int64)lambda_0106af77700bc4a134663e8cc2385985_::_lambda_invoker_cdecl_);
  else
    return (unsigned int)-1073741801;
  return v2;
}
