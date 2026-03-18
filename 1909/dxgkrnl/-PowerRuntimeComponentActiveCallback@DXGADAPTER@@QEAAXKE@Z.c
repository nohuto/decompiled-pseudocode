/*
 * XREFs of ?PowerRuntimeComponentActiveCallback@DXGADAPTER@@QEAAXKE@Z @ 0x1C00339AC
 * Callers:
 *     ?SetPowerComponentActiveCBWorker@DXGADAPTER@@QEAAXIEK@Z @ 0x1C0034944 (-SetPowerComponentActiveCBWorker@DXGADAPTER@@QEAAXIEK@Z.c)
 *     ?SetPowerComponentIdleCBWorker@DXGADAPTER@@QEAAXIK@Z @ 0x1C0034E8C (-SetPowerComponentIdleCBWorker@DXGADAPTER@@QEAAXIK@Z.c)
 *     ?DxgkPowerRuntimeComponentActiveCallback@@YAXPEAXK@Z @ 0x1C003B050 (-DxgkPowerRuntimeComponentActiveCallback@@YAXPEAXK@Z.c)
 *     ?DxgkPowerRuntimeComponentIdleCallback@@YAXPEAXK@Z @ 0x1C003B0B0 (-DxgkPowerRuntimeComponentIdleCallback@@YAXPEAXK@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 *     ??0DXGAUTOSPINLOCK@@QEAA@QEAVDXGSPINLOCK@@E@Z @ 0x1C0032620 (--0DXGAUTOSPINLOCK@@QEAA@QEAVDXGSPINLOCK@@E@Z.c)
 *     ?ScheduleAdapterActivityCheck@DXGADAPTER@@QEAAXXZ @ 0x1C003460C (-ScheduleAdapterActivityCheck@DXGADAPTER@@QEAAXXZ.c)
 *     ?SetPowerComponentLatencyCB@DXGADAPTER@@QEAAXI_K@Z @ 0x1C0035190 (-SetPowerComponentLatencyCB@DXGADAPTER@@QEAAXI_K@Z.c)
 *     ?UpdateLatencyTolerances@DXGADAPTER@@QEAAXXZ @ 0x1C00352E0 (-UpdateLatencyTolerances@DXGADAPTER@@QEAAXXZ.c)
 */

void __fastcall DXGADAPTER::PowerRuntimeComponentActiveCallback(DXGADAPTER *this, unsigned int a2, char a3, __int64 a4)
{
  unsigned int *v6; // rdi
  unsigned int v7; // eax
  _QWORD *v8; // rax
  __int64 v9; // rcx
  _QWORD *v10; // rdx
  unsigned int v11; // eax
  unsigned int v12; // edx
  unsigned int v13; // edx
  __int64 v14; // rdx
  _QWORD *v15; // rax
  _QWORD *v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rdx
  void (__fastcall *v20)(_QWORD, __int64); // rax
  int v21; // eax
  __int64 *v22; // rcx
  __int64 *v23; // rax
  __int64 **v24; // rdx
  int v25; // eax
  _BYTE v26[8]; // [rsp+30h] [rbp-68h] BYREF
  __int64 v27; // [rsp+38h] [rbp-60h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-58h] BYREF
  char v29; // [rsp+58h] [rbp-40h]
  _BYTE v30[8]; // [rsp+60h] [rbp-38h] BYREF
  __int64 v31; // [rsp+68h] [rbp-30h]
  struct _KLOCK_QUEUE_HANDLE v32; // [rsp+70h] [rbp-28h] BYREF
  char v33; // [rsp+88h] [rbp-10h]

  v6 = (unsigned int *)(*((_QWORD *)this + 324) + 520LL * a2);
  *((_BYTE *)v6 + 356) = a3;
  if ( *((_DWORD *)this + 44) == 1 )
  {
    v7 = v6[52];
    if ( v7 )
    {
      if ( v7 == 3 )
        (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, char))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 320)
                                                                                             + 544LL)
                                                                                 + 8LL)
                                                                     + 744LL))(
          *(_QWORD *)(*((_QWORD *)this + 320) + 552LL),
          *((unsigned __int16 *)v6 + 3),
          v6[53],
          *v6,
          a3);
    }
    else
    {
      LOBYTE(a4) = a3;
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 320) + 520LL)
                                                                          + 8LL)
                                                              + 808LL))(
        *(_QWORD *)(*((_QWORD *)this + 320) + 528LL),
        *((unsigned __int16 *)v6 + 3),
        v6[53],
        a4);
    }
    if ( *((_BYTE *)v6 + 357) && (int)v6[97] > 0 )
    {
      DXGAUTOSPINLOCK::DXGAUTOSPINLOCK((DXGAUTOSPINLOCK *)v26, (KSPIN_LOCK *)this + 382, 1);
      if ( a3 )
      {
        v8 = v6 + 100;
        v9 = *((_QWORD *)v6 + 50);
        if ( v9 )
        {
          if ( *(_QWORD **)(v9 + 8) != v8 )
            goto LABEL_36;
          v10 = (_QWORD *)*((_QWORD *)v6 + 51);
          if ( (_QWORD *)*v10 != v8 )
            goto LABEL_36;
          *v10 = v9;
          *(_QWORD *)(v9 + 8) = v10;
          *v8 = 0LL;
        }
      }
      else
      {
        v11 = v6[96];
        if ( v6[104] )
        {
          if ( v11 )
          {
            v13 = v6[1];
            v6[96] = 0;
            DXGADAPTER::SetPowerComponentLatencyCB(this, v13, **((_QWORD **)this + 360));
          }
          v14 = MEMORY[0xFFFFF78000000320];
          *((_QWORD *)v6 + 49) = MEMORY[0xFFFFF78000000320];
          *((_QWORD *)v6 + 49) = v14 + *(_QWORD *)(*((_QWORD *)this + 360) + 8LL);
          v15 = v6 + 100;
          if ( !*((_QWORD *)v6 + 50) )
          {
            v16 = (_QWORD *)((char *)this + 3040);
            v17 = *((_QWORD *)this + 380);
            if ( *(DXGADAPTER **)(v17 + 8) != (DXGADAPTER *)((char *)this + 3040) )
              goto LABEL_36;
            *v15 = v17;
            *((_QWORD *)v6 + 51) = v16;
            *(_QWORD *)(v17 + 8) = v15;
            *v16 = v15;
          }
          if ( !*((_BYTE *)this + 3028) )
          {
            v18 = *((_QWORD *)this + 320);
            *((_BYTE *)this + 3028) = 1;
            v19 = *(_QWORD *)(*(_QWORD *)(v18 + 520) + 8LL);
            v20 = *(void (__fastcall **)(_QWORD, __int64))(v19 + 864);
            LOBYTE(v19) = 1;
            v20(*(_QWORD *)(v18 + 528), v19);
          }
        }
        else if ( v11 != 2 )
        {
          v12 = v6[1];
          v6[96] = 2;
          DXGADAPTER::SetPowerComponentLatencyCB(this, v12, *(_QWORD *)(*((_QWORD *)this + 360) + 32LL));
        }
      }
      if ( v29 )
      {
        v29 = 0;
        *(_QWORD *)(v27 + 8) = 0LL;
        KeReleaseInStackQueuedSpinLock(&LockHandle);
      }
    }
    if ( !v6[52] && *((_QWORD *)this + 369) )
    {
      DXGAUTOSPINLOCK::DXGAUTOSPINLOCK((DXGAUTOSPINLOCK *)v30, (KSPIN_LOCK *)this + 382, 1);
      v21 = *((_DWORD *)this + 688);
      if ( !a3 )
      {
        v25 = v21 - 1;
        *((_DWORD *)this + 688) = v25;
        if ( !v25 )
          DXGADAPTER::ScheduleAdapterActivityCheck(this);
        goto LABEL_39;
      }
      if ( v21 )
      {
LABEL_35:
        ++*((_DWORD *)this + 688);
LABEL_39:
        if ( v33 )
        {
          v33 = 0;
          *(_QWORD *)(v31 + 8) = 0LL;
          KeReleaseInStackQueuedSpinLock(&v32);
        }
        return;
      }
      v22 = (__int64 *)(*((_QWORD *)this + 369) + 400LL);
      v23 = (__int64 *)*v22;
      if ( !*v22 )
      {
LABEL_33:
        if ( *((_DWORD *)this + 759) )
        {
          *((_DWORD *)this + 759) = 0;
          DXGADAPTER::UpdateLatencyTolerances(this);
        }
        goto LABEL_35;
      }
      if ( (__int64 *)v23[1] == v22 )
      {
        v24 = *(__int64 ***)(*((_QWORD *)this + 369) + 408LL);
        if ( *v24 == v22 )
        {
          *v24 = v23;
          v23[1] = (__int64)v24;
          *(_QWORD *)(*((_QWORD *)this + 369) + 400LL) = 0LL;
          goto LABEL_33;
        }
      }
LABEL_36:
      __fastfail(3u);
    }
  }
}
