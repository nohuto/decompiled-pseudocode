/*
 * XREFs of ?BindCompositionSurfaceCallback@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@IEAAJPEAU_DXGCOMPOSITIONMESSAGE_BINDCOMPOSITIONSURFACE@@PEAU_DXGCOMPOSITIONMESSAGE_BINDCOMPOSITIONSURFACE_RETURN@@@Z @ 0x1C02655F4
 * Callers:
 *     ?ProcessChannelMessage@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@UEAAJPEAXI@Z @ 0x1C0266C60 (-ProcessChannelMessage@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@UEAAJPEAXI@Z.c)
 * Callees:
 *     ?Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C000224C (-Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0007290 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007784 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000801C (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DxgkCompositionObject@@QEBA_JXZ @ 0x1C001ADD0 (-Release@DxgkCompositionObject@@QEBA_JXZ.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0025440 (memset.c)
 *     ?AddRef@DxgkCompositionObject@@QEBAJXZ @ 0x1C00563A8 (-AddRef@DxgkCompositionObject@@QEBAJXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01059F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DxgkExtractRemoteBundleObject@@YAJIKPEAPEAXPEAU_EPROCESS@@@Z @ 0x1C0263BE0 (-DxgkExtractRemoteBundleObject@@YAJIKPEAPEAXPEAU_EPROCESS@@@Z.c)
 */

__int64 __fastcall DXG_HOST_COMPOSITIONOBJECTCHANNEL::BindCompositionSurfaceCallback(
        DXG_HOST_COMPOSITIONOBJECTCHANNEL *this,
        struct _DXGCOMPOSITIONMESSAGE_BINDCOMPOSITIONSURFACE *a2,
        struct _DXGCOMPOSITIONMESSAGE_BINDCOMPOSITIONSURFACE_RETURN *a3)
{
  __int64 RemoteBundleObject; // rbx
  DxgkCompositionObject *v7; // r14
  __int64 v8; // rdx
  unsigned int v9; // eax
  __int64 v10; // rcx
  struct DXGPROCESS *Current; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  struct DXGFASTMUTEX *v15; // rax
  DxgkCompositionObject *v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rax
  __int64 v21; // rax
  struct _KPROCESS *v22; // rdx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rax
  __int64 i; // rdx
  bool v28; // zf
  int v29; // eax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // rax
  __int64 v34; // rsi
  HANDLE v35; // rcx
  __int64 v36; // rax
  _BYTE v38[16]; // [rsp+30h] [rbp-D0h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+40h] [rbp-C0h] BYREF
  char v40; // [rsp+70h] [rbp-90h]
  HANDLE Handle[32]; // [rsp+80h] [rbp-80h] BYREF

  LODWORD(RemoteBundleObject) = -1073741811;
  v7 = 0LL;
  memset(Handle, 0, sizeof(Handle));
  v9 = *((_DWORD *)a2 + 41);
  v10 = 31LL;
  if ( v9 < 0x1F )
    v10 = v9;
  *((_DWORD *)a2 + 41) = v10;
  Current = DXGPROCESS::GetCurrent(v10, v8);
  if ( (*(unsigned int (**)(void))(*((_QWORD *)Current + 12) + 216LL))() )
  {
    v15 = (struct DXGFASTMUTEX *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 1) + 48LL))(*((_QWORD *)this + 1));
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v38, v15, 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v38);
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
      v20 = WdLogNewEntry5_WdWarning(v18, v17, v19);
      *(_QWORD *)(v20 + 24) = -1073741811LL;
      WdLogEvent5_WdWarning(v20);
    }
    if ( v38[8] )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v38);
  }
  else
  {
    v21 = WdLogNewEntry5_WdWarning(v13, v12, v14);
    *(_QWORD *)(v21 + 24) = -1073741811LL;
    WdLogEvent5_WdWarning(v21);
  }
  if ( v7 )
  {
    v22 = (struct _KPROCESS *)*((_QWORD *)this + 5);
    v40 = 0;
    CPROCESSATTACHHELPER::Attach(&ApcState, v22);
    RemoteBundleObject = (int)DxgkExtractRemoteBundleObject(
                                *((unsigned int *)a2 + 266),
                                (unsigned int)(*((_DWORD *)a2 + 41) + 1),
                                Handle,
                                *((struct _EPROCESS **)this + 3));
    if ( v40 )
      KeUnstackDetachProcess(&ApcState);
    if ( (int)RemoteBundleObject < 0 )
    {
      v36 = WdLogNewEntry5_WdWarning(v24, v23, v25);
      *(_QWORD *)(v36 + 24) = RemoteBundleObject;
      WdLogEvent5_WdWarning(v36);
    }
    else
    {
      v26 = *((unsigned int *)a2 + 41);
      for ( i = 0LL; (unsigned int)i < (unsigned int)v26; v26 = *((unsigned int *)a2 + 41) )
      {
        *((_QWORD *)a2 + 3 * i + 21) = Handle[i];
        i = (unsigned int)(i + 1);
      }
      v28 = *((_DWORD *)a2 + 4) == 0;
      *((_QWORD *)a2 + 116) = Handle[v26];
      LOBYTE(v25) = !v28;
      v29 = (*(__int64 (__fastcall **)(_QWORD *, char *, __int64, char *))(*((_QWORD *)v7 + 4) + 16LL))(
              (_QWORD *)v7 + 4,
              (char *)a2 + 24,
              v25,
              (char *)a3 + 16);
      RemoteBundleObject = v29;
      if ( v29 < 0 )
      {
        v33 = WdLogNewEntry5_WdWarning(v31, v30, v32);
        *(_QWORD *)(v33 + 24) = RemoteBundleObject;
        WdLogEvent5_WdWarning(v33);
      }
      v34 = 0LL;
      if ( *((_DWORD *)a2 + 41) != -1 )
      {
        do
        {
          v35 = Handle[v34];
          if ( v35 )
            ObCloseHandle(v35, 1);
          v34 = (unsigned int)(v34 + 1);
        }
        while ( (unsigned int)v34 < *((_DWORD *)a2 + 41) + 1 );
      }
    }
    DxgkCompositionObject::Release(v7);
  }
  *((_DWORD *)a3 + 1) = RemoteBundleObject;
  return (unsigned int)RemoteBundleObject;
}
