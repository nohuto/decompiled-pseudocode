/*
 * XREFs of ?CreateBundleObjectCallback@DXG_HOST_REMOTEOBJECTCHANNEL@@IEAAJKPEAIPEAPEAX0@Z @ 0x1C022EC70
 * Callers:
 *     ?ProcessChannelMessage@DXG_HOST_REMOTEOBJECTCHANNEL@@UEAAJPEAXI@Z @ 0x1C022F970 (-ProcessChannelMessage@DXG_HOST_REMOTEOBJECTCHANNEL@@UEAAJPEAXI@Z.c)
 * Callees:
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0011EE0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     ?ReleaseReference@DXGSHAREDVMOBJECT@@QEAAJXZ @ 0x1C01E9E9C (-ReleaseReference@DXGSHAREDVMOBJECT@@QEAAJXZ.c)
 *     DxgkCreateBundleObjectInternal @ 0x1C021CA4C (DxgkCreateBundleObjectInternal.c)
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
  int *v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rax
  unsigned int v26; // eax
  __int64 v27; // rcx
  __int64 v28; // rax
  int v29; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v30; // [rsp+38h] [rbp-C8h]
  __int64 v31; // [rsp+40h] [rbp-C0h]
  int v32; // [rsp+48h] [rbp-B8h]
  __int64 v33; // [rsp+50h] [rbp-B0h]
  __int64 v34; // [rsp+58h] [rbp-A8h]
  _QWORD v35[10]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v36[128]; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v37[768]; // [rsp+130h] [rbp+30h] BYREF

  v8 = 0LL;
  v10 = 0LL;
  memset(v35, 0, sizeof(v35));
  memset(v37, 0, sizeof(v37));
  LODWORD(v35[0]) = a2;
  v35[1] = a3;
  memset(v36, 0, sizeof(v36));
  if ( a2 )
  {
    v12 = *((_QWORD *)this + 5);
    v13 = v36;
    v11 = (const GUID *)a2;
    v14 = &v37[8];
    v15 = v37;
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
  v35[2] = v36;
  v33 = *((_QWORD *)this + 4);
  v35[4] = &v29;
  v29 = 48;
  v30 = 0LL;
  v32 = 512;
  v31 = 0LL;
  v34 = 0LL;
  LODWORD(v35[5]) = 0x10000000;
  BundleObjectInternal = DxgkCreateBundleObjectInternal(0LL, 0, v11, v12, (ULONG64)v35, (__int64)a4);
  v20 = BundleObjectInternal;
  if ( BundleObjectInternal < 0 )
  {
    v21 = WdLogNewEntry5_WdWarning(v18, v17, v19);
    *(_QWORD *)(v21 + 24) = v20;
    WdLogEvent5_WdWarning(v21);
    goto LABEL_17;
  }
  v8 = (void *)v35[9];
  v22 = (int *)operator new(0x20uLL, 0x4B677844u, PagedPool);
  v10 = v22;
  if ( v22 )
  {
    *v22 = 0;
    *((_QWORD *)v22 + 1) = 0LL;
    v22[4] = 0;
    v22[6] = 1;
  }
  else
  {
    v10 = 0LL;
  }
  if ( v10 )
  {
    *v10 = 16;
    *((_QWORD *)v10 + 2) = v8;
    v26 = (*(__int64 (__fastcall **)(_QWORD, int *, __int64))(**((_QWORD **)this + 1) + 56LL))(
            *((_QWORD *)this + 1),
            v10,
            13LL);
    if ( !v26 )
    {
      v28 = WdLogNewEntry5_WdLowResource(v27);
      *(_QWORD *)(v28 + 24) = 375LL;
      WdLogEvent5_WdLowResource(v28);
      LODWORD(v20) = -1073741801;
LABEL_18:
      if ( v10 )
      {
        DXGSHAREDVMOBJECT::ReleaseReference(v10);
        return (unsigned int)v20;
      }
      goto LABEL_11;
    }
    *a5 = v26;
LABEL_17:
    if ( (int)v20 >= 0 )
      return (unsigned int)v20;
    goto LABEL_18;
  }
  v24 = WdLogNewEntry5_WdLowResource(v23);
  *(_QWORD *)(v24 + 24) = 364LL;
  WdLogEvent5_WdLowResource(v24);
  LODWORD(v20) = -1073741801;
LABEL_11:
  if ( v8 )
    ObCloseHandle(v8, 0);
  return (unsigned int)v20;
}
