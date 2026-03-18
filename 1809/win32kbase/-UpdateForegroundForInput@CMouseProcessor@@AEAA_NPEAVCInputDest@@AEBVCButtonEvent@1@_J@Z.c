/*
 * XREFs of ?UpdateForegroundForInput@CMouseProcessor@@AEAA_NPEAVCInputDest@@AEBVCButtonEvent@1@_J@Z @ 0x1C006F7E4
 * Callers:
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x1C006EB98 (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 * Callees:
 *     ?DoesBelongToForeground@CInputDest@@QEBA_NW4ForegroundCheck@1@@Z @ 0x1C002F178 (-DoesBelongToForeground@CInputDest@@QEBA_NW4ForegroundCheck@1@@Z.c)
 *     ??1CThreadLockInputDest@@QEAA@XZ @ 0x1C006F344 (--1CThreadLockInputDest@@QEAA@XZ.c)
 *     ??0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z @ 0x1C006F44C (--0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z.c)
 *     ?GetUserWindow@CInputDest@@QEBAPEAUtagWND@@XZ @ 0x1C0087958 (-GetUserWindow@CInputDest@@QEBAPEAUtagWND@@XZ.c)
 *     ApiSetEditionPostEventMessage @ 0x1C008893C (ApiSetEditionPostEventMessage.c)
 *     _anonymous_namespace_::ValidateUIPI @ 0x1C0089FDC (_anonymous_namespace_--ValidateUIPI.c)
 *     ApiSetEditionChangeForegroundQueueForMouseInput @ 0x1C009511C (ApiSetEditionChangeForegroundQueueForMouseInput.c)
 */

bool __fastcall CMouseProcessor::UpdateForegroundForInput(
        CMouseProcessor *this,
        struct CInputDest *a2,
        const struct CMouseProcessor::CButtonEvent *a3,
        __int64 a4)
{
  bool v6; // di
  __int64 v8; // r8
  struct tagWND *UserWindow; // rcx
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int64 v19; // rcx
  int v20; // ebx
  __int64 *v21; // rdx
  _BYTE v23[64]; // [rsp+30h] [rbp-108h] BYREF
  _OWORD v24[11]; // [rsp+70h] [rbp-C8h] BYREF
  __int64 v25; // [rsp+158h] [rbp+20h] BYREF

  v25 = a4;
  v6 = 1;
  if ( !CInputDest::DoesBelongToForeground((__int64)a2, 1) )
  {
    if ( *((_DWORD *)a3 + 4) == 1 )
    {
      if ( gpqForeground
        && (UserWindow = CInputDest::GetUserWindow(a2)) != 0LL
        && grpdeskRitInput
        && UserWindow == *(struct tagWND **)(*((_QWORD *)grpdeskRitInput + 1) + 24LL) )
      {
        v10 = *((_OWORD *)a2 + 1);
        v24[0] = *(_OWORD *)a2;
        v11 = *((_OWORD *)a2 + 2);
        v24[1] = v10;
        v12 = *((_OWORD *)a2 + 3);
        v24[2] = v11;
        v13 = *((_OWORD *)a2 + 4);
        v24[3] = v12;
        v14 = *((_OWORD *)a2 + 5);
        v24[4] = v13;
        v15 = *((_OWORD *)a2 + 6);
        v24[5] = v14;
        v16 = *((_OWORD *)a2 + 8);
        v24[6] = v15;
        v24[7] = *((_OWORD *)a2 + 7);
        v17 = *((_OWORD *)a2 + 9);
        v24[8] = v16;
        v18 = *((_OWORD *)a2 + 10);
        v24[9] = v17;
        v24[10] = v18;
        ApiSetEditionPostEventMessage((unsigned int)v24, 2, 0, 0, 0LL);
      }
      else
      {
        v19 = *(_QWORD *)a3;
        v25 = *(_QWORD *)(*(_QWORD *)a3 + 108LL);
        v20 = *(_DWORD *)(v19 + 84);
        CThreadLockInputDest::CThreadLockInputDest((CThreadLockInputDest *)v23, a2, v8);
        v21 = &v25;
        if ( v20 == 1 )
          v21 = 0LL;
        v6 = (unsigned int)ApiSetEditionChangeForegroundQueueForMouseInput(a2, v21) != 0;
        CThreadLockInputDest::~CThreadLockInputDest((CThreadLockInputDest *)v23);
      }
    }
    else if ( *(_DWORD *)(*(_QWORD *)a3 + 84LL) != 1 )
    {
      return (unsigned __int8)anonymous_namespace_::ValidateUIPI(
                                *(_QWORD *)(*(_QWORD *)a3 + 108LL),
                                a2,
                                (char *)this + 8) != 0;
    }
  }
  return v6;
}
