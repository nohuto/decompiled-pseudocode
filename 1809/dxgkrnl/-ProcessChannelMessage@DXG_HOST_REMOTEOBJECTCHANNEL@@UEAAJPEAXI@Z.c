/*
 * XREFs of ?ProcessChannelMessage@DXG_HOST_REMOTEOBJECTCHANNEL@@UEAAJPEAXI@Z @ 0x1C022F970
 * Callers:
 *     <none>
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000DF84 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000E054 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000E790 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?ReleaseReference@DXGPROCESS@@QEAAXXZ @ 0x1C0010340 (-ReleaseReference@DXGPROCESS@@QEAAXXZ.c)
 *     ??0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ @ 0x1C001048C (--0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ.c)
 *     ?AcquireReference@DXGPROCESS@@QEAAXXZ @ 0x1C00104E0 (-AcquireReference@DXGPROCESS@@QEAAXXZ.c)
 *     ??1CEnsureCurrentDxgProcess@@QEAA@XZ @ 0x1C00118CC (--1CEnsureCurrentDxgProcess@@QEAA@XZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0011A40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0012428 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C00131E4 (-Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     ?EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z @ 0x1C0020D84 (-EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     ?AttachToProcess@CEnsureCurrentDxgProcess@@QEAAJPEAVDXGPROCESS@@@Z @ 0x1C0031600 (-AttachToProcess@CEnsureCurrentDxgProcess@@QEAAJPEAVDXGPROCESS@@@Z.c)
 *     ?AddReference@DXGSHAREDVMOBJECT@@QEAAJXZ @ 0x1C01E7A58 (-AddReference@DXGSHAREDVMOBJECT@@QEAAJXZ.c)
 *     ?ReleaseReference@DXGSHAREDVMOBJECT@@QEAAJXZ @ 0x1C01E9E9C (-ReleaseReference@DXGSHAREDVMOBJECT@@QEAAJXZ.c)
 *     ?CreateBundleObjectCallback@DXG_HOST_REMOTEOBJECTCHANNEL@@IEAAJKPEAIPEAPEAX0@Z @ 0x1C022EC70 (-CreateBundleObjectCallback@DXG_HOST_REMOTEOBJECTCHANNEL@@IEAAJKPEAIPEAPEAX0@Z.c)
 *     ?DestroyBundleObjectCallback@DXG_HOST_REMOTEOBJECTCHANNEL@@IEAAJI@Z @ 0x1C022EED8 (-DestroyBundleObjectCallback@DXG_HOST_REMOTEOBJECTCHANNEL@@IEAAJI@Z.c)
 */

__int64 __fastcall DXG_HOST_REMOTEOBJECTCHANNEL::ProcessChannelMessage(
        struct _KPROCESS **this,
        unsigned int *a2,
        __int64 a3)
{
  __int64 v3; // rbx
  _QWORD *v6; // rax
  __int64 v8; // rcx
  __int64 v9; // rcx
  struct _KPROCESS *v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  struct _KPROCESS *v14; // rdx
  struct _KPROCESS *v15; // rdi
  _QWORD *v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  struct _KTHREAD **v20; // r12
  __int64 v21; // rcx
  struct _KTHREAD *v22; // r8
  __int64 v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // r14
  __int64 v27; // rax
  __int64 v28; // rcx
  struct _KTHREAD *v29; // r8
  unsigned int v30; // eax
  __int64 v31; // r13
  __int64 v32; // rdx
  __int64 v33; // rax
  DXGSHAREDVMOBJECT *v34; // r12
  int v35; // eax
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  struct _KPROCESS *v41; // rdx
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // rax
  __int64 v46; // rax
  int v47; // eax
  unsigned int i; // edi
  int *v49; // rcx
  __int64 v50; // [rsp+30h] [rbp-D0h] BYREF
  struct _KTHREAD **ProcessDxgProcess; // [rsp+38h] [rbp-C8h] BYREF
  char v52; // [rsp+40h] [rbp-C0h]
  _BYTE v53[16]; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE v54[24]; // [rsp+58h] [rbp-A8h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+70h] [rbp-90h] BYREF
  char v56; // [rsp+A0h] [rbp-60h]
  PVOID P[16]; // [rsp+B0h] [rbp-50h] BYREF
  void *v58[16]; // [rsp+130h] [rbp+30h] BYREF
  __int64 v59; // [rsp+1B0h] [rbp+B0h] BYREF
  unsigned int v60[2]; // [rsp+1B8h] [rbp+B8h] BYREF

  v3 = (unsigned int)a3;
  if ( (unsigned int)a3 < 0xC )
  {
    v6 = (_QWORD *)WdLogNewEntry5_WdWarning(this, a2, a3);
    v6[3] = v3;
LABEL_3:
    v6[4] = -1073741811LL;
LABEL_4:
    WdLogEvent5_WdWarning(v6);
    return 3221225485LL;
  }
  v8 = a2[2] - 1;
  if ( a2[2] == 1 )
  {
    if ( (_DWORD)a3 != 88 )
      goto LABEL_14;
    v15 = this[3];
    if ( (struct _KPROCESS *)PsGetCurrentProcess(v8, a2) != v15 && (unsigned __int8)PsGetProcessExitProcessCalled(v15) )
      goto LABEL_17;
    *(_QWORD *)v60 = 2LL;
    v59 = 0LL;
    HIDWORD(v59) = a2[1];
    LODWORD(v59) = 1869901170;
    memset(v58, 0, sizeof(v58));
    if ( a2[4] > 0x10 )
    {
      v6 = (_QWORD *)WdLogNewEntry5_WdWarning(v18, v17, v19);
      v9 = a2[4];
      goto LABEL_20;
    }
    if ( a2[5] >= 2 )
    {
      v6 = (_QWORD *)WdLogNewEntry5_WdWarning(v18, v17, v19);
      v9 = a2[5];
      goto LABEL_20;
    }
    ProcessDxgProcess = (struct _KTHREAD **)PsGetProcessDxgProcess(this[3]);
    v20 = ProcessDxgProcess;
    memset(P, 0, sizeof(P));
    DXGPROCESSCALLOUTMUTEX::DXGPROCESSCALLOUTMUTEX((DXGPROCESSCALLOUTMUTEX *)v53);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v53);
    DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v54, ProcessDxgProcess);
    v23 = a2[3];
    v24 = (a2[3] >> 6) & 0xFFFFFF;
    if ( (unsigned int)v24 < *((_DWORD *)ProcessDxgProcess + 62) )
    {
      v22 = ProcessDxgProcess[29];
      v23 = ((unsigned int)v23 >> 25) & 0x60;
      v21 = *((unsigned int *)v22 + 4 * v24 + 2);
      if ( (_BYTE)v23 == (*((_BYTE *)v22 + 16 * v24 + 8) & 0x60) && (v21 & 0x2000) == 0 && (v21 & 0x1F) != 0 )
      {
        v21 &= 0x1Fu;
        if ( (_BYTE)v21 == 12 )
        {
          v26 = *((_QWORD *)v22 + 2 * (unsigned int)v24);
          if ( v26 )
          {
            DXGPROCESS::AcquireReference((DXGPROCESS *)v26);
LABEL_31:
            if ( v26 )
            {
              if ( (a2[5] & 1) != 0 )
              {
                v30 = 0;
                LODWORD(v50) = 0;
                if ( a2[4] )
                {
                  while ( 1 )
                  {
                    v31 = v30;
                    v32 = a2[v30 + 6];
                    v33 = (a2[v30 + 6] >> 6) & 0xFFFFFF;
                    if ( (unsigned int)v33 >= *((_DWORD *)v20 + 62) )
                      break;
                    v32 = ((unsigned int)v32 >> 25) & 0x60;
                    v29 = ProcessDxgProcess[29];
                    v28 = *((unsigned int *)v29 + 4 * v33 + 2);
                    if ( (_BYTE)v32 != (*((_BYTE *)v29 + 16 * v33 + 8) & 0x60)
                      || (v28 & 0x2000) != 0
                      || (v28 & 0x1F) == 0 )
                    {
                      break;
                    }
                    v28 &= 0x1Fu;
                    if ( (_BYTE)v28 != 13 )
                    {
                      v36 = WdLogNewEntry5_WdError(v28);
                      *(_QWORD *)(v36 + 24) = 316LL;
                      WdLogEvent5_WdError(v36);
                      break;
                    }
                    v34 = (DXGSHAREDVMOBJECT *)*((_QWORD *)v29 + 2 * (unsigned int)v33);
                    if ( !v34 )
                      break;
                    LOBYTE(v35) = EvaluateCurrentState((int **)&g_Feature_1460972858_58170315_FeatureDescriptorDetails);
                    if ( v35 )
                    {
                      DXGSHAREDVMOBJECT::AddReference(v34);
                      P[v31] = v34;
                    }
                    v58[v31] = (void *)*((_QWORD *)v34 + 1);
                    a2[v31 + 6] = *(_DWORD *)v34;
                    v30 = v50 + 1;
                    LODWORD(v50) = v30;
                    if ( v30 >= a2[4] )
                      goto LABEL_48;
                    v20 = ProcessDxgProcess;
                  }
                  v37 = WdLogNewEntry5_WdWarning(v28, v32, v29);
                  *(_QWORD *)(v37 + 24) = a2[v31 + 6];
                  *(_QWORD *)(v37 + 32) = -1073741811LL;
                  WdLogEvent5_WdWarning(v37);
                  HIDWORD(v59) = -1073741811;
                  DXGPROCESS::ReleaseReference((DXGPROCESS *)v26);
                  v26 = 0LL;
                }
              }
            }
LABEL_48:
            DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v54);
            if ( v53[8] )
              DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v53);
            if ( v26 )
            {
              DXGAUTOMUTEX::DXGAUTOMUTEX(
                (DXGAUTOMUTEX *)&ProcessDxgProcess,
                *(struct DXGFASTMUTEX *const *)(v26 + 112),
                0);
              DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&ProcessDxgProcess);
              if ( (*(_BYTE *)(v26 + 323) & 8) != 0 && *(_DWORD *)(v26 + 40) == 1 )
              {
                v41 = this[3];
                v56 = 0;
                CPROCESSATTACHHELPER::Attach(&ApcState, v41);
                v50 = 0LL;
                CEnsureCurrentDxgProcess::AttachToProcess((CEnsureCurrentDxgProcess *)&v50, (struct DXGPROCESS *)v26);
                if ( v50 )
                {
                  HIDWORD(v59) = DXG_HOST_REMOTEOBJECTCHANNEL::CreateBundleObjectCallback(
                                   (DXG_HOST_REMOTEOBJECTCHANNEL *)this,
                                   a2[4],
                                   a2 + 6,
                                   v58,
                                   &v60[1]);
                }
                else
                {
                  v45 = WdLogNewEntry5_WdWarning(v43, v42, v44);
                  *(_QWORD *)(v45 + 24) = a2[3];
                  *(_QWORD *)(v45 + 32) = -1073741811LL;
                  WdLogEvent5_WdWarning(v45);
                  HIDWORD(v59) = -1073741811;
                }
                CEnsureCurrentDxgProcess::~CEnsureCurrentDxgProcess((CEnsureCurrentDxgProcess *)&v50);
                if ( v56 )
                  KeUnstackDetachProcess(&ApcState);
              }
              else
              {
                v46 = WdLogNewEntry5_WdWarning(v39, v38, v40);
                *(_QWORD *)(v46 + 24) = a2[3];
                *(_QWORD *)(v46 + 32) = -1073741811LL;
                WdLogEvent5_WdWarning(v46);
                HIDWORD(v59) = -1073741811;
              }
              if ( v52 )
                DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&ProcessDxgProcess);
            }
            LOBYTE(v47) = EvaluateCurrentState((int **)&g_Feature_1460972858_58170315_FeatureDescriptorDetails);
            if ( v47 )
            {
              for ( i = 0; i < a2[4]; ++i )
              {
                v49 = (int *)P[i];
                if ( v49 )
                {
                  DXGSHAREDVMOBJECT::ReleaseReference(v49);
                  P[i] = 0LL;
                }
              }
            }
            if ( v26 )
            {
              DXGPROCESSCALLOUTMUTEX::DXGPROCESSCALLOUTMUTEX((DXGPROCESSCALLOUTMUTEX *)&ProcessDxgProcess);
              DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&ProcessDxgProcess);
              DXGPROCESS::ReleaseReference((DXGPROCESS *)v26);
              if ( v52 )
                DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&ProcessDxgProcess);
            }
            goto LABEL_69;
          }
LABEL_30:
          v27 = WdLogNewEntry5_WdWarning(v21, v23, v22);
          *(_QWORD *)(v27 + 24) = a2[3];
          *(_QWORD *)(v27 + 32) = -1073741811LL;
          WdLogEvent5_WdWarning(v27);
          HIDWORD(v59) = -1073741811;
          goto LABEL_31;
        }
        v25 = WdLogNewEntry5_WdError(v21);
        *(_QWORD *)(v25 + 24) = 316LL;
        WdLogEvent5_WdError(v25);
      }
    }
    v26 = 0LL;
    goto LABEL_30;
  }
  if ( a2[2] != 3 )
  {
    v6 = (_QWORD *)WdLogNewEntry5_WdWarning(v8, a2, a3);
    v9 = (int)a2[2];
LABEL_20:
    v6[3] = v9;
    goto LABEL_3;
  }
  if ( (_DWORD)a3 != 16 )
  {
LABEL_14:
    v6 = (_QWORD *)WdLogNewEntry5_WdWarning(v8, a2, a3);
    v6[3] = (int)a2[2];
    v6[4] = v3;
    v6[5] = -1073741811LL;
    goto LABEL_4;
  }
  v10 = this[3];
  if ( (struct _KPROCESS *)PsGetCurrentProcess(v8, a2) != v10 && (unsigned __int8)PsGetProcessExitProcessCalled(v10) )
  {
LABEL_17:
    v16 = (_QWORD *)WdLogNewEntry5_WdWarning(v12, v11, v13);
    v16[3] = (int)a2[2];
    v16[4] = this[3];
    v16[5] = -1073741558LL;
    WdLogEvent5_WdWarning(v16);
    return 3221225738LL;
  }
  v14 = this[3];
  v56 = 0;
  v59 = 0LL;
  *(_QWORD *)v60 = 0LL;
  HIDWORD(v59) = a2[1];
  LODWORD(v59) = 1869901170;
  v60[0] = 4;
  CPROCESSATTACHHELPER::Attach(&ApcState, v14);
  HIDWORD(v59) = DXG_HOST_REMOTEOBJECTCHANNEL::DestroyBundleObjectCallback((DXG_HOST_REMOTEOBJECTCHANNEL *)this, a2[3]);
  if ( v56 )
    KeUnstackDetachProcess(&ApcState);
LABEL_69:
  (*(void (__fastcall **)(struct _KPROCESS *, __int64 *, __int64))(*(_QWORD *)this[1] + 24LL))(this[1], &v59, 16LL);
  return 0LL;
}
