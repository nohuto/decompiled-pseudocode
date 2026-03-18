/*
 * XREFs of Command_PrepareHardware @ 0x1C0057408
 * Callers:
 *     Controller_WdfEvtDevicePrepareHardware @ 0x1C005C350 (Controller_WdfEvtDevicePrepareHardware.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0002030 (__security_check_cookie.c)
 *     memset @ 0x1C0006FC0 (memset.c)
 *     RtlStringCchPrintfA @ 0x1C0009144 (RtlStringCchPrintfA.c)
 *     WPP_RECORDER_SF_d @ 0x1C00091C4 (WPP_RECORDER_SF_d.c)
 *     XilCommand_AllocateResources @ 0x1C0009C7C (XilCommand_AllocateResources.c)
 *     XilCommand_FreeResources @ 0x1C0009F94 (XilCommand_FreeResources.c)
 *     XilCommand_GetLinkTrbPointer @ 0x1C000A0F0 (XilCommand_GetLinkTrbPointer.c)
 *     XilCommand_GetMaxTrbIndex @ 0x1C000A110 (XilCommand_GetMaxTrbIndex.c)
 */

__int64 __fastcall Command_PrepareHardware(__int64 a1)
{
  int Resources; // edi
  __int64 v3; // rcx
  int v4; // edx
  PVOID PoolWithTag; // rax
  __int64 v7; // rax
  _DWORD v8[4]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v9; // [rsp+40h] [rbp-38h]
  char v10; // [rsp+48h] [rbp-30h]
  int v11; // [rsp+4Ch] [rbp-2Ch]
  char pszDest[16]; // [rsp+50h] [rbp-28h] BYREF

  Resources = XilCommand_AllocateResources(a1);
  if ( Resources < 0 )
    goto LABEL_4;
  *(_QWORD *)(a1 + 88) = a1 + 80;
  *(_QWORD *)(a1 + 80) = a1 + 80;
  *(_QWORD *)(a1 + 104) = a1 + 96;
  *(_QWORD *)(a1 + 96) = a1 + 96;
  *(_DWORD *)(a1 + 48) = XilCommand_GetMaxTrbIndex(a1);
  *(_QWORD *)(a1 + 56) = XilCommand_GetLinkTrbPointer(v3);
  WPP_RECORDER_SF_d(
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
    4u,
    7u,
    0xDu,
    (__int64)&WPP_6807f6924beb3ee6c5fb59b3efd77224_Traceguids,
    v4);
  PoolWithTag = ExAllocatePoolWithTag(
                  *((POOL_TYPE *)&WPP_MAIN_CB.AlignmentRequirement + 1),
                  16LL * (unsigned int)(*(_DWORD *)(a1 + 48) + 1),
                  0x49434858u);
  *(_QWORD *)(a1 + 72) = PoolWithTag;
  if ( !PoolWithTag )
  {
    Resources = -1073741670;
LABEL_4:
    XilCommand_FreeResources(a1);
    return (unsigned int)Resources;
  }
  memset(PoolWithTag, 0, 16LL * (unsigned int)(*(_DWORD *)(a1 + 48) + 1));
  v7 = *(_QWORD *)(a1 + 8);
  v9 = 0LL;
  v8[1] = 0;
  v8[0] = 48;
  pszDest[0] = 0;
  v11 = 16;
  v10 = 0;
  v8[2] = 1024;
  v8[3] = 200;
  RtlStringCchPrintfA(pszDest, 0x10uLL, "%02d CMD", *(_DWORD *)(v7 + 176));
  if ( (int)imp_WppRecorderLogCreate(WPP_GLOBAL_Control, v8, a1 + 16) < 0 )
    *(_QWORD *)(a1 + 16) = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL);
  *(_DWORD *)(a1 + 32) = 1;
  return 0;
}
