/*
 * XREFs of ?SetHitTestResult@CPTPProcessor@@AEAAXPEAUCPointerInputFrame@@_N@Z @ 0x1C0179A8C
 * Callers:
 *     ?OnEngineOutput@CPTPProcessor@@UEAAXPEBUPTPEngineOutput@@@Z @ 0x1C0178E10 (-OnEngineOutput@CPTPProcessor@@UEAAXPEBUPTPEngineOutput@@@Z.c)
 * Callees:
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C002FF2C (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x1C00304C0 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     ?TestWindowFlag@CInputDest@@QEBA_NK@Z @ 0x1C004C148 (-TestWindowFlag@CInputDest@@QEBA_NK@Z.c)
 *     ??4CInputDest@@QEAAAEAV0@AEBV0@@Z @ 0x1C004EF64 (--4CInputDest@@QEAAAEAV0@AEBV0@@Z.c)
 *     __security_check_cookie @ 0x1C00B7F30 (__security_check_cookie.c)
 *     ?Set@CHitTestState@@QEAAXAEBVCInputDest@@_NI@Z @ 0x1C0179A18 (-Set@CHitTestState@@QEAAXAEBVCInputDest@@_NI@Z.c)
 *     ApiSetEditionSpeedHitTest @ 0x1C019C238 (ApiSetEditionSpeedHitTest.c)
 *     ApiSetGetPTPShellTarget @ 0x1C019D024 (ApiSetGetPTPShellTarget.c)
 */

void __fastcall CPTPProcessor::SetHitTestResult(CPTPProcessor *this, struct CPointerInputFrame *a2, __int64 a3)
{
  unsigned int v3; // ebx
  CHitTestState *v4; // rdi
  __int64 PTPShellTarget; // rax
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int64 v14; // r8
  __int64 v15; // rdx
  int v16; // edx
  int v17; // r8d
  __int64 v18; // rax
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __int64 v25; // rdx
  __int64 v26; // r8
  _DWORD *v27; // rsi
  __int128 v28; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v29; // [rsp+60h] [rbp-A0h]
  __int128 v30; // [rsp+70h] [rbp-90h]
  __int128 v31; // [rsp+80h] [rbp-80h]
  __int128 v32; // [rsp+90h] [rbp-70h]
  __int128 v33; // [rsp+A0h] [rbp-60h]
  __int128 v34; // [rsp+B0h] [rbp-50h]
  __int64 v35; // [rsp+C0h] [rbp-40h]
  _BYTE v36[128]; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v37[4]; // [rsp+150h] [rbp+50h] BYREF
  int v38; // [rsp+154h] [rbp+54h]

  v3 = 0;
  v4 = (CPTPProcessor *)((char *)this + 424);
  if ( (_BYTE)a3 )
  {
    PTPShellTarget = ApiSetGetPTPShellTarget(v36);
    v8 = *(_OWORD *)(PTPShellTarget + 16);
    v28 = *(_OWORD *)PTPShellTarget;
    v9 = *(_OWORD *)(PTPShellTarget + 32);
    v29 = v8;
    v10 = *(_OWORD *)(PTPShellTarget + 48);
    v30 = v9;
    v11 = *(_OWORD *)(PTPShellTarget + 64);
    v31 = v10;
    v12 = *(_OWORD *)(PTPShellTarget + 80);
    v32 = v11;
    v13 = *(_OWORD *)(PTPShellTarget + 96);
    v33 = v12;
    *(_QWORD *)&v12 = *(_QWORD *)(PTPShellTarget + 112);
    v34 = v13;
    v35 = v12;
    CInputDest::CInputDest((CInputDest *)v37, (const struct tagINPUTDEST *)&v28);
    v14 = 0LL;
LABEL_7:
    CHitTestState::Set(v4, (const struct CInputDest *)v37, v14, 0);
    CInputDest::SetEmpty((CInputDest *)v37, v25, v26);
    goto LABEL_8;
  }
  if ( *(_DWORD *)v4
    && (CInputDest::TestWindowFlag((CPTPProcessor *)((char *)this + 424), 1152) || CInputDest::TestWindowFlag(v4, 896)) )
  {
    CInputDest::SetEmpty(v4, v15, a3);
    v18 = ApiSetEditionSpeedHitTest((unsigned int)v36, v16, v17, *((_QWORD *)this + 70), (__int64)this + 568);
    v19 = *(_OWORD *)(v18 + 16);
    v28 = *(_OWORD *)v18;
    v20 = *(_OWORD *)(v18 + 32);
    v29 = v19;
    v21 = *(_OWORD *)(v18 + 48);
    v30 = v20;
    v22 = *(_OWORD *)(v18 + 64);
    v31 = v21;
    v23 = *(_OWORD *)(v18 + 80);
    v32 = v22;
    v24 = *(_OWORD *)(v18 + 96);
    v33 = v23;
    *(_QWORD *)&v23 = *(_QWORD *)(v18 + 112);
    v34 = v24;
    v35 = v23;
    CInputDest::CInputDest((CInputDest *)v37, (const struct tagINPUTDEST *)&v28);
    LOBYTE(v14) = (unsigned int)(v38 - 2) <= 1;
    goto LABEL_7;
  }
LABEL_8:
  if ( *((_DWORD *)a2 + 12) )
  {
    v27 = (_DWORD *)(*((_QWORD *)a2 + 16) + 356LL);
    do
    {
      CInputDest::operator=((__int64)(v27 - 83), (__int64)v4, a3);
      ++v3;
      *v27 = *((_DWORD *)this + 138);
      v27 += 124;
    }
    while ( v3 < *((_DWORD *)a2 + 12) );
  }
}
