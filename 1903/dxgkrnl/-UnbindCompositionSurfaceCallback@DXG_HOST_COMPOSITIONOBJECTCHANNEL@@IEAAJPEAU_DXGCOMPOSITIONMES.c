/*
 * XREFs of ?UnbindCompositionSurfaceCallback@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@IEAAJPEAU_DXGCOMPOSITIONMESSAGE_UNBINDCOMPOSITIONSURFACE@@PEAU_DXGCOMPOSITIONMESSAGE_UNBINDCOMPOSITIONSURFACE_RETURN@@@Z @ 0x1C02673FC
 * Callers:
 *     ?ProcessChannelMessage@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@UEAAJPEAXI@Z @ 0x1C02665D0 (-ProcessChannelMessage@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@UEAAJPEAXI@Z.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006FF4 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007560 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007DEC (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ @ 0x1C0018920 (--0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ.c)
 *     ?Release@DxgkCompositionObject@@QEBA_JXZ @ 0x1C001ADD0 (-Release@DxgkCompositionObject@@QEBA_JXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 *     ?AddRef@DxgkCompositionObject@@QEBAJXZ @ 0x1C0056368 (-AddRef@DxgkCompositionObject@@QEBAJXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01008A0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DXG_HOST_COMPOSITIONOBJECTCHANNEL::UnbindCompositionSurfaceCallback(
        DXG_HOST_COMPOSITIONOBJECTCHANNEL *this,
        struct _DXGCOMPOSITIONMESSAGE_UNBINDCOMPOSITIONSURFACE *a2,
        struct _DXGCOMPOSITIONMESSAGE_UNBINDCOMPOSITIONSURFACE_RETURN *a3)
{
  unsigned int v6; // ebx
  DxgkCompositionObject *v7; // rsi
  BOOL v8; // edi
  __int64 v9; // rdx
  __int64 v10; // rcx
  struct DXGPROCESS *Current; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rax
  int v16; // eax
  struct DXGFASTMUTEX *v17; // rax
  DxgkCompositionObject *v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 result; // rax
  _BYTE v26[8]; // [rsp+20h] [rbp-28h] BYREF
  char v27; // [rsp+28h] [rbp-20h]

  v6 = -1073741811;
  v7 = 0LL;
  v8 = 0;
  DXGPROCESSCALLOUTMUTEX::DXGPROCESSCALLOUTMUTEX((DXGPROCESSCALLOUTMUTEX *)v26, (__int64)a2);
  Current = DXGPROCESS::GetCurrent(v10, v9);
  if ( Current )
  {
    if ( (*((_BYTE *)Current + 299) & 0x20) == 0 )
    {
      v16 = (*(__int64 (**)(void))(*((_QWORD *)Current + 12) + 216LL))();
      v13 = 1LL;
      v8 = v16 != 0;
    }
  }
  else
  {
    v15 = WdLogNewEntry5_WdError(v13, v12, v14);
    *(_QWORD *)(v15 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v15);
  }
  if ( v27 )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v26);
  if ( v8 )
  {
    v17 = (struct DXGFASTMUTEX *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 1) + 48LL))(*((_QWORD *)this + 1));
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v26, v17, 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v26);
    v18 = (DxgkCompositionObject *)(*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)this + 1) + 72LL))(
                                     *((_QWORD *)this + 1),
                                     *((unsigned int *)a2 + 3),
                                     17LL);
    if ( v18 )
    {
      v7 = v18;
      DxgkCompositionObject::AddRef(v18);
    }
    else
    {
      v23 = WdLogNewEntry5_WdWarning(v20, v19, v21);
      *(_QWORD *)(v23 + 24) = -1073741811LL;
      WdLogEvent5_WdWarning(v23);
    }
    if ( v27 )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v26);
  }
  else
  {
    v24 = WdLogNewEntry5_WdWarning(v13, v12, v14);
    *(_QWORD *)(v24 + 24) = -1073741811LL;
    WdLogEvent5_WdWarning(v24);
  }
  if ( v7 )
  {
    LOBYTE(v22) = *((_DWORD *)a2 + 4) != 0;
    v6 = (*(__int64 (__fastcall **)(_QWORD *, __int64))(*((_QWORD *)v7 + 4) + 24LL))((_QWORD *)v7 + 4, v22);
    DxgkCompositionObject::Release(v7);
  }
  result = v6;
  *((_DWORD *)a3 + 1) = v6;
  return result;
}
