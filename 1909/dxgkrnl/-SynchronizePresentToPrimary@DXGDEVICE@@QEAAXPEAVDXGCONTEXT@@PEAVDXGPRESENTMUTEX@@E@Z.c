/*
 * XREFs of ?SynchronizePresentToPrimary@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVDXGPRESENTMUTEX@@E@Z @ 0x1C013E560
 * Callers:
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C010A6E0 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 *     ?PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITPRESENTTOHWQUEUE@@IPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@@Z @ 0x1C013DBD8 (-PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITPRESENTTOHWQUEUE@@IPEAVCOREDEVICEACCESS@@PEAV.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0007290 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007784 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000801C (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 *     ?GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z @ 0x1C00F61DC (-GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z.c)
 */

void __fastcall DXGDEVICE::SynchronizePresentToPrimary(
        DXGDEVICE *this,
        struct DXGCONTEXT *a2,
        struct DXGPRESENTMUTEX *a3,
        char a4)
{
  __int64 v4; // r14
  __int64 v7; // rbx
  unsigned __int64 v8; // r15
  _QWORD *v9; // rsi
  _QWORD *v10; // rcx
  __int64 v11; // rbx
  __int64 **v12; // r12
  __int64 *v13; // rcx
  __int64 v14; // rax
  __int64 **v15; // rdx
  __int64 *v16; // rdi
  __int64 v17; // rax
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rbx
  __int64 v23; // rax
  int v24; // eax
  struct _VIDSCH_SYNC_OBJECT *VidSchSyncObject; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v26[16]; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v27; // [rsp+68h] [rbp-98h] BYREF
  _QWORD v28[64]; // [rsp+70h] [rbp-90h] BYREF

  v4 = *((_QWORD *)this + 2);
  v7 = *(_QWORD *)(v4 + 672);
  v8 = *(_QWORD *)(v4 + 680);
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v4 + 712, 0LL);
  *(_QWORD *)(v4 + 720) = KeGetCurrentThread();
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v26, (struct DXGFASTMUTEX *const)(v7 + 32), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v26);
  VidSchSyncObject = DXGSYNCOBJECT::GetVidSchSyncObject((DXGSYNCOBJECT *)v7, (struct ADAPTER_RENDER *)v4);
  if ( a4 || !*((_QWORD *)a2 + 20) && *(_DWORD *)(v4 + 704) >= 0x40u )
  {
    v11 = 0LL;
    v12 = (__int64 **)(v4 + 688);
    while ( 1 )
    {
      v13 = 0LL;
      if ( *v12 != (__int64 *)v12 )
        v13 = *v12;
      if ( !v13 )
        break;
      v14 = *v13;
      if ( *v13 )
      {
        if ( *(__int64 **)(v14 + 8) != v13 )
          goto LABEL_23;
        v15 = (__int64 **)v13[1];
        if ( *v15 != v13 )
          goto LABEL_23;
        *v15 = (__int64 *)v14;
        *(_QWORD *)(v14 + 8) = v15;
        --*(_DWORD *)(v4 + 704);
      }
      *v13 = 0LL;
      v16 = v13 - 20;
      if ( a2 != (struct DXGCONTEXT *)(v13 - 20)
        && (*((_DWORD *)v16 + 103) & 0x10) == 0
        && (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v16[2] + 16) + 520LL) + 8LL)
                                                      + 784LL))(v16[34])
        && (unsigned int)v11 < 0x40 )
      {
        v28[v11] = v16[34];
        v11 = (unsigned int)(v11 + 1);
      }
    }
    if ( (_DWORD)v11 )
    {
      v17 = *((_QWORD *)a2 + 2);
      v27 = ++v8;
      v18 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD *, int, struct _VIDSCH_SYNC_OBJECT **, _DWORD, __int64 *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v17 + 16) + 520LL) + 8LL) + 640LL))(
              0LL,
              0LL,
              (unsigned int)v11,
              v28,
              1,
              &VidSchSyncObject,
              0,
              &v27);
      v22 = v18;
      if ( v18 < 0 )
      {
LABEL_30:
        v23 = WdLogNewEntry5_WdError(v20, v19, v21);
        *(_QWORD *)(v23 + 24) = v22;
        *(_QWORD *)(v23 + 32) = a2;
        WdLogEvent5_WdError(v23);
        goto LABEL_4;
      }
      *(_QWORD *)(v4 + 680) = v8;
    }
  }
  if ( *((_QWORD *)a2 + 22) >= v8 )
    goto LABEL_4;
  if ( (*((_DWORD *)a2 + 103) & 0x10) == 0 )
  {
    v24 = (*(__int64 (__fastcall **)(_QWORD, struct _VIDSCH_SYNC_OBJECT *, unsigned __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL) + 520LL) + 8LL)
                                                                                            + 624LL))(
            *((_QWORD *)a2 + 34),
            VidSchSyncObject,
            v8);
    v22 = v24;
    if ( v24 < 0 )
      goto LABEL_30;
  }
  *((_QWORD *)a2 + 22) = v8;
LABEL_4:
  v9 = (_QWORD *)((char *)a2 + 160);
  if ( !*v9 )
  {
    v10 = *(_QWORD **)(v4 + 696);
    if ( *v10 != v4 + 688 )
LABEL_23:
      __fastfail(3u);
    *v9 = v4 + 688;
    v9[1] = v10;
    *v10 = v9;
    *(_QWORD *)(v4 + 696) = v9;
    ++*(_DWORD *)(v4 + 704);
  }
  DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v26);
  *(_QWORD *)(v4 + 720) = 0LL;
  ExReleasePushLockExclusiveEx(v4 + 712, 0LL);
  KeLeaveCriticalRegion();
  if ( v26[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v26);
}
