/*
 * XREFs of ?CreateBundleObjectCallback@DXG_HOST_REMOTEOBJECTCHANNEL@@IEAAJKPEAIPEAPEAX0@Z @ 0x1C0263900
 * Callers:
 *     ?ProcessChannelMessage@DXG_HOST_REMOTEOBJECTCHANNEL@@UEAAJPEAXI@Z @ 0x1C0264610 (-ProcessChannelMessage@DXG_HOST_REMOTEOBJECTCHANNEL@@UEAAJPEAXI@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000C5A0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0025440 (memset.c)
 *     ?ReleaseReference@DXGSHAREDVMOBJECT@@QEAAJXZ @ 0x1C0219E3C (-ReleaseReference@DXGSHAREDVMOBJECT@@QEAAJXZ.c)
 *     DxgkCreateBundleObjectInternal @ 0x1C02515CC (DxgkCreateBundleObjectInternal.c)
 */

__int64 __fastcall DXG_HOST_REMOTEOBJECTCHANNEL::CreateBundleObjectCallback(
        DXG_HOST_REMOTEOBJECTCHANNEL *this,
        unsigned int a2,
        unsigned int *a3,
        void **a4,
        unsigned int *a5)
{
  void *v8; // rsi
  int *v10; // rdi
  const GUID *v11; // r8
  __int64 v12; // r9
  _QWORD *v13; // rcx
  _BYTE *v14; // rax
  _BYTE *v15; // rdx
  int BundleObjectInternal; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rbx
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // r8
  int *v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rax
  unsigned int v31; // eax
  __int64 v32; // rcx
  __int64 v33; // r9
  __int64 v34; // rax
  _QWORD v35[6]; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v36[10]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v37[128]; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v38[768]; // [rsp+130h] [rbp+30h] BYREF

  v8 = 0LL;
  v10 = 0LL;
  memset(v36, 0, sizeof(v36));
  memset(v38, 0, sizeof(v38));
  memset(v35, 0, sizeof(v35));
  LODWORD(v36[0]) = a2;
  v36[1] = a3;
  memset(v37, 0, sizeof(v37));
  if ( a2 )
  {
    v12 = *((_QWORD *)this + 5);
    v13 = v37;
    v11 = (const GUID *)a2;
    v14 = &v38[8];
    v15 = v38;
    do
    {
      *v13 = v15;
      v15 += 48;
      *((_DWORD *)v14 - 2) = 48;
      ++v13;
      *(_QWORD *)v14 = 0LL;
      *((_DWORD *)v14 + 4) = 0;
      *((_QWORD *)v14 + 1) = 0LL;
      *((_QWORD *)v14 + 3) = v12;
      *((_QWORD *)v14 + 4) = 0LL;
      v14 += 48;
      v11 = (const GUID *)((char *)v11 - 1);
    }
    while ( v11 );
  }
  v36[2] = v37;
  v35[4] = *((_QWORD *)this + 4);
  v36[4] = v35;
  LODWORD(v35[0]) = 48;
  v35[1] = 0LL;
  LODWORD(v35[3]) = 512;
  v35[2] = 0LL;
  v35[5] = 0LL;
  LODWORD(v36[5]) = 0x10000000;
  BundleObjectInternal = DxgkCreateBundleObjectInternal(0LL, 0, v11, v12, (ULONG64)v36, (__int64)a4);
  v20 = BundleObjectInternal;
  if ( BundleObjectInternal < 0 )
  {
    v21 = WdLogNewEntry5_WdWarning(v18, v17, v19);
    *(_QWORD *)(v21 + 24) = v20;
    WdLogEvent5_WdWarning(v21);
    goto LABEL_17;
  }
  v8 = (void *)v36[9];
  v24 = (int *)operator new[](0x20uLL, 0x4B677844u, PagedPool);
  v10 = v24;
  if ( v24 )
  {
    *v24 = 0;
    *((_QWORD *)v24 + 1) = 0LL;
    v24[4] = 0;
    v24[6] = 1;
  }
  else
  {
    v10 = 0LL;
  }
  if ( v10 )
  {
    *v10 = 16;
    *((_QWORD *)v10 + 2) = v8;
    v31 = (*(__int64 (__fastcall **)(_QWORD, int *, __int64))(**((_QWORD **)this + 1) + 56LL))(
            *((_QWORD *)this + 1),
            v10,
            13LL);
    if ( !v31 )
    {
      v34 = WdLogNewEntry5_WdLowResource(v32, v22, v23, v33);
      *(_QWORD *)(v34 + 24) = 356LL;
      WdLogEvent5_WdLowResource(v34);
      LODWORD(v20) = -1073741801;
LABEL_18:
      if ( v10 )
      {
        DXGSHAREDVMOBJECT::ReleaseReference(v10, v22, v23);
        return (unsigned int)v20;
      }
      goto LABEL_11;
    }
    *a5 = v31;
LABEL_17:
    if ( (int)v20 >= 0 )
      return (unsigned int)v20;
    goto LABEL_18;
  }
  v29 = WdLogNewEntry5_WdLowResource(v26, v25, v27, v28);
  *(_QWORD *)(v29 + 24) = 345LL;
  WdLogEvent5_WdLowResource(v29);
  LODWORD(v20) = -1073741801;
LABEL_11:
  if ( v8 )
    ObCloseHandle(v8, 0);
  return (unsigned int)v20;
}
