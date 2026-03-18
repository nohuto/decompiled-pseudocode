/*
 * XREFs of NtDCompositionSetChildRootVisual @ 0x1C0013CA0
 * Callers:
 *     <none>
 * Callees:
 *     ?OpenDwmHandle@CompositionObject@@QEBAJPEAPEAX@Z @ 0x1C0005D50 (-OpenDwmHandle@CompositionObject@@QEBAJPEAPEAX@Z.c)
 *     ?ResolveHandle@ResourceObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z @ 0x1C000FBE0 (-ResolveHandle@ResourceObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z.c)
 *     UserReferenceDwmApiPort @ 0x1C004D130 (UserReferenceDwmApiPort.c)
 *     GreLockDwmState @ 0x1C004D1D0 (GreLockDwmState.c)
 *     GreUnlockDwmState @ 0x1C004D210 (GreUnlockDwmState.c)
 */

__int64 __fastcall NtDCompositionSetChildRootVisual(__int64 a1, void *a2, __int64 a3)
{
  CompositionObject *v3; // rbx
  int v4; // edi
  __int64 v6; // rax
  void *v8; // [rsp+38h] [rbp+10h] BYREF

  v3 = 0LL;
  v4 = 0;
  v8 = 0LL;
  if ( !a2 )
    goto LABEL_5;
  LOBYTE(a3) = 1;
  v4 = DirectComposition::ResourceObject::ResolveHandle(a2, 1LL, a3, (struct DirectComposition::ResourceObject **)&v8);
  if ( v4 < 0 )
    return (unsigned int)v4;
  v3 = (CompositionObject *)v8;
  if ( v8 && *((_DWORD *)v8 + 9) != 151 )
  {
    v4 = -1073741811;
  }
  else
  {
LABEL_5:
    GreLockDwmState();
    v8 = 0LL;
    if ( v3 )
      v4 = CompositionObject::OpenDwmHandle(v3, &v8);
    if ( v4 >= 0 )
    {
      v6 = UserReferenceDwmApiPort();
      v4 = DwmAsyncSetChildRootVisual(v6, a1, v8);
    }
    GreUnlockDwmState();
  }
  if ( v3 )
    ObfDereferenceObject(v3);
  return (unsigned int)v4;
}
