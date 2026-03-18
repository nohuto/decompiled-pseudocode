/*
 * XREFs of ??1DXGADAPTERSYNCOBJECT@@QEAA@XZ @ 0x1C00DDE48
 * Callers:
 *     ??_GDXGADAPTERSYNCOBJECTCA@@QEAAPEAXI@Z @ 0x1C003E0EC (--_GDXGADAPTERSYNCOBJECTCA@@QEAAPEAXI@Z.c)
 *     ?Destroy@DXGSYNCOBJECT@@QEAAXXZ @ 0x1C00DDC2C (-Destroy@DXGSYNCOBJECT@@QEAAXXZ.c)
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E300 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E3CC (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C020E7D4 (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

void __fastcall DXGADAPTERSYNCOBJECT::~DXGADAPTERSYNCOBJECT(DXGADAPTERSYNCOBJECT *this)
{
  DXGADAPTERSYNCOBJECT *v1; // rbx
  __int64 v2; // rdi
  DXGADAPTERSYNCOBJECT *v3; // rdx
  DXGADAPTERSYNCOBJECT **v4; // rax
  __int64 v5; // rax

  v1 = this;
  if ( *((_BYTE *)this + 24) )
  {
    v2 = *((_QWORD *)this + 2);
    DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)(v2 + 152));
    v3 = *(DXGADAPTERSYNCOBJECT **)v1;
    if ( *(DXGADAPTERSYNCOBJECT **)(*(_QWORD *)v1 + 8LL) != v1
      || (v4 = (DXGADAPTERSYNCOBJECT **)*((_QWORD *)v1 + 1), *v4 != v1) )
    {
      __fastfail(3u);
    }
    *v4 = v3;
    *((_QWORD *)v3 + 1) = v4;
    DXGFASTMUTEX::Release((struct _KTHREAD **)(v2 + 152));
    this = *(DXGADAPTERSYNCOBJECT **)(*((_QWORD *)v1 + 2) + 16LL);
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)this + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)this + 2), this);
  }
  if ( *((_QWORD *)v1 + 4) )
  {
    v5 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v5 + 24) = 1522LL;
    WdLogEvent5_WdAssertion(v5);
  }
  *((_QWORD *)v1 + 2) = 0LL;
}
