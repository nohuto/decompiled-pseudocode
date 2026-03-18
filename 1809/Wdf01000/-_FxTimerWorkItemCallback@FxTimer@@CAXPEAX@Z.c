/*
 * XREFs of ?_FxTimerWorkItemCallback@FxTimer@@CAXPEAX@Z @ 0x1C00046F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall FxTimer::_FxTimerWorkItemCallback(unsigned __int64 Parameter)
{
  _FX_DRIVER_GLOBALS *v1; // rdx
  void (__fastcall **v3)(unsigned __int64); // rdi
  _QWORD *v4; // rsi
  _WORD *v5; // r14
  _QWORD *v6; // r15
  __int64 v7; // rcx
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // rbx
  unsigned __int8 v10; // [rsp+40h] [rbp+8h] BYREF

  v1 = *(_FX_DRIVER_GLOBALS **)(Parameter + 16);
  if ( v1->FxTrackDriverForMiniDumpLog )
    *(_FX_DRIVER_GLOBALS *volatile *)((char *)&stru_1C00ABE58.m_DriverUsage->FxDriverGlobals
                                    + stru_1C00ABE58.m_EntrySize * HIDWORD(KeGetPcr()[1].LockArray)) = v1;
  v3 = (void (__fastcall **)(unsigned __int64))(Parameter + 312);
  if ( *(_QWORD *)(Parameter + 312) )
  {
    v4 = (_QWORD *)(Parameter + 328);
    v5 = (_WORD *)(Parameter + 10);
    v6 = (_QWORD *)(Parameter + 296);
    v7 = *(_QWORD *)(Parameter + 296);
    *(_QWORD *)(Parameter + 328) = KeGetCurrentThread();
    if ( v7 )
    {
      v10 = 0;
      (*(void (__fastcall **)(__int64, unsigned __int8 *))(*(_QWORD *)v7 + 16LL))(v7, &v10);
      v9 = Parameter ^ 0xFFFFFFFFFFFFFFF8uLL;
      if ( !*v5 )
        v9 = 0LL;
      (*v3)(v9);
      (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*v6 + 24LL))(*v6, v10);
    }
    else
    {
      if ( *v5 )
        v8 = Parameter ^ 0xFFFFFFFFFFFFFFF8uLL;
      else
        v8 = 0LL;
      (*v3)(v8);
    }
    *v4 = 0LL;
  }
}
