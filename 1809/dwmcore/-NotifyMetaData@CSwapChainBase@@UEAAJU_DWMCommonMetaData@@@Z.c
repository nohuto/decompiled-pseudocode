/*
 * XREFs of ?NotifyMetaData@CSwapChainBase@@UEAAJU_DWMCommonMetaData@@@Z @ 0x1802050C0
 * Callers:
 *     ?NotifyMetaData@CDWMOffScreenSwapChain@@UEAAJU_DWMCommonMetaData@@@Z @ 0x180204820 (-NotifyMetaData@CDWMOffScreenSwapChain@@UEAAJU_DWMCommonMetaData@@@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180022680 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?HrgnToRgnData@@YAJPEAUHRGN__@@PEAPEAU_RGNDATA@@PEAI@Z @ 0x1800A5298 (-HrgnToRgnData@@YAJPEAUHRGN__@@PEAPEAU_RGNDATA@@PEAI@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0 @ 0x180145780 (McTemplateU0.c)
 *     McTemplateU0xnn @ 0x1801BA280 (McTemplateU0xnn.c)
 *     McTemplateU0xxx @ 0x1801BA300 (McTemplateU0xxx.c)
 *     ?NotifyMoveOptimization@CSwapChainBase@@QEAAJU_DWMCommonMetaData@@@Z @ 0x1802054E4 (-NotifyMoveOptimization@CSwapChainBase@@QEAAJU_DWMCommonMetaData@@@Z.c)
 *     McTemplateU0xxqqxx @ 0x18020584C (McTemplateU0xxqqxx.c)
 */

__int64 __fastcall CSwapChainBase::NotifyMetaData(__int64 a1, unsigned int *a2)
{
  DWORD v2; // esi
  int v5; // ebx
  __int64 v6; // rcx
  int v7; // ecx
  __int64 v8; // rcx
  __int64 v9; // rax
  unsigned int v10; // edx
  _OWORD *v11; // rcx
  int v12; // eax
  __int64 v13; // rax
  unsigned int v14; // edx
  _OWORD *v15; // rcx
  int v16; // eax
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int64 v19; // rax
  unsigned int v20; // edx
  _OWORD *v21; // rcx
  int v22; // eax
  unsigned int *v23; // r8
  HRGN v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  struct _RGNDATA *v27; // r15
  DWORD nCount; // ecx
  char v29; // al
  __int64 v31; // [rsp+28h] [rbp-A0h]
  struct _RGNDATA *v32; // [rsp+40h] [rbp-88h] BYREF
  _OWORD v33[3]; // [rsp+50h] [rbp-78h] BYREF
  __int64 v34; // [rsp+80h] [rbp-48h]
  __int64 v35; // [rsp+90h] [rbp-38h] BYREF
  unsigned int v36; // [rsp+98h] [rbp-30h]
  unsigned int v37; // [rsp+9Ch] [rbp-2Ch]

  v2 = 0;
  v5 = 0;
  if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a1 + 80LL))(a1) )
  {
    v6 = *a2;
    if ( (_DWORD)v6 )
    {
      v7 = v6 - 1;
      if ( v7 )
      {
        v8 = (unsigned int)(v7 - 1);
        if ( (_DWORD)v8 )
        {
          if ( (_DWORD)v8 == 1 )
          {
            v9 = *(unsigned int *)(a1 + 368);
            v10 = v9 + 1;
            v5 = (int)v9 + 1 < (unsigned int)v9 ? 0x80070216 : 0;
            if ( (int)v9 + 1 < (unsigned int)v9 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v5, 0xB5u);
            }
            else if ( v10 > *(_DWORD *)(a1 + 364) )
            {
              v12 = DynArrayImpl<0>::AddMultipleAndSet(a1 + 344, 48, 1, a2);
              v5 = v12;
              if ( v12 < 0 )
                MilInstrumentationCheckHR_MaybeFailFast((__int64)v11, 0LL, 0, v12, 0xC0u);
            }
            else
            {
              v11 = (_OWORD *)(*(_QWORD *)(a1 + 344) + 48 * v9);
              *v11 = *(_OWORD *)a2;
              v11[1] = *((_OWORD *)a2 + 1);
              v11[2] = *((_OWORD *)a2 + 2);
              *(_DWORD *)(a1 + 368) = v10;
            }
            if ( v5 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast((__int64)v11, 0LL, 0, v5, 0x1A9u);
            }
            else if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
            {
              McTemplateU0xxx(
                Microsoft_Windows_Dwm_Core_Provider_Context,
                &EVTDESC_DETECT_DESKTOPSCREEN_WRITE,
                *((_QWORD *)a2 + 1),
                a1 + 344,
                *(unsigned int *)(a1 + 368));
            }
          }
        }
        else
        {
          v13 = *(unsigned int *)(a1 + 368);
          v14 = v13 + 1;
          v5 = (int)v13 + 1 < (unsigned int)v13 ? 0x80070216 : 0;
          if ( (int)v13 + 1 < (unsigned int)v13 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v5, 0xB5u);
          }
          else if ( v14 > *(_DWORD *)(a1 + 364) )
          {
            v16 = DynArrayImpl<0>::AddMultipleAndSet(a1 + 344, 48, 1, a2);
            v5 = v16;
            if ( v16 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast((__int64)v15, 0LL, 0, v16, 0xC0u);
          }
          else
          {
            v15 = (_OWORD *)(*(_QWORD *)(a1 + 344) + 48 * v13);
            *v15 = *(_OWORD *)a2;
            v15[1] = *((_OWORD *)a2 + 1);
            v15[2] = *((_OWORD *)a2 + 2);
            *(_DWORD *)(a1 + 368) = v14;
          }
          if ( v5 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast((__int64)v15, 0LL, 0, v5, 0x1B4u);
        }
      }
      else
      {
        v17 = *((_OWORD *)a2 + 1);
        v33[0] = *(_OWORD *)a2;
        v18 = *((_OWORD *)a2 + 2);
        v33[1] = v17;
        *(_QWORD *)&v17 = *((_QWORD *)a2 + 6);
        v33[2] = v18;
        v34 = v17;
        CSwapChainBase::NotifyMoveOptimization(a1, v33);
      }
    }
    else
    {
      v19 = *(unsigned int *)(a1 + 368);
      v20 = v19 + 1;
      v5 = (int)v19 + 1 < (unsigned int)v19 ? 0x80070216 : 0;
      if ( (int)v19 + 1 < (unsigned int)v19 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0xB5u);
      }
      else if ( v20 > *(_DWORD *)(a1 + 364) )
      {
        v22 = DynArrayImpl<0>::AddMultipleAndSet(a1 + 344, 48, 1, a2);
        v5 = v22;
        if ( v22 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast((__int64)v21, 0LL, 0, v22, 0xC0u);
      }
      else
      {
        v21 = (_OWORD *)(*(_QWORD *)(a1 + 344) + 48 * v19);
        *v21 = *(_OWORD *)a2;
        v21[1] = *((_OWORD *)a2 + 1);
        v21[2] = *((_OWORD *)a2 + 2);
        *(_DWORD *)(a1 + 368) = v20;
      }
      if ( v5 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast((__int64)v21, 0LL, 0, v5, 0x17Du);
      }
      else
      {
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
          McTemplateU0xxqqxx(
            (unsigned int)Microsoft_Windows_Dwm_Core_Provider_Context,
            v20,
            *((_QWORD *)a2 + 1),
            *((_QWORD *)a2 + 3),
            a2[4],
            a2[5],
            a1 + 88,
            *(_DWORD *)(a1 + 368));
        if ( EventEnabled(Microsoft_Windows_Dwm_Core_Provider_Context[0], &EVTDESC_REMOTEAPP_WINDOWCLIP) )
        {
          v24 = (HRGN)*((_QWORD *)a2 + 3);
          v36 = a2[4];
          v37 = a2[5];
          v32 = 0LL;
          v35 = 0LL;
          HrgnToRgnData(v24, &v32, v23);
          v27 = v32;
          if ( v32 )
          {
            nCount = v32->rdh.nCount;
            if ( nCount )
            {
              v29 = Microsoft_Windows_Dwm_CoreEnableBits;
              if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
              {
                McTemplateU0(Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_REMOTEAPP_WINDOWCLIP_Start, v25);
                nCount = v27->rdh.nCount;
                v29 = Microsoft_Windows_Dwm_CoreEnableBits;
              }
              if ( nCount )
              {
                do
                {
                  if ( (v29 & 2) != 0 )
                  {
                    McTemplateU0xnn(
                      Microsoft_Windows_Dwm_Core_Provider_Context,
                      &EVTDESC_REMOTEAPP_WINDOWCLIP,
                      *((_QWORD *)a2 + 1),
                      v26,
                      (__int64)&v27->Buffer[16 * v2],
                      v31,
                      (__int64)&v35);
                    v29 = Microsoft_Windows_Dwm_CoreEnableBits;
                  }
                  ++v2;
                }
                while ( v2 < v27->rdh.nCount );
              }
              if ( (v29 & 2) != 0 )
                McTemplateU0(Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_REMOTEAPP_WINDOWCLIP_Stop, v25);
            }
            WPF::ProcessHeapImpl::Free(v27);
          }
        }
      }
    }
  }
  return (unsigned int)v5;
}
