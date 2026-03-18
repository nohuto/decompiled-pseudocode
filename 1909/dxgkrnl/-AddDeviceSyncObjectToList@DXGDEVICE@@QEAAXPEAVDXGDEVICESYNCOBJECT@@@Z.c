/*
 * XREFs of ?AddDeviceSyncObjectToList@DXGDEVICE@@QEAAXPEAVDXGDEVICESYNCOBJECT@@@Z @ 0x1C00F5998
 * Callers:
 *     ??0DXGDEVICESYNCOBJECT@@QEAA@PEAVDXGDEVICE@@_N1@Z @ 0x1C00F5924 (--0DXGDEVICESYNCOBJECT@@QEAA@PEAVDXGDEVICE@@_N1@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000753C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 */

void __fastcall DXGDEVICE::AddDeviceSyncObjectToList(DXGDEVICE *this, struct DXGDEVICESYNCOBJECT *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  _QWORD *v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rax

  if ( !*((_DWORD *)this + 18) && !ExIsResourceAcquiredExclusiveLite(*((PERESOURCE *)this + 13)) )
  {
    v10 = WdLogNewEntry5_WdAssertion(v5, v4);
    *(_QWORD *)(v10 + 24) = 7694LL;
    WdLogEvent5_WdAssertion(v10);
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*((_QWORD *)this + 2) + 16LL)) )
  {
    v11 = WdLogNewEntry5_WdAssertion(v7, v6);
    *(_QWORD *)(v11 + 24) = 7695LL;
    WdLogEvent5_WdAssertion(v11);
  }
  v8 = (_QWORD *)((char *)this + 408);
  v9 = *((_QWORD *)this + 51);
  if ( *(DXGDEVICE **)(v9 + 8) != (DXGDEVICE *)((char *)this + 408) )
    __fastfail(3u);
  *(_QWORD *)a2 = v9;
  *((_QWORD *)a2 + 1) = v8;
  *(_QWORD *)(v9 + 8) = a2;
  *v8 = a2;
}
