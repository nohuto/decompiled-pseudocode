/*
 * XREFs of ?DmmAdapterPowerChange@@YAJQEAXE@Z @ 0x1C02B2720
 * Callers:
 *     DpiPowerArbiterThread @ 0x1C01815C0 (DpiPowerArbiterThread.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0002778 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z @ 0x1C0003E00 (-GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C00078E0 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000897C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0008FF4 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 */

__int64 __fastcall DmmAdapterPowerChange(PERESOURCE *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rax
  PERESOURCE v10; // rax
  _QWORD *Address; // rdi
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  _QWORD *v15; // rbx
  _QWORD *v16; // rcx
  const struct DMMVIDEOPRESENTTARGET *i; // rax
  __int64 v18; // [rsp+40h] [rbp+18h] BYREF

  if ( (_BYTE)a2 == 1 )
  {
    if ( !a1 )
    {
      v4 = WdLogNewEntry5_WdError(0LL, a2, a3);
      *(_QWORD *)(v4 + 24) &= (unsigned __int64)a1;
      WdLogEvent5_WdError(v4);
      return 3223191554LL;
    }
    if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(a1) )
    {
      v9 = WdLogNewEntry5_WdAssertion(v7, v6);
      WdLogEvent5_WdAssertion(v9);
    }
    v10 = a1[319];
    if ( v10 )
    {
      Address = v10->Address;
      if ( !Address )
      {
        v12 = WdLogNewEntry5_WdError(v7, v6, v8);
        *(_QWORD *)(v12 + 24) = a1;
        WdLogEvent5_WdError(v12);
        return 3223192373LL;
      }
      EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v18, (__int64)v10->Address);
      _InterlockedIncrement((volatile signed __int32 *)(Address[10] + 72LL));
      v15 = (_QWORD *)Address[10];
      v16 = (_QWORD *)v15[3];
      if ( v16 != v15 + 3 )
      {
        for ( i = (const struct DMMVIDEOPRESENTTARGET *)(v16 - 1);
              i;
              i = DMMVIDEOPRESENTTARGETSET::GetNextTarget((DMMVIDEOPRESENTTARGETSET *)v15, i) )
        {
          *((_BYTE *)i + 396) = 0;
        }
      }
      ReferenceCounted::Release((ReferenceCounted *)(v15 + 8), v13, v14);
      DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v18 + 40));
    }
  }
  return 0LL;
}
