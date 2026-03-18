/*
 * XREFs of ?ForwardInputToISM@CMouseProcessor@@AEAA_NAEBVCInputDest@@AEBVCMouseEvent@1@AEBUtagPOINT@@II_K@Z @ 0x1C018F154
 * Callers:
 *     ?ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z @ 0x1C003056C (-ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z.c)
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x1C004B908 (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 *     ?ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z @ 0x1C0190550 (-ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z.c)
 * Callees:
 *     ?CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z @ 0x1C004B0F0 (-CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z.c)
 *     ?RegionFromPoint@Mouse@InputConfig@@SA_NUtagPOINT@@PEAVCLockedInputSpaceRegion@@@Z @ 0x1C0052990 (-RegionFromPoint@Mouse@InputConfig@@SA_NUtagPOINT@@PEAVCLockedInputSpaceRegion@@@Z.c)
 *     ??0CLockedInputSpace@@QEAA@XZ @ 0x1C0052E30 (--0CLockedInputSpace@@QEAA@XZ.c)
 *     RIMGetVirtualDesktopPhysicalSize @ 0x1C009E8B0 (RIMGetVirtualDesktopPhysicalSize.c)
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@@Z @ 0x1C00A3CD8 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@@Z.c)
 *     ?UnLock@CInpLockGuard@@QEAAXXZ @ 0x1C00A3EB0 (-UnLock@CInpLockGuard@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C00B7F30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00BF5D0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00BF640 (memset.c)
 *     ConvertPointCoordinates @ 0x1C018C6A4 (ConvertPointCoordinates.c)
 *     ?SendToUserMode@Mouse@InputTraceLogging@@SAXPEBU_MIT_MOUSE_INPUT_MESSAGE@@W4INPUT_DESTINATION_ROUTING_MODE@@@Z @ 0x1C0190F10 (-SendToUserMode@Mouse@InputTraceLogging@@SAXPEBU_MIT_MOUSE_INPUT_MESSAGE@@W4INPUT_DESTINATION_RO.c)
 *     ApiSetEditionGetInputTransform @ 0x1C019A190 (ApiSetEditionGetInputTransform.c)
 *     ApiSetResetLastSeenFrameId @ 0x1C019E288 (ApiSetResetLastSeenFrameId.c)
 */

bool __fastcall CMouseProcessor::ForwardInputToISM(
        CMouseProcessor *this,
        const struct CInputDest *a2,
        const struct CMouseProcessor::CMouseEvent *a3,
        const struct tagPOINT *a4,
        unsigned int a5,
        unsigned int a6,
        unsigned __int64 a7)
{
  __int64 v10; // rcx
  LARGE_INTEGER PerformanceCounter; // rax
  __int64 v12; // rbx
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  int v19; // eax
  int v20; // ecx
  struct A0xad387374::CFrameIdGenerator *v21; // rbx
  int v22; // esi
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  __int128 v27; // xmm1
  __int128 v28; // xmm0
  __int64 v29; // rcx
  __int128 v30; // xmm0
  bool v31; // bl
  _QWORD v33[2]; // [rsp+20h] [rbp-E0h] BYREF
  CInpLockGuard *v34; // [rsp+30h] [rbp-D0h] BYREF
  int v35; // [rsp+38h] [rbp-C8h]
  __int128 v36; // [rsp+40h] [rbp-C0h]
  __int128 v37; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v38; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v39[16]; // [rsp+70h] [rbp-90h] BYREF
  _OWORD v40[19]; // [rsp+80h] [rbp-80h] BYREF
  _OWORD v41[7]; // [rsp+1B0h] [rbp+B0h] BYREF
  __int64 v42; // [rsp+220h] [rbp+120h]

  memset(v40, 0, 0x128uLL);
  v10 = *((_QWORD *)a3 + 1);
  *(_QWORD *)&v40[0] = *(_QWORD *)(v10 + 8);
  if ( *(_QWORD *)(v10 + 72) )
  {
    *(_QWORD *)&v40[2] = *(_QWORD *)(v10 + 72);
  }
  else
  {
    v10 = *((_QWORD *)a3 + 1);
    *(_QWORD *)&v40[2] = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                        * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
  }
  PerformanceCounter = *(LARGE_INTEGER *)(v10 + 80);
  if ( !PerformanceCounter.QuadPart )
  {
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    v10 = *((_QWORD *)a3 + 1);
  }
  *((LARGE_INTEGER *)&v40[2] + 1) = PerformanceCounter;
  WORD4(v40[0]) = *(_WORD *)(v10 + 24);
  WORD5(v40[0]) = *(_WORD *)(v10 + 36);
  LODWORD(v40[1]) = *(_DWORD *)(v10 + 32);
  HIDWORD(v40[1]) = *(_DWORD *)(v10 + 40);
  (**(void (__fastcall ***)(const struct CMouseProcessor::CMouseEvent *, char *))a3)(a3, (char *)v40 + 8);
  *(struct tagPOINT *)&v40[3] = *a4;
  v12 = *(_QWORD *)&v40[3];
  v37 = *(_OWORD *)RIMGetVirtualDesktopPhysicalSize((__int64)v39);
  v38 = *(_OWORD *)(*(_QWORD *)gpDispInfo + 24LL);
  ConvertPointCoordinates(v12, (int *)&v38, (int *)&v37, (_QWORD *)&v40[3] + 1);
  v13 = *((_OWORD *)a2 + 1);
  v40[4] = *(_OWORD *)a2;
  v14 = *((_OWORD *)a2 + 2);
  v40[5] = v13;
  v15 = *((_OWORD *)a2 + 3);
  *((_QWORD *)&v40[11] + 1) = __PAIR64__(a6, a5);
  v40[6] = v14;
  v16 = *((_OWORD *)a2 + 4);
  v40[7] = v15;
  v17 = *((_OWORD *)a2 + 5);
  v40[8] = v16;
  v18 = *((_OWORD *)a2 + 6);
  v40[9] = v17;
  *(_QWORD *)&v17 = *((_QWORD *)a2 + 14);
  *(_QWORD *)&v40[12] = a7;
  v19 = v40[17];
  v40[10] = v18;
  *(_QWORD *)&v40[11] = v17;
  if ( (BYTE4(gafAsyncKeyState) & 4) != 0 )
  {
    v19 = LODWORD(v40[17]) | 8;
    LODWORD(v40[17]) |= 8u;
  }
  if ( (BYTE4(gafAsyncKeyState) & 1) != 0 )
    LODWORD(v40[17]) = v19 | 4;
  v20 = *((_DWORD *)a3 + 4);
  if ( v20 == 1 )
  {
    if ( *(_DWORD *)(*((_QWORD *)a3 + 1) + 140LL) != 1 )
      goto LABEL_19;
    DWORD2(v40[16]) |= 1u;
  }
  if ( v20 == 3 )
  {
    v21 = `anonymous namespace'::CFrameIdGenerator::s_pInstance;
    CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
      (CInpLockGuardExclusiveIfNeeded *)&v34,
      (struct A0xad387374::CFrameIdGenerator *)((char *)`anonymous namespace'::CFrameIdGenerator::s_pInstance + 8));
    v22 = (*(_DWORD *)v21)++;
    if ( v22 == -1 )
    {
      *(_DWORD *)v21 = 1;
      ApiSetResetLastSeenFrameId();
    }
    if ( !v35 )
      CInpLockGuard::UnLock(v34);
    HIDWORD(v40[16]) = v22;
  }
LABEL_19:
  v23 = *((_OWORD *)a2 + 1);
  v41[0] = *(_OWORD *)a2;
  v24 = *((_OWORD *)a2 + 2);
  v41[1] = v23;
  v25 = *((_OWORD *)a2 + 3);
  v41[2] = v24;
  v26 = *((_OWORD *)a2 + 4);
  v41[3] = v25;
  v27 = *((_OWORD *)a2 + 5);
  v41[4] = v26;
  v28 = *((_OWORD *)a2 + 6);
  v41[5] = v27;
  *(_QWORD *)&v27 = *((_QWORD *)a2 + 14);
  v41[6] = v28;
  v42 = v27;
  ApiSetEditionGetInputTransform(v41, (char *)&v40[12] + 8);
  CLockedInputSpace::CLockedInputSpace((CLockedInputSpace *)v33);
  InputConfig::Mouse::RegionFromPoint(*a4, (struct CLockedInputSpaceRegion *)v33);
  if ( v33[0] )
  {
    v30 = *(_OWORD *)v33[0];
  }
  else
  {
    v36 = 0uLL;
    v30 = 0uLL;
  }
  *(_OWORD *)((char *)&v40[17] + 4) = v30;
  InputExtensibilityCallout::CoreMsgSendMessage(v29, 15);
  InputTraceLogging::Mouse::SendToUserMode(v40, *((unsigned int *)a2 + 1));
  v31 = (unsigned int)(*((_DWORD *)a2 + 1) - 2) <= 1;
  ExReleaseResourceLite(*(PERESOURCE *)v33[1]);
  KeLeaveCriticalRegion();
  return v31;
}
