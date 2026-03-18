/*
 * XREFs of NtQueryCompositionInputIsImplicit @ 0x1C0012440
 * Callers:
 *     <none>
 * Callees:
 *     ?ResolveHandle@CompositionInputObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x1C000FC20 (-ResolveHandle@CompositionInputObject@@KAJPEAXKDPEAPEAU1@@Z.c)
 */

__int64 __fastcall NtQueryCompositionInputIsImplicit(void *a1, _DWORD *a2, __int64 a3)
{
  int v4; // edi
  int v5; // esi
  PVOID Object; // [rsp+48h] [rbp+20h] BYREF

  LOBYTE(a3) = 1;
  v4 = CompositionInputObject::ResolveHandle(a1, 1LL, a3, (struct CompositionInputObject **)&Object);
  if ( v4 >= 0 )
  {
    v5 = *((_DWORD *)Object + 48);
    ObfDereferenceObject(Object);
    if ( a2 + 1 < a2 || (unsigned __int64)(a2 + 1) > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    *a2 = v5;
  }
  return (unsigned int)v4;
}
