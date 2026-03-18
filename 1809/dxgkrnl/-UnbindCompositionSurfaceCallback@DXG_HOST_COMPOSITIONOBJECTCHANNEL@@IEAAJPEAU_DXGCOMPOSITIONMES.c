/*
 * XREFs of ?UnbindCompositionSurfaceCallback@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@IEAAJPEAU_DXGCOMPOSITIONMESSAGE_UNBINDCOMPOSITIONSURFACE@@PEAU_DXGCOMPOSITIONMESSAGE_UNBINDCOMPOSITIONSURFACE_RETURN@@@Z @ 0x1C0232F5C
 * Callers:
 *     ?ProcessChannelMessage@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@UEAAJPEAXI@Z @ 0x1C02320B0 (-ProcessChannelMessage@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@UEAAJPEAXI@Z.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000DF84 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000E054 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000E790 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ??0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ @ 0x1C001048C (--0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ.c)
 *     ?Release@DxgkCompositionObject@@QEBA_JXZ @ 0x1C0019470 (-Release@DxgkCompositionObject@@QEBA_JXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     ?AddRef@DxgkCompositionObject@@QEBAJXZ @ 0x1C004F214 (-AddRef@DxgkCompositionObject@@QEBAJXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DXG_HOST_COMPOSITIONOBJECTCHANNEL::UnbindCompositionSurfaceCallback(
        DXG_HOST_COMPOSITIONOBJECTCHANNEL *this,
        struct _DXGCOMPOSITIONMESSAGE_UNBINDCOMPOSITIONSURFACE *a2,
        struct _DXGCOMPOSITIONMESSAGE_UNBINDCOMPOSITIONSURFACE_RETURN *a3)
{
  unsigned int v6; // ebx
  DxgkCompositionObject *v7; // rsi
  BOOL v8; // edi
  struct DXGPROCESS *Current; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rax
  int v14; // eax
  struct DXGFASTMUTEX *v15; // rax
  DxgkCompositionObject *v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 result; // rax
  _BYTE v24[8]; // [rsp+20h] [rbp-28h] BYREF
  char v25; // [rsp+28h] [rbp-20h]

  v6 = -1073741811;
  v7 = 0LL;
  v8 = 0;
  DXGPROCESSCALLOUTMUTEX::DXGPROCESSCALLOUTMUTEX((DXGPROCESSCALLOUTMUTEX *)v24);
  Current = DXGPROCESS::GetCurrent();
  if ( Current )
  {
    if ( (*((_BYTE *)Current + 323) & 0x20) == 0 )
    {
      v14 = (*(__int64 (**)(void))(*((_QWORD *)Current + 13) + 216LL))();
      v11 = 1LL;
      v8 = v14 != 0;
    }
  }
  else
  {
    v13 = WdLogNewEntry5_WdError(v11);
    *(_QWORD *)(v13 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v13);
  }
  if ( v25 )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v24);
  if ( v8 )
  {
    v15 = (struct DXGFASTMUTEX *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 1) + 48LL))(*((_QWORD *)this + 1));
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v24, v15, 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v24);
    v16 = (DxgkCompositionObject *)(*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)this + 1) + 72LL))(
                                     *((_QWORD *)this + 1),
                                     *((unsigned int *)a2 + 3),
                                     17LL);
    if ( v16 )
    {
      v7 = v16;
      DxgkCompositionObject::AddRef(v16);
    }
    else
    {
      v21 = WdLogNewEntry5_WdWarning(v18, v17, v19);
      *(_QWORD *)(v21 + 24) = -1073741811LL;
      WdLogEvent5_WdWarning(v21);
    }
    if ( v25 )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v24);
  }
  else
  {
    v22 = WdLogNewEntry5_WdWarning(v11, v10, v12);
    *(_QWORD *)(v22 + 24) = -1073741811LL;
    WdLogEvent5_WdWarning(v22);
  }
  if ( v7 )
  {
    LOBYTE(v20) = *((_DWORD *)a2 + 4) != 0;
    v6 = (*(__int64 (__fastcall **)(_QWORD *, __int64))(*((_QWORD *)v7 + 4) + 24LL))((_QWORD *)v7 + 4, v20);
    DxgkCompositionObject::Release(v7);
  }
  result = v6;
  *((_DWORD *)a3 + 1) = v6;
  return result;
}
