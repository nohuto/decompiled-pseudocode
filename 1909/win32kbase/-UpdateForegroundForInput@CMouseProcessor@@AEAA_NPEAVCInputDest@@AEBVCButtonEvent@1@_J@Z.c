/*
 * XREFs of ?UpdateForegroundForInput@CMouseProcessor@@AEAA_NPEAVCInputDest@@AEBVCButtonEvent@1@_J@Z @ 0x1C004E434
 * Callers:
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x1C004B908 (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 * Callees:
 *     ApiSetEditionChangeForegroundQueueForMouseInput @ 0x1C0005460 (ApiSetEditionChangeForegroundQueueForMouseInput.c)
 *     ?DoesBelongToForeground@CInputDest@@QEBA_NW4ForegroundCheck@1@@Z @ 0x1C003817C (-DoesBelongToForeground@CInputDest@@QEBA_NW4ForegroundCheck@1@@Z.c)
 *     ??1CThreadLockInputDest@@QEAA@XZ @ 0x1C004C06C (--1CThreadLockInputDest@@QEAA@XZ.c)
 *     ??0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z @ 0x1C004C184 (--0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z.c)
 *     ApiSetEditionPostEventMessage @ 0x1C0080170 (ApiSetEditionPostEventMessage.c)
 *     _anonymous_namespace_::ValidateUIPI @ 0x1C00A06C0 (_anonymous_namespace_--ValidateUIPI.c)
 */

bool __fastcall CMouseProcessor::UpdateForegroundForInput(
        CMouseProcessor *this,
        struct CInputDest *a2,
        const struct CMouseProcessor::CButtonEvent *a3,
        __int64 a4)
{
  bool v5; // di
  __int64 v7; // r8
  __int64 v9; // rcx
  __int64 v10; // rcx
  int v11; // ebx
  __int64 *v12; // rdx
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int64 v19; // rcx
  _OWORD v20[7]; // [rsp+38h] [rbp-39h] BYREF
  __int64 v21; // [rsp+A8h] [rbp+37h]
  __int64 v22; // [rsp+F0h] [rbp+7Fh] BYREF

  v22 = a4;
  v5 = 1;
  if ( !CInputDest::DoesBelongToForeground((__int64)a2, 1) )
  {
    if ( *((_DWORD *)a3 + 8) == 1 )
    {
      if ( gpqForeground
        && (*((_DWORD *)a2 + 23) != 2 ? (v9 = 0LL) : (v9 = *((_QWORD *)a2 + 10)),
            v9 && grpdeskRitInput && v9 == *(_QWORD *)(*((_QWORD *)grpdeskRitInput + 1) + 24LL)) )
      {
        v13 = *((_OWORD *)a2 + 1);
        v20[0] = *(_OWORD *)a2;
        v14 = *((_OWORD *)a2 + 2);
        v20[1] = v13;
        v15 = *((_OWORD *)a2 + 3);
        v20[2] = v14;
        v16 = *((_OWORD *)a2 + 4);
        v20[3] = v15;
        v17 = *((_OWORD *)a2 + 5);
        v20[4] = v16;
        v18 = *((_OWORD *)a2 + 6);
        v20[5] = v17;
        *(_QWORD *)&v17 = *((_QWORD *)a2 + 14);
        v20[6] = v18;
        v21 = v17;
        ApiSetEditionPostEventMessage((unsigned int)v20, 2, 0, 0, 0LL);
      }
      else
      {
        v10 = *((_QWORD *)a3 + 1);
        v22 = *(_QWORD *)(v10 + 124);
        v11 = *(_DWORD *)(v10 + 100);
        CThreadLockInputDest::CThreadLockInputDest((CThreadLockInputDest *)v20, a2, v7);
        v12 = &v22;
        if ( v11 == 1 )
          v12 = 0LL;
        v5 = (unsigned int)ApiSetEditionChangeForegroundQueueForMouseInput((__int64)a2, (__int64)v12) != 0;
        CThreadLockInputDest::~CThreadLockInputDest((CThreadLockInputDest *)v20);
      }
    }
    else
    {
      v19 = *((_QWORD *)a3 + 1);
      if ( *(_DWORD *)(v19 + 100) != 1 )
        return (unsigned __int8)anonymous_namespace_::ValidateUIPI(*(_QWORD *)(v19 + 124), a2) != 0;
    }
  }
  return v5;
}
