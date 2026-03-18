/*
 * XREFs of NtQueryCompositionInputSinkLuid @ 0x1C007C410
 * Callers:
 *     <none>
 * Callees:
 *     ?ResolveHandle@CompositionInputObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x1C006E920 (-ResolveHandle@CompositionInputObject@@KAJPEAXKDPEAPEAU1@@Z.c)
 */

__int64 __fastcall NtQueryCompositionInputSinkLuid(void *a1, _QWORD *a2, __int64 a3)
{
  int v4; // ebx
  PVOID Object; // [rsp+40h] [rbp+18h] BYREF
  __int64 v7; // [rsp+48h] [rbp+20h]

  LOBYTE(a3) = 1;
  v4 = CompositionInputObject::ResolveHandle(a1, 1LL, a3, (struct CompositionInputObject **)&Object);
  if ( v4 >= 0 )
  {
    v7 = *((_QWORD *)Object + 2);
    ObfDereferenceObject(Object);
    if ( a2 + 1 < a2 || (unsigned __int64)(a2 + 1) > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    *a2 = v7;
  }
  return (unsigned int)v4;
}
