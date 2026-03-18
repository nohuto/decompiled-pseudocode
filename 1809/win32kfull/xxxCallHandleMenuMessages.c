/*
 * XREFs of xxxCallHandleMenuMessages @ 0x1C020B5C0
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C0034C00 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     xxxMenuWindowProc @ 0x1C020F6B0 (xxxMenuWindowProc.c)
 *     xxxMNDragOver @ 0x1C022E524 (xxxMNDragOver.c)
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0022768 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C0102A84 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     memset @ 0x1C0163640 (memset.c)
 *     xxxMNEndMenuState @ 0x1C01F9F80 (xxxMNEndMenuState.c)
 *     xxxEndMenuLoop @ 0x1C02088E0 (xxxEndMenuLoop.c)
 *     xxxHandleMenuMessages @ 0x1C0208A7C (xxxHandleMenuMessages.c)
 *     MNCheckButtonDownState @ 0x1C020B1B4 (MNCheckButtonDownState.c)
 */

__int64 __fastcall xxxCallHandleMenuMessages(__int64 a1, _QWORD *a2, int a3, __int64 a4, __int64 a5)
{
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  __int64 v13; // rdx
  unsigned int v14; // edi
  __int64 v15; // rdx
  int v16; // edx
  _QWORD *v18[2]; // [rsp+20h] [rbp-48h] BYREF
  _QWORD v19[6]; // [rsp+30h] [rbp-38h] BYREF

  memset(v19, 0, sizeof(v19));
  if ( (*(_DWORD *)(a1 + 8) & 0x4008) == 0x4008 )
    MNCheckButtonDownState(a1, v9, v10, v11);
  if ( a2 )
    v19[0] = *a2;
  else
    v19[0] = 0LL;
  LODWORD(v19[1]) = a3;
  v19[2] = a4;
  v12 = a5;
  if ( (unsigned int)(a3 - 512) <= 0xE )
    v12 = ((unsigned __int16)(*(_WORD *)(a2[5] + 108LL) + WORD1(a5)) << 16) | (unsigned __int16)(a5
                                                                                               + *(_WORD *)(a2[5] + 104LL));
  v13 = *(_QWORD *)a1;
  *(_DWORD *)(a1 + 8) |= 0x200u;
  v19[3] = v12;
  SmartObjStackRefBase<tagPOPUPMENU>::Init(v18, v13);
  v14 = xxxHandleMenuMessages((__int64)v19, a1, v18);
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v18, v15);
  v16 = *(_DWORD *)(a1 + 8);
  *(_DWORD *)(a1 + 8) = v16 & 0xFFFFFDFF;
  if ( v14 && (v16 & 0x100) != 0 && ((v16 & 4) == 0 || (**(_DWORD **)a1 & 0x8000) != 0) )
  {
    xxxEndMenuLoop(a1, *(_QWORD *)a1);
    xxxMNEndMenuState(a1);
  }
  return v14;
}
