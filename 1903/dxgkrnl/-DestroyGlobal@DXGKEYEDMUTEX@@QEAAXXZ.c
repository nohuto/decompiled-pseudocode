/*
 * XREFs of ?DestroyGlobal@DXGKEYEDMUTEX@@QEAAXXZ @ 0x1C0268EC8
 * Callers:
 *     ??1DXGKEYEDMUTEX@@QEAA@XZ @ 0x1C0268358 (--1DXGKEYEDMUTEX@@QEAA@XZ.c)
 * Callees:
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C0006FC4 (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007560 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007DEC (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000C340 (--_V@YAXPEAX@Z.c)
 *     ?FreeHandle@DXGGLOBAL@@QEAAXI@Z @ 0x1C0019390 (-FreeHandle@DXGGLOBAL@@QEAAXI@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01008A0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

void __fastcall DXGKEYEDMUTEX::DestroyGlobal(DXGKEYEDMUTEX *this, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rcx
  _QWORD *v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // rdx
  _BYTE v9[24]; // [rsp+20h] [rbp-18h] BYREF

  if ( *((_QWORD *)this + 3) )
  {
    v3 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v3 + 24) = 3456LL;
    WdLogEvent5_WdAssertion(v3);
  }
  if ( *((DXGKEYEDMUTEX **)this + 10) != (DXGKEYEDMUTEX *)((char *)this + 80) )
  {
    v4 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v4 + 24) = 3457LL;
    WdLogEvent5_WdAssertion(v4);
  }
  if ( *((_DWORD *)this + 8) )
  {
    DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v9);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v9);
    DXGGLOBAL::FreeHandle(*((struct _KTHREAD ***)this + 2), *((unsigned int *)this + 8));
    *((_DWORD *)this + 8) = 0;
    if ( v9[8] )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v9);
  }
  operator delete[](*((void **)this + 17));
  *((_QWORD *)this + 17) = 0LL;
  *((_DWORD *)this + 36) = 0;
  v6 = (_QWORD *)WdLogNewEntry5_WdEvent(v5);
  v6[3] = this;
  v7 = *((unsigned int *)this + 8);
  v6[4] = v7;
  v6[5] = DXGPROCESS::GetCurrent(v7, v8);
  WdLogEvent5_WdEvent(v6);
}
