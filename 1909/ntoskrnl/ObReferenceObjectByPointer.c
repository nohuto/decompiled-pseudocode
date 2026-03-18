/*
 * XREFs of ObReferenceObjectByPointer @ 0x1400870C0
 * Callers:
 *     EtwpAddUmRegEntry @ 0x1405D49B0 (EtwpAddUmRegEntry.c)
 *     ObpLookupObjectName @ 0x1405F6F30 (ObpLookupObjectName.c)
 *     NtImpersonateAnonymousToken @ 0x14061C0D0 (NtImpersonateAnonymousToken.c)
 *     ObpParseSymbolicLinkEx @ 0x14061C5A0 (ObpParseSymbolicLinkEx.c)
 *     IopAllocateFoExtensionsOnCreate @ 0x14064C13C (IopAllocateFoExtensionsOnCreate.c)
 *     WmipQueryAllData @ 0x140696674 (WmipQueryAllData.c)
 *     EtwpStopTrace @ 0x1406A8734 (EtwpStopTrace.c)
 *     WmipQuerySetExecuteSI @ 0x140713490 (WmipQuerySetExecuteSI.c)
 *     WmipRegisterDevice @ 0x140738A64 (WmipRegisterDevice.c)
 *     EtwpRegisterPrivateSession @ 0x1408FC894 (EtwpRegisterPrivateSession.c)
 * Callees:
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 *     ObpPushStackInfo @ 0x1402ED44C (ObpPushStackInfo.c)
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
