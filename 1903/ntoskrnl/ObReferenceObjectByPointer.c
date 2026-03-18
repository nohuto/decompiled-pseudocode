/*
 * XREFs of ObReferenceObjectByPointer @ 0x140086CA0
 * Callers:
 *     EtwpAddUmRegEntry @ 0x1405D44B0 (EtwpAddUmRegEntry.c)
 *     ObpLookupObjectName @ 0x1405F5EE0 (ObpLookupObjectName.c)
 *     NtImpersonateAnonymousToken @ 0x14061A5C0 (NtImpersonateAnonymousToken.c)
 *     ObpParseSymbolicLinkEx @ 0x14061AA90 (ObpParseSymbolicLinkEx.c)
 *     WmipQueryAllData @ 0x140669254 (WmipQueryAllData.c)
 *     IopAllocateFoExtensionsOnCreate @ 0x1406861CC (IopAllocateFoExtensionsOnCreate.c)
 *     EtwpStopTrace @ 0x1406B4F7C (EtwpStopTrace.c)
 *     WmipQuerySetExecuteSI @ 0x1407116B0 (WmipQuerySetExecuteSI.c)
 *     WmipRegisterDevice @ 0x140736804 (WmipRegisterDevice.c)
 *     EtwpRegisterPrivateSession @ 0x1408FCEB4 (EtwpRegisterPrivateSession.c)
 * Callees:
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     ObpPushStackInfo @ 0x1402ED6EC (ObpPushStackInfo.c)
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
