/*
 * XREFs of LdrQueryOptionalDelayLoadedAPI @ 0x1800CF050
 * Callers:
 *     <none>
 * Callees:
 *     LdrResolveDelayLoadedAPI @ 0x1800187C0 (LdrResolveDelayLoadedAPI.c)
 *     LdrpFindDelayloadedMethod @ 0x1800CF154 (LdrpFindDelayloadedMethod.c)
 *     LdrpFindDelayloadedMethodInDescriptor @ 0x1800CF200 (LdrpFindDelayloadedMethodInDescriptor.c)
 *     LdrpGetDelayloadDescriptor @ 0x1800CF294 (LdrpGetDelayloadDescriptor.c)
 */

NTSTATUS __cdecl LdrQueryOptionalDelayLoadedAPI(
        PVOID ParentModuleBase,
        PCSTR DllName,
        PCSTR ProcedureName,
        ULONG Flags)
{
  int v7; // ecx
  IMAGE_THUNK_DATA64 *ThunkAddress; // rax
  const IMAGE_DELAYLOAD_DESCRIPTOR *v9; // rbx
  __int64 v10; // rax
  PCIMAGE_DELAYLOAD_DESCRIPTOR DelayloadDescriptor[3]; // [rsp+30h] [rbp-18h] BYREF

  if ( Flags )
    return -1073741811;
  v7 = *(unsigned __int8 *)DllName - (unsigned __int8)asc_18012CA4C[0];
  if ( !v7 )
    v7 = *((unsigned __int8 *)DllName + 1) - (unsigned __int8)asc_18012CA4C[1];
  if ( v7 )
  {
    v10 = LdrpGetDelayloadDescriptor(ParentModuleBase);
    v9 = (const IMAGE_DELAYLOAD_DESCRIPTOR *)v10;
    if ( !v10 )
      return -1073741515;
    ThunkAddress = (IMAGE_THUNK_DATA64 *)LdrpFindDelayloadedMethodInDescriptor(ParentModuleBase, v10, ProcedureName);
  }
  else
  {
    ThunkAddress = (IMAGE_THUNK_DATA64 *)LdrpFindDelayloadedMethod(ParentModuleBase, ProcedureName, DelayloadDescriptor);
    v9 = DelayloadDescriptor[0];
  }
  if ( ThunkAddress )
    return LdrResolveDelayLoadedAPI(ParentModuleBase, v9, 0LL, 0LL, ThunkAddress, 0) == 0LL ? 0xC0000139 : 0;
  return -1073741515;
}
