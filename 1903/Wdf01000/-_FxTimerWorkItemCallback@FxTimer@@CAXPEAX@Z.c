/*
 * XREFs of ?_FxTimerWorkItemCallback@FxTimer@@CAXPEAX@Z @ 0x1C0003540
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall FxTimer::_FxTimerWorkItemCallback(unsigned __int64 Parameter)
{
  _FX_DRIVER_GLOBALS *v2; // rcx
  void (__fastcall **v3)(unsigned __int64); // rdi
  _QWORD *v4; // r14
  __int64 v5; // rcx
  _QWORD *v6; // rsi
  _WORD *v7; // rbp
  unsigned __int64 v8; // rbx
  __int64 v9; // rdx
  char v10; // [rsp+40h] [rbp+8h] BYREF

  v2 = *(_FX_DRIVER_GLOBALS **)(Parameter + 16);
  if ( v2->FxTrackDriverForMiniDumpLog )
    *(_FX_DRIVER_GLOBALS *volatile *)((char *)&stru_1C00AEE88.m_DriverUsage->FxDriverGlobals
                                    + stru_1C00AEE88.m_EntrySize * HIDWORD(KeGetPcr()[1].LockArray)) = v2;
  v3 = (void (__fastcall **)(unsigned __int64))(Parameter + 312);
  if ( *(_QWORD *)(Parameter + 312) )
  {
    v4 = (_QWORD *)(Parameter + 296);
    v5 = *(_QWORD *)(Parameter + 296);
    v6 = (_QWORD *)(Parameter + 328);
    v7 = (_WORD *)(Parameter + 10);
    *(_QWORD *)(Parameter + 328) = KeGetCurrentThread();
    v8 = Parameter ^ 0xFFFFFFFFFFFFFFF8uLL;
    if ( v5 )
    {
      v10 = 0;
      (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)v5 + 16LL))(v5, &v10);
      if ( !*v7 )
        v8 = 0LL;
      (*v3)(v8);
      LOBYTE(v9) = v10;
      (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v4 + 24LL))(*v4, v9);
    }
    else
    {
      if ( !*v7 )
        v8 = 0LL;
      (*v3)(v8);
    }
    *v6 = 0LL;
  }
}
