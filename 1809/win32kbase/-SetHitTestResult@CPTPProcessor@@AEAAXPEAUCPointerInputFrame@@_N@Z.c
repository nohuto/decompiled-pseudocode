/*
 * XREFs of ?SetHitTestResult@CPTPProcessor@@AEAAXPEAUCPointerInputFrame@@_N@Z @ 0x1C014BBC4
 * Callers:
 *     ?OnEngineOutput@CPTPProcessor@@UEAAXPEBUPTPEngineOutput@@@Z @ 0x1C014B060 (-OnEngineOutput@CPTPProcessor@@UEAAXPEBUPTPEngineOutput@@@Z.c)
 * Callees:
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C002FD00 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x1C0031750 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     ?TestWindowFlag@CInputDest@@QEBA_NK@Z @ 0x1C006F410 (-TestWindowFlag@CInputDest@@QEBA_NK@Z.c)
 *     ??4CInputDest@@QEAAAEAV0@AEBV0@@Z @ 0x1C00701D8 (--4CInputDest@@QEAAAEAV0@AEBV0@@Z.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     ?Set@CHitTestState@@QEAAXAEBVCInputDest@@_NI@Z @ 0x1C014BB50 (-Set@CHitTestState@@QEAAXAEBVCInputDest@@_NI@Z.c)
 *     ApiSetEditionSpeedHitTest @ 0x1C0163820 (ApiSetEditionSpeedHitTest.c)
 *     ApiSetGetPTPShellTarget @ 0x1C0163F28 (ApiSetGetPTPShellTarget.c)
 */

void __fastcall CPTPProcessor::SetHitTestResult(CPTPProcessor *this, struct CPointerInputFrame *a2, char a3)
{
  unsigned int v3; // ebx
  CHitTestState *v4; // rdi
  __int128 *PTPShellTarget; // rax
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  int v17; // edx
  int v18; // r8d
  __int128 *v19; // rax
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  __int128 v27; // xmm0
  __int128 v28; // xmm1
  _DWORD *v29; // rsi
  __int128 v30; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v31; // [rsp+70h] [rbp-90h]
  __int128 v32; // [rsp+80h] [rbp-80h]
  __int128 v33; // [rsp+90h] [rbp-70h]
  __int128 v34; // [rsp+A0h] [rbp-60h]
  __int128 v35; // [rsp+B0h] [rbp-50h]
  __int128 v36; // [rsp+C0h] [rbp-40h]
  __int128 v37; // [rsp+D0h] [rbp-30h]
  __int128 v38; // [rsp+E0h] [rbp-20h]
  __int128 v39; // [rsp+F0h] [rbp-10h]
  __int128 v40; // [rsp+100h] [rbp+0h]
  _BYTE v41[176]; // [rsp+110h] [rbp+10h] BYREF
  _BYTE v42[192]; // [rsp+1C0h] [rbp+C0h] BYREF

  v3 = 0;
  v4 = (CPTPProcessor *)((char *)this + 344);
  if ( a3 )
  {
    PTPShellTarget = (__int128 *)ApiSetGetPTPShellTarget(v41);
    v8 = PTPShellTarget[1];
    v30 = *PTPShellTarget;
    v9 = PTPShellTarget[2];
    v31 = v8;
    v10 = PTPShellTarget[3];
    v32 = v9;
    v11 = PTPShellTarget[4];
    v33 = v10;
    v12 = PTPShellTarget[5];
    v34 = v11;
    v13 = PTPShellTarget[6];
    v35 = v12;
    v14 = PTPShellTarget[8];
    v36 = v13;
    v37 = PTPShellTarget[7];
    v15 = PTPShellTarget[9];
    v38 = v14;
    v16 = PTPShellTarget[10];
    v39 = v15;
    v40 = v16;
    CInputDest::CInputDest((CInputDest *)v42, (const struct tagINPUTDEST *)&v30);
LABEL_7:
    CHitTestState::Set(v4, (const struct CInputDest *)v42, 0, 0);
    CInputDest::SetEmpty((CInputDest *)v42);
    goto LABEL_8;
  }
  if ( *(_DWORD *)v4
    && (CInputDest::TestWindowFlag((CPTPProcessor *)((char *)this + 344), 1152) || CInputDest::TestWindowFlag(v4, 896)) )
  {
    CInputDest::SetEmpty(v4);
    v19 = (__int128 *)ApiSetEditionSpeedHitTest(
                        (unsigned int)v41,
                        v17,
                        v18,
                        *((_QWORD *)this + 67),
                        (__int64)this + 544);
    v20 = v19[1];
    v30 = *v19;
    v21 = v19[2];
    v31 = v20;
    v22 = v19[3];
    v32 = v21;
    v23 = v19[4];
    v33 = v22;
    v24 = v19[5];
    v34 = v23;
    v25 = v19[6];
    v35 = v24;
    v26 = v19[8];
    v36 = v25;
    v37 = v19[7];
    v27 = v19[9];
    v38 = v26;
    v28 = v19[10];
    v39 = v27;
    v40 = v28;
    CInputDest::CInputDest((CInputDest *)v42, (const struct tagINPUTDEST *)&v30);
    goto LABEL_7;
  }
LABEL_8:
  if ( *((_DWORD *)a2 + 12) )
  {
    v29 = (_DWORD *)(*((_QWORD *)a2 + 13) + 388LL);
    do
    {
      CInputDest::operator=((__int64)(v29 - 91), (__int64)v4);
      ++v3;
      *v29 = *((_DWORD *)this + 132);
      v29 += 144;
    }
    while ( v3 < *((_DWORD *)a2 + 12) );
  }
}
