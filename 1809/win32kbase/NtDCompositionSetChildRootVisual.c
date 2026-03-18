/*
 * XREFs of NtDCompositionSetChildRootVisual @ 0x1C0166980
 * Callers:
 *     <none>
 * Callees:
 *     GreLockDwmState @ 0x1C002A9E0 (GreLockDwmState.c)
 *     GreUnlockDwmState @ 0x1C002AA20 (GreUnlockDwmState.c)
 *     ?OpenDwmHandle@CompositionObject@@QEBAJPEAPEAX@Z @ 0x1C00486E0 (-OpenDwmHandle@CompositionObject@@QEBAJPEAPEAX@Z.c)
 *     UserReferenceDwmApiPort @ 0x1C00488E0 (UserReferenceDwmApiPort.c)
 *     ?ResolveHandle@ResourceObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z @ 0x1C006E8E0 (-ResolveHandle@ResourceObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z.c)
 */

__int64 __fastcall NtDCompositionSetChildRootVisual(__int64 a1, void *a2, __int64 a3)
{
  CompositionObject *v3; // rbx
  int v4; // edi
  PVOID v6; // rax
  PVOID Object; // [rsp+38h] [rbp+10h] BYREF

  v3 = 0LL;
  v4 = 0;
  Object = 0LL;
  if ( !a2 )
    goto LABEL_6;
  LOBYTE(a3) = 1;
  v4 = DirectComposition::ResourceObject::ResolveHandle(
         a2,
         1LL,
         a3,
         (struct DirectComposition::ResourceObject **)&Object);
  if ( v4 < 0 )
    return (unsigned int)v4;
  v3 = (CompositionObject *)Object;
  if ( Object && *((_DWORD *)Object + 9) != 157 )
  {
    v4 = -1073741811;
  }
  else
  {
LABEL_6:
    GreLockDwmState();
    Object = 0LL;
    if ( v3 )
      v4 = CompositionObject::OpenDwmHandle(v3, &Object);
    if ( v4 >= 0 )
    {
      v6 = UserReferenceDwmApiPort();
      v4 = DwmAsyncSetChildRootVisual(v6, a1, Object);
    }
    GreUnlockDwmState();
  }
  if ( v3 )
    ObfDereferenceObject(v3);
  return (unsigned int)v4;
}
