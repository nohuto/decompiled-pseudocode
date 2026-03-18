/*
 * XREFs of RIMConfigurePointerDevice @ 0x1C00EE77C
 * Callers:
 *     RIMAllocateHidDesc @ 0x1C00EE340 (RIMAllocateHidDesc.c)
 *     RIMApplyPTPConfigRemedy @ 0x1C01087F4 (RIMApplyPTPConfigRemedy.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003A778 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_s @ 0x1C00DE7C4 (WPP_RECORDER_SF_s.c)
 *     RIMDeliverConfigRequest @ 0x1C00EF068 (RIMDeliverConfigRequest.c)
 *     RIMFindConfigDeviceForInput @ 0x1C00EF4E0 (RIMFindConfigDeviceForInput.c)
 */

__int64 __fastcall RIMConfigurePointerDevice(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v6; // esi
  __int64 v7; // rdx
  int v8; // ebx
  const char *v9; // rcx
  __int64 v10; // rcx
  __int64 result; // rax
  __int64 v12; // [rsp+58h] [rbp+10h] BYREF

  v12 = 0LL;
  v6 = 3;
  if ( (*(_DWORD *)(a2 + 184) & 0x40) == 0 )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      3u,
      0x13u,
      0x3Cu,
      (__int64)&WPP_fd8d4c756ba23246590421fce8ae1851_Traceguids);
  v8 = RIMFindConfigDeviceForInput(a1, a3, a2, &v12);
  v9 = "found config device";
  if ( !v8 )
    v9 = "NO config device found";
  WPP_RECORDER_SF_s(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    v7,
    0x14u,
    0x3Du,
    (__int64)&WPP_fd8d4c756ba23246590421fce8ae1851_Traceguids,
    v9);
  if ( !v8
    || ((v10 = v12, *(_WORD *)(a3 + 40) != 4)
      ? (*(_DWORD *)(v12 + 184) |= 0x800u)
      : (*(_DWORD *)(v12 + 184) |= 0x400u, v6 = 2),
        result = RIMDeliverConfigRequest(v10, *(_QWORD *)(v10 + 464), 82LL, v6),
        *(_DWORD *)(*(_QWORD *)(a2 + 480) + 276LL) &= ~0x4000u,
        (int)result < 0) )
  {
    result = *(_QWORD *)(a2 + 480);
    *(_DWORD *)(result + 276) |= 0x4000u;
  }
  return result;
}
