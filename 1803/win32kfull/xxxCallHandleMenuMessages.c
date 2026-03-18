/*
 * XREFs of xxxCallHandleMenuMessages @ 0x1C01E5680
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C004A500 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     xxxMenuWindowProc @ 0x1C01E96E0 (xxxMenuWindowProc.c)
 *     xxxMNDragOver @ 0x1C0205428 (xxxMNDragOver.c)
 * Callees:
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C0021B08 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0021BC8 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 *     xxxMNEndMenuState @ 0x1C01D5390 (xxxMNEndMenuState.c)
 *     xxxEndMenuLoop @ 0x1C01E2A70 (xxxEndMenuLoop.c)
 *     xxxHandleMenuMessages @ 0x1C01E2BFC (xxxHandleMenuMessages.c)
 *     MNCheckButtonDownState @ 0x1C01E5288 (MNCheckButtonDownState.c)
 */

__int64 __fastcall xxxCallHandleMenuMessages(__int64 a1, _QWORD *a2, int a3, __int64 a4, __int64 a5)
{
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rdx
  unsigned int v12; // edi
  __int64 v13; // rdx
  unsigned int v14; // ecx
  _QWORD *v16[2]; // [rsp+20h] [rbp-48h] BYREF
  _QWORD v17[6]; // [rsp+30h] [rbp-38h] BYREF

  memset(v17, 0, sizeof(v17));
  if ( (*(_DWORD *)(a1 + 8) & 0x4008) == 0x4008 )
    MNCheckButtonDownState(a1, v9);
  if ( a2 )
    v17[0] = *a2;
  else
    v17[0] = 0LL;
  LODWORD(v17[1]) = a3;
  v17[2] = a4;
  v10 = a5;
  if ( (unsigned int)(a3 - 512) <= 0xE )
    v10 = ((unsigned __int16)(*(_WORD *)(a2[5] + 108LL) + WORD1(a5)) << 16) | (unsigned __int16)(a5
                                                                                               + *(_WORD *)(a2[5] + 104LL));
  v11 = *(_QWORD *)a1;
  *(_DWORD *)(a1 + 8) |= 0x200u;
  v17[3] = v10;
  SmartObjStackRefBase<tagPOPUPMENU>::Init(v16, v11);
  v12 = xxxHandleMenuMessages((__int64)v17, a1, v16);
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v16, v13);
  v14 = *(_DWORD *)(a1 + 8) & 0xFFFFFDFF;
  *(_DWORD *)(a1 + 8) = v14;
  if ( v12 && (v14 & 0x100) != 0 && ((v14 & 4) == 0 || (**(_DWORD **)a1 & 0x8000) != 0) )
  {
    xxxEndMenuLoop(a1, *(_QWORD *)a1);
    xxxMNEndMenuState(a1);
  }
  return v12;
}
