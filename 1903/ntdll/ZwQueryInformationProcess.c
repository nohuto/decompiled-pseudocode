/*
 * XREFs of ZwQueryInformationProcess @ 0x18009CA00
 * Callers:
 *     sub_18004A7A0 @ 0x18004A7A0 (sub_18004A7A0.c)
 *     RtlDecodePointer @ 0x180067DA0 (RtlDecodePointer.c)
 *     sub_18006B63C @ 0x18006B63C (sub_18006B63C.c)
 *     sub_18006B7F4 @ 0x18006B7F4 (sub_18006B7F4.c)
 *     RtlUserThreadStart @ 0x18006D4B0 (RtlUserThreadStart.c)
 *     RtlEncodePointer @ 0x18006FBD0 (RtlEncodePointer.c)
 *     sub_180078AA0 @ 0x180078AA0 (sub_180078AA0.c)
 *     RtlWow64GetSharedInfoProcess @ 0x1800793D0 (RtlWow64GetSharedInfoProcess.c)
 *     sub_18007D1A8 @ 0x18007D1A8 (sub_18007D1A8.c)
 *     RtlSetUnhandledExceptionFilter @ 0x18007E970 (RtlSetUnhandledExceptionFilter.c)
 *     sub_18007F8D0 @ 0x18007F8D0 (sub_18007F8D0.c)
 *     sub_180089470 @ 0x180089470 (sub_180089470.c)
 *     RtlSetProcessIsCritical @ 0x18008B520 (RtlSetProcessIsCritical.c)
 *     sub_1800CFBE0 @ 0x1800CFBE0 (sub_1800CFBE0.c)
 *     sub_1800D559C @ 0x1800D559C (sub_1800D559C.c)
 *     sub_1800D576C @ 0x1800D576C (sub_1800D576C.c)
 *     RtlCreateProcessReflection @ 0x1800D5E70 (RtlCreateProcessReflection.c)
 *     RtlDecodeRemotePointer @ 0x1800DB710 (RtlDecodeRemotePointer.c)
 *     RtlEncodeRemotePointer @ 0x1800DB780 (RtlEncodeRemotePointer.c)
 *     RtlReportException @ 0x1800DB920 (RtlReportException.c)
 *     sub_1800DCA9C @ 0x1800DCA9C (sub_1800DCA9C.c)
 *     sub_1800DCD38 @ 0x1800DCD38 (sub_1800DCD38.c)
 *     RtlpNotOwnerCriticalSection @ 0x1800E6B30 (RtlpNotOwnerCriticalSection.c)
 *     sub_1800E6C88 @ 0x1800E6C88 (sub_1800E6C88.c)
 *     sub_1800FBDC0 @ 0x1800FBDC0 (sub_1800FBDC0.c)
 *     sub_180101388 @ 0x180101388 (sub_180101388.c)
 *     sub_1801042F4 @ 0x1801042F4 (sub_1801042F4.c)
 *     sub_18010EE84 @ 0x18010EE84 (sub_18010EE84.c)
 *     sub_180111038 @ 0x180111038 (sub_180111038.c)
 *     sub_18011138C @ 0x18011138C (sub_18011138C.c)
 *     sub_180111DA4 @ 0x180111DA4 (sub_180111DA4.c)
 *     sub_180112140 @ 0x180112140 (sub_180112140.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwQueryInformationProcess(
        HANDLE ProcessHandle,
        PROCESSINFOCLASS ProcessInformationClass,
        PVOID ProcessInformation,
        ULONG ProcessInformationLength,
        PULONG ReturnLength)
{
  NTSTATUS result; // eax

  result = 25;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
