/*
 * XREFs of ?_SetApplicationPos@CApplicationManager@@AEAAJPEAUIImmersiveApplication@@PEBUAPPLICATION_VIEW_DATA_UPDATE@@W4SET_IMM_APP_POS@@PEAPEAXW4APPLICATION_VIEW_CLOAK_TYPE@@@Z @ 0x18001B170
 * Callers:
 *     ?SetCloak@CApplicationManager@@UEAAJPEAUIImmersiveApplication@@HW4APPLICATION_VIEW_CLOAK_TYPE@@@Z @ 0x18001B0F0 (-SetCloak@CApplicationManager@@UEAAJPEAUIImmersiveApplication@@HW4APPLICATION_VIEW_CLOAK_TYPE@@@.c)
 *     ?SetApplicationPos@CApplicationManager@@UEAAJPEAUIImmersiveApplication@@PEBUAPPLICATION_VIEW_DATA_UPDATE@@W4SET_IMM_APP_POS@@PEAPEAX@Z @ 0x1801177B0 (-SetApplicationPos@CApplicationManager@@UEAAJPEAUIImmersiveApplication@@PEBUAPPLICATION_VIEW_DAT.c)
 *     ?SetApplicationPosSafe@CApplicationManager@@UEAAJPEAUIImmersiveApplication@@PEBUAPPLICATION_VIEW_DATA_UPDATE@@W4SET_IMM_APP_POS@@PEAPEAX@Z @ 0x180117840 (-SetApplicationPosSafe@CApplicationManager@@UEAAJPEAUIImmersiveApplication@@PEBUAPPLICATION_VIEW.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072ADC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?IsCalledOnIAMThread@CIAMGlobals@@QEBA_NXZ @ 0x18011432C (-IsCalledOnIAMThread@CIAMGlobals@@QEBA_NXZ.c)
 *     ?_GetGlobalSyncEventHandler@CApplicationManager@@AEAAJPEAPEAUISyncIAMEventHandler@@@Z @ 0x18011C6D4 (-_GetGlobalSyncEventHandler@CApplicationManager@@AEAAJPEAPEAUISyncIAMEventHandler@@@Z.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall CApplicationManager::_SetApplicationPos(
        CApplicationManager *a1,
        void *a2,
        __int64 a3,
        int a4,
        __int64 a5,
        int a6)
{
  IUnknown *v9; // rcx
  __int64 v10; // r13
  __int64 v11; // rdi
  void *v12; // rbx
  int v13; // r12d
  void *v14; // rcx
  HRESULT Site; // ebx
  __int64 (__fastcall ***v16)(_QWORD, GUID *, IUnknown **); // rcx
  CIAMGlobals *v17; // rcx
  int v18; // edi
  IUnknown *v19; // r12
  int v20; // eax
  void *v21; // rcx
  IUnknown *v22; // rcx
  char v24; // al
  int v25; // eax
  int v26; // [rsp+28h] [rbp-59h]
  __int64 v27; // [rsp+38h] [rbp-49h]
  int v28; // [rsp+48h] [rbp-39h]
  void *ppv[12]; // [rsp+68h] [rbp-19h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+4Fh]
  struct ISyncIAMEventHandler *v31; // [rsp+D8h] [rbp+57h] BYREF
  IUnknown *punk; // [rsp+E0h] [rbp+5Fh] BYREF
  __int64 v33; // [rsp+E8h] [rbp+67h]

  v33 = a3;
  ppv[1] = (void *)-2LL;
  v9 = 0LL;
  punk = 0LL;
  ppv[2] = a2;
  if ( a2 )
  {
    (*(void (__fastcall **)(void *))(*(_QWORD *)a2 + 8LL))(a2);
    v9 = punk;
  }
  if ( v9 )
  {
    punk = 0LL;
    ((void (__fastcall *)(IUnknown *))v9->lpVtbl->Release)(v9);
  }
  punk = 0LL;
  ppv[3] = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  if ( *((_QWORD *)a1 + 80) )
  {
    ppv[4] = 0LL;
    while ( 1 )
    {
      v12 = *(void **)(*((_QWORD *)a1 + 79) + 8 * v11);
      ppv[5] = v12;
      if ( v12 )
        (*(void (__fastcall **)(void *))(*(_QWORD *)v12 + 8LL))(v12);
      v13 = -1;
      ppv[0] = 0LL;
      if ( (**(int (__fastcall ***)(void *, GUID *, void **))v12)(v12, &GUID_8b14e88b_5663_4caf_b196_c31479262831, ppv) >= 0 )
      {
        (*(void (__fastcall **)(void *, void *, struct ISyncIAMEventHandler **))(*(_QWORD *)ppv[0] + 104LL))(
          ppv[0],
          a2,
          &v31);
        v13 = ((_DWORD)v31 != 0) - 1;
      }
      v14 = ppv[0];
      if ( ppv[0] )
      {
        ppv[0] = 0LL;
        (*(void (__fastcall **)(void *))(*(_QWORD *)v14 + 16LL))(v14);
      }
      (*(void (__fastcall **)(void *))(*(_QWORD *)v12 + 16LL))(v12);
      if ( !v13 )
        break;
      if ( (unsigned __int64)++v11 >= *((_QWORD *)a1 + 80) )
        goto LABEL_31;
    }
    v10 = v11;
    Site = 0;
  }
  else
  {
LABEL_31:
    Site = -2147319765;
  }
  if ( Site >= 0 )
  {
    v16 = *(__int64 (__fastcall ****)(_QWORD, GUID *, IUnknown **))(*((_QWORD *)a1 + 79) + 8 * v10);
    Site = (**v16)(v16, &GUID_c9301630_27da_428e_a432_0a5e49c0ffee, &punk);
  }
  if ( a2 )
    (*(void (__fastcall **)(void *))(*(_QWORD *)a2 + 16LL))(a2);
  if ( Site >= 0 )
  {
    ppv[0] = 0LL;
    Site = IUnknown_GetSite(punk, &GUID_91b0050a_78af_434e_ae0c_89943ac0ffee, ppv);
    if ( Site >= 0 )
    {
      v18 = 0;
      if ( (a4 & 0x30) == 0 )
        goto LABEL_22;
      v24 = -CIAMGlobals::IsCalledOnIAMThread(v17);
      Site = v24 == 0 ? 0x8001010E : 0;
      if ( v24 )
      {
        if ( (a4 & 0x30) != 0 && (((a4 & 0x30) - 1LL) & a4 & 0x30) == 0 )
        {
          v25 = a4 & 0x10;
          a4 &= 0xFFFFFFCF;
          v18 = v25 != 0 ? 1 : 8;
LABEL_22:
          v19 = punk;
          v28 = a6;
          HIDWORD(v27) = HIDWORD(a5);
          v20 = ((__int64 (__fastcall *)(IUnknown *, _QWORD, __int64, _QWORD))punk->lpVtbl[10].Release)(
                  punk,
                  0LL,
                  v33,
                  0LL);
          Site = v20;
          if ( v20 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x107E,
              (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
              (const char *)(unsigned int)v20,
              a4);
          }
          else
          {
            if ( v18 && (((__int64 (__fastcall *)(IUnknown *))v19->lpVtbl[11].Release)(v19) & 2) != 0 )
            {
              v31 = 0LL;
              Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v31);
              if ( (int)CApplicationManager::_GetGlobalSyncEventHandler(a1, &v31) >= 0 )
              {
                LODWORD(v27) = 1;
                (*(void (__fastcall **)(struct ISyncIAMEventHandler *, _QWORD, _QWORD *, void *, int, int, __int64, _QWORD, int, int))(*(_QWORD *)v31 + 24LL))(
                  v31,
                  0LL,
                  (_QWORD *)a1 + 31,
                  a2,
                  v18,
                  5,
                  v27,
                  0LL,
                  v28,
                  v18);
              }
              Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v31);
            }
            Site = 0;
          }
          goto LABEL_25;
        }
        Site = -2147024809;
      }
      else
      {
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x104C,
          (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
          (const char *)(unsigned int)Site,
          v26);
      }
    }
LABEL_25:
    v21 = ppv[0];
    if ( ppv[0] )
    {
      ppv[0] = 0LL;
      (*(void (__fastcall **)(void *))(*(_QWORD *)v21 + 16LL))(v21);
    }
  }
  v22 = punk;
  if ( punk )
  {
    punk = 0LL;
    ((void (__fastcall *)(IUnknown *))v22->lpVtbl->Release)(v22);
  }
  return (unsigned int)Site;
}
