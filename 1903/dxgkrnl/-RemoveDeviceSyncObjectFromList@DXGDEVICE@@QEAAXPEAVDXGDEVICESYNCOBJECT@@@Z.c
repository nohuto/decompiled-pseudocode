/*
 * XREFs of ?RemoveDeviceSyncObjectFromList@DXGDEVICE@@QEAAXPEAVDXGDEVICESYNCOBJECT@@@Z @ 0x1C00F15B0
 * Callers:
 *     ??1DXGDEVICESYNCOBJECT@@QEAA@XZ @ 0x1C00F1F04 (--1DXGDEVICESYNCOBJECT@@QEAA@XZ.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00070E4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 */

void __fastcall DXGDEVICE::RemoveDeviceSyncObjectFromList(DXGDEVICE *this, struct DXGDEVICESYNCOBJECT ***a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  struct DXGDEVICESYNCOBJECT **v8; // rax
  struct DXGDEVICESYNCOBJECT **v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rax

  if ( !*((_DWORD *)this + 18)
    && !ExIsResourceAcquiredExclusiveLite(*((PERESOURCE *)this + 13))
    && !*((_BYTE *)this + 1785) )
  {
    v10 = WdLogNewEntry5_WdAssertion(v5, v4);
    *(_QWORD *)(v10 + 24) = 7704LL;
    WdLogEvent5_WdAssertion(v10);
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*((_QWORD *)this + 2) + 16LL)) )
  {
    v11 = WdLogNewEntry5_WdAssertion(v7, v6);
    *(_QWORD *)(v11 + 24) = 7705LL;
    WdLogEvent5_WdAssertion(v11);
  }
  v8 = *a2;
  if ( (*a2)[1] != (struct DXGDEVICESYNCOBJECT *)a2 || (v9 = a2[1], *v9 != (struct DXGDEVICESYNCOBJECT *)a2) )
    __fastfail(3u);
  *v9 = (struct DXGDEVICESYNCOBJECT *)v8;
  v8[1] = (struct DXGDEVICESYNCOBJECT *)v9;
}
