/*
 * XREFs of _lambda_fe455f6b6173b0bb193a7b901cfd063e_::operator() @ 0x1C0081D6C
 * Callers:
 *     UmfdQueryFontData @ 0x1C0081A80 (UmfdQueryFontData.c)
 * Callees:
 *     ?Create@CEventPoolEntry@CEventPool@@SAQEAV12@XZ @ 0x1C00ED5D4 (-Create@CEventPoolEntry@CEventPool@@SAQEAV12@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C013D370 (_guard_dispatch_icall_nop.c)
 *     ??1?$CAutoDestroy@VCEventPoolEntry@CEventPool@@@@QEAA@XZ @ 0x1C01974E4 (--1-$CAutoDestroy@VCEventPoolEntry@CEventPool@@@@QEAA@XZ.c)
 *     ??1?$CAutoDestroy@VCWaitableWorkItem@CMultipleConsumerWorkQueue@@@@QEAA@XZ @ 0x1C0197500 (--1-$CAutoDestroy@VCWaitableWorkItem@CMultipleConsumerWorkQueue@@@@QEAA@XZ.c)
 *     ?QueueTryResurrectPffApc@UmfdHostLifeTimeManager@@SAX_K@Z @ 0x1C028FFF4 (-QueueTryResurrectPffApc@UmfdHostLifeTimeManager@@SAX_K@Z.c)
 */

__int64 __fastcall lambda_fe455f6b6173b0bb193a7b901cfd063e_::operator()(__int64 **a1)
{
  _DWORD *v2; // rbx
  __int64 *v3; // rsi
  __int64 *v4; // rbp
  __int64 *v5; // r14
  __int64 v6; // rdi
  PSLIST_ENTRY v7; // rax
  _DWORD *v8; // rax
  _DWORD *v9; // rdi
  PSLIST_ENTRY v10; // xmm0_8
  __int64 v11; // rsi
  unsigned __int64 v13; // rax
  PSLIST_ENTRY v14; // [rsp+50h] [rbp+8h] BYREF
  _DWORD *v15; // [rsp+58h] [rbp+10h] BYREF
  PSLIST_ENTRY v16; // [rsp+60h] [rbp+18h]

  v2 = 0LL;
  if ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)*a1[1] + 16LL))(*a1[1])
    || UmfdHostLifeTimeManager::s_UmfdHostResurrectionThread == KeGetCurrentThread() )
  {
    v3 = *a1;
    v4 = a1[1];
    v5 = a1[2];
    v6 = (*a1)[1];
    v7 = ExpInterlockedPopEntrySList((PSLIST_HEADER)(v6 + 16));
    if ( v7 )
    {
      _InterlockedDecrement((volatile signed __int32 *)v6);
    }
    else
    {
      v7 = (PSLIST_ENTRY)CEventPool::CEventPoolEntry::Create();
      if ( !v7 )
      {
        v14 = 0LL;
        goto LABEL_15;
      }
    }
    v14 = v7;
    v16 = v7;
    v8 = EngAllocMem(0, 0x40u, 0x676D6466u);
    v9 = v8;
    if ( v8 )
    {
      v10 = v16;
      v8[6] = 8;
      *((_QWORD *)v8 + 5) = v10;
      v8[7] = 8;
      *((_QWORD *)v8 + 2) = v8 + 14;
      *((_QWORD *)v8 + 7) = *v4;
      v8[2] = 0;
      v11 = *v3;
      v15 = v8;
      if ( !*(_BYTE *)v11 )
      {
        v8[2] = 1;
        ExpInterlockedPushEntrySList((PSLIST_HEADER)(v11 + 16), (PSLIST_ENTRY)v8);
        KeSetEvent(**(PRKEVENT **)(v11 + 8), 1, 0);
        v2 = v9;
LABEL_8:
        *v5 = (__int64)v2;
        return v2 == 0LL ? 0xC0000001 : 0;
      }
    }
    else
    {
      v15 = 0LL;
    }
    CAutoDestroy<CMultipleConsumerWorkQueue::CWaitableWorkItem>::~CAutoDestroy<CMultipleConsumerWorkQueue::CWaitableWorkItem>(&v15);
LABEL_15:
    CAutoDestroy<CEventPool::CEventPoolEntry>::~CAutoDestroy<CEventPool::CEventPoolEntry>(&v14);
    goto LABEL_8;
  }
  v13 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a1[1] + 8LL))(*a1[1]);
  UmfdHostLifeTimeManager::QueueTryResurrectPffApc(v13);
  return 3221225473LL;
}
