/*
 * XREFs of ?NotifyMetaData@CSwapChainBase@@UEAAJU_DWMCommonMetaData@@@Z @ 0x180163DE0
 * Callers:
 *     ?NotifyMetaData@CDWMOffScreenSwapChain@@UEAAJU_DWMCommonMetaData@@@Z @ 0x1801633A0 (-NotifyMetaData@CDWMOffScreenSwapChain@@UEAAJU_DWMCommonMetaData@@@Z.c)
 * Callees:
 *     ?HrgnToRgnData@@YAJPEAUHRGN__@@PEAPEAU_RGNDATA@@PEAI@Z @ 0x180062110 (-HrgnToRgnData@@YAJPEAUHRGN__@@PEAPEAU_RGNDATA@@PEAI@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18007004C (--3@YAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0 @ 0x18015D418 (McTemplateU0.c)
 *     McTemplateU0xxx @ 0x18016351C (McTemplateU0xxx.c)
 *     ?AddMultipleAndSet@?$DynArray@U_DWMIndirectMetaData@@$0A@@@QEAAJPEFBU_DWMIndirectMetaData@@I@Z @ 0x180163A94 (-AddMultipleAndSet@-$DynArray@U_DWMIndirectMetaData@@$0A@@@QEAAJPEFBU_DWMIndirectMetaData@@I@Z.c)
 *     ?NotifyMoveOptimization@CSwapChainBase@@QEAAJU_DWMCommonMetaData@@@Z @ 0x180164090 (-NotifyMoveOptimization@CSwapChainBase@@QEAAJU_DWMCommonMetaData@@@Z.c)
 *     McTemplateU0xnn @ 0x1801643B0 (McTemplateU0xnn.c)
 *     McTemplateU0xxqqxx @ 0x1801644A8 (McTemplateU0xxqqxx.c)
 */

__int64 __fastcall CSwapChainBase::NotifyMetaData(unsigned int *a1, __int64 a2)
{
  unsigned int v2; // ebx
  unsigned int v5; // esi
  signed int v6; // eax
  __int64 v7; // rcx
  signed int v8; // eax
  __int64 v9; // rcx
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  signed int v12; // eax
  int v13; // edx
  __int64 v14; // rcx
  unsigned int *v15; // r8
  HRGN v16; // rcx
  __int64 v17; // r8
  int v18; // r9d
  _DWORD *v19; // r14
  int v20; // ecx
  char v21; // al
  int v23; // [rsp+28h] [rbp-A0h]
  void *lpMem; // [rsp+40h] [rbp-88h] BYREF
  _OWORD v25[3]; // [rsp+50h] [rbp-78h] BYREF
  __int64 v26; // [rsp+80h] [rbp-48h] BYREF
  int v27; // [rsp+88h] [rbp-40h]
  int v28; // [rsp+8Ch] [rbp-3Ch]

  v2 = 0;
  v5 = 0;
  if ( (*(unsigned __int8 (__fastcall **)(unsigned int *))(*(_QWORD *)a1 + 80LL))(a1) )
  {
    if ( *(_DWORD *)a2 )
    {
      switch ( *(_DWORD *)a2 )
      {
        case 1:
          v10 = *(_OWORD *)(a2 + 16);
          v25[0] = *(_OWORD *)a2;
          v11 = *(_OWORD *)(a2 + 32);
          v25[1] = v10;
          v25[2] = v11;
          CSwapChainBase::NotifyMoveOptimization(a1, v25);
          break;
        case 2:
          v8 = DynArray<_DWMIndirectMetaData,0>::AddMultipleAndSet((__int64)(a1 + 86), (_OWORD *)a2);
          v5 = v8;
          if ( v8 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x189u, 0LL);
          break;
        case 3:
          v6 = DynArray<_DWMIndirectMetaData,0>::AddMultipleAndSet((__int64)(a1 + 86), (_OWORD *)a2);
          v5 = v6;
          if ( v6 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x17Eu, 0LL);
          }
          else if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
          {
            McTemplateU0xxx(
              Microsoft_Windows_Dwm_Core_Provider_Context,
              &EVTDESC_DETECT_DESKTOPSCREEN_WRITE,
              *(_QWORD *)(a2 + 8),
              a1 + 86,
              a1[92]);
          }
          break;
      }
    }
    else
    {
      v12 = DynArray<_DWMIndirectMetaData,0>::AddMultipleAndSet((__int64)(a1 + 86), (_OWORD *)a2);
      v5 = v12;
      if ( v12 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v12, 0x152u, 0LL);
      }
      else
      {
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
          McTemplateU0xxqqxx(
            (unsigned int)Microsoft_Windows_Dwm_Core_Provider_Context,
            v13,
            *(_QWORD *)(a2 + 8),
            *(_QWORD *)(a2 + 24),
            *(_DWORD *)(a2 + 16),
            *(_DWORD *)(a2 + 20),
            (_BYTE)a1 + 88,
            a1[92]);
        if ( EventEnabled(Microsoft_Windows_Dwm_Core_Provider_Context[0], &EVTDESC_REMOTEAPP_WINDOWCLIP) )
        {
          v16 = *(HRGN *)(a2 + 24);
          v27 = *(_DWORD *)(a2 + 16);
          v28 = *(_DWORD *)(a2 + 20);
          lpMem = 0LL;
          v26 = 0LL;
          HrgnToRgnData(v16, (struct _RGNDATA **)&lpMem, v15);
          v19 = lpMem;
          if ( lpMem )
          {
            v20 = *((_DWORD *)lpMem + 2);
            if ( v20 )
            {
              v21 = Microsoft_Windows_Dwm_CoreEnableBits;
              if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
              {
                McTemplateU0(Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_REMOTEAPP_WINDOWCLIP_Start, v17);
                v20 = v19[2];
                v21 = Microsoft_Windows_Dwm_CoreEnableBits;
              }
              if ( v20 )
              {
                do
                {
                  if ( (v21 & 2) != 0 )
                  {
                    McTemplateU0xnn(
                      (unsigned int)Microsoft_Windows_Dwm_Core_Provider_Context,
                      (unsigned int)&EVTDESC_REMOTEAPP_WINDOWCLIP,
                      *(_QWORD *)(a2 + 8),
                      v18,
                      (__int64)&v19[4 * v2 + 8],
                      v23,
                      (__int64)&v26);
                    v21 = Microsoft_Windows_Dwm_CoreEnableBits;
                  }
                  ++v2;
                }
                while ( v2 < v19[2] );
              }
              if ( (v21 & 2) != 0 )
                McTemplateU0(Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_REMOTEAPP_WINDOWCLIP_Stop, v17);
            }
            operator delete(v19);
          }
        }
      }
    }
  }
  return v5;
}
