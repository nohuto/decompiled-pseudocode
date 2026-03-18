/*
 * XREFs of Command_PrepareHardware @ 0x1C005E440
 * Callers:
 *     Controller_WdfEvtDevicePrepareHardware @ 0x1C0063A00 (Controller_WdfEvtDevicePrepareHardware.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00021E0 (__security_check_cookie.c)
 *     memset @ 0x1C0008D80 (memset.c)
 *     RtlStringCchPrintfA @ 0x1C000B1CC (RtlStringCchPrintfA.c)
 *     WPP_RECORDER_SF_d @ 0x1C000B24C (WPP_RECORDER_SF_d.c)
 *     XilCommand_AllocateResources @ 0x1C000BD04 (XilCommand_AllocateResources.c)
 *     XilCommand_FreeResources @ 0x1C000C074 (XilCommand_FreeResources.c)
 *     XilCommand_GetLinkTrbPointer @ 0x1C000C1F4 (XilCommand_GetLinkTrbPointer.c)
 *     XilCommand_GetMaxTrbIndex @ 0x1C000C214 (XilCommand_GetMaxTrbIndex.c)
 */

__int64 __fastcall Command_PrepareHardware(__int64 a1)
{
  int Resources; // edi
  __int64 v3; // rcx
  int v4; // edx
  PVOID PoolWithTag; // rax
  __int64 v7; // rax
  _QWORD v8[6]; // [rsp+30h] [rbp-48h] BYREF

  memset(v8, 0, sizeof(v8));
  Resources = XilCommand_AllocateResources(a1);
  if ( Resources < 0 )
    goto LABEL_6;
  *(_QWORD *)(a1 + 88) = a1 + 80;
  *(_QWORD *)(a1 + 80) = a1 + 80;
  *(_QWORD *)(a1 + 104) = a1 + 96;
  *(_QWORD *)(a1 + 96) = a1 + 96;
  *(_DWORD *)(a1 + 48) = XilCommand_GetMaxTrbIndex(a1);
  *(_QWORD *)(a1 + 56) = XilCommand_GetLinkTrbPointer(v3);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
      4u,
      7u,
      0xDu,
      (__int64)&WPP_6807f6924beb3ee6c5fb59b3efd77224_Traceguids,
      v4);
    v4 = *(_DWORD *)(a1 + 48);
  }
  PoolWithTag = ExAllocatePoolWithTag(
                  *((POOL_TYPE *)&WPP_MAIN_CB.AlignmentRequirement + 1),
                  16LL * (unsigned int)(v4 + 1),
                  0x49434858u);
  *(_QWORD *)(a1 + 72) = PoolWithTag;
  if ( !PoolWithTag )
  {
    Resources = -1073741670;
LABEL_6:
    XilCommand_FreeResources(a1);
    return (unsigned int)Resources;
  }
  memset(PoolWithTag, 0, 16LL * (unsigned int)(*(_DWORD *)(a1 + 48) + 1));
  v7 = *(_QWORD *)(a1 + 8);
  v8[2] = 0LL;
  v8[0] = 48LL;
  LOBYTE(v8[4]) = 0;
  HIDWORD(v8[3]) = 16;
  LOBYTE(v8[3]) = 0;
  v8[1] = 0xC800000400LL;
  RtlStringCchPrintfA((NTSTRSAFE_PSTR)&v8[4], 0x10uLL, "%02d CMD", *(_DWORD *)(v7 + 176));
  if ( (int)imp_WppRecorderLogCreate(WPP_GLOBAL_Control, v8, a1 + 16) < 0 )
    *(_QWORD *)(a1 + 16) = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL);
  *(_DWORD *)(a1 + 32) = 1;
  return 0;
}
