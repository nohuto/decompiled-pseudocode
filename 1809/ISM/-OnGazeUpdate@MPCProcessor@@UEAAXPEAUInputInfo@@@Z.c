/*
 * XREFs of ?OnGazeUpdate@MPCProcessor@@UEAAXPEAUInputInfo@@@Z @ 0x1800F6E20
 * Callers:
 *     <none>
 * Callees:
 *     ?GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ @ 0x18004541C (-GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ.c)
 *     ?DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAUInputInfo@@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1800454D0 (-DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAUInputInfo@@V-$com_ptr_t@UIMPCInputProviderBase.c)
 *     ?IsInjecting@MPCGestureHandlerManager@@QEAA_NV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1800457AC (-IsInjecting@MPCGestureHandlerManager@@QEAA_NV-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception.c)
 *     ?GetWorkspaceId@MPCGestureHandlerManager@@QEAAKV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x180045974 (-GetWorkspaceId@MPCGestureHandlerManager@@QEAAKV-$com_ptr_t@UIMPCInputProviderBase@@Uerr_excepti.c)
 *     ?OnGazeUpdate@MPCGestureHandlerManager@@QEAAXV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x180045AE0 (-OnGazeUpdate@MPCGestureHandlerManager@@QEAAXV-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception.c)
 *     ?IsHovering@MPCGestureHandlerManager@@QEAA_NV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x180045BA4 (-IsHovering@MPCGestureHandlerManager@@QEAA_NV-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_.c)
 *     ?IsPopulatingCursorData@MPCGestureHandlerManager@@QEAA_NV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x180046134 (-IsPopulatingCursorData@MPCGestureHandlerManager@@QEAA_NV-$com_ptr_t@UIMPCInputProviderBase@@Uer.c)
 *     ?IsPrimary@MPCInputProviderBase@@UEBA_NXZ @ 0x1801008C0 (-IsPrimary@MPCInputProviderBase@@UEBA_NXZ.c)
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=9
void __fastcall MPCProcessor::OnGazeUpdate(MPCProcessor *this, struct InputInfo *a2)
{
  _OWORD *v4; // rsi
  unsigned __int64 v5; // rbx
  struct MPCGestureHandlerManager *Instance; // rcx
  _OWORD *v7; // rax
  __int64 v8; // rcx
  unsigned __int64 v9; // rbx
  struct MPCGestureHandlerManager *v10; // rcx
  struct MPCGestureHandlerManager *v11; // rcx
  struct MPCGestureHandlerManager *v12; // rcx
  MPCGestureHandlerManager *v13; // rcx
  const char *v14; // r9
  unsigned __int64 v15; // rbx
  struct MPCGestureHandlerManager *v16; // rcx
  struct MPCGestureHandlerManager *v17; // rcx
  struct MPCGestureHandlerManager *v18; // rcx
  unsigned __int64 v19; // [rsp+28h] [rbp-E0h] BYREF
  unsigned __int64 *v20; // [rsp+30h] [rbp-D8h]
  __int64 v21; // [rsp+38h] [rbp-D0h]
  _BYTE v22[24]; // [rsp+48h] [rbp-C0h] BYREF
  int v23; // [rsp+60h] [rbp-A8h]
  _BYTE v24[496]; // [rsp+2A0h] [rbp+198h] BYREF
  int v25; // [rsp+490h] [rbp+388h]
  int v26; // [rsp+4A0h] [rbp+398h]
  int v27; // [rsp+4A4h] [rbp+39Ch]
  __int128 v28; // [rsp+4A8h] [rbp+3A0h]
  int WorkspaceId; // [rsp+4B8h] [rbp+3B0h]

  v21 = -2LL;
  if ( MPCInputProviderBase::IsPrimary(this) )
  {
    v4 = (_OWORD *)((char *)a2 + 600);
    if ( *((_BYTE *)a2 + 600) )
    {
      v20 = &v19;
      v5 = (unsigned __int64)this & -(__int64)(this != (MPCProcessor *)24);
      v19 = v5;
      if ( v5 )
        (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v5 + 8LL))((unsigned __int64)this & -(__int64)(this != (MPCProcessor *)24));
      Instance = MPCGestureHandlerManager::GetInstance();
      if ( !MPCGestureHandlerManager::IsInjecting((__int64)Instance, &v19) )
      {
        memset_0(v22, 0, 0x640uLL);
        v23 = 1600;
        v25 = 4;
        v26 = *((_DWORD *)a2 + 151);
        v27 = *((_DWORD *)a2 + 152);
        v28 = *(_OWORD *)((char *)a2 + 612);
        WorkspaceId = *((_DWORD *)a2 + 158);
        v7 = v24;
        v8 = 2LL;
        do
        {
          *v7 = *v4;
          v7[1] = v4[1];
          v7[2] = v4[2];
          v7[3] = v4[3];
          v7[4] = v4[4];
          v7[5] = v4[5];
          v7[6] = v4[6];
          v7 += 8;
          *(v7 - 1) = v4[7];
          v4 += 8;
          --v8;
        }
        while ( v8 );
        *v7 = *v4;
        v7[1] = v4[1];
        v7[2] = v4[2];
        v7[3] = v4[3];
        v20 = &v19;
        v19 = (unsigned __int64)this & -(__int64)(this != (MPCProcessor *)24);
        if ( v5 )
          (*(void (__fastcall **)(unsigned __int64, __int64))(*(_QWORD *)v5 + 8LL))(
            (unsigned __int64)this & -(__int64)(this != (MPCProcessor *)24),
            128LL);
        goto LABEL_22;
      }
    }
  }
  if ( !*((_QWORD *)this + 462) )
  {
    v20 = &v19;
    v9 = (unsigned __int64)this & -(__int64)(this != (MPCProcessor *)24);
    v19 = v9;
    if ( v9 )
      (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v9 + 8LL))((unsigned __int64)this & -(__int64)(this != (MPCProcessor *)24));
    v10 = MPCGestureHandlerManager::GetInstance();
    if ( !MPCGestureHandlerManager::IsInjecting((__int64)v10, &v19) )
    {
      v20 = &v19;
      v19 = (unsigned __int64)this & -(__int64)(this != (MPCProcessor *)24);
      if ( v9 )
        (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v9 + 8LL))((unsigned __int64)this & -(__int64)(this != (MPCProcessor *)24));
      v11 = MPCGestureHandlerManager::GetInstance();
      if ( !MPCGestureHandlerManager::IsHovering((__int64)v11, &v19) )
      {
LABEL_23:
        if ( !*((_QWORD *)this + 462) )
          goto LABEL_30;
        goto LABEL_24;
      }
    }
    memset_0(v22, 0, 0x640uLL);
    v23 = 1600;
    v25 = 2;
    v20 = &v19;
    v19 = (unsigned __int64)this & -(__int64)(this != (MPCProcessor *)24);
    if ( v9 )
      (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v9 + 8LL))((unsigned __int64)this & -(__int64)(this != (MPCProcessor *)24));
    v12 = MPCGestureHandlerManager::GetInstance();
    WorkspaceId = MPCGestureHandlerManager::GetWorkspaceId((__int64)v12, &v19);
    v24[0] = 1;
    v24[312] = 1;
    v20 = &v19;
    v19 = (unsigned __int64)this & -(__int64)(this != (MPCProcessor *)24);
    if ( v9 )
      (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v9 + 8LL))((unsigned __int64)this & -(__int64)(this != (MPCProcessor *)24));
LABEL_22:
    v13 = MPCGestureHandlerManager::GetInstance();
    MPCGestureHandlerManager::DownLevelTo2D(v13, (__int64)v22, &v19, v14);
    goto LABEL_23;
  }
LABEL_24:
  v20 = &v19;
  v15 = (unsigned __int64)this & -(__int64)(this != (MPCProcessor *)24);
  v19 = v15;
  if ( v15 )
    (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v15 + 8LL))((unsigned __int64)this & -(__int64)(this != (MPCProcessor *)24));
  v16 = MPCGestureHandlerManager::GetInstance();
  if ( MPCGestureHandlerManager::IsInjecting((__int64)v16, &v19) )
  {
    v20 = &v19;
    v19 = (unsigned __int64)this & -(__int64)(this != (MPCProcessor *)24);
    if ( v15 )
      (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v15 + 8LL))((unsigned __int64)this & -(__int64)(this != (MPCProcessor *)24));
    v17 = MPCGestureHandlerManager::GetInstance();
    *((_BYTE *)a2 + 1584) = MPCGestureHandlerManager::IsPopulatingCursorData((__int64)v17, &v19);
  }
LABEL_30:
  v20 = &v19;
  v19 = (unsigned __int64)this & -(__int64)(this != (MPCProcessor *)24);
  if ( v19 )
    (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)((unsigned __int64)this & -(__int64)(this != (MPCProcessor *)24))
                                             + 8LL))((unsigned __int64)this & -(__int64)(this != (MPCProcessor *)24));
  v18 = MPCGestureHandlerManager::GetInstance();
  MPCGestureHandlerManager::OnGazeUpdate((__int64)v18, &v19);
}
