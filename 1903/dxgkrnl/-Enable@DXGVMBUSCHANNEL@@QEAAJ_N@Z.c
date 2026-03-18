/*
 * XREFs of ?Enable@DXGVMBUSCHANNEL@@QEAAJ_N@Z @ 0x1C0290854
 * Callers:
 *     ?EnableVmBusChannel@@YAJPEAVDXGVMBUSCHANNEL@@_N@Z @ 0x1C0290A7C (-EnableVmBusChannel@@YAJPEAVDXGVMBUSCHANNEL@@_N@Z.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006FF4 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007560 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007DEC (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 *     ?Disable@DXGVMBUSCHANNEL@@QEAAXXZ @ 0x1C028E2F8 (-Disable@DXGVMBUSCHANNEL@@QEAAXXZ.c)
 */

__int64 __fastcall DXGVMBUSCHANNEL::Enable(DXGVMBUSCHANNEL *this, char a2)
{
  __int64 v4; // rdi
  __int64 v5; // r8
  struct _KEVENT *v6; // rcx
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  _QWORD *v11; // rax
  char v12; // si
  struct _KEVENT *v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rax
  void *v18; // rcx
  NTSTATUS v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  _QWORD *v22; // rax
  _BYTE v24[24]; // [rsp+30h] [rbp-18h] BYREF
  union _LARGE_INTEGER Timeout; // [rsp+50h] [rbp+8h] BYREF

  LODWORD(v4) = 0;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v24, (DXGVMBUSCHANNEL *)((char *)this + 112), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v24);
  v5 = *((_QWORD *)this + 2);
  if ( v5 )
  {
    if ( !*((_BYTE *)this + 26) && (!*((_BYTE *)this + 24) || *((_BYTE *)this + 25)) )
    {
      v6 = (struct _KEVENT *)*((_QWORD *)this + 4);
      if ( v6 )
      {
        KeClearEvent(v6);
        v5 = *((_QWORD *)this + 2);
      }
      *((_BYTE *)this + 24) = 1;
      *((_BYTE *)this + 26) = 1;
      v7 = ((__int64 (__fastcall *)(__int64))qword_1C00A3C10)(v5);
      v4 = v7;
      if ( v7 < 0 )
      {
        v11 = (_QWORD *)WdLogNewEntry5_WdError(v9, v8, v10);
        v11[3] = v4;
        v11[4] = this;
        v11[5] = *((unsigned __int8 *)this + 24);
        v11[6] = *((unsigned __int8 *)this + 25);
        v11[7] = *((unsigned __int8 *)this + 26);
        WdLogEvent5_WdError(v11);
        *((_BYTE *)this + 24) = 0;
        *((_BYTE *)this + 26) = 0;
      }
      else if ( *((_BYTE *)this + 27) )
      {
        ((void (__fastcall *)(_QWORD))qword_1C00A3CC0)(*((_QWORD *)this + 2));
      }
    }
    v12 = a2 & *((_BYTE *)this + 24);
  }
  else
  {
    v12 = 0;
  }
  if ( v24[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v24);
  if ( v12 )
  {
    v13 = (struct _KEVENT *)*((_QWORD *)this + 4);
    if ( v13 )
    {
      if ( !KeReadStateEvent(v13) )
      {
        v17 = WdLogNewEntry5_WdWarning(v15, v14, v16);
        *(_QWORD *)(v17 + 24) = this;
        WdLogEvent5_WdWarning(v17);
        Timeout.QuadPart = (-(__int64)((_BYTE)KdDebuggerEnabled != 0) & 0xFFFFFFFF56207380uLL) - 150000000;
        v18 = (void *)*((_QWORD *)this + 4);
        *((_QWORD *)this + 5) = KeGetCurrentThread();
        v19 = KeWaitForSingleObject(v18, Executive, 0, 0, &Timeout);
        *((_QWORD *)this + 5) = 0LL;
        v4 = v19;
        if ( v19 )
        {
          v22 = (_QWORD *)WdLogNewEntry5_WdAssertion(v21, v20);
          v22[3] = v4;
          v22[4] = this;
          v22[5] = *((unsigned __int8 *)this + 24);
          v22[6] = *((unsigned __int8 *)this + 25);
          v22[7] = *((unsigned __int8 *)this + 26);
          WdLogEvent5_WdAssertion(v22);
          LODWORD(v4) = -1073741823;
        }
      }
    }
  }
  if ( (int)v4 < 0 )
    DXGVMBUSCHANNEL::Disable(this);
  return (unsigned int)v4;
}
