/*
 * XREFs of ?ExtractBundleObject@DXG_HOST_REMOTEOBJECTCHANNEL@@QEAAJIKPEAPEAXPEAU_EPROCESS@@@Z @ 0x1C022F710
 * Callers:
 *     ?DxgkExtractRemoteBundleObject@@YAJIKPEAPEAXPEAU_EPROCESS@@@Z @ 0x1C022EF40 (-DxgkExtractRemoteBundleObject@@YAJIKPEAPEAXPEAU_EPROCESS@@@Z.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000DF84 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000E054 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000E790 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C00131E4 (-Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     ?AddReference@DXGSHAREDVMOBJECT@@QEAAJXZ @ 0x1C01E7A58 (-AddReference@DXGSHAREDVMOBJECT@@QEAAJXZ.c)
 *     ?ReleaseReference@DXGSHAREDVMOBJECT@@QEAAJXZ @ 0x1C01E9E9C (-ReleaseReference@DXGSHAREDVMOBJECT@@QEAAJXZ.c)
 *     DxgkExtractBundleObjectInternal @ 0x1C021D6D8 (DxgkExtractBundleObjectInternal.c)
 */

__int64 __fastcall DXG_HOST_REMOTEOBJECTCHANNEL::ExtractBundleObject(
        DXG_HOST_REMOTEOBJECTCHANNEL *this,
        __int64 a2,
        __int64 a3,
        void **a4,
        struct _EPROCESS *a5)
{
  __int64 v6; // rbx
  DXG_HOST_REMOTEOBJECTCHANNEL *v7; // rdi
  __int64 v8; // r14
  __int64 v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rax
  __int64 v14; // rcx
  struct DXGFASTMUTEX *v16; // rax
  DXGSHAREDVMOBJECT *v17; // rax
  __int64 v18; // rcx
  DXGSHAREDVMOBJECT *v19; // rsi
  struct _KPROCESS *v20; // rdx
  __int64 v21; // rcx
  _DWORD *v22; // rdi
  int BundleObjectInternal; // eax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rax
  __int64 v28; // rax
  _QWORD *v29; // rax
  _BYTE v30[8]; // [rsp+20h] [rbp-B1h] BYREF
  char v31; // [rsp+28h] [rbp-A9h]
  _QWORD v32[7]; // [rsp+30h] [rbp-A1h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+68h] [rbp-69h] BYREF
  char v34; // [rsp+98h] [rbp-39h]
  _BYTE v35[64]; // [rsp+A0h] [rbp-31h] BYREF

  v6 = (unsigned int)a3;
  v7 = this;
  v8 = (unsigned int)a2;
  if ( (_DWORD)a2 && (unsigned int)(a3 - 1) <= 0xF && a4 )
  {
    v9 = *((_QWORD *)this + 3);
    if ( PsGetCurrentProcess(this, a2) != v9 && (unsigned __int8)PsGetProcessExitProcessCalled(v9) )
    {
      v13 = WdLogNewEntry5_WdWarning(v11, v10, v12);
      v14 = *((_QWORD *)v7 + 3);
      LODWORD(v7) = -1073741558;
      *(_QWORD *)(v13 + 24) = v14;
      *(_QWORD *)(v13 + 32) = -1073741558LL;
      WdLogEvent5_WdWarning(v13);
      return (unsigned int)v7;
    }
    v16 = (struct DXGFASTMUTEX *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)v7 + 1) + 48LL))(*((_QWORD *)v7 + 1));
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v30, v16, 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v30);
    v17 = (DXGSHAREDVMOBJECT *)(*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)v7 + 1) + 72LL))(
                                 *((_QWORD *)v7 + 1),
                                 (unsigned int)v8,
                                 13LL);
    v19 = v17;
    if ( v17 && *(_DWORD *)v17 == 16 )
    {
      DXGSHAREDVMOBJECT::AddReference(v17);
      if ( v31 )
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v30);
      v20 = (struct _KPROCESS *)*((_QWORD *)v7 + 3);
      v34 = 0;
      CPROCESSATTACHHELPER::Attach(&ApcState, v20);
      memset(v32, 0, sizeof(v32));
      if ( (_DWORD)v6 )
      {
        v21 = v6;
        v22 = v35;
        while ( v21 )
        {
          *v22++ = 0x10000000;
          --v21;
        }
      }
      v32[0] = *((_QWORD *)v19 + 2);
      LODWORD(v32[1]) = v6;
      v32[2] = v35;
      v32[3] = a4;
      BundleObjectInternal = DxgkExtractBundleObjectInternal(0LL, 0, a5, (ULONG64)v32);
      v7 = (DXG_HOST_REMOTEOBJECTCHANNEL *)BundleObjectInternal;
      if ( BundleObjectInternal < 0 )
      {
        v27 = WdLogNewEntry5_WdWarning(v25, v24, v26);
        *(_QWORD *)(v27 + 24) = v7;
        WdLogEvent5_WdWarning(v27);
      }
      DXGSHAREDVMOBJECT::ReleaseReference((int *)v19);
      if ( v34 )
        KeUnstackDetachProcess(&ApcState);
      return (unsigned int)v7;
    }
    v28 = WdLogNewEntry5_WdError(v18);
    *(_QWORD *)(v28 + 24) = v8;
    WdLogEvent5_WdError(v28);
    if ( v31 )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v30);
  }
  else
  {
    v29 = (_QWORD *)WdLogNewEntry5_WdWarning(this, a2, a3);
    v29[3] = v8;
    v29[4] = v6;
    v29[5] = a4;
    v29[6] = -1073741811LL;
    WdLogEvent5_WdWarning(v29);
  }
  return 3221225485LL;
}
