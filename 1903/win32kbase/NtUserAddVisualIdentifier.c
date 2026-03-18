/*
 * XREFs of NtUserAddVisualIdentifier @ 0x1C0116860
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00292EC (UserSetLastError.c)
 *     ?ResolveHandle@CompositionInputObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x1C00806F0 (-ResolveHandle@CompositionInputObject@@KAJPEAXKDPEAPEAU1@@Z.c)
 *     ?AddMapping@InputObjectMap@@SAJU_LUID@@PEBUCompositionInputObject@@@Z @ 0x1C01C7D14 (-AddMapping@InputObjectMap@@SAJU_LUID@@PEBUCompositionInputObject@@@Z.c)
 */

__int64 __fastcall NtUserAddVisualIdentifier(void *a1, struct _LUID *a2)
{
  ULONG64 v2; // r8
  struct _LUID v3; // rbx
  int v4; // edi
  NTSTATUS v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 CurrentProcess; // rax
  ULONG v9; // eax
  __int64 v10; // rdx
  PVOID Object; // [rsp+60h] [rbp+18h] BYREF
  struct _LUID v13; // [rsp+68h] [rbp+20h]

  Object = 0LL;
  v13 = 0LL;
  v2 = (ULONG64)&a2[1];
  if ( &a2[1] < a2 || v2 > MmUserProbeAddress )
    a2 = (struct _LUID *)MmUserProbeAddress;
  v3 = *a2;
  v13 = *a2;
  v4 = 1;
  LOBYTE(v2) = 1;
  v5 = CompositionInputObject::ResolveHandle(a1, 1LL, v2, (struct CompositionInputObject **)&Object);
  if ( v5 < 0
    || ((CurrentProcess = PsGetCurrentProcess(v7, v6), *((_QWORD *)Object + 8) != CurrentProcess)
      ? (v5 = -1073741790)
      : (v5 = InputObjectMap::AddMapping(v3, Object)),
        v5 < 0) )
  {
    v4 = 0;
    v9 = RtlNtStatusToDosError(v5);
    UserSetLastError(v9, v10);
  }
  if ( Object )
    ObfDereferenceObject(Object);
  return v4;
}
