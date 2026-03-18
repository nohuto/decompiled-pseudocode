/*
 * XREFs of xxxCallHandleMenuMessages @ 0x1C02230F0
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00D0F00 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     xxxMenuWindowProc @ 0x1C0227440 (xxxMenuWindowProc.c)
 *     xxxMNDragOver @ 0x1C0246D1C (xxxMNDragOver.c)
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0021844 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C011022C (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     xxxMNEndMenuState @ 0x1C0210C40 (xxxMNEndMenuState.c)
 *     xxxEndMenuLoop @ 0x1C0220290 (xxxEndMenuLoop.c)
 *     xxxHandleMenuMessages @ 0x1C0220464 (xxxHandleMenuMessages.c)
 *     MNCheckButtonDownState @ 0x1C0222CDC (MNCheckButtonDownState.c)
 */

__int64 __fastcall xxxCallHandleMenuMessages(__int64 a1, __int64 *a2, __int64 a3, __int64 a4, __int64 a5)
{
  int v5; // r10d
  int v8; // esi
  __int64 v10; // rax
  __int64 v11; // rdx
  unsigned int v12; // edi
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  int v16; // edx
  __int64 *v18[2]; // [rsp+20h] [rbp-40h] BYREF
  __int64 v19; // [rsp+30h] [rbp-30h] BYREF
  int v20; // [rsp+38h] [rbp-28h]
  int v21; // [rsp+3Ch] [rbp-24h]
  __int64 v22; // [rsp+40h] [rbp-20h]
  __int64 v23; // [rsp+48h] [rbp-18h]
  __int128 v24; // [rsp+50h] [rbp-10h]

  v5 = *(_DWORD *)(a1 + 8);
  v21 = 0;
  v8 = a3;
  v24 = 0LL;
  if ( (v5 & 0x4008) == 0x4008 )
  {
    MNCheckButtonDownState(a1, (__int64)a2, a3, a4);
    v5 = *(_DWORD *)(a1 + 8);
  }
  if ( a2 )
    v19 = *a2;
  else
    v19 = 0LL;
  v20 = v8;
  v22 = a4;
  v10 = a5;
  if ( (unsigned int)(v8 - 512) <= 0xE )
    v10 = ((unsigned __int16)(*(_WORD *)(a2[5] + 108) + WORD1(a5)) << 16) | (unsigned __int16)(a5
                                                                                             + *(_WORD *)(a2[5] + 104));
  v11 = *(_QWORD *)a1;
  v23 = v10;
  *(_DWORD *)(a1 + 8) = v5 | 0x200;
  SmartObjStackRefBase<tagPOPUPMENU>::Init(v18, v11);
  v12 = xxxHandleMenuMessages((__int64)&v19, a1, v18);
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v18, v13, v14, v15);
  v16 = *(_DWORD *)(a1 + 8);
  *(_DWORD *)(a1 + 8) = v16 & 0xFFFFFDFF;
  if ( v12 && (v16 & 0x100) != 0 && ((v16 & 4) == 0 || (**(_DWORD **)a1 & 0x8000) != 0) )
  {
    xxxEndMenuLoop(a1, *(_QWORD *)a1);
    xxxMNEndMenuState(a1);
  }
  return v12;
}
