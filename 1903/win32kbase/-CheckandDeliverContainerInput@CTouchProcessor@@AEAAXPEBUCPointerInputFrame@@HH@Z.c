/*
 * XREFs of ?CheckandDeliverContainerInput@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@HH@Z @ 0x1C016215C
 * Callers:
 *     ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x1C016801C (-GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z.c)
 * Callees:
 *     Win32AllocPool @ 0x1C0014930 (Win32AllocPool.c)
 *     Win32FreePool @ 0x1C0016AB0 (Win32FreePool.c)
 *     WPP_RECORDER_SF_ @ 0x1C002E6D4 (WPP_RECORDER_SF_.c)
 *     HMValidateHandleNoSecure @ 0x1C0034F70 (HMValidateHandleNoSecure.c)
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C0040490 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     IsPTPIVEnabled @ 0x1C00421F8 (IsPTPIVEnabled.c)
 *     __security_check_cookie @ 0x1C00BAF90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00C13F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00C1440 (memset.c)
 *     ?IsContainer@CInputDest@@QEBA_NXZ @ 0x1C015DB44 (-IsContainer@CInputDest@@QEBA_NXZ.c)
 *     ?ShouldGenerateMessagesForNode@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@H@Z @ 0x1C0174940 (-ShouldGenerateMessagesForNode@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNod.c)
 *     IsPenIVEnabled @ 0x1C018E1B8 (IsPenIVEnabled.c)
 *     IsTouchIVEnabled @ 0x1C018E22C (IsTouchIVEnabled.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CTouchProcessor::CheckandDeliverContainerInput(
        struct _KTHREAD **this,
        const struct CPointerInputFrame *a2,
        __int64 a3,
        int a4)
{
  unsigned int v5; // r12d
  unsigned int v7; // r13d
  int v8; // edi
  CTouchProcessor *v9; // rcx
  unsigned int v10; // esi
  _DWORD *v11; // rdi
  unsigned int v12; // r14d
  __int64 v13; // rdx
  __int128 v14; // xmm0
  __int64 v15; // rcx
  __int128 v16; // xmm1
  int v17; // r14d
  __int64 v18; // r8
  int v19; // eax
  unsigned __int64 v20; // rcx
  size_t v21; // r12
  __int64 v22; // rdi
  int v23; // r9d
  unsigned int v24; // r15d
  _WORD *v25; // rsi
  int v26; // eax
  unsigned int i; // r12d
  __int64 v28; // r9
  __int64 v29; // r8
  int v30; // ecx
  __int64 v31; // rdx
  _OWORD *v32; // rax
  __int128 v33; // xmm1
  __int64 v34; // rcx
  __int64 v35; // rcx
  size_t v36; // [rsp+30h] [rbp-89h]
  _QWORD v37[2]; // [rsp+38h] [rbp-81h] BYREF
  int v38; // [rsp+48h] [rbp-71h]
  int v39; // [rsp+4Ch] [rbp-6Dh]
  _QWORD v40[16]; // [rsp+50h] [rbp-69h] BYREF

  v5 = a3;
  if ( this[10] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3);
  v7 = 0;
  v8 = *(_DWORD *)(*((_QWORD *)a2 + 16) + 176LL);
  if ( v8 == 2 && (unsigned __int8)IsTouchIVEnabled()
    || v8 == 3 && (unsigned __int8)IsPenIVEnabled()
    || v8 == 5 && IsPTPIVEnabled() )
  {
    v10 = 0;
    v11 = (_DWORD *)*((_QWORD *)a2 + 16);
    v12 = 0;
    if ( *((_DWORD *)a2 + 12) )
    {
      do
      {
        if ( CTouchProcessor::ShouldGenerateMessagesForNode(v9, a2, (const struct CPointerInfoNode *)v11, a4) )
        {
          wil_details_FeaturePropertyCache_ReportUsageToService(
            &Feature_InputVirtualizationDesktopSpecific__private_propertyCache,
            0x1244BCEu,
            (const struct FEATURE_LOGGED_TRAITS *)&unk_1C01D8A90,
            0,
            3);
          if ( CInputDest::IsContainer((CInputDest *)(v11 + 90)) )
          {
            *v11 |= 0x1000u;
            ++v10;
            v9 = (CTouchProcessor *)(unsigned int)v11[119];
            v11[1] |= 0x2000u;
            v11[122] = (_DWORD)v9;
          }
        }
        ++v12;
        v11 += 124;
      }
      while ( v12 < *((_DWORD *)a2 + 12) );
      if ( v10 )
      {
        memset(v40, 0, 0x78uLL);
        v13 = *((unsigned int *)a2 + 14);
        if ( *((void **)a2 + 8) != TouchExtensibility::hDeviceUser )
          v40[4] = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 18) + 16LL) + 16LL);
        v14 = *(_OWORD *)((char *)a2 + 72);
        v15 = *((_QWORD *)a2 + 15);
        v16 = *(_OWORD *)((char *)a2 + 88);
        v40[9] = v5;
        v17 = 24 * (v13 + 5);
        HIDWORD(v40[10]) = 0;
        v40[11] = 0LL;
        HIDWORD(v40[3]) = v13;
        v40[13] = 0LL;
        *(_OWORD *)&v40[5] = v14;
        *(_OWORD *)&v40[7] = v16;
        if ( (_DWORD)v13 )
        {
          v18 = v13;
          do
          {
            v19 = *(_DWORD *)(v15 + 8);
            v15 = *(_QWORD *)(v15 + 24);
            v17 += (v19 + 7) & 0xFFFFFFF8;
            --v18;
          }
          while ( v18 );
        }
        v20 = 192LL * v10;
        if ( v20 > 0xFFFFFFFF )
        {
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            return;
          v23 = 335;
          goto LABEL_46;
        }
        v21 = (unsigned int)v20;
        v36 = (unsigned int)v20;
        v22 = Win32AllocPool((unsigned int)v20, 0x6E705649u);
        if ( !v22 )
        {
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            return;
          v23 = 336;
LABEL_46:
          LOBYTE(v13) = 2;
          WPP_RECORDER_SF_((_DWORD)gBaseLog, v13, 7, v23, (__int64)&WPP_06d7dff703a03015e007562f188a8383_Traceguids);
          return;
        }
        v24 = 0;
        if ( *((_DWORD *)a2 + 12) )
        {
          v25 = (_WORD *)(*((_QWORD *)a2 + 16) + 488LL);
          do
          {
            v26 = *((_DWORD *)v25 - 121);
            if ( (v26 & 0x2000) != 0 && (v26 & 0x4000) == 0 )
            {
              memset((void *)v22, 0, v21);
              for ( i = v24; i < *((_DWORD *)a2 + 12); ++i )
              {
                v28 = *((_QWORD *)a2 + 16);
                v29 = 496LL * i;
                v30 = *(_DWORD *)(v29 + v28 + 4);
                if ( (v30 & 0x2000) != 0
                  && (v30 & 0x4000) == 0
                  && *v25 == *(_WORD *)(v29 + v28 + 488)
                  && v25[1] == *(_WORD *)(v29 + v28 + 490) )
                {
                  *(_DWORD *)(v29 + v28 + 4) = v30 | 0x4000;
                  v31 = v22 + 192LL * v7;
                  *(_DWORD *)v31 = *(_DWORD *)(v29 + v28 + 164);
                  v32 = (_OWORD *)(v29 + v28 + 168);
                  *(_OWORD *)(v31 + 8) = *v32;
                  *(_OWORD *)(v31 + 24) = v32[1];
                  *(_OWORD *)(v31 + 40) = v32[2];
                  *(_OWORD *)(v31 + 56) = v32[3];
                  *(_OWORD *)(v31 + 72) = v32[4];
                  *(_OWORD *)(v31 + 88) = v32[5];
                  *(_OWORD *)(v31 + 104) = v32[6];
                  v33 = v32[7];
                  v32 += 8;
                  *(_OWORD *)(v31 + 120) = v33;
                  *(_OWORD *)(v31 + 136) = *v32;
                  *(_OWORD *)(v31 + 152) = v32[1];
                  *(_OWORD *)(v31 + 168) = v32[2];
                  *(_QWORD *)(v31 + 184) = *((_QWORD *)v32 + 6);
                  *(_DWORD *)(v31 + 20) = 0;
                  *(_DWORD *)(v31 + 28) &= 0xFFC7FFFE;
                  wil_details_FeaturePropertyCache_ReportUsageToService(
                    &Feature_InputVirtualizationDesktopSpecific__private_propertyCache,
                    0x1244BCEu,
                    (const struct FEATURE_LOGGED_TRAITS *)&unk_1C01D8A90,
                    0,
                    3);
                  ++v7;
                }
              }
              LODWORD(v40[3]) = v7;
              v17 += 192 * v7;
              v40[14] = v22;
              LODWORD(v40[0]) = v17;
              v37[0] = v40;
              v7 = 0;
              v38 = *(_DWORD *)v25;
              v39 = 0;
              v37[1] = a2;
              (*(void (__fastcall **)(CBaseInput *, _QWORD *))(*(_QWORD *)gpHidInput + 144LL))(gpHidInput, v37);
              if ( (*(_DWORD *)(v22 + 28) & 0x10000) != 0 )
              {
                v34 = *(_QWORD *)(HMValidateHandleNoSecure(*(_QWORD *)(v22 + 32), 19) + 480);
                if ( v34 )
                  v35 = *(_QWORD *)(v34 + 1000);
                else
                  v35 = 0LL;
                v21 = v36;
                if ( v35 )
                {
                  *(_DWORD *)(v35 + 420) |= 2u;
                  *(_DWORD *)(v35 + 416) = v38;
                }
              }
              else
              {
                v21 = v36;
              }
            }
            ++v24;
            v25 += 248;
          }
          while ( v24 < *((_DWORD *)a2 + 12) );
        }
        Win32FreePool(v22);
      }
    }
  }
}
