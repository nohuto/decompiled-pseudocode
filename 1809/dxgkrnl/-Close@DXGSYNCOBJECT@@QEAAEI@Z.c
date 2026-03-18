/*
 * XREFs of ?Close@DXGSYNCOBJECT@@QEAAEI@Z @ 0x1C00DCABC
 * Callers:
 *     ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z @ 0x1C00DC96C (-DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z.c)
 * Callees:
 *     ?FreeResourceHandleNoRefSafe@DXGPROCESS@@QEAAXI@Z @ 0x1C000E548 (-FreeResourceHandleNoRefSafe@DXGPROCESS@@QEAAXI@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?VmBusSendDestroySyncObject@DXG_GUEST_GLOBAL_VMBUS@@QEAAXII@Z @ 0x1C01F43EC (-VmBusSendDestroySyncObject@DXG_GUEST_GLOBAL_VMBUS@@QEAAXII@Z.c)
 *     ?FreeHostHandle@DXGSYNCOBJECT@@QEAAXI@Z @ 0x1C0234AF8 (-FreeHostHandle@DXGSYNCOBJECT@@QEAAXI@Z.c)
 *     ?GetHostHandle@DXGSYNCOBJECT@@QEAAIIE@Z @ 0x1C0234C88 (-GetHostHandle@DXGSYNCOBJECT@@QEAAIIE@Z.c)
 */

bool __fastcall DXGSYNCOBJECT::Close(DXGSYNCOBJECT *this, unsigned int a2)
{
  __int64 v2; // rsi
  struct DXGGLOBAL *Global; // rax
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  struct DXGPROCESS *Current; // rbp
  unsigned __int8 v9; // r8
  _QWORD *v10; // rbx
  __int64 v12; // rax
  __int64 v13; // rcx
  unsigned int HostHandle; // r14d
  unsigned int v15; // ebx
  struct DXGGLOBAL *v16; // rax
  __int64 v17; // rax

  v2 = a2;
  Global = DXGGLOBAL::GetGlobal((__int64)this);
  if ( !ExIsResourceAcquiredExclusiveLite(*((PERESOURCE *)Global + 43)) )
  {
    v12 = WdLogNewEntry5_WdAssertion(v5);
    *(_QWORD *)(v12 + 24) = 2283LL;
    WdLogEvent5_WdAssertion(v12);
  }
  Current = DXGPROCESS::GetCurrent();
  if ( (_DWORD)v2 )
  {
    if ( *((_BYTE *)this + 253) )
    {
      HostHandle = DXGSYNCOBJECT::GetHostHandle(this, v2, v9);
      if ( HostHandle )
      {
        v15 = *((_DWORD *)Current + 98);
        v16 = DXGGLOBAL::GetGlobal(v13);
        DXG_GUEST_GLOBAL_VMBUS::VmBusSendDestroySyncObject(*((DXG_GUEST_GLOBAL_VMBUS **)v16 + 168), v15, HostHandle);
        DXGSYNCOBJECT::FreeHostHandle(this, v2);
      }
    }
    DXGPROCESS::FreeResourceHandleNoRefSafe(Current, v2);
  }
  if ( !*((_DWORD *)this + 6) )
  {
    v17 = WdLogNewEntry5_WdAssertion(v7);
    *(_QWORD *)(v17 + 24) = 2309LL;
    WdLogEvent5_WdAssertion(v17);
  }
  v10 = (_QWORD *)WdLogNewEntry5_WdEvent(v7, v6);
  v10[3] = this;
  v10[4] = v2;
  v10[5] = DXGPROCESS::GetCurrent();
  WdLogEvent5_WdEvent(v10);
  return _InterlockedAdd((volatile signed __int32 *)this + 6, 0xFFFFFFFF) == 0;
}
