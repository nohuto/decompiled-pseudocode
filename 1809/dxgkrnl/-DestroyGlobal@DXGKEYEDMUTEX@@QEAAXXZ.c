/*
 * XREFs of ?DestroyGlobal@DXGKEYEDMUTEX@@QEAAXXZ @ 0x1C02346A8
 * Callers:
 *     ??1DXGKEYEDMUTEX@@QEAA@XZ @ 0x1C0233E28 (--1DXGKEYEDMUTEX@@QEAA@XZ.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000DF84 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000E054 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C000E760 (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ?FreeHandle@DXGGLOBAL@@QEAAXI@Z @ 0x1C0011834 (-FreeHandle@DXGGLOBAL@@QEAAXI@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0011F20 (--_V@YAXPEAX@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

void __fastcall DXGKEYEDMUTEX::DestroyGlobal(DXGKEYEDMUTEX *this)
{
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  _QWORD *v6; // rbx
  _BYTE v7[24]; // [rsp+20h] [rbp-18h] BYREF

  if ( *((_QWORD *)this + 3) )
  {
    v2 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v2 + 24) = 3470LL;
    WdLogEvent5_WdAssertion(v2);
  }
  if ( *((DXGKEYEDMUTEX **)this + 10) != (DXGKEYEDMUTEX *)((char *)this + 80) )
  {
    v3 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v3 + 24) = 3471LL;
    WdLogEvent5_WdAssertion(v3);
  }
  if ( *((_DWORD *)this + 8) )
  {
    DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v7);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v7);
    DXGGLOBAL::FreeHandle(*((struct _KTHREAD ***)this + 2), *((_DWORD *)this + 8));
    *((_DWORD *)this + 8) = 0;
    if ( v7[8] )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v7);
  }
  operator delete[](*((void **)this + 17));
  *((_QWORD *)this + 17) = 0LL;
  *((_DWORD *)this + 36) = 0;
  v6 = (_QWORD *)WdLogNewEntry5_WdEvent(v5, v4);
  v6[3] = this;
  v6[4] = *((unsigned int *)this + 8);
  v6[5] = DXGPROCESS::GetCurrent();
  WdLogEvent5_WdEvent(v6);
}
