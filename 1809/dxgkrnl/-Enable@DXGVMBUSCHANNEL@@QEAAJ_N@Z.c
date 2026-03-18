/*
 * XREFs of ?Enable@DXGVMBUSCHANNEL@@QEAAJ_N@Z @ 0x1C025A574
 * Callers:
 *     ?EnableVmBusChannel@@YAJPEAVDXGVMBUSCHANNEL@@_N@Z @ 0x1C025A798 (-EnableVmBusChannel@@YAJPEAVDXGVMBUSCHANNEL@@_N@Z.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000DF84 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000E054 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000E790 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     ?Disable@DXGVMBUSCHANNEL@@QEAAXXZ @ 0x1C0258038 (-Disable@DXGVMBUSCHANNEL@@QEAAXXZ.c)
 */

__int64 __fastcall DXGVMBUSCHANNEL::Enable(DXGVMBUSCHANNEL *this, char a2)
{
  __int64 v4; // rdi
  __int64 v5; // r8
  struct _KEVENT *v6; // rcx
  int v7; // eax
  __int64 v8; // rcx
  _QWORD *v9; // rax
  char v10; // si
  struct _KEVENT *v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rax
  void *v16; // rcx
  NTSTATUS v17; // eax
  __int64 v18; // rcx
  _QWORD *v19; // rax
  _BYTE v21[24]; // [rsp+30h] [rbp-18h] BYREF
  union _LARGE_INTEGER Timeout; // [rsp+50h] [rbp+8h] BYREF

  LODWORD(v4) = 0;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v21, (DXGVMBUSCHANNEL *)((char *)this + 112), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v21);
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
      v7 = ((__int64 (__fastcall *)(__int64))qword_1C008FC00)(v5);
      v4 = v7;
      if ( v7 < 0 )
      {
        v9 = (_QWORD *)WdLogNewEntry5_WdError(v8);
        v9[3] = v4;
        v9[4] = this;
        v9[5] = *((unsigned __int8 *)this + 24);
        v9[6] = *((unsigned __int8 *)this + 25);
        v9[7] = *((unsigned __int8 *)this + 26);
        WdLogEvent5_WdError(v9);
        *((_BYTE *)this + 24) = 0;
        *((_BYTE *)this + 26) = 0;
      }
      else if ( *((_BYTE *)this + 27) )
      {
        ((void (__fastcall *)(_QWORD))qword_1C008FCB0)(*((_QWORD *)this + 2));
      }
    }
    v10 = a2 & *((_BYTE *)this + 24);
  }
  else
  {
    v10 = 0;
  }
  if ( v21[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v21);
  if ( v10 )
  {
    v11 = (struct _KEVENT *)*((_QWORD *)this + 4);
    if ( v11 )
    {
      if ( !KeReadStateEvent(v11) )
      {
        v15 = WdLogNewEntry5_WdWarning(v13, v12, v14);
        *(_QWORD *)(v15 + 24) = this;
        WdLogEvent5_WdWarning(v15);
        Timeout.QuadPart = (-(__int64)((_BYTE)KdDebuggerEnabled != 0) & 0xFFFFFFFF56207380uLL) - 150000000;
        v16 = (void *)*((_QWORD *)this + 4);
        *((_QWORD *)this + 5) = KeGetCurrentThread();
        v17 = KeWaitForSingleObject(v16, Executive, 0, 0, &Timeout);
        *((_QWORD *)this + 5) = 0LL;
        v4 = v17;
        if ( v17 )
        {
          v19 = (_QWORD *)WdLogNewEntry5_WdAssertion(v18);
          v19[3] = v4;
          v19[4] = this;
          v19[5] = *((unsigned __int8 *)this + 24);
          v19[6] = *((unsigned __int8 *)this + 25);
          v19[7] = *((unsigned __int8 *)this + 26);
          WdLogEvent5_WdAssertion(v19);
          LODWORD(v4) = -1073741823;
        }
      }
    }
  }
  if ( (int)v4 < 0 )
    DXGVMBUSCHANNEL::Disable(this);
  return (unsigned int)v4;
}
