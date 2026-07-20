/*
 * XREFs of SmpWaitForSubSysStartup @ 0x140004644
 * Callers:
 *     SmpTerminateCSR @ 0x14000105C (SmpTerminateCSR.c)
 *     wmain @ 0x14000320C (wmain.c)
 *     SmpHandleConnectionRequest @ 0x140003DE0 (SmpHandleConnectionRequest.c)
 *     SmpLoadSubSystem @ 0x140012B94 (SmpLoadSubSystem.c)
 * Callees:
 *     SmpLockKnownSubSysList @ 0x140004760 (SmpLockKnownSubSysList.c)
 *     SmpDereferenceKnownSubSys @ 0x1400047A0 (SmpDereferenceKnownSubSys.c)
 *     SmpCheckSubSysStatus @ 0x140004874 (SmpCheckSubSysStatus.c)
 *     SmpWaitForStatusChange @ 0x140013C88 (SmpWaitForStatusChange.c)
 */

_QWORD *__fastcall SmpWaitForSubSysStartup(__int64 a1, char a2, __int64 a3, __int64 a4)
{
  char v4; // bp
  int v6; // ebx
  int v8; // r12d
  _QWORD *result; // rax
  _QWORD *v10; // rsi
  _QWORD *v11; // rdi
  int v12; // ebp
  volatile signed __int32 *v13; // r14
  __int64 v14; // rcx
  _QWORD *v15; // rdi
  _QWORD *v16; // rdx
  _QWORD *v17; // rcx
  _QWORD *v18; // rcx
  volatile signed __int32 v19; // ebx

  v4 = a2;
  v6 = a2 & 2;
  v8 = a1;
  result = (_QWORD *)SmpLockKnownSubSysList(a1, v6 != 0, a4);
  v10 = *(_QWORD **)(a4 + 8);
  if ( v6 )
  {
    while ( (_QWORD *)*v10 == v10 )
      result = (_QWORD *)RtlSleepConditionVariableSRW(&SmpSubSysReadyCondition, v10 + 2, 0LL, 1LL);
  }
  else
  {
LABEL_2:
    for ( result = (_QWORD *)*v10; result != v10; result = (_QWORD *)*result )
    {
      if ( *((_DWORD *)result - 2) == v8 )
      {
        v11 = result - 9;
        if ( result != (_QWORD *)72 )
        {
          v12 = v4 & 1;
          while ( 1 )
          {
            if ( !v12 || (v11[1] & 1) != 0 )
            {
              v13 = (volatile signed __int32 *)(v11 + 1);
              if ( !(unsigned int)SmpCheckSubSysStatus(v11) )
              {
                _InterlockedIncrement((volatile signed __int32 *)v11);
                SmpWaitForStatusChange(v14, 0LL, a4);
                v19 = *v13;
                SmpDereferenceKnownSubSys(v11);
                if ( (v19 & 4) != 0 )
                {
                  v4 = a2;
                  goto LABEL_2;
                }
              }
              v15 = v11 + 9;
              result = (_QWORD *)*v15;
              if ( a3 )
              {
                _InterlockedOr(v13, 4u);
                v16 = (_QWORD *)*v15;
                if ( *(_QWORD **)(*v15 + 8LL) != v15
                  || (v17 = (_QWORD *)v15[1], (_QWORD *)*v17 != v15)
                  || (*v17 = v16, v16[1] = v17, v18 = *(_QWORD **)(a3 + 8), *v18 != a3) )
                {
                  __fastfail(3u);
                }
                *v15 = a3;
                v15[1] = v18;
                *v18 = v15;
                *(_QWORD *)(a3 + 8) = v15;
              }
            }
            else
            {
              result = (_QWORD *)*result;
            }
            if ( result != v10 )
            {
              v11 = result - 9;
              if ( *((_DWORD *)result - 2) == v8 )
                continue;
            }
            return result;
          }
        }
        return result;
      }
    }
  }
  return result;
}
