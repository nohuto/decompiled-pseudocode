/*
 * XREFs of ?CommitMemoryLimitChangeCallback@ModernResourceManagerProxy@@SGJU_WNF_STATE_NAME@@KPAU_WNF_TYPE_ID@@PAXPBXK@Z @ 0x100086D0
 * Callers:
 *     <none>
 * Callees:
 *     ?OnCommitLimitChangeRoutine@CMemoryManager@System@Windows@@CGX_K0@Z @ 0x10008790 (-OnCommitLimitChangeRoutine@CMemoryManager@System@Windows@@CGX_K0@Z.c)
 *     @_guard_check_icall_nop@4 @ 0x1000CDF0 (@_guard_check_icall_nop@4.c)
 */

int __stdcall ModernResourceManagerProxy::CommitMemoryLimitChangeCallback(
        struct _WNF_STATE_NAME a1,
        unsigned int a2,
        struct _WNF_TYPE_ID *a3,
        _DWORD *a4,
        _DWORD *a5,
        unsigned int a6)
{
  unsigned __int64 v7; // [esp-18h] [ebp-24h]
  unsigned __int64 v8; // [esp-10h] [ebp-1Ch]
  void (__stdcall *v9)(unsigned __int64, unsigned __int64); // [esp+4h] [ebp-8h]
  BOOL v10; // [esp+8h] [ebp-4h]

  if ( a5 )
  {
    RtlAcquireSRWLockExclusive(a4 + 18);
    a4[19] = GetCurrentThreadId();
    v9 = (void (__stdcall *)(unsigned __int64, unsigned __int64))a4[4];
    v10 = a4[14] != a5[2] || a4[15] != a5[3];
    a4[12] = *a5;
    a4[13] = a5[1];
    a4[14] = a5[2];
    a4[15] = a5[3];
    a4[16] = a5[4];
    a4[17] = a5[5];
    a4[19] = 0;
    RtlReleaseSRWLockExclusive(a4 + 18);
    if ( v10 && v9 )
    {
      v8 = *((_QWORD *)a5 + 1);
      v7 = *(_QWORD *)a5;
      if ( v9 == Windows::System::CMemoryManager::OnCommitLimitChangeRoutine )
        Windows::System::CMemoryManager::OnCommitLimitChangeRoutine(v7, v8);
      else
        ((void (__thiscall *)(void (__stdcall *)(unsigned __int64, unsigned __int64), _DWORD, _DWORD, _DWORD, _DWORD))v9)(
          v9,
          v7,
          HIDWORD(v7),
          v8,
          HIDWORD(v8));
    }
  }
  return 0;
}
