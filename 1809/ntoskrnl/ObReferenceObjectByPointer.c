/*
 * XREFs of ObReferenceObjectByPointer @ 0x140013530
 * Callers:
 *     WmipQueryAllData @ 0x14059EBCC (WmipQueryAllData.c)
 *     NtImpersonateAnonymousToken @ 0x1405BA710 (NtImpersonateAnonymousToken.c)
 *     ObpParseSymbolicLinkEx @ 0x1405BCEB0 (ObpParseSymbolicLinkEx.c)
 *     EtwpAddUmRegEntry @ 0x1405C54C0 (EtwpAddUmRegEntry.c)
 *     ObpLookupObjectName @ 0x1405E4BE0 (ObpLookupObjectName.c)
 *     IopAllocateFoExtensionsOnCreate @ 0x1405FA484 (IopAllocateFoExtensionsOnCreate.c)
 *     WmipQuerySetExecuteSI @ 0x1405FCF88 (WmipQuerySetExecuteSI.c)
 *     EtwpStopTrace @ 0x14065A150 (EtwpStopTrace.c)
 *     WmipRegisterDevice @ 0x14070C4CC (WmipRegisterDevice.c)
 *     EtwpRegisterPrivateSession @ 0x1408C1358 (EtwpRegisterPrivateSession.c)
 * Callees:
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     ObpPushStackInfo @ 0x1402D3258 (ObpPushStackInfo.c)
 */

NTSTATUS __stdcall ObReferenceObjectByPointer(
        PVOID Object,
        ACCESS_MASK DesiredAccess,
        POBJECT_TYPE ObjectType,
        KPROCESSOR_MODE AccessMode)
{
  bool v5; // zf
  signed __int64 BugCheckParameter4; // rbx

  if ( ObjectType )
    v5 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)*((char *)Object - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)Object - 48) >> 8)] == (_QWORD)ObjectType;
  else
    v5 = AccessMode == 0;
  if ( !v5 )
    return -1073741788;
  if ( ObpTraceFlags )
    ObpPushStackInfo((_DWORD)Object - 48);
  BugCheckParameter4 = _InterlockedIncrement64((volatile signed __int64 *)Object - 6);
  if ( BugCheckParameter4 <= 1 )
    KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)Object, 0x10uLL, BugCheckParameter4);
  return 0;
}
