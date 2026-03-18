/*
 * XREFs of ?CreateCompositionSurfaceCallback@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@IEAAJPEAU_DXGCOMPOSITIONMESSAGE_CREATECOMPOSITIONSURFACE@@PEAU_DXGCOMPOSITIONMESSAGE_CREATECOMPOSITIONSURFACE_RETURN@@@Z @ 0x1C0230F4C
 * Callers:
 *     ?ProcessChannelMessage@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@UEAAJPEAXI@Z @ 0x1C02320B0 (-ProcessChannelMessage@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@UEAAJPEAXI@Z.c)
 * Callees:
 *     ?Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C00131E4 (-Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     ?ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAV1@@Z @ 0x1C0015D90 (-ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAV1@@Z.c)
 *     ?Release@DxgkCompositionObject@@QEBA_JXZ @ 0x1C0019470 (-Release@DxgkCompositionObject@@QEBA_JXZ.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     ?Create@CompositionSurfaceObject@@SAJDPEAU_OBJECT_ATTRIBUTES@@KDPEAPEAX@Z @ 0x1C00552E0 (-Create@CompositionSurfaceObject@@SAJDPEAU_OBJECT_ATTRIBUTES@@KDPEAPEAX@Z.c)
 */

__int64 __fastcall DXG_HOST_COMPOSITIONOBJECTCHANNEL::CreateCompositionSurfaceCallback(
        DXG_HOST_COMPOSITIONOBJECTCHANNEL *this,
        struct _DXGCOMPOSITIONMESSAGE_CREATECOMPOSITIONSURFACE *a2,
        struct _DXGCOMPOSITIONMESSAGE_CREATECOMPOSITIONSURFACE_RETURN *a3,
        __int64 a4)
{
  void *v4; // rax
  DxgkCompositionObject *v5; // rdi
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rbx
  __int64 v13; // rax
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 CurrentProcess; // rax
  int v19; // eax
  __int64 v20; // rax
  __int64 v21; // rcx
  int v22; // r15d
  __int64 v23; // rax
  struct _KPROCESS *v24; // rdx
  struct CompositionSurfaceObject *v26; // [rsp+40h] [rbp-59h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-51h] BYREF
  HANDLE v28; // [rsp+50h] [rbp-49h] BYREF
  struct _OBJECT_ATTRIBUTES v29; // [rsp+58h] [rbp-41h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+88h] [rbp-11h] BYREF
  char v31; // [rsp+B8h] [rbp+1Fh]

  v4 = (void *)*((_QWORD *)this + 6);
  v28 = 0LL;
  v5 = 0LL;
  Handle = 0LL;
  memset(&v29.RootDirectory, 0, 20);
  v29.SecurityQualityOfService = 0LL;
  v29.SecurityDescriptor = v4;
  v26 = 0LL;
  v29.Length = 48;
  v8 = CompositionSurfaceObject::Create(0LL, &v29, 3u, a4, &v28);
  v12 = v8;
  if ( v8 >= 0 )
  {
    v14 = CompositionSurfaceObject::ResolveHandle(v28, 2u, v11, &v26);
    v12 = v14;
    if ( v14 >= 0
      && (CurrentProcess = PsGetCurrentProcess(v16, v15),
          v19 = ObDuplicateObject(CurrentProcess, v28, *((_QWORD *)this + 4), &Handle, 0, 0, 6, 1),
          v12 = v19,
          v19 >= 0) )
    {
      v5 = v26;
      v22 = (*(__int64 (__fastcall **)(_QWORD, struct CompositionSurfaceObject *, __int64))(**((_QWORD **)this + 1)
                                                                                          + 56LL))(
              *((_QWORD *)this + 1),
              v26,
              17LL);
      if ( v22 )
      {
        v5 = 0LL;
      }
      else
      {
        LODWORD(v12) = -1073741801;
        v23 = WdLogNewEntry5_WdLowResource(v21);
        *(_QWORD *)(v23 + 24) = -1073741801LL;
        WdLogEvent5_WdLowResource(v23);
      }
      if ( (int)v12 >= 0 )
      {
        *((_QWORD *)a3 + 2) = Handle;
        *((_DWORD *)a3 + 3) = v22;
        goto LABEL_14;
      }
    }
    else
    {
      v20 = WdLogNewEntry5_WdWarning(v16, v15, v17);
      *(_QWORD *)(v20 + 24) = v12;
      WdLogEvent5_WdWarning(v20);
      v5 = v26;
    }
  }
  else
  {
    v13 = WdLogNewEntry5_WdWarning(v10, v9, v11);
    *(_QWORD *)(v13 + 24) = v12;
    WdLogEvent5_WdWarning(v13);
  }
  if ( Handle )
  {
    v24 = (struct _KPROCESS *)*((_QWORD *)this + 4);
    v31 = 0;
    CPROCESSATTACHHELPER::Attach(&ApcState, v24);
    ObCloseHandle(Handle, 1);
    if ( v31 )
      KeUnstackDetachProcess(&ApcState);
  }
LABEL_14:
  if ( v28 )
    ObCloseHandle(v28, 1);
  if ( v5 )
    DxgkCompositionObject::Release(v5);
  *((_DWORD *)a3 + 1) = v12;
  return (unsigned int)v12;
}
