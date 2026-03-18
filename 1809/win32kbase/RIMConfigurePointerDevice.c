/*
 * XREFs of RIMConfigurePointerDevice @ 0x1C011A76C
 * Callers:
 *     RIMAllocateHidDesc @ 0x1C004DE5C (RIMAllocateHidDesc.c)
 *     RIMApplyPTPConfigRemedy @ 0x1C012FEAC (RIMApplyPTPConfigRemedy.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_s @ 0x1C010B84C (WPP_RECORDER_SF_s.c)
 *     RIMDeliverConfigRequest @ 0x1C011A884 (RIMDeliverConfigRequest.c)
 *     RIMFindConfigDeviceForInput @ 0x1C011AD10 (RIMFindConfigDeviceForInput.c)
 */

__int64 __fastcall RIMConfigurePointerDevice(__int64 a1, __int64 a2, __int64 a3)
{
  int v6; // ebx
  const char *v7; // rcx
  struct RIMDEV *v8; // rcx
  __int64 result; // rax
  struct RIMDEV *v10; // [rsp+58h] [rbp+10h] BYREF

  v10 = 0LL;
  if ( (*(_DWORD *)(a2 + 184) & 0x80u) == 0 )
    WPP_RECORDER_SF_(gRimLog, 3u, 0x14u, 0x3Fu, (__int64)&WPP_270250005a1833be05ae343dfa115697_Traceguids);
  v6 = RIMFindConfigDeviceForInput(a1, a3, a2, &v10);
  v7 = "found config device";
  if ( !v6 )
    v7 = "NO config device found";
  WPP_RECORDER_SF_s(
    gRimLog,
    3u,
    0x15u,
    0x40u,
    (__int64)&WPP_270250005a1833be05ae343dfa115697_Traceguids,
    (const struct _MCGEN_TRACE_CONTEXT *)v7);
  if ( !v6
    || ((v8 = v10, *(_WORD *)(a3 + 40) != 4) ? (*((_DWORD *)v10 + 46) |= 0x1000u) : (*((_DWORD *)v10 + 46) |= 0x800u),
        result = RIMDeliverConfigRequest(v8),
        *(_DWORD *)(*(_QWORD *)(a2 + 480) + 308LL) &= ~0x4000u,
        (int)result < 0) )
  {
    result = *(_QWORD *)(a2 + 480);
    *(_DWORD *)(result + 308) |= 0x4000u;
  }
  return result;
}
