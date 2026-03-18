/*
 * XREFs of ?DestroyKeyedMutex@DXGGLOBAL@@QEAAXPEAVDXGKEYEDMUTEX@@@Z @ 0x1C0269728
 * Callers:
 *     ?ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ @ 0x1C0043364 (-ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ.c)
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00088C0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000897C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??_GDXGKEYEDMUTEX@@QEAAPEAXI@Z @ 0x1C0044D40 (--_GDXGKEYEDMUTEX@@QEAAPEAXI@Z.c)
 */

void __fastcall DXGGLOBAL::DestroyKeyedMutex(struct _KTHREAD **this, struct DXGKEYEDMUTEX ***a2)
{
  __int64 v4; // rax
  struct DXGKEYEDMUTEX **v5; // rdx
  struct DXGKEYEDMUTEX **v6; // rax

  if ( !a2 )
  {
    v4 = WdLogNewEntry5_WdAssertion(this, 0LL);
    *(_QWORD *)(v4 + 24) = 4403LL;
    WdLogEvent5_WdAssertion(v4);
  }
  DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)(this + 44));
  v5 = *a2;
  if ( (*a2)[1] != (struct DXGKEYEDMUTEX *)a2 || (v6 = a2[1], *v6 != (struct DXGKEYEDMUTEX *)a2) )
    __fastfail(3u);
  *v6 = (struct DXGKEYEDMUTEX *)v5;
  v5[1] = (struct DXGKEYEDMUTEX *)v6;
  DXGFASTMUTEX::Release(this + 44);
  DXGKEYEDMUTEX::`scalar deleting destructor'((DXGKEYEDMUTEX *)a2);
}
