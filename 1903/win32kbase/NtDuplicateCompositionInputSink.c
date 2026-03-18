/*
 * XREFs of NtDuplicateCompositionInputSink @ 0x1C0001650
 * Callers:
 *     <none>
 * Callees:
 *     UserIsCurrentProcessDwm @ 0x1C0037DC0 (UserIsCurrentProcessDwm.c)
 *     ?ResolveHandle@CompositionInputObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x1C00806F0 (-ResolveHandle@CompositionInputObject@@KAJPEAXKDPEAPEAU1@@Z.c)
 *     ?CreateHandle@CompositionObject@@QEBAJK_NDPEAPEAX@Z @ 0x1C008E850 (-CreateHandle@CompositionObject@@QEBAJK_NDPEAPEAX@Z.c)
 */

__int64 __fastcall NtDuplicateCompositionInputSink(void *a1, HANDLE *a2)
{
  int v4; // ebx
  HANDLE Handle; // [rsp+50h] [rbp+18h] BYREF
  PVOID Object; // [rsp+58h] [rbp+20h] BYREF

  Handle = (HANDLE)-1LL;
  v4 = 0;
  if ( !(unsigned int)UserIsCurrentProcessDwm() )
    v4 = -1073741790;
  if ( v4 < 0 )
    goto LABEL_12;
  v4 = CompositionInputObject::ResolveHandle(a1, 1u, 1, (struct CompositionInputObject **)&Object);
  if ( v4 >= 0 )
  {
    v4 = CompositionObject::CreateHandle((CompositionObject *)Object, 3u, 0, 0, &Handle);
    ObfDereferenceObject(Object);
  }
  if ( v4 < 0 )
  {
LABEL_12:
    if ( Handle != (HANDLE)-1LL )
      NtClose(Handle);
  }
  else
  {
    if ( a2 + 1 < a2 || (unsigned __int64)(a2 + 1) > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    *a2 = Handle;
  }
  return (unsigned int)v4;
}
