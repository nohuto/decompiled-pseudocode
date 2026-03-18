/*
 * XREFs of ?Lock@CWin32kLocks@@QEAAJPEAUHWND__@@HHH@Z @ 0x1C001B390
 * Callers:
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C0107E40 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 *     ?HandleVistaBltStub@DXGCONTEXT@@QEAAJ_KHPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@IPEAIPEAPEAV1@@Z @ 0x1C0224A24 (-HandleVistaBltStub@DXGCONTEXT@@QEAAJ_KHPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@.c)
 * Callees:
 *     ?Unlock@CWin32kLocks@@QEAAXXZ @ 0x1C0021BC4 (-Unlock@CWin32kLocks@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWin32kLocks::Lock(CWin32kLocks *this, HWND a2, int a3, int a4, int a5)
{
  __int64 v6; // rcx
  unsigned int v7; // edi
  unsigned __int64 v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rsi
  __int64 v16; // rbp
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax

  v6 = *((_QWORD *)this + 7);
  v7 = 0;
  if ( KeGetCurrentThread() == *(struct _KTHREAD **)(v6 + 160)
    || ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v6 + 144)) )
  {
    v20 = WdLogNewEntry5_WdAssertion(v6);
    *(_QWORD *)(v20 + 24) = 591LL;
    WdLogEvent5_WdAssertion(v20);
  }
  if ( *(_QWORD *)this || (v11 = (unsigned __int64)this + 8, *((_QWORD *)this + 1)) || *((_QWORD *)this + 2) )
  {
    v21 = WdLogNewEntry5_WdAssertion(v6);
    *(_QWORD *)(v21 + 24) = 593LL;
    WdLogEvent5_WdAssertion(v21);
    v11 = (unsigned __int64)this + 8;
  }
  v12 = (*(__int64 (__fastcall **)(HWND, unsigned __int64))(*((_QWORD *)this + 3) + 48LL))(
          a2,
          v11 & -(__int64)(a5 != 0));
  *(_QWORD *)this = v12;
  v13 = v12;
  if ( v12 )
  {
    if ( a5 && !*(_QWORD *)v11 )
    {
      v22 = WdLogNewEntry5_WdAssertion(v12);
      *(_QWORD *)(v22 + 24) = 599LL;
      WdLogEvent5_WdAssertion(v22);
      v13 = *(_QWORD *)this;
    }
    (*(void (__fastcall **)(__int64, __int64))(*((_QWORD *)this + 3) + 296LL))(v13, 1LL);
    v15 = *((_QWORD *)this + 7);
    v16 = *(_QWORD *)this;
    *((_QWORD *)this + 4) = *((_QWORD *)this + 3);
    *((_QWORD *)this + 5) = 0LL;
    *((_DWORD *)this + 12) = a3;
    if ( *((_DWORD *)this + 13) )
    {
      v23 = WdLogNewEntry5_WdAssertion(v14);
      *(_QWORD *)(v23 + 24) = 489LL;
      WdLogEvent5_WdAssertion(v23);
    }
    if ( v16 )
    {
      if ( v15 )
      {
        v17 = *((_QWORD *)this + 4);
        *((_QWORD *)this + 5) = v15;
        (*(void (__fastcall **)(__int64))(v17 + 264))(v16);
        if ( a4 )
        {
          (*(void (__fastcall **)(_QWORD, bool))(*((_QWORD *)this + 4) + 280LL))(
            *((_QWORD *)this + 5),
            *((_DWORD *)this + 12) == 0);
          *((_DWORD *)this + 13) = 1;
        }
      }
    }
    v18 = (*(__int64 (__fastcall **)(_QWORD))(*((_QWORD *)this + 3) + 16LL))(*(_QWORD *)this);
    *((_QWORD *)this + 2) = v18;
    if ( !v18 )
    {
      v24 = WdLogNewEntry5_WdEvent();
      *(_QWORD *)(v24 + 24) = *(_QWORD *)this;
      WdLogEvent5_WdEvent(v24);
      CWin32kLocks::Unlock(this);
      return (unsigned int)-1073741811;
    }
  }
  else
  {
    v7 = -1071775731;
    v25 = WdLogNewEntry5_WdEvent();
    *(_QWORD *)(v25 + 24) = a2;
    WdLogEvent5_WdEvent(v25);
  }
  return v7;
}
