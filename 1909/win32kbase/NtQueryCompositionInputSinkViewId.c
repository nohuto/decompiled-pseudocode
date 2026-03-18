/*
 * XREFs of NtQueryCompositionInputSinkViewId @ 0x1C0001A00
 * Callers:
 *     <none>
 * Callees:
 *     ?ResolveHandle@CompositionInputObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x1C007CC80 (-ResolveHandle@CompositionInputObject@@KAJPEAXKDPEAPEAU1@@Z.c)
 */

__int64 __fastcall NtQueryCompositionInputSinkViewId(void *a1, _DWORD *a2)
{
  int v3; // ebx
  int v5; // [rsp+40h] [rbp+18h]
  PVOID Object; // [rsp+48h] [rbp+20h] BYREF

  v3 = CompositionInputObject::ResolveHandle(a1, 1u, 1, (struct CompositionInputObject **)&Object);
  if ( v3 >= 0 )
  {
    v5 = *((_DWORD *)Object + 46);
    ObfDereferenceObject(Object);
    if ( a2 + 1 < a2 || (unsigned __int64)(a2 + 1) > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    *a2 = v5;
  }
  return (unsigned int)v3;
}
