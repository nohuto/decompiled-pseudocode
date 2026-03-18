/*
 * XREFs of ?LatencyToleranceTimerNotification@DXGADAPTER@@QEAAX_K@Z @ 0x1C0032F10
 * Callers:
 *     ?DxgkLatencyToleranceTimerNotification@@YAXQEAX_K@Z @ 0x1C01F5120 (-DxgkLatencyToleranceTimerNotification@@YAXQEAX_K@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 *     ??0DXGAUTOSPINLOCK@@QEAA@QEAVDXGSPINLOCK@@E@Z @ 0x1C00324C0 (--0DXGAUTOSPINLOCK@@QEAA@QEAVDXGSPINLOCK@@E@Z.c)
 *     ?SetPowerComponentLatencyCB@DXGADAPTER@@QEAAXI_K@Z @ 0x1C0035030 (-SetPowerComponentLatencyCB@DXGADAPTER@@QEAAXI_K@Z.c)
 *     ?UpdateLatencyTolerances@DXGADAPTER@@QEAAXXZ @ 0x1C0035180 (-UpdateLatencyTolerances@DXGADAPTER@@QEAAXXZ.c)
 *     McTemplateK0 @ 0x1C003554C (McTemplateK0.c)
 */

void __fastcall DXGADAPTER::LatencyToleranceTimerNotification(KSPIN_LOCK *this, __int64 a2)
{
  __int64 v4; // rdx
  _QWORD *v5; // r12
  _QWORD *v6; // r15
  _QWORD *v7; // rbp
  _QWORD *v8; // r14
  int v9; // eax
  __int64 v10; // rax
  __int64 v11; // rbx
  int v12; // edi
  __int64 v13; // rax
  _QWORD *v14; // rcx
  int v15; // eax
  KSPIN_LOCK v16; // rcx
  __int64 v17; // rcx
  _QWORD *v18; // rax
  _QWORD *v19; // rax
  __int64 v20; // rcx
  _BYTE v21[8]; // [rsp+20h] [rbp-58h] BYREF
  __int64 v22; // [rsp+28h] [rbp-50h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-48h] BYREF
  char v24; // [rsp+48h] [rbp-30h]

  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    McTemplateK0(this, &Dxgk_LatencyToleranceTimer);
  DXGAUTOSPINLOCK::DXGAUTOSPINLOCK((DXGAUTOSPINLOCK *)v21, this + 382, 1);
  v5 = this + 380;
  v6 = (_QWORD *)this[380];
  while ( v6 != v5 )
  {
    v7 = v6;
    v8 = v6;
    v6 = (_QWORD *)*v6;
    if ( *((_BYTE *)v7 - 44) || *((_DWORD *)v7 - 14) == *((_DWORD *)v7 - 98) - 1 )
    {
      if ( (_QWORD *)v6[1] != v8 || (v19 = (_QWORD *)v8[1], (_QWORD *)*v19 != v8) )
LABEL_31:
        __fastfail(3u);
      *v19 = v6;
      v6[1] = v19;
LABEL_13:
      *v8 = 0LL;
    }
    else if ( *(v7 - 1) <= a2 )
    {
      v9 = *((_DWORD *)v7 - 48);
      if ( v9 )
      {
        if ( v9 == 6 )
        {
          v15 = *((_DWORD *)this + 759);
          switch ( v15 )
          {
            case 0:
              *((_DWORD *)this + 759) = 1;
              v16 = this[364];
LABEL_19:
              *(v7 - 1) = a2 + v16;
              goto LABEL_20;
            case 1:
              *((_DWORD *)this + 759) = 2;
              v16 = this[366];
              goto LABEL_19;
            case 2:
              *((_DWORD *)this + 759) = 3;
              v17 = *v8;
              if ( *(_QWORD **)(*v8 + 8LL) != v8 )
                goto LABEL_31;
              v18 = (_QWORD *)v8[1];
              if ( (_QWORD *)*v18 != v8 )
                goto LABEL_31;
              *v18 = v17;
              *(_QWORD *)(v17 + 8) = v18;
              *v8 = 0LL;
LABEL_20:
              DXGADAPTER::UpdateLatencyTolerances((DXGADAPTER *)this);
              break;
          }
        }
      }
      else
      {
        v10 = *((int *)v7 - 4);
        v11 = v10 + 1;
        v12 = v10 + 1;
        DXGADAPTER::SetPowerComponentLatencyCB(
          (DXGADAPTER *)this,
          *((_DWORD *)v7 - 99),
          *(_QWORD *)(this[360] + 16 * (v10 + 1)));
        *((_DWORD *)v7 - 4) = v12;
        *(v7 - 1) = a2 + *(_QWORD *)(this[360] + 16 * v11 + 8);
        if ( v12 == *((_DWORD *)v7 - 3) )
        {
          v13 = *v7;
          if ( *(_QWORD **)(*v7 + 8LL) != v7 )
            goto LABEL_31;
          v14 = (_QWORD *)v7[1];
          if ( (_QWORD *)*v14 != v7 )
            goto LABEL_31;
          *v14 = v13;
          *(_QWORD *)(v13 + 8) = v14;
          goto LABEL_13;
        }
      }
    }
  }
  if ( (_QWORD *)*v5 == v5 )
  {
    *((_BYTE *)this + 3028) = 0;
    LOBYTE(v4) = 0;
  }
  else
  {
    LOBYTE(v4) = *((_BYTE *)this + 3028);
  }
  (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)(*(_QWORD *)(this[320] + 520) + 8LL) + 864LL))(
    *(_QWORD *)(this[320] + 528),
    v4);
  if ( v24 )
  {
    v24 = 0;
    *(_QWORD *)(v22 + 8) = 0LL;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
  if ( bTracingEnabled )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
      McTemplateK0(v20, &Dxgk_LatencyToleranceTimerEnd);
  }
}
