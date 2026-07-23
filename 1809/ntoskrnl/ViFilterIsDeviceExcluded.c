/*
 * XREFs of ViFilterIsDeviceExcluded @ 0x140944588
 * Callers:
 *     VfFilterAttach @ 0x140943F44 (VfFilterAttach.c)
 * Callees:
 *     HviIsAnyHypervisorPresent @ 0x140176CB0 (HviIsAnyHypervisorPresent.c)
 *     RtlEqualUnicodeString @ 0x140626D60 (RtlEqualUnicodeString.c)
 */

_BOOL8 __fastcall ViFilterIsDeviceExcluded(__int64 a1)
{
  __int64 v2; // rcx
  const UNICODE_STRING *v3; // rbx
  _BOOL8 result; // rax

  result = 1;
  if ( *(PDRIVER_OBJECT *)(a1 + 8) != VfFilterDriverObject )
  {
    if ( !HviIsAnyHypervisorPresent() )
      return 0;
    v2 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 40LL);
    if ( !v2 )
      return 0;
    v3 = (const UNICODE_STRING *)(v2 + 88);
    if ( !RtlEqualUnicodeString(&VfVidName, (PCUNICODE_STRING)(v2 + 88), 1u)
      && !RtlEqualUnicodeString(&VfSynth3DvscName, v3, 1u)
      && !RtlEqualUnicodeString(&VfSynth3DvspName, v3, 1u) )
    {
      return 0;
    }
  }
  return result;
}
