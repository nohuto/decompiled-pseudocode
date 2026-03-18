/*
 * XREFs of ?BindCompositionSurfaceCallback@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@IEAAJPEAU_DXGCOMPOSITIONMESSAGE_BINDCOMPOSITIONSURFACE@@PEAU_DXGCOMPOSITIONMESSAGE_BINDCOMPOSITIONSURFACE_RETURN@@@Z @ 0x1C0230A6C
 * Callers:
 *     ?ProcessChannelMessage@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@UEAAJPEAXI@Z @ 0x1C02320B0 (-ProcessChannelMessage@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@UEAAJPEAXI@Z.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000DF84 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000E054 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000E790 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C00131E4 (-Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     ?Release@DxgkCompositionObject@@QEBA_JXZ @ 0x1C0019470 (-Release@DxgkCompositionObject@@QEBA_JXZ.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     ?AddRef@DxgkCompositionObject@@QEBAJXZ @ 0x1C004F214 (-AddRef@DxgkCompositionObject@@QEBAJXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DxgkExtractRemoteBundleObject@@YAJIKPEAPEAXPEAU_EPROCESS@@@Z @ 0x1C022EF40 (-DxgkExtractRemoteBundleObject@@YAJIKPEAPEAXPEAU_EPROCESS@@@Z.c)
 */

__int64 __fastcall DXG_HOST_COMPOSITIONOBJECTCHANNEL::BindCompositionSurfaceCallback(
        DXG_HOST_COMPOSITIONOBJECTCHANNEL *this,
        struct _DXGCOMPOSITIONMESSAGE_BINDCOMPOSITIONSURFACE *a2,
        struct _DXGCOMPOSITIONMESSAGE_BINDCOMPOSITIONSURFACE_RETURN *a3)
{
  __int64 RemoteBundleObject; // rbx
  DxgkCompositionObject *v7; // r14
  int v8; // ecx
  struct DXGPROCESS *Current; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  struct DXGFASTMUTEX *v13; // rax
  DxgkCompositionObject *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rax
  __int64 v19; // rax
  struct _KPROCESS *v20; // rdx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rax
  __int64 i; // rdx
  bool v26; // zf
  int v27; // eax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // rax
  __int64 v32; // rsi
  HANDLE v33; // rcx
  __int64 v34; // rax
  _BYTE v36[16]; // [rsp+30h] [rbp-D0h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+40h] [rbp-C0h] BYREF
  char v38; // [rsp+70h] [rbp-90h]
  HANDLE Handle[32]; // [rsp+80h] [rbp-80h] BYREF

  LODWORD(RemoteBundleObject) = -1073741811;
  v7 = 0LL;
  memset(Handle, 0, sizeof(Handle));
  v8 = 31;
  if ( *((_DWORD *)a2 + 41) < 0x1Fu )
    v8 = *((_DWORD *)a2 + 41);
  *((_DWORD *)a2 + 41) = v8;
  Current = DXGPROCESS::GetCurrent();
  if ( (*(unsigned int (**)(void))(*((_QWORD *)Current + 13) + 216LL))() )
  {
    v13 = (struct DXGFASTMUTEX *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 1) + 48LL))(*((_QWORD *)this + 1));
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v36, v13, 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v36);
    v14 = (DxgkCompositionObject *)(*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)this + 1) + 72LL))(
                                     *((_QWORD *)this + 1),
                                     *((unsigned int *)a2 + 3),
                                     17LL);
    if ( v14 )
    {
      v7 = v14;
      DxgkCompositionObject::AddRef(v14);
    }
    else
    {
      v18 = WdLogNewEntry5_WdWarning(v16, v15, v17);
      *(_QWORD *)(v18 + 24) = -1073741811LL;
      WdLogEvent5_WdWarning(v18);
    }
    if ( v36[8] )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v36);
  }
  else
  {
    v19 = WdLogNewEntry5_WdWarning(v11, v10, v12);
    *(_QWORD *)(v19 + 24) = -1073741811LL;
    WdLogEvent5_WdWarning(v19);
  }
  if ( v7 )
  {
    v20 = (struct _KPROCESS *)*((_QWORD *)this + 5);
    v38 = 0;
    CPROCESSATTACHHELPER::Attach(&ApcState, v20);
    RemoteBundleObject = (int)DxgkExtractRemoteBundleObject(
                                *((_DWORD *)a2 + 266),
                                *((_DWORD *)a2 + 41) + 1,
                                Handle,
                                *((struct _EPROCESS **)this + 3));
    if ( v38 )
      KeUnstackDetachProcess(&ApcState);
    if ( (int)RemoteBundleObject < 0 )
    {
      v34 = WdLogNewEntry5_WdWarning(v22, v21, v23);
      *(_QWORD *)(v34 + 24) = RemoteBundleObject;
      WdLogEvent5_WdWarning(v34);
    }
    else
    {
      v24 = *((unsigned int *)a2 + 41);
      for ( i = 0LL; (unsigned int)i < (unsigned int)v24; v24 = *((unsigned int *)a2 + 41) )
      {
        *((_QWORD *)a2 + 3 * i + 21) = Handle[i];
        i = (unsigned int)(i + 1);
      }
      v26 = *((_DWORD *)a2 + 4) == 0;
      *((_QWORD *)a2 + 116) = Handle[v24];
      LOBYTE(v23) = !v26;
      v27 = (*(__int64 (__fastcall **)(_QWORD *, char *, __int64, char *))(*((_QWORD *)v7 + 4) + 16LL))(
              (_QWORD *)v7 + 4,
              (char *)a2 + 24,
              v23,
              (char *)a3 + 16);
      RemoteBundleObject = v27;
      if ( v27 < 0 )
      {
        v31 = WdLogNewEntry5_WdWarning(v29, v28, v30);
        *(_QWORD *)(v31 + 24) = RemoteBundleObject;
        WdLogEvent5_WdWarning(v31);
      }
      v32 = 0LL;
      if ( *((_DWORD *)a2 + 41) != -1 )
      {
        do
        {
          v33 = Handle[v32];
          if ( v33 )
            ObCloseHandle(v33, 1);
          v32 = (unsigned int)(v32 + 1);
        }
        while ( (unsigned int)v32 < *((_DWORD *)a2 + 41) + 1 );
      }
    }
    DxgkCompositionObject::Release(v7);
  }
  *((_DWORD *)a3 + 1) = RemoteBundleObject;
  return (unsigned int)RemoteBundleObject;
}
