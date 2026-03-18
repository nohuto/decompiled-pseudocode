/*
 * XREFs of ??1SESSION_VIEW@@QEAA@XZ @ 0x1C01370B8
 * Callers:
 *     ??_GSESSION_VIEW@@QEAAPEAXI@Z @ 0x1C0019388 (--_GSESSION_VIEW@@QEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall SESSION_VIEW::~SESSION_VIEW(SESSION_VIEW *this)
{
  __int64 v1; // rax

  if ( *((_DWORD *)this + 10) || *((SESSION_VIEW **)this + 6) != (SESSION_VIEW *)((char *)this + 48) )
  {
    v1 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v1 + 24) = 1440LL;
    WdLogEvent5_WdAssertion(v1);
  }
}
