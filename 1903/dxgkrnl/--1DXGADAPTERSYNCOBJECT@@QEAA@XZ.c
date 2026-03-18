/*
 * XREFs of ??1DXGADAPTERSYNCOBJECT@@QEAA@XZ @ 0x1C00F5894
 * Callers:
 *     ??_GDXGADAPTERSYNCOBJECTCA@@QEAAPEAXI@Z @ 0x1C0044BAC (--_GDXGADAPTERSYNCOBJECTCA@@QEAAPEAXI@Z.c)
 *     ?Destroy@DXGSYNCOBJECT@@QEAAXXZ @ 0x1C00F5454 (-Destroy@DXGSYNCOBJECT@@QEAAXXZ.c)
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0008690 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000874C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C0241BC8 (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

void __fastcall DXGADAPTERSYNCOBJECT::~DXGADAPTERSYNCOBJECT(DXGADAPTERSYNCOBJECT *this, __int64 a2)
{
  DXGADAPTERSYNCOBJECT *v2; // rbx
  __int64 v3; // rdi
  DXGADAPTERSYNCOBJECT *v4; // rdx
  DXGADAPTERSYNCOBJECT **v5; // rax
  __int64 v6; // rax

  v2 = this;
  if ( *((_BYTE *)this + 24) )
  {
    v3 = *((_QWORD *)this + 2);
    DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)(v3 + 152));
    v4 = *(DXGADAPTERSYNCOBJECT **)v2;
    if ( *(DXGADAPTERSYNCOBJECT **)(*(_QWORD *)v2 + 8LL) != v2
      || (v5 = (DXGADAPTERSYNCOBJECT **)*((_QWORD *)v2 + 1), *v5 != v2) )
    {
      __fastfail(3u);
    }
    *v5 = v4;
    *((_QWORD *)v4 + 1) = v5;
    DXGFASTMUTEX::Release((struct _KTHREAD **)(v3 + 152));
    this = *(DXGADAPTERSYNCOBJECT **)(*((_QWORD *)v2 + 2) + 16LL);
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)this + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)this + 2), this);
  }
  if ( *((_QWORD *)v2 + 4) )
  {
    v6 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v6 + 24) = 1519LL;
    WdLogEvent5_WdAssertion(v6);
  }
  *((_QWORD *)v2 + 2) = 0LL;
}
