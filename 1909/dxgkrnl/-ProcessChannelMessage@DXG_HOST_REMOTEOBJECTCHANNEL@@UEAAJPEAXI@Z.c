/*
 * XREFs of ?ProcessChannelMessage@DXG_HOST_REMOTEOBJECTCHANNEL@@UEAAJPEAXI@Z @ 0x1C0264610
 * Callers:
 *     <none>
 * Callees:
 *     ?Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C000224C (-Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0007290 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007784 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000801C (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1CEnsureCurrentDxgProcess@@QEAA@XZ @ 0x1C000AAAC (--1CEnsureCurrentDxgProcess@@QEAA@XZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000BD80 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000C650 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?ReleaseReference@DXGPROCESS@@QEAAXXZ @ 0x1C0018D50 (-ReleaseReference@DXGPROCESS@@QEAAXXZ.c)
 *     ??0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ @ 0x1C0018D9C (--0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ.c)
 *     ?AcquireReference@DXGPROCESS@@QEAAXXZ @ 0x1C0018DCC (-AcquireReference@DXGPROCESS@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0025440 (memset.c)
 *     ?AttachToProcess@CEnsureCurrentDxgProcess@@QEAAJPEAVDXGPROCESS@@@Z @ 0x1C0036FAC (-AttachToProcess@CEnsureCurrentDxgProcess@@QEAAJPEAVDXGPROCESS@@@Z.c)
 *     ?CreateBundleObjectCallback@DXG_HOST_REMOTEOBJECTCHANNEL@@IEAAJKPEAIPEAPEAX0@Z @ 0x1C0263900 (-CreateBundleObjectCallback@DXG_HOST_REMOTEOBJECTCHANNEL@@IEAAJKPEAIPEAPEAX0@Z.c)
 *     ?DestroyBundleObjectCallback@DXG_HOST_REMOTEOBJECTCHANNEL@@IEAAJI@Z @ 0x1C0263B78 (-DestroyBundleObjectCallback@DXG_HOST_REMOTEOBJECTCHANNEL@@IEAAJI@Z.c)
 */

__int64 __fastcall DXG_HOST_REMOTEOBJECTCHANNEL::ProcessChannelMessage(
        struct _KPROCESS **this,
        unsigned int *a2,
        __int64 a3)
{
  __int64 v3; // rbx
  _QWORD *v6; // rax
  __int64 v7; // rbx
  __int64 v9; // rcx
  __int64 v10; // rcx
  struct _KPROCESS *v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  struct _KPROCESS *v15; // rdx
  struct _KPROCESS *v16; // rbx
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 ProcessDxgProcess; // r13
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r14
  __int64 v27; // r14
  __int64 v28; // rax
  __int64 v29; // r14
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // rax
  __int64 v35; // r12
  __int64 v36; // r10
  __int64 v37; // rcx
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  struct _KPROCESS *v44; // rdx
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // rax
  __int64 v49; // rdx
  __int64 v50; // rax
  __int64 v51; // rdx
  __int64 v52; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v53[8]; // [rsp+38h] [rbp-C8h] BYREF
  char v54; // [rsp+40h] [rbp-C0h]
  _BYTE v55[16]; // [rsp+50h] [rbp-B0h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+60h] [rbp-A0h] BYREF
  char v57; // [rsp+90h] [rbp-70h]
  void *v58[16]; // [rsp+A0h] [rbp-60h] BYREF
  int v59; // [rsp+120h] [rbp+20h] BYREF
  int v60; // [rsp+124h] [rbp+24h]
  int v61; // [rsp+128h] [rbp+28h]
  unsigned int v62; // [rsp+12Ch] [rbp+2Ch] BYREF

  v3 = (unsigned int)a3;
  if ( (unsigned int)a3 < 0xC )
  {
    v6 = (_QWORD *)WdLogNewEntry5_WdWarning(this, a2, a3);
    v6[3] = v3;
LABEL_3:
    LODWORD(v7) = -1073741811;
    v6[4] = -1073741811LL;
LABEL_4:
    WdLogEvent5_WdWarning(v6);
    return (unsigned int)v7;
  }
  v9 = a2[2] - 1;
  if ( a2[2] == 1 )
  {
    if ( (_DWORD)a3 != 88 )
    {
LABEL_14:
      v6 = (_QWORD *)WdLogNewEntry5_WdWarning(v9, a2, a3);
      v6[3] = (int)a2[2];
      v6[4] = v3;
      v7 = -1073741811LL;
LABEL_15:
      v6[5] = v7;
      goto LABEL_4;
    }
    v16 = this[3];
    if ( (struct _KPROCESS *)PsGetCurrentProcess(v9, a2) != v16 && (unsigned __int8)PsGetProcessExitProcessCalled(v16) )
      goto LABEL_18;
    v17 = a2[1];
    v62 = 0;
    v60 = v17;
    v59 = 1869901170;
    v61 = 2;
    memset(v58, 0, sizeof(v58));
    if ( a2[4] > 0x10 )
    {
      v6 = (_QWORD *)WdLogNewEntry5_WdWarning(v19, v18, v20);
      v10 = a2[4];
      goto LABEL_21;
    }
    if ( a2[5] >= 2 )
    {
      v6 = (_QWORD *)WdLogNewEntry5_WdWarning(v19, v18, v20);
      v10 = a2[5];
      goto LABEL_21;
    }
    ProcessDxgProcess = PsGetProcessDxgProcess(this[3]);
    DXGPROCESSCALLOUTMUTEX::DXGPROCESSCALLOUTMUTEX((DXGPROCESSCALLOUTMUTEX *)v55, v22);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v55);
    DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED(
      (DXGHANDLETABLELOCKSHARED *)v53,
      (struct _KTHREAD **)ProcessDxgProcess);
    v24 = a2[3];
    v25 = (a2[3] >> 6) & 0xFFFFFF;
    if ( (unsigned int)v25 < *(_DWORD *)(ProcessDxgProcess + 224) )
    {
      v23 = *(_QWORD *)(ProcessDxgProcess + 208);
      v26 = (unsigned int)v25;
      v24 = ((unsigned int)v24 >> 25) & 0x60;
      v25 = *(unsigned int *)(v23 + 16LL * (unsigned int)v25 + 8);
      if ( (_BYTE)v24 == (v25 & 0x60) && (v25 & 0x2000) == 0 && (v25 & 0x1F) != 0 )
      {
        v27 = 2 * v26;
        v25 &= 0x1Fu;
        if ( (_BYTE)v25 == 12 )
        {
          v29 = *(_QWORD *)(v23 + 8 * v27);
          if ( v29 )
          {
            DXGPROCESS::AcquireReference((DXGPROCESS *)v29, v24);
LABEL_32:
            if ( v29 )
            {
              if ( (a2[5] & 1) != 0 )
              {
                v32 = 0LL;
                if ( a2[4] )
                {
                  while ( 1 )
                  {
                    v33 = a2[v32 + 6];
                    v34 = (a2[v32 + 6] >> 6) & 0xFFFFFF;
                    v35 = (unsigned int)v32;
                    if ( (unsigned int)v34 >= *(_DWORD *)(ProcessDxgProcess + 224) )
                      break;
                    v36 = *(_QWORD *)(ProcessDxgProcess + 208);
                    v33 = ((unsigned int)v33 >> 25) & 0x60;
                    v31 = *(unsigned int *)(v36 + 16 * v34 + 8);
                    if ( (_BYTE)v33 != (*(_BYTE *)(v36 + 16 * v34 + 8) & 0x60)
                      || (v31 & 0x2000) != 0
                      || (v31 & 0x1F) == 0 )
                    {
                      break;
                    }
                    v37 = v31 & 0x1F;
                    if ( (_BYTE)v37 != 13 )
                    {
                      v38 = WdLogNewEntry5_WdError(v37, v32, v33);
                      *(_QWORD *)(v38 + 24) = 267LL;
                      WdLogEvent5_WdError(v38);
                      break;
                    }
                    v31 = *(_QWORD *)(v36 + 16LL * (unsigned int)v34);
                    if ( !v31 )
                      break;
                    v58[v32] = *(void **)(v31 + 8);
                    a2[v32 + 6] = *(_DWORD *)v31;
                    v32 = (unsigned int)(v32 + 1);
                    if ( (unsigned int)v32 >= a2[4] )
                      goto LABEL_47;
                  }
                  v39 = WdLogNewEntry5_WdWarning(v31, v32, v33);
                  *(_QWORD *)(v39 + 24) = a2[v35 + 6];
                  *(_QWORD *)(v39 + 32) = -1073741811LL;
                  WdLogEvent5_WdWarning(v39);
                  v60 = -1073741811;
                  DXGPROCESS::ReleaseReference((DXGPROCESS *)v29, v40);
                  v29 = 0LL;
                }
              }
            }
LABEL_47:
            DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v53);
            if ( v55[8] )
              DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v55);
            if ( v29 )
            {
              DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v53, *(struct DXGFASTMUTEX *const *)(v29 + 104), 0);
              DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v53);
              if ( (*(_BYTE *)(v29 + 299) & 8) != 0 && *(_DWORD *)(v29 + 40) == 1 )
              {
                v44 = this[3];
                v57 = 0;
                CPROCESSATTACHHELPER::Attach(&ApcState, v44);
                v52 = 0LL;
                CEnsureCurrentDxgProcess::AttachToProcess((CEnsureCurrentDxgProcess *)&v52, (struct DXGPROCESS *)v29);
                if ( v52 )
                {
                  v60 = DXG_HOST_REMOTEOBJECTCHANNEL::CreateBundleObjectCallback(
                          (DXG_HOST_REMOTEOBJECTCHANNEL *)this,
                          a2[4],
                          a2 + 6,
                          v58,
                          &v62);
                }
                else
                {
                  v48 = WdLogNewEntry5_WdWarning(v46, v45, v47);
                  *(_QWORD *)(v48 + 24) = a2[3];
                  *(_QWORD *)(v48 + 32) = -1073741811LL;
                  WdLogEvent5_WdWarning(v48);
                  v60 = -1073741811;
                }
                CEnsureCurrentDxgProcess::~CEnsureCurrentDxgProcess((CEnsureCurrentDxgProcess *)&v52);
                if ( v57 )
                  KeUnstackDetachProcess(&ApcState);
              }
              else
              {
                v50 = WdLogNewEntry5_WdWarning(v42, v41, v43);
                *(_QWORD *)(v50 + 24) = a2[3];
                *(_QWORD *)(v50 + 32) = -1073741811LL;
                WdLogEvent5_WdWarning(v50);
                v60 = -1073741811;
              }
              if ( v54 )
                DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v53);
              DXGPROCESSCALLOUTMUTEX::DXGPROCESSCALLOUTMUTEX((DXGPROCESSCALLOUTMUTEX *)v53, v49);
              DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v53);
              DXGPROCESS::ReleaseReference((DXGPROCESS *)v29, v51);
              if ( v54 )
                DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v53);
            }
            goto LABEL_62;
          }
LABEL_31:
          v30 = WdLogNewEntry5_WdWarning(v25, v24, v23);
          *(_QWORD *)(v30 + 24) = a2[3];
          *(_QWORD *)(v30 + 32) = -1073741811LL;
          WdLogEvent5_WdWarning(v30);
          v60 = -1073741811;
          goto LABEL_32;
        }
        v28 = WdLogNewEntry5_WdError(v25, v24, v23);
        *(_QWORD *)(v28 + 24) = 267LL;
        WdLogEvent5_WdError(v28);
      }
    }
    v29 = 0LL;
    goto LABEL_31;
  }
  if ( a2[2] != 3 )
  {
    v6 = (_QWORD *)WdLogNewEntry5_WdWarning(v9, a2, a3);
    v10 = (int)a2[2];
LABEL_21:
    v6[3] = v10;
    goto LABEL_3;
  }
  if ( (_DWORD)a3 != 16 )
    goto LABEL_14;
  v11 = this[3];
  if ( (struct _KPROCESS *)PsGetCurrentProcess(v9, a2) != v11 && (unsigned __int8)PsGetProcessExitProcessCalled(v11) )
  {
LABEL_18:
    v6 = (_QWORD *)WdLogNewEntry5_WdWarning(v13, v12, v14);
    v7 = -1073741558LL;
    v6[3] = (int)a2[2];
    v6[4] = this[3];
    goto LABEL_15;
  }
  v15 = this[3];
  v62 = 0;
  v59 = 1869901170;
  v61 = 4;
  v57 = 0;
  CPROCESSATTACHHELPER::Attach(&ApcState, v15);
  v60 = DXG_HOST_REMOTEOBJECTCHANNEL::DestroyBundleObjectCallback((DXG_HOST_REMOTEOBJECTCHANNEL *)this, a2[3]);
  if ( v57 )
    KeUnstackDetachProcess(&ApcState);
LABEL_62:
  (*(void (__fastcall **)(struct _KPROCESS *, int *, __int64))(*(_QWORD *)this[1] + 24LL))(this[1], &v59, 16LL);
  return 0LL;
}
