/*
 * XREFs of ndisFDoOidRequestInternal @ 0x1C000D050
 * Callers:
 *     ndisStackExpansionFallbackWorker @ 0x1C005C7D0 (ndisStackExpansionFallbackWorker.c)
 * Callees:
 *     ndisOidRequestComplete @ 0x1C000D320 (ndisOidRequestComplete.c)
 *     ndisPreProcessOid @ 0x1C000D970 (ndisPreProcessOid.c)
 *     ndisOidCloneForCompatibility @ 0x1C000DB90 (ndisOidCloneForCompatibility.c)
 *     ndisOidFreeInternalCloneRequest @ 0x1C000F400 (ndisOidFreeInternalCloneRequest.c)
 *     ?CancelTimer@NdisWatchdogState@@QEAA_NXZ @ 0x1C001A588 (-CancelTimer@NdisWatchdogState@@QEAA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026E30 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0027180 (memset.c)
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 *     WPP_SF_qqDD @ 0x1C003A8AC (WPP_SF_qqDD.c)
 *     WPP_SF_qqd @ 0x1C003A90C (WPP_SF_qqd.c)
 *     WPP_SF_qDqL @ 0x1C0041FBC (WPP_SF_qDqL.c)
 *     WPP_SF_qLq @ 0x1C0043DA4 (WPP_SF_qLq.c)
 *     WPP_SF_qqDDD @ 0x1C0043EE8 (WPP_SF_qqDDD.c)
 *     ?ndisArmWatchdog@@YAXPEAUNDISWATCHDOG__@@PEAXK1K_K@Z @ 0x1C00B79D0 (-ndisArmWatchdog@@YAXPEAUNDISWATCHDOG__@@PEAXK1K_K@Z.c)
 *     ?ndisDrainWatchdog@@YAXPEAUNDISWATCHDOG__@@@Z @ 0x1C00B7E4C (-ndisDrainWatchdog@@YAXPEAUNDISWATCHDOG__@@@Z.c)
 */

void __fastcall ndisFDoOidRequestInternal(char *Parameter)
{
  int v2; // r12d
  _DWORD *v3; // rdi
  KIRQL v4; // al
  int v5; // edx
  char *v6; // rcx
  __int64 v7; // rdx
  unsigned int v8; // r15d
  _DWORD *v9; // r14
  unsigned __int8 v10; // al
  char v11; // bp
  KIRQL v12; // al
  bool v13; // zf
  KIRQL v14; // al
  __int64 v15; // r8
  __int64 v16; // r15
  unsigned int v17; // r12d
  int v18; // eax
  __int64 v19; // r8
  _DWORD *v20; // rbp
  int v21; // edi
  _DWORD *v22; // rdx
  NdisWatchdogState *v23; // rcx
  unsigned int v24[2]; // [rsp+20h] [rbp-B8h]
  _QWORD v25[6]; // [rsp+40h] [rbp-98h] BYREF
  _QWORD v26[6]; // [rsp+70h] [rbp-68h] BYREF
  unsigned int v27; // [rsp+E0h] [rbp+8h] BYREF
  _DWORD *v28; // [rsp+E8h] [rbp+10h] BYREF

  v27 = 0;
  if ( (unsigned __int8)byte_1C00A025A >= 4u )
    WPP_SF_q(52LL, &WPP_3347f5d6e7de3bf7a7aa2b0281c0f110_Traceguids, Parameter);
  while ( 1 )
  {
    v2 = -1073741823;
    v3 = 0LL;
    v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)Parameter + 18);
    v5 = *((_DWORD *)Parameter + 14);
    *((_QWORD *)Parameter + 19) = KeGetCurrentThread();
    *((_DWORD *)Parameter + 40) = 2297672;
    if ( (v5 & 0x800) == 0 )
    {
      v6 = Parameter + 168;
      if ( *(char **)v6 != v6 )
      {
        *((_DWORD *)Parameter + 14) = v5 | 0x800;
        v3 = *(_DWORD **)v6;
        if ( *(char **)(*(_QWORD *)v6 + 8LL) != v6 || (v7 = *(_QWORD *)v3, *(_DWORD **)(*(_QWORD *)v3 + 8LL) != v3) )
          __fastfail(3u);
        *(_QWORD *)v6 = v7;
        *(_QWORD *)(v7 + 8) = v6;
      }
    }
    *((_QWORD *)Parameter + 19) = 0LL;
    *((_DWORD *)Parameter + 40) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)Parameter + 18, v4);
    if ( !v3 )
      break;
    v8 = *(v3 - 10);
    v9 = v3 - 18;
    v10 = ndisPreProcessOid(Parameter, v3 - 18, 5LL, &v27);
    v11 = v10;
    if ( (unsigned __int8)byte_1C00A025A >= 4u )
    {
      v24[0] = v8;
      WPP_SF_qqDDD(53LL, v27, Parameter, v3 - 18, *(_QWORD *)v24, v10, v27);
    }
    if ( v11 != 1 )
    {
      v12 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)Parameter + 18);
      v13 = (*((_DWORD *)Parameter + 14) & 0x10000) == 0;
      *((_QWORD *)Parameter + 19) = KeGetCurrentThread();
      *((_DWORD *)Parameter + 40) = 2297722;
      if ( !v13 )
      {
        v11 = 1;
        v2 = -1073676286;
      }
      *((_QWORD *)Parameter + 19) = 0LL;
      *((_DWORD *)Parameter + 40) = 0;
      KeReleaseSpinLock((PKSPIN_LOCK)Parameter + 18, v12);
      if ( v11 == 1 )
      {
        memset(v25, 0, sizeof(v25));
        v25[4] = v3 - 18;
        v25[2] = Parameter;
        LODWORD(v25[5]) = v2;
        ndisOidRequestComplete(v25);
      }
      else
      {
        v3[4] |= 0x20000u;
        v14 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)Parameter + 18);
        *((_QWORD *)Parameter + 23) = v9;
        *((_QWORD *)Parameter + 19) = 0LL;
        *((_DWORD *)Parameter + 40) = 0;
        KeReleaseSpinLock((PKSPIN_LOCK)Parameter + 18, v14);
        ndisDrainWatchdog(*((struct NDISWATCHDOG__ **)Parameter + 24));
        ndisArmWatchdog(
          *((struct NDISWATCHDOG__ **)Parameter + 24),
          Parameter,
          0x24u,
          *(void **)(*((_QWORD *)Parameter + 2) + 248LL),
          0x88B8u,
          (unsigned int)v9[8]);
        v16 = *((_QWORD *)Parameter + 2);
        v17 = v9[8];
        v28 = 0LL;
        if ( (unsigned __int8)byte_1C00A025A >= 4u )
          WPP_SF_qLq(116LL, &WPP_121f726d2db93de0e5803b82441184b1_Traceguids, Parameter, v17, v3 - 18);
        LOBYTE(v15) = 1;
        v18 = ndisOidCloneForCompatibility(Parameter, v3 - 18, v15, &v28);
        v20 = v28;
        v21 = v18;
        if ( !v18 )
        {
          if ( v28 )
          {
            if ( (unsigned __int8)byte_1C00A025A >= 4u )
              WPP_SF_qqd(117LL, &WPP_121f726d2db93de0e5803b82441184b1_Traceguids, v9, v28, v28[8]);
            v22 = v20;
          }
          else
          {
            v22 = v9;
          }
          v21 = (*(__int64 (__fastcall **)(_QWORD, _DWORD *))(v16 + 248))(*((_QWORD *)Parameter + 3), v22);
        }
        if ( v21 != 259 && v20 )
        {
          LOBYTE(v19) = 1;
          ndisOidFreeInternalCloneRequest(Parameter, v20, v19, 0LL);
        }
        if ( (unsigned __int8)byte_1C00A025A >= 4u )
          WPP_SF_qDqL(118LL, &WPP_121f726d2db93de0e5803b82441184b1_Traceguids, Parameter, v17, v9, v21);
        if ( v21 != 259 )
        {
          v23 = (NdisWatchdogState *)*((_QWORD *)Parameter + 24);
          if ( v23 != (NdisWatchdogState *)-1LL )
            NdisWatchdogState::CancelTimer(v23);
          memset(v26, 0, sizeof(v26));
          if ( (unsigned __int8)byte_1C00A025A >= 4u )
            WPP_SF_qqDD(54LL, &WPP_3347f5d6e7de3bf7a7aa2b0281c0f110_Traceguids, Parameter, v9, v9[8], v21);
          v26[4] = v9;
          v26[2] = Parameter;
          LODWORD(v26[5]) = v21;
          ndisOidRequestComplete(v26);
        }
      }
    }
  }
  if ( (unsigned __int8)byte_1C00A025A >= 4u )
    WPP_SF_q(55LL, &WPP_3347f5d6e7de3bf7a7aa2b0281c0f110_Traceguids, Parameter);
}
