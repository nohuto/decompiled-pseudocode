/*
 * XREFs of NtDCompositionSetChildRootVisual @ 0x1C01A0870
 * Callers:
 *     <none>
 * Callees:
 *     GreLockDwmState @ 0x1C002CA20 (GreLockDwmState.c)
 *     GreUnlockDwmState @ 0x1C002CA60 (GreUnlockDwmState.c)
 *     ?OpenDwmHandle@CompositionObject@@QEBAJPEAPEAX@Z @ 0x1C003F550 (-OpenDwmHandle@CompositionObject@@QEBAJPEAPEAX@Z.c)
 *     UserReferenceDwmApiPort @ 0x1C003FE60 (UserReferenceDwmApiPort.c)
 *     ?ResolveHandle@ResourceObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z @ 0x1C007CC40 (-ResolveHandle@ResourceObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z.c)
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
  if ( Object && *((_DWORD *)Object + 9) != 189 )
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
