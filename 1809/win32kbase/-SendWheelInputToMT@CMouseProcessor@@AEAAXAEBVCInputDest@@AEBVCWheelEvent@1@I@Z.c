/*
 * XREFs of ?SendWheelInputToMT@CMouseProcessor@@AEAAXAEBVCInputDest@@AEBVCWheelEvent@1@I@Z @ 0x1C01596B4
 * Callers:
 *     ?ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z @ 0x1C0158F10 (-ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z.c)
 * Callees:
 *     ?CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z @ 0x1C0036514 (-CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z.c)
 *     RIMGetVirtualDesktopPhysicalSize @ 0x1C008BE30 (RIMGetVirtualDesktopPhysicalSize.c)
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00AD240 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     memset @ 0x1C00AF780 (memset.c)
 *     ??1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ @ 0x1C0132F74 (--1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ.c)
 *     ConvertPointCoordinates @ 0x1C01561C4 (ConvertPointCoordinates.c)
 *     ?SendWheelToUserMode@Mouse@InputTraceLogging@@SAX_K@Z @ 0x1C015988C (-SendWheelToUserMode@Mouse@InputTraceLogging@@SAX_K@Z.c)
 *     ApiSetResetLastSeenFrameId @ 0x1C01649B4 (ApiSetResetLastSeenFrameId.c)
 */

void __fastcall CMouseProcessor::SendWheelInputToMT(
        CMouseProcessor *this,
        const struct CInputDest *a2,
        const struct CMouseProcessor::CWheelEvent *a3,
        int a4)
{
  __int128 v7; // xmm0
  __int64 v8; // rax
  __int128 v9; // xmm1
  __int64 v10; // rcx
  __int128 v11; // xmm0
  struct A0xad387374::CFrameIdGenerator *v12; // rbx
  __int64 v13; // rax
  int v14; // edi
  LARGE_INTEGER PerformanceCounter; // rax
  __int64 v16; // rdi
  __int64 v17; // rbx
  int v18; // ecx
  int v19; // eax
  unsigned __int64 v20; // rcx
  __int64 v21; // rcx
  __int128 v22; // [rsp+28h] [rbp-E0h] BYREF
  _OWORD v23[17]; // [rsp+38h] [rbp-D0h] BYREF
  _BYTE v24[16]; // [rsp+148h] [rbp+40h] BYREF
  CInpLockGuard *v25[8]; // [rsp+158h] [rbp+50h] BYREF

  memset(&v23[1], 0, 0xF8uLL);
  v7 = *(_OWORD *)((char *)a2 + 24);
  v8 = *(_QWORD *)a3;
  v9 = *(_OWORD *)((char *)a2 + 40);
  LODWORD(v23[1]) = 0;
  *(_OWORD *)((char *)&v23[11] + 8) = v7;
  v10 = *(_QWORD *)(v8 + 8);
  v11 = *(_OWORD *)((char *)a2 + 56);
  v12 = `anonymous namespace'::CFrameIdGenerator::s_pInstance;
  *((_QWORD *)&v23[1] + 1) = *(_QWORD *)(v8 + 72);
  v13 = -1LL;
  DWORD1(v23[2]) = 1;
  *(_OWORD *)((char *)&v23[12] + 8) = v9;
  if ( v10 )
    v13 = v10;
  DWORD2(v23[14]) = a4;
  *((_QWORD *)&v23[3] + 1) = v13;
  *((_QWORD *)&v23[2] + 1) = 0x100000004LL;
  *(_OWORD *)((char *)&v23[13] + 8) = v11;
  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)v25,
    (struct A0xad387374::CFrameIdGenerator *)((char *)`anonymous namespace'::CFrameIdGenerator::s_pInstance + 8),
    0LL);
  v14 = (*(_DWORD *)v12)++;
  if ( v14 == -1 )
  {
    *(_DWORD *)v12 = 1;
    ApiSetResetLastSeenFrameId();
  }
  CInpLockGuardExclusiveIfNeeded::~CInpLockGuardExclusiveIfNeeded(v25);
  LODWORD(v23[3]) = v14;
  HIDWORD(v23[6]) = 1;
  DWORD2(v23[6]) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v16 = *(_QWORD *)a3;
  *((LARGE_INTEGER *)&v23[7] + 1) = PerformanceCounter;
  v18 = -(*((_DWORD *)a3 + 3) != 0);
  *((_QWORD *)&v23[4] + 1) = *(_QWORD *)(v16 + 48);
  v17 = *((_QWORD *)&v23[4] + 1);
  DWORD1(v23[3]) = (v18 & 0x80000) + 0x80000;
  v22 = *(_OWORD *)RIMGetVirtualDesktopPhysicalSize((__int64)v24);
  v23[0] = *(_OWORD *)(*(_QWORD *)gpDispInfo + 24LL);
  ConvertPointCoordinates(v17, (int *)v23, (int *)&v22, &v23[5]);
  *((_QWORD *)&v23[5] + 1) = *((_QWORD *)&v23[4] + 1);
  *(_QWORD *)&v23[6] = *(_QWORD *)&v23[5];
  v19 = DWORD1(v23[7]);
  if ( (BYTE4(gafAsyncKeyState) & 4) != 0 )
  {
    v19 = DWORD1(v23[7]) | 8;
    DWORD1(v23[7]) |= 8u;
  }
  if ( (BYTE4(gafAsyncKeyState) & 1) != 0 )
    DWORD1(v23[7]) = v19 | 4;
  v20 = *(_QWORD *)(v16 + 72);
  LODWORD(v23[7]) = *(__int16 *)(v16 + 18);
  InputTraceLogging::Mouse::SendWheelToUserMode(v20);
  InputExtensibilityCallout::CoreMsgSendMessage(v21, 5);
}
