/*
 * XREFs of RIMConfigurePointerDevice @ 0x1C0142FF0
 * Callers:
 *     RIMAllocateHidDesc @ 0x1C00AE4FC (RIMAllocateHidDesc.c)
 *     RIMApplyPTPConfigRemedy @ 0x1C015CE68 (RIMApplyPTPConfigRemedy.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002E6D4 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_s @ 0x1C0135B98 (WPP_RECORDER_SF_s.c)
 *     RIMDeliverConfigRequest @ 0x1C014312C (RIMDeliverConfigRequest.c)
 *     RIMFindConfigDeviceForInput @ 0x1C0143620 (RIMFindConfigDeviceForInput.c)
 */

__int64 __fastcall RIMConfigurePointerDevice(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbx
  int v6; // edx
  int v7; // esi
  const char *v8; // rcx
  struct RIMDEV *v9; // rcx
  __int64 result; // rax
  struct RIMDEV *v11; // [rsp+58h] [rbp+10h] BYREF

  v11 = 0LL;
  v4 = a2;
  if ( (*(_DWORD *)(a2 + 184) & 0x80u) == 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 3;
    WPP_RECORDER_SF_((_DWORD)gRimLog, a2, 1, 63, (__int64)&WPP_9fa14f927df6353817215e33bf2b608e_Traceguids);
  }
  v7 = RIMFindConfigDeviceForInput(a1, a3, v4, &v11);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v8 = "found config device";
    if ( !v7 )
      v8 = "NO config device found";
    WPP_RECORDER_SF_s(
      (_DWORD)gRimLog,
      v6,
      1,
      64,
      (__int64)&WPP_9fa14f927df6353817215e33bf2b608e_Traceguids,
      (__int64)v8);
  }
  if ( !v7
    || ((v9 = v11, *(_WORD *)(a3 + 40) != 4) ? (*((_DWORD *)v11 + 46) |= 0x1000u) : (*((_DWORD *)v11 + 46) |= 0x800u),
        result = RIMDeliverConfigRequest(v9),
        *(_DWORD *)(*(_QWORD *)(v4 + 480) + 312LL) &= ~0x1000u,
        (int)result < 0) )
  {
    result = *(_QWORD *)(v4 + 480);
    *(_DWORD *)(result + 312) |= 0x1000u;
  }
  return result;
}
