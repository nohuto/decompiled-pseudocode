/*
 * XREFs of ?InitializePowerManagement@ADAPTER_RENDER@@QEAAJXZ @ 0x1C01F5D0C
 * Callers:
 *     ?InitializePowerManagement@DXGADAPTER@@AEAAJXZ @ 0x1C016A924 (-InitializePowerManagement@DXGADAPTER@@AEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ADAPTER_RENDER::InitializePowerManagement(ADAPTER_RENDER *this)
{
  __int64 v1; // r15
  void (__fastcall *v3)(__int64, unsigned int); // rax
  unsigned int v4; // r12d
  __int64 v5; // rbx
  unsigned int v6; // r14d
  __int64 v7; // rdi
  __int64 v8; // r10
  int v9; // eax
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rax
  _QWORD v16[6]; // [rsp+40h] [rbp-19h] BYREF
  void (__fastcall *v17)(__int64, unsigned int); // [rsp+70h] [rbp+17h]
  __int64 (__fastcall *v18)(__int64, __int64, __int64); // [rsp+78h] [rbp+1Fh]
  __int64 v19; // [rsp+80h] [rbp+27h]
  int v20; // [rsp+88h] [rbp+2Fh]
  int v21; // [rsp+8Ch] [rbp+33h]
  char v22; // [rsp+C0h] [rbp+67h] BYREF

  v1 = *((_QWORD *)this + 2);
  v17 = 0LL;
  v21 = 0;
  v19 = *(_QWORD *)(v1 + 192);
  v16[1] = DxgSetPowerComponentActiveNoWaitCB;
  v16[0] = &DxgSetPowerComponentActiveCBInternal;
  v16[2] = DxgSetPowerComponentIdleCBInternal;
  v16[3] = DxgSetPowerComponentActiveNoWaitForceAsyncCB;
  v16[4] = DxgSetPowerComponentIdleForceAsyncCBInternal;
  v16[5] = DxgkLatencyToleranceTimerNotification;
  v20 = *(_DWORD *)(v1 + 3024);
  v18 = DxgkNotifyMemorySegmentHasData;
  v3 = 0LL;
  if ( *(int *)(v1 + 2452) >= 1300 )
    v3 = DxgNotifyVSyncCB;
  v17 = v3;
  (*(void (__fastcall **)(_QWORD, _QWORD *))(*(_QWORD *)(*((_QWORD *)this + 65) + 8LL) + 792LL))(
    *((_QWORD *)this + 66),
    v16);
  (*(void (__fastcall **)(_QWORD, _QWORD *))(*(_QWORD *)(*((_QWORD *)this + 68) + 8LL) + 728LL))(
    *((_QWORD *)this + 69),
    v16);
  v4 = *(_DWORD *)(v1 + 2736);
  LODWORD(v5) = 0;
  v6 = 0;
  if ( v4 )
  {
    v7 = 0LL;
    do
    {
      v8 = *(_QWORD *)(v1 + 2592);
      v9 = *(_DWORD *)(v7 + v8 + 208);
      if ( v9 )
      {
        switch ( v9 )
        {
          case 2:
            v10 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD, unsigned int, char *))(*(_QWORD *)(*((_QWORD *)this + 65) + 8LL) + 800LL))(
                    *((_QWORD *)this + 66),
                    2LL,
                    0LL,
                    *(unsigned int *)(v7 + v8 + 212),
                    v6,
                    &v22);
            break;
          case 3:
            v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, int))(*(_QWORD *)(*((_QWORD *)this + 68)
                                                                                             + 8LL)
                                                                                 + 736LL))(
                    *((_QWORD *)this + 69),
                    *(unsigned __int16 *)(v7 + v8 + 6),
                    *(unsigned int *)(v7 + v8 + 212),
                    *(unsigned int *)(v7 + v8),
                    3);
            break;
          case 4:
            v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, int))(*(_QWORD *)(*((_QWORD *)this + 68)
                                                                                             + 8LL)
                                                                                 + 736LL))(
                    *((_QWORD *)this + 69),
                    0LL,
                    0LL,
                    *(unsigned int *)(v7 + v8),
                    4);
            break;
          default:
            goto LABEL_15;
        }
      }
      else
      {
        v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, unsigned int, __int64))(*(_QWORD *)(*((_QWORD *)this + 65) + 8LL)
                                                                                               + 800LL))(
                *((_QWORD *)this + 66),
                0LL,
                *(unsigned __int16 *)(v7 + v8 + 6),
                *(unsigned int *)(v7 + v8 + 212),
                v6,
                v7 + v8 + 358);
      }
      v5 = v10;
      if ( v10 < 0 )
      {
        v14 = WdLogNewEntry5_WdError(v12, v11, v13);
        *(_QWORD *)(v14 + 24) = v5;
        WdLogEvent5_WdError(v14);
        return (unsigned int)v5;
      }
LABEL_15:
      ++v6;
      v7 += 520LL;
    }
    while ( v6 < v4 );
  }
  return (unsigned int)v5;
}
