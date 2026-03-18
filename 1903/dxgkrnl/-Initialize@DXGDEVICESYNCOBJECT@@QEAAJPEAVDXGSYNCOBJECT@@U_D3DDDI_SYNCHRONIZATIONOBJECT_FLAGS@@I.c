/*
 * XREFs of ?Initialize@DXGDEVICESYNCOBJECT@@QEAAJPEAVDXGSYNCOBJECT@@U_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@I@Z @ 0x1C00F1918
 * Callers:
 *     ?Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAXPEA_KIPEAPEAVDXGADAPTERSYNCOBJECT@@_NU_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@@Z @ 0x1C00F62B0 (-Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEA.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006FF4 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00070E4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007560 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007DEC (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0008834 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000C364 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000C448 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 *     ?GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z @ 0x1C00F1EDC (-GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z.c)
 *     ?AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z @ 0x1C00FB100 (-AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01008A0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DXGDEVICESYNCOBJECT::Initialize(
        DXGDEVICESYNCOBJECT *this,
        struct DXGSYNCOBJECT *a2,
        struct _D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS a3,
        int a4)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rcx
  int v13; // esi
  __int64 v14; // rbx
  __int64 v15; // rbx
  int v16; // eax
  struct _VIDSCH_SYNC_OBJECT *VidSchSyncObject; // rbx
  _QWORD *v18; // rax
  struct DXGPROCESS *Current; // rax
  __int64 v20; // rcx
  struct DXGPROCESS *v21; // rsi
  DXGPUSHLOCK *v22; // rbx
  struct _KTHREAD *CurrentThread; // rdx
  _QWORD *v24; // rbx
  unsigned int v25; // eax
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  unsigned int v29; // edx
  __int64 v30; // rax
  int v31; // r8d
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  _BYTE v39[8]; // [rsp+30h] [rbp-38h] BYREF
  char v40; // [rsp+38h] [rbp-30h]
  _BYTE v41[8]; // [rsp+40h] [rbp-28h] BYREF
  char *v42; // [rsp+48h] [rbp-20h]
  int v43; // [rsp+50h] [rbp-18h]

  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL)) )
  {
    v33 = WdLogNewEntry5_WdAssertion(v9, v8);
    *(_QWORD *)(v33 + 24) = 161LL;
    WdLogEvent5_WdAssertion(v33);
  }
  *((struct _D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS *)this + 18) = a3;
  *((_QWORD *)this + 4) = a2;
  _InterlockedIncrement((volatile signed __int32 *)a2 + 6);
  *((_BYTE *)this + 92) |= 1u;
  if ( !*((_BYTE *)a2 + 277) )
  {
    v10 = *((_QWORD *)this + 4);
    if ( (unsigned int)(*(_DWORD *)(v10 + 192) - 5) > 1 )
    {
      v34 = WdLogNewEntry5_WdAssertion(v9, v8);
      *(_QWORD *)(v34 + 24) = 344LL;
      WdLogEvent5_WdAssertion(v34);
    }
    v13 = (*(__int64 (__fastcall **)(_QWORD, __int64, char *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2)
                                                                                                 + 16LL)
                                                                                     + 544LL)
                                                                         + 8LL)
                                                             + 928LL))(
            *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 552LL),
            v10 + 120,
            (char *)this + 56);
    if ( v13 < 0 )
      return (unsigned int)v13;
    if ( *(_BYTE *)&a3.0 >= 0 )
    {
      v14 = *((_QWORD *)this + 4);
      if ( (unsigned int)(*(_DWORD *)(v14 + 192) - 5) > 1 )
      {
        v35 = WdLogNewEntry5_WdAssertion(v12, v11);
        *(_QWORD *)(v35 + 24) = 344LL;
        WdLogEvent5_WdAssertion(v35);
      }
      v13 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, char *, int))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 544LL)
                                                                                        + 8LL)
                                                                            + 936LL))(
              *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 552LL),
              *(_QWORD *)(*((_QWORD *)this + 2) + 648LL),
              v14 + 120,
              (char *)this + 48,
              a4);
      if ( v13 < 0 )
        return (unsigned int)v13;
    }
    v15 = *((_QWORD *)this + 4);
    if ( (unsigned int)(*(_DWORD *)(v15 + 192) - 5) > 1 )
    {
      v36 = WdLogNewEntry5_WdAssertion(v12, v11);
      *(_QWORD *)(v36 + 24) = 344LL;
      WdLogEvent5_WdAssertion(v36);
    }
    *((_QWORD *)this + 8) = *(_QWORD *)(v15 + 128);
    v16 = *((_DWORD *)this + 18);
    if ( (v16 & 0x10) == 0 && (v16 & 0x40) == 0 )
    {
      DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v39, (struct DXGFASTMUTEX *const)(*((_QWORD *)this + 4) + 32LL), 0);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v39);
      VidSchSyncObject = DXGSYNCOBJECT::GetVidSchSyncObject(
                           *((DXGSYNCOBJECT **)this + 4),
                           *(struct ADAPTER_RENDER **)(*((_QWORD *)this + 2) + 16LL));
      if ( VidSchSyncObject )
      {
        v18 = operator new[](0x18uLL, 0x4B677844u, (POOL_TYPE)512);
        *((_QWORD *)this + 3) = v18;
        if ( !v18 )
        {
          v13 = -1073741801;
          if ( v40 )
            DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v39);
          return (unsigned int)v13;
        }
        *v18 = 0LL;
        v18[1] = 0LL;
        v18[2] = 0LL;
        *(_QWORD *)(*((_QWORD *)this + 3) + 16LL) = VidSchSyncObject;
        (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                       + 520LL)
                                                           + 8LL)
                                               + 680LL))(
          *(_QWORD *)(*((_QWORD *)this + 2) + 656LL),
          *((_QWORD *)this + 3));
      }
      if ( v40 )
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v39);
    }
  }
  if ( (*((_BYTE *)this + 92) & 4) == 0 )
    return 0LL;
  Current = DXGPROCESS::GetCurrent();
  v21 = Current;
  v22 = (struct DXGPROCESS *)((char *)Current + 184);
  v42 = (char *)Current + 184;
  if ( Current != (struct DXGPROCESS *)-184LL )
  {
    CurrentThread = KeGetCurrentThread();
    if ( *((struct _KTHREAD **)Current + 24) == CurrentThread )
    {
      v37 = WdLogNewEntry5_WdAssertion(v20, CurrentThread);
      *(_QWORD *)(v37 + 24) = 1448LL;
      WdLogEvent5_WdAssertion(v37);
    }
  }
  DXGPUSHLOCK::AcquireExclusive(v22);
  v24 = (_QWORD *)((char *)v21 + 208);
  v43 = 2;
  v25 = HMGRTABLE::AllocHandle((char *)v21 + 208, this, 11LL);
  *((_DWORD *)this + 10) = v25;
  v29 = v25;
  if ( v25 )
  {
    v30 = (v25 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v30 < *((_DWORD *)v21 + 56) )
    {
      v31 = *(_DWORD *)(*v24 + 16 * v30 + 8);
      if ( ((v29 >> 25) & 0x60) == (*(_BYTE *)(*v24 + 16 * v30 + 8) & 0x60) && (v31 & 0x2000) == 0 && (v31 & 0x1F) != 0 )
        *(_DWORD *)(*v24 + 16 * (((unsigned __int64)v29 >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
    }
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v41);
    return 0LL;
  }
  v38 = WdLogNewEntry5_WdLowResource(v26, 0LL, v27, v28);
  v13 = -1073741801;
  *(_QWORD *)(v38 + 24) = this;
  *(_QWORD *)(v38 + 32) = -1073741801LL;
  WdLogEvent5_WdLowResource(v38);
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v41);
  return (unsigned int)v13;
}
