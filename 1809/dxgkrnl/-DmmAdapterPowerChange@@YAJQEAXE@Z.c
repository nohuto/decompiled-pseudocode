/*
 * XREFs of ?DmmAdapterPowerChange@@YAJQEAXE@Z @ 0x1C0279EEC
 * Callers:
 *     DpiPowerArbiterThread @ 0x1C015D200 (DpiPowerArbiterThread.c)
 * Callees:
 *     ?GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z @ 0x1C00040D0 (-GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0005E8C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C000E1D8 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E3CC (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C000EC58 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 */

__int64 __fastcall DmmAdapterPowerChange(PERESOURCE *a1, char a2)
{
  __int64 v3; // rax
  __int64 v5; // rcx
  __int64 v6; // rax
  PERESOURCE v7; // rax
  _QWORD *Address; // rdi
  __int64 v9; // rax
  _QWORD *v10; // rbx
  _QWORD *v11; // rcx
  const struct DMMVIDEOPRESENTTARGET *i; // rax
  __int64 v13; // [rsp+40h] [rbp+18h] BYREF

  if ( a2 == 1 )
  {
    if ( !a1 )
    {
      v3 = WdLogNewEntry5_WdError(0LL);
      *(_QWORD *)(v3 + 24) &= (unsigned __int64)a1;
      WdLogEvent5_WdError(v3);
      return 3223191554LL;
    }
    if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(a1) )
    {
      v6 = WdLogNewEntry5_WdAssertion(v5);
      WdLogEvent5_WdAssertion(v6);
    }
    v7 = a1[315];
    if ( v7 )
    {
      Address = v7->Address;
      if ( !Address )
      {
        v9 = WdLogNewEntry5_WdError(v5);
        *(_QWORD *)(v9 + 24) = a1;
        WdLogEvent5_WdError(v9);
        return 3223192373LL;
      }
      EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v13, (__int64)v7->Address);
      _InterlockedIncrement((volatile signed __int32 *)(Address[10] + 72LL));
      v10 = (_QWORD *)Address[10];
      v11 = (_QWORD *)v10[3];
      if ( v11 != v10 + 3 )
      {
        for ( i = (const struct DMMVIDEOPRESENTTARGET *)(v11 - 1);
              i;
              i = DMMVIDEOPRESENTTARGETSET::GetNextTarget((DMMVIDEOPRESENTTARGETSET *)v10, i) )
        {
          *((_BYTE *)i + 396) = 0;
        }
      }
      ReferenceCounted::Release((ReferenceCounted *)(v10 + 8));
      DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v13 + 40));
    }
  }
  return 0LL;
}
