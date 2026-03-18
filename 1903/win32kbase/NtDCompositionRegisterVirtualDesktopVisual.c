/*
 * XREFs of NtDCompositionRegisterVirtualDesktopVisual @ 0x1C01A2A10
 * Callers:
 *     <none>
 * Callees:
 *     GreLockDwmState @ 0x1C0014270 (GreLockDwmState.c)
 *     GreUnlockDwmState @ 0x1C00142B0 (GreUnlockDwmState.c)
 *     UserReferenceDwmApiPort @ 0x1C003EC20 (UserReferenceDwmApiPort.c)
 *     ?OpenDwmHandle@CompositionObject@@QEBAJPEAPEAX@Z @ 0x1C003EDB0 (-OpenDwmHandle@CompositionObject@@QEBAJPEAPEAX@Z.c)
 *     ?ResolveHandle@ResourceObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z @ 0x1C00806AC (-ResolveHandle@ResourceObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z.c)
 */

__int64 __fastcall NtDCompositionRegisterVirtualDesktopVisual(__int64 a1, PVOID *a2, void *a3)
{
  ULONG64 v5; // r8
  PVOID v6; // rbx
  int v7; // edi
  CompositionObject *v8; // rsi
  __int64 v9; // r8
  __int64 v10; // r9
  PVOID v11; // rax
  PVOID v13; // [rsp+20h] [rbp-28h]
  PVOID Object; // [rsp+68h] [rbp+20h] BYREF

  Object = 0LL;
  v5 = (ULONG64)(a2 + 1);
  if ( a2 + 1 < a2 || v5 > MmUserProbeAddress )
    a2 = (PVOID *)MmUserProbeAddress;
  v6 = *a2;
  v13 = *a2;
  Object = *a2;
  LOBYTE(v5) = 1;
  v7 = DirectComposition::ResourceObject::ResolveHandle(
         a3,
         1LL,
         v5,
         (struct DirectComposition::ResourceObject **)&Object);
  if ( v7 >= 0 )
  {
    v8 = (CompositionObject *)Object;
    if ( *((_DWORD *)Object + 9) == 189 )
    {
      GreLockDwmState();
      Object = 0LL;
      v7 = CompositionObject::OpenDwmHandle(v8, &Object, v9, v10);
      if ( v7 >= 0 )
      {
        v11 = UserReferenceDwmApiPort();
        v7 = DwmAsyncRegisterSharedVirtualDesktopVisual(v11, a1, v6, Object, v13);
      }
      GreUnlockDwmState();
    }
    else
    {
      v7 = -1073741811;
    }
    ObfDereferenceObject(v8);
  }
  return (unsigned int)v7;
}
