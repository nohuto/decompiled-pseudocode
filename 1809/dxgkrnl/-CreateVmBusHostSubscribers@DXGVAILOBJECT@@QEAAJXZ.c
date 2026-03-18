/*
 * XREFs of ?CreateVmBusHostSubscribers@DXGVAILOBJECT@@QEAAJXZ @ 0x1C025A034
 * Callers:
 *     NtDxgkVailConnect @ 0x1C025DCC0 (NtDxgkVailConnect.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000DF84 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000E054 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C000E5B4 (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000E790 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0011F20 (--_V@YAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     ?Initialize@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@QEAAJPEAVDXGVMBUSCHANNEL@@@Z @ 0x1C023173C (-Initialize@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@QEAAJPEAVDXGVMBUSCHANNEL@@@Z.c)
 *     ?RegisterSubscriber@DXGVMBUSCHANNEL@@QEAAJIPEAUIDXGCHANNELSUBSCRIBER@@PEAPEAUIDXGCHANNEL@@@Z @ 0x1C0258D64 (-RegisterSubscriber@DXGVMBUSCHANNEL@@QEAAJIPEAUIDXGCHANNELSUBSCRIBER@@PEAPEAUIDXGCHANNEL@@@Z.c)
 *     ??0DXG_HOST_REMOTEOBJECTCHANNEL@@QEAA@PEAX0PEAU_EPROCESS@@@Z @ 0x1C02592D8 (--0DXG_HOST_REMOTEOBJECTCHANNEL@@QEAA@PEAX0PEAU_EPROCESS@@@Z.c)
 *     ?AllocateDefaultSecurityDescriptor@DXGVAILOBJECT@@SAJKPEAPEAX@Z @ 0x1C025955C (-AllocateDefaultSecurityDescriptor@DXGVAILOBJECT@@SAJKPEAPEAX@Z.c)
 *     ?AllocateResourceSecurityDescriptor@DXGVAILOBJECT@@QEAAJEKPEAPEAX@Z @ 0x1C0259744 (-AllocateResourceSecurityDescriptor@DXGVAILOBJECT@@QEAAJEKPEAPEAX@Z.c)
 */

__int64 __fastcall DXGVAILOBJECT::CreateVmBusHostSubscribers(DXGVAILOBJECT *this)
{
  __int64 v2; // rcx
  int DefaultSecurityDescriptor; // eax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rbx
  __int64 v8; // rax
  void *v9; // r15
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rax
  void *v15; // r12
  DXG_HOST_REMOTEOBJECTCHANNEL *v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  DXG_HOST_REMOTEOBJECTCHANNEL *v20; // rax
  __int64 v21; // rax
  int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rax
  int v27; // eax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // rax
  void *v32; // r14
  _QWORD *v33; // rax
  void **v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // rax
  int v38; // eax
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // rcx
  __int64 v43; // rcx
  char v44; // bl
  char v45; // al
  _BYTE v47[16]; // [rsp+20h] [rbp-10h] BYREF
  void *v48; // [rsp+70h] [rbp+40h] BYREF
  void *v49; // [rsp+78h] [rbp+48h] BYREF
  void *v50; // [rsp+80h] [rbp+50h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v47, (DXGVAILOBJECT *)((char *)this + 40), 1);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v47);
  v2 = *((_QWORD *)this + 14);
  if ( !v2 && !*((_QWORD *)this + 15) )
  {
    v48 = 0LL;
    v49 = 0LL;
    v50 = 0LL;
    DefaultSecurityDescriptor = DXGVAILOBJECT::AllocateDefaultSecurityDescriptor(0x20000u, (struct _ACL **)&v48);
    v7 = DefaultSecurityDescriptor;
    if ( DefaultSecurityDescriptor >= 0 )
    {
      v10 = DXGVAILOBJECT::AllocateResourceSecurityDescriptor(this, 0, 0x10000000u, &v49);
      v7 = v10;
      if ( v10 >= 0 )
      {
        v16 = (DXG_HOST_REMOTEOBJECTCHANNEL *)operator new(0x30uLL, 0x4B677844u, 1, PagedPool);
        v9 = v48;
        v15 = v49;
        if ( v16 )
          v20 = DXG_HOST_REMOTEOBJECTCHANNEL::DXG_HOST_REMOTEOBJECTCHANNEL(
                  v16,
                  v48,
                  v49,
                  *((struct _EPROCESS **)this + 12));
        else
          v20 = 0LL;
        *((_QWORD *)this + 14) = v20;
        if ( v20 )
        {
          v9 = 0LL;
          v15 = 0LL;
          v22 = DXGVMBUSCHANNEL::RegisterSubscriber(
                  *((DXGVMBUSCHANNEL **)this + 13),
                  0x6F746D72u,
                  v20,
                  (struct IDXGCHANNEL **)v20 + 1);
          v7 = v22;
          if ( v22 < 0 )
          {
            v26 = WdLogNewEntry5_WdWarning(v24, v23, v25);
            *(_QWORD *)(v26 + 24) = v7;
            WdLogEvent5_WdWarning(v26);
LABEL_30:
            if ( (int)v7 < 0 )
            {
              v42 = *((_QWORD *)this + 14);
              if ( v42 )
              {
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v42 + 56LL))(v42);
                *((_QWORD *)this + 14) = 0LL;
              }
              v43 = *((_QWORD *)this + 15);
              if ( v43 )
              {
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v43 + 56LL))(v43);
                *((_QWORD *)this + 15) = 0LL;
              }
            }
            goto LABEL_38;
          }
          v27 = DXGVAILOBJECT::AllocateResourceSecurityDescriptor(this, 1, 3u, &v50);
          v7 = v27;
          if ( v27 >= 0 )
          {
            v33 = operator new(0x38uLL, 0x4B677844u, 1, PagedPool);
            v32 = v50;
            if ( v33 )
            {
              v35 = *((_QWORD *)this + 12);
              v34 = &DXG_HOST_COMPOSITIONOBJECTCHANNEL::`vftable';
              *v33 = &DXG_HOST_COMPOSITIONOBJECTCHANNEL::`vftable';
              v33[5] = v35;
              v33[1] = 0LL;
              *((_WORD *)v33 + 8) = 0;
              v33[3] = 0LL;
              v33[4] = 0LL;
              v33[6] = v32;
            }
            else
            {
              v33 = 0LL;
            }
            *((_QWORD *)this + 15) = v33;
            if ( v33 )
            {
              v32 = 0LL;
              v38 = DXG_HOST_COMPOSITIONOBJECTCHANNEL::Initialize(
                      (struct _EPROCESS **)v33,
                      *((struct DXGVMBUSCHANNEL **)this + 13));
              v7 = v38;
              if ( v38 >= 0 )
                goto LABEL_38;
              v37 = WdLogNewEntry5_WdWarning(v40, v39, v41);
              *(_QWORD *)(v37 + 24) = v7;
            }
            else
            {
              LODWORD(v7) = -1073741801;
              v37 = WdLogNewEntry5_WdWarning(v35, v34, v36);
              *(_QWORD *)(v37 + 24) = -1073741801LL;
            }
            WdLogEvent5_WdWarning(v37);
          }
          else
          {
            v31 = WdLogNewEntry5_WdWarning(v29, v28, v30);
            *(_QWORD *)(v31 + 24) = v7;
            WdLogEvent5_WdWarning(v31);
            v32 = v50;
          }
          if ( !v32 )
            goto LABEL_30;
          operator delete[](v32);
        }
        else
        {
          LODWORD(v7) = -1073741801;
          v21 = WdLogNewEntry5_WdWarning(v18, v17, v19);
          *(_QWORD *)(v21 + 24) = -1073741801LL;
          WdLogEvent5_WdWarning(v21);
        }
      }
      else
      {
        v14 = WdLogNewEntry5_WdWarning(v12, v11, v13);
        *(_QWORD *)(v14 + 24) = v7;
        WdLogEvent5_WdWarning(v14);
        v9 = v48;
        v15 = v49;
      }
      if ( v15 )
        operator delete[](v15);
    }
    else
    {
      v8 = WdLogNewEntry5_WdWarning(v5, v4, v6);
      *(_QWORD *)(v8 + 24) = v7;
      WdLogEvent5_WdWarning(v8);
      v9 = v48;
    }
    if ( v9 )
      operator delete[](v9);
    goto LABEL_30;
  }
  v44 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 64LL))(v2);
  v45 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 15) + 64LL))(*((_QWORD *)this + 15));
  if ( v44 || (LODWORD(v7) = -1073740528, v45) )
    LODWORD(v7) = 0;
LABEL_38:
  if ( v47[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v47);
  return (unsigned int)v7;
}
