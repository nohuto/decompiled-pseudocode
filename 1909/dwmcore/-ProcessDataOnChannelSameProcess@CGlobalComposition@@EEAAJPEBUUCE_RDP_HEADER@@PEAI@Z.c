/*
 * XREFs of ?ProcessDataOnChannelSameProcess@CGlobalComposition@@EEAAJPEBUUCE_RDP_HEADER@@PEAI@Z @ 0x18009BB10
 * Callers:
 *     <none>
 * Callees:
 *     ?IsOOM@@YA_NJ@Z @ 0x18001EC1C (-IsOOM@@YA_NJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009BE60 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 *     ?LogDebugPropertyUpdates@CAnimationLoggingManager@@QEAAJ_K@Z @ 0x1800C2E50 (-LogDebugPropertyUpdates@CAnimationLoggingManager@@QEAAJ_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?GetStackCaptureRootFailureAddress@@YAPEAXJ@Z @ 0x180159B44 (-GetStackCaptureRootFailureAddress@@YAPEAXJ@Z.c)
 *     ?MilUnexpectedError@@YAXJPEBG@Z @ 0x180159D1C (-MilUnexpectedError@@YAXJPEBG@Z.c)
 *     McTemplateU0x @ 0x18015D5EC (McTemplateU0x.c)
 *     McTemplateU0qq @ 0x18015E0B4 (McTemplateU0qq.c)
 *     ?FailFastOnMalformedPacket@CComposition@@AEAAXW4MILCMD_CRASHID@@PEBX@Z @ 0x180175D4C (-FailFastOnMalformedPacket@CComposition@@AEAAXW4MILCMD_CRASHID@@PEBX@Z.c)
 */

__int64 __fastcall CGlobalComposition::ProcessDataOnChannelSameProcess(
        CGlobalComposition *this,
        const struct UCE_RDP_HEADER *a2,
        unsigned int *a3)
{
  unsigned int v4; // eax
  __int64 v5; // rsi
  __int64 v6; // r14
  int v7; // edi
  _QWORD *v8; // rax
  _QWORD *v9; // rcx
  _QWORD *v10; // r10
  unsigned int v11; // eax
  unsigned int *v12; // r13
  __int64 v13; // r9
  __int64 v14; // rcx
  unsigned int *v15; // r15
  unsigned int v16; // r8d
  int v17; // edx
  unsigned __int64 v18; // r12
  unsigned int *v19; // rbx
  unsigned __int64 v20; // rax
  signed int v21; // eax
  unsigned __int64 v22; // rcx
  unsigned __int64 v23; // rax
  CAnimationLoggingManager *v24; // rcx
  __int64 v25; // rbx
  __int64 v27; // rcx
  signed int v28; // eax
  __int64 v29; // rcx
  void *StackCaptureRootFailureAddress; // rax
  __int64 v31; // rcx
  int v32; // [rsp+30h] [rbp-58h]
  unsigned int v33[2]; // [rsp+38h] [rbp-50h]
  _QWORD *v34; // [rsp+40h] [rbp-48h]
  unsigned int v35; // [rsp+98h] [rbp+10h]
  unsigned int v37; // [rsp+A8h] [rbp+20h]

  *a3 = 0;
  v4 = *((_DWORD *)a2 + 4);
  if ( v4 < 0x10000 && v4 < *((_DWORD *)this + 88) && (v5 = *(_QWORD *)(*((_QWORD *)this + 41) + 8LL * v4)) != 0 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v5 + 8));
    v6 = *((_QWORD *)a2 + 3);
    v7 = 0;
    if ( v6 )
    {
      v8 = *(_QWORD **)(v6 + 32);
      if ( v8 )
      {
        v9 = *(_QWORD **)(v6 + 8);
        if ( *v9 != v6 )
          __fastfail(3u);
        *v8 = v6;
        v8[1] = v9;
        *v9 = v8;
        *(_QWORD *)(v6 + 8) = v8;
        *(_QWORD *)(v6 + 32) = 0LL;
      }
      v10 = *(_QWORD **)v6;
      v34 = *(_QWORD **)v6;
      if ( *(_QWORD *)v6 != v6 )
      {
        while ( 1 )
        {
          v11 = *((_DWORD *)v10 + 5);
          v12 = (unsigned int *)(v10 + 3);
          ++*(_DWORD *)(v5 + 80);
          v13 = 0LL;
          v14 = *(_QWORD *)(v5 + 24);
          v15 = 0LL;
          *((_QWORD *)this + 66) = v10 + 3;
          v16 = 0;
          *((_DWORD *)this + 134) = v11;
          v17 = 0;
          v18 = v11;
          v37 = 0;
          v35 = 0;
          v32 = 0;
          *(_QWORD *)v33 = v14;
          if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
          {
            McTemplateU0x(
              &Microsoft_Windows_Dwm_Core_Provider_Context,
              &EVTDESC_MILEVENT_MEDIA_UCE_PROCESSQUEUEEVENT,
              v11);
            v14 = *(_QWORD *)v33;
            v16 = 0;
            v13 = 0LL;
            v17 = 0;
          }
          v19 = v12;
          v7 = -2147467259;
          if ( !v18 )
          {
            v15 = 0LL;
            v16 = 0;
            v35 = 0;
            v7 = 1;
            goto LABEL_18;
          }
          if ( v18 >= 8 )
          {
            v20 = *v12;
            if ( (unsigned int)v20 >= 8 && (v20 & 3) == 0 )
            {
              v14 = *(_QWORD *)v33;
              if ( v20 <= v18 )
              {
                v13 = v12[1];
                v15 = v12 + 1;
                v16 = v20 - 4;
                v37 = v12[1];
                v35 = v20 - 4;
                v19 = (unsigned int *)((char *)v12 + v20);
                v7 = 0;
              }
            }
          }
          if ( v7 < 0 )
            break;
          while ( 1 )
          {
LABEL_18:
            if ( v7 == 1 )
            {
              *(_BYTE *)(*((_QWORD *)this + 30) + 416LL) |= 2u;
              v24 = *(CAnimationLoggingManager **)(v5 + 56);
              if ( v24 )
              {
                v28 = CAnimationLoggingManager::LogDebugPropertyUpdates(v24, *((_QWORD *)this + 48));
                v7 = v28;
                if ( v28 < 0 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(v29, 0LL, 0, v28, 0x132u, 0LL);
                  goto LABEL_50;
                }
                v17 = v32;
              }
              v7 = 0;
              goto LABEL_35;
            }
            if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x100000) != 0 )
            {
              McTemplateU0qq(
                &Microsoft_Windows_Dwm_Core_Provider_Context,
                &EVTDESC_COMMAND_PROCESSED_ONBEHALF,
                *(unsigned int *)(v5 + 20),
                v13);
              v16 = v35;
              v14 = *(_QWORD *)v33;
            }
            v21 = CComposition::ProcessMessage(this, v37, v15, v16, v5, v14);
            v7 = v21;
            if ( v21 < 0 )
              break;
            v7 = -2147467259;
            v23 = (unsigned __int64)v12 + v18 - (_QWORD)v19;
            if ( v23 )
            {
              if ( v23 < 8 || (v22 = *v19, (unsigned int)v22 < 8) || (v22 & 3) != 0 || v22 > v23 )
              {
                v13 = v37;
                v16 = v35;
              }
              else
              {
                v13 = v19[1];
                v15 = v19 + 1;
                v19 = (unsigned int *)((char *)v19 + v22);
                v37 = v13;
                v16 = v22 - 4;
                v7 = 0;
                v35 = v22 - 4;
              }
              if ( v7 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, v7, 0x231u, 0LL);
                v16 = v35;
                v13 = v37;
              }
              v14 = *(_QWORD *)v33;
              v17 = ++v32;
              if ( v7 < 0 )
                goto LABEL_44;
            }
            else
            {
              v15 = 0LL;
              v13 = v37;
              v16 = 0;
              v14 = *(_QWORD *)v33;
              v17 = v32 + 1;
              v35 = 0;
              v7 = 1;
              ++v32;
            }
          }
          MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, v21, 0x227u, 0LL);
LABEL_50:
          v17 = v32;
LABEL_35:
          if ( v7 < 0 )
            goto LABEL_44;
          *a3 += v17;
          v10 = (_QWORD *)*v34;
          v34 = v10;
          if ( v10 == (_QWORD *)v6 )
            goto LABEL_37;
        }
        MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v7, 0x20Du, 0LL);
LABEL_44:
        if ( !IsOOM(v7) )
        {
          MilUnexpectedError(v27, L"batch processing error");
          StackCaptureRootFailureAddress = GetStackCaptureRootFailureAddress(v7);
          CComposition::FailFastOnMalformedPacket(this, (unsigned int)v7, StackCaptureRootFailureAddress);
        }
        MilInstrumentationCheckHR_MaybeFailFast(v27, 0LL, 0, v7, 0x76u, 0LL);
      }
LABEL_37:
      v25 = *((_QWORD *)this + 70);
      InterlockedPushEntrySList((PSLIST_HEADER)(v25 + 192), (PSLIST_ENTRY)(v6 + 64));
      *(_DWORD *)(v25 + 208) = GetTickCount();
      *(_BYTE *)(v25 + 212) = 1;
    }
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v5 + 8), 0xFFFFFFFF) == 1 )
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 16LL))(v5, 1LL);
  }
  else
  {
    v7 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, 0x80070057, 0x8A7u, 0LL);
    MilInstrumentationCheckHR_MaybeFailFast(v31, 0LL, 0, 0x80070057, 0x67u, 0LL);
  }
  return (unsigned int)v7;
}
