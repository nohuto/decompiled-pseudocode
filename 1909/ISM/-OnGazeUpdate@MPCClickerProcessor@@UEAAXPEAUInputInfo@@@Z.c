/*
 * XREFs of ?OnGazeUpdate@MPCClickerProcessor@@UEAAXPEAUInputInfo@@@Z @ 0x18013FC40
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x18002C06E (memset_0.c)
 *     __security_check_cookie @ 0x18002C200 (__security_check_cookie.c)
 *     ??0?$com_ptr_t@VInputSite@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVInputSite@@@Z @ 0x1800570C8 (--0-$com_ptr_t@VInputSite@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVInputSite@@@Z.c)
 *     ?DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAUInputInfo@@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x180085EE4 (-DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAUInputInfo@@V-$com_ptr_t@UIMPCInputProviderBase.c)
 *     ?GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ @ 0x18008616C (-GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ.c)
 *     ?GetWorkspaceId@MPCGestureHandlerManager@@QEAAKV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1800862AC (-GetWorkspaceId@MPCGestureHandlerManager@@QEAAKV-$com_ptr_t@UIMPCInputProviderBase@@Uerr_excepti.c)
 *     ?IsHovering@MPCGestureHandlerManager@@QEAA_NV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18008632C (-IsHovering@MPCGestureHandlerManager@@QEAA_NV-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_.c)
 *     ?IsInjecting@MPCGestureHandlerManager@@QEAA_NV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18008645C (-IsInjecting@MPCGestureHandlerManager@@QEAA_NV-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception.c)
 *     ?OnGazeUpdate@MPCGestureHandlerManager@@QEAAXV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1800866B0 (-OnGazeUpdate@MPCGestureHandlerManager@@QEAAXV-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception.c)
 *     ?IsPrimary@MPCInputProviderBase@@UEBA_NXZ @ 0x18013D110 (-IsPrimary@MPCInputProviderBase@@UEBA_NXZ.c)
 */

void __fastcall MPCClickerProcessor::OnGazeUpdate(unsigned __int64 this, struct InputInfo *a2)
{
  _OWORD *v4; // rdi
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 *v7; // rax
  __int64 v8; // rax
  char *v9; // rcx
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int64 v17; // rax
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int64 **v21; // rax
  unsigned __int64 v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rbx
  __int64 *v25; // rax
  __int64 v26; // rax
  __int64 v27; // rbx
  __int64 *v28; // rax
  __int64 v29; // rax
  __int64 v30; // rbx
  __int64 *v31; // rax
  __int64 **v32; // rbx
  __int64 *v33; // rax
  const char *v34; // r9
  __int64 v35; // rax
  __int64 v36; // rbx
  __int64 *v37; // rax
  _QWORD v38[2]; // [rsp+20h] [rbp-E0h] BYREF
  _BYTE v39[24]; // [rsp+30h] [rbp-D0h] BYREF
  int v40; // [rsp+48h] [rbp-B8h]
  char v41; // [rsp+C8h] [rbp-38h] BYREF
  int v42; // [rsp+CCh] [rbp-34h]
  int v43; // [rsp+D0h] [rbp-30h]
  __int128 v44; // [rsp+D4h] [rbp-2Ch]
  int v45; // [rsp+E8h] [rbp-18h]
  char v46; // [rsp+1F9h] [rbp+F9h]
  char v47; // [rsp+208h] [rbp+108h]
  int v48; // [rsp+2C0h] [rbp+1C0h]
  int v49; // [rsp+2D0h] [rbp+1D0h]
  int v50; // [rsp+2D4h] [rbp+1D4h]
  __int128 v51; // [rsp+2D8h] [rbp+1D8h]
  int WorkspaceId; // [rsp+2E8h] [rbp+1E8h]
  bool v53; // [rsp+2ECh] [rbp+1ECh]

  if ( MPCInputProviderBase::IsPrimary(this) )
  {
    v4 = (_OWORD *)((char *)a2 + 152);
    if ( *(_BYTE *)v4 )
    {
      MPCGestureHandlerManager::GetInstance();
      v6 = v5;
      v7 = wil::com_ptr_t<InputSite,wil::err_exception_policy>::com_ptr_t<InputSite,wil::err_exception_policy>(
             v38,
             this & -(__int64)(this != 24));
      if ( !MPCGestureHandlerManager::IsInjecting(v6, v7) )
      {
        memset_0(v39, 0, 0x7F0uLL);
        v8 = 2LL;
        v40 = 2032;
        v9 = &v41;
        do
        {
          v10 = v4[1];
          *(_OWORD *)v9 = *v4;
          v11 = v4[2];
          *((_OWORD *)v9 + 1) = v10;
          v12 = v4[3];
          *((_OWORD *)v9 + 2) = v11;
          v13 = v4[4];
          *((_OWORD *)v9 + 3) = v12;
          v14 = v4[5];
          *((_OWORD *)v9 + 4) = v13;
          v15 = v4[6];
          *((_OWORD *)v9 + 5) = v14;
          v16 = v4[7];
          v4 += 8;
          *((_OWORD *)v9 + 6) = v15;
          v9 += 128;
          *((_OWORD *)v9 - 1) = v16;
          --v8;
        }
        while ( v8 );
        v17 = *((_QWORD *)v4 + 8);
        v18 = v4[1];
        *(_OWORD *)v9 = *v4;
        v19 = v4[2];
        *((_OWORD *)v9 + 1) = v18;
        v20 = v4[3];
        *((_OWORD *)v9 + 2) = v19;
        *((_OWORD *)v9 + 3) = v20;
        *((_QWORD *)v9 + 8) = v17;
        v53 = v46 != 0;
        v49 = v42;
        v48 = 4;
        v50 = v43;
        v51 = v44;
        WorkspaceId = v45;
        MPCGestureHandlerManager::GetInstance();
        v22 = this & -(__int64)(this != 24);
        goto LABEL_11;
      }
    }
  }
  if ( !*(_QWORD *)(this + 4568) )
  {
    MPCGestureHandlerManager::GetInstance();
    v24 = v23;
    v25 = wil::com_ptr_t<InputSite,wil::err_exception_policy>::com_ptr_t<InputSite,wil::err_exception_policy>(
            v38,
            this & -(__int64)(this != 24));
    if ( MPCGestureHandlerManager::IsInjecting(v24, v25)
      || (MPCGestureHandlerManager::GetInstance(),
          v27 = v26,
          v28 = wil::com_ptr_t<InputSite,wil::err_exception_policy>::com_ptr_t<InputSite,wil::err_exception_policy>(
                  v38,
                  this & -(__int64)(this != 24)),
          MPCGestureHandlerManager::IsHovering(v27, v28)) )
    {
      memset_0(v39, 0, 0x7F0uLL);
      v40 = 2032;
      v48 = 2;
      MPCGestureHandlerManager::GetInstance();
      v30 = v29;
      v31 = wil::com_ptr_t<InputSite,wil::err_exception_policy>::com_ptr_t<InputSite,wil::err_exception_policy>(
              v38,
              this & -(__int64)(this != 24));
      WorkspaceId = MPCGestureHandlerManager::GetWorkspaceId(v30, v31);
      v41 = 1;
      v47 = 1;
      MPCGestureHandlerManager::GetInstance();
      v22 = this & -(__int64)(this != 24);
LABEL_11:
      v32 = v21;
      v33 = wil::com_ptr_t<InputSite,wil::err_exception_policy>::com_ptr_t<InputSite,wil::err_exception_policy>(
              v38,
              v22);
      MPCGestureHandlerManager::DownLevelTo2D(v32, (__int64)v39, v33, v34);
    }
  }
  MPCGestureHandlerManager::GetInstance();
  v36 = v35;
  v37 = wil::com_ptr_t<InputSite,wil::err_exception_policy>::com_ptr_t<InputSite,wil::err_exception_policy>(
          v38,
          this & -(__int64)(this != 24));
  MPCGestureHandlerManager::OnGazeUpdate(v36, v37);
}
