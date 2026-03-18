/*
 * XREFs of ?EnqueueFlipExTokenCallback@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@IEAAJPEAU_DXGCOMPOSITIONMESSAGE_ENQUEUEFLIPEXTOKEN@@PEAU_DXGCOMPOSITIONMESSAGE_ENQUEUEFLIPEXTOKEN_RETURN@@@Z @ 0x1C0265F8C
 * Callers:
 *     ?ProcessChannelMessage@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@UEAAJPEAXI@Z @ 0x1C0266C60 (-ProcessChannelMessage@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@UEAAJPEAXI@Z.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0007290 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007784 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000801C (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ @ 0x1C0018D9C (--0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ.c)
 *     ?Release@DxgkCompositionObject@@QEBA_JXZ @ 0x1C001ADD0 (-Release@DxgkCompositionObject@@QEBA_JXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 *     ?AddRef@DxgkCompositionObject@@QEBAJXZ @ 0x1C00563A8 (-AddRef@DxgkCompositionObject@@QEBAJXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01059F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DXG_HOST_COMPOSITIONOBJECTCHANNEL::EnqueueFlipExTokenCallback(
        DXG_HOST_COMPOSITIONOBJECTCHANNEL *this,
        struct _DXGCOMPOSITIONMESSAGE_ENQUEUEFLIPEXTOKEN *a2,
        struct _DXGCOMPOSITIONMESSAGE_ENQUEUEFLIPEXTOKEN_RETURN *a3)
{
  __int64 v6; // rbx
  DxgkCompositionObject *v7; // rdi
  BOOL v8; // esi
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
  __int64 v22; // rax
  __int64 v23; // rax
  int v24; // eax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rax
  __int64 result; // rax
  _BYTE v30[8]; // [rsp+30h] [rbp-28h] BYREF
  char v31; // [rsp+38h] [rbp-20h]

  LODWORD(v6) = -1073741811;
  v7 = 0LL;
  v8 = 0;
  DXGPROCESSCALLOUTMUTEX::DXGPROCESSCALLOUTMUTEX((DXGPROCESSCALLOUTMUTEX *)v30, (__int64)a2);
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
  if ( v31 )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v30);
  if ( v8 )
  {
    v17 = (struct DXGFASTMUTEX *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 1) + 48LL))(*((_QWORD *)this + 1));
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v30, v17, 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v30);
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
      v22 = WdLogNewEntry5_WdWarning(v20, v19, v21);
      *(_QWORD *)(v22 + 24) = -1073741811LL;
      WdLogEvent5_WdWarning(v22);
    }
    if ( v31 )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v30);
  }
  else
  {
    v23 = WdLogNewEntry5_WdWarning(v13, v12, v14);
    *(_QWORD *)(v23 + 24) = -1073741811LL;
    WdLogEvent5_WdWarning(v23);
  }
  if ( v7 )
  {
    v24 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD, _QWORD, char *))(*((_QWORD *)v7 + 4) + 32LL))(
            (_QWORD *)v7 + 4,
            *((_QWORD *)a2 + 2),
            *((_QWORD *)a2 + 3),
            (char *)a2 + 32);
    v6 = v24;
    if ( v24 < 0 )
    {
      v28 = WdLogNewEntry5_WdWarning(v26, v25, v27);
      *(_QWORD *)(v28 + 24) = v6;
      WdLogEvent5_WdWarning(v28);
    }
    DxgkCompositionObject::Release(v7);
  }
  result = (unsigned int)v6;
  *((_DWORD *)a3 + 1) = v6;
  return result;
}
