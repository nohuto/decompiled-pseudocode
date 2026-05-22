/*
 * XREFs of ?OnGazeUpdate@MPCClickerProcessor@@UEAAXPEAUInputInfo@@@Z @ 0x1800FFD30
 * Callers:
 *     <none>
 * Callees:
 *     ?GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ @ 0x18004541C (-GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ.c)
 *     ?DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAUInputInfo@@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1800454D0 (-DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAUInputInfo@@V-$com_ptr_t@UIMPCInputProviderBase.c)
 *     ?IsInjecting@MPCGestureHandlerManager@@QEAA_NV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1800457AC (-IsInjecting@MPCGestureHandlerManager@@QEAA_NV-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception.c)
 *     ?GetWorkspaceId@MPCGestureHandlerManager@@QEAAKV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x180045974 (-GetWorkspaceId@MPCGestureHandlerManager@@QEAAKV-$com_ptr_t@UIMPCInputProviderBase@@Uerr_excepti.c)
 *     ?OnGazeUpdate@MPCGestureHandlerManager@@QEAAXV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x180045AE0 (-OnGazeUpdate@MPCGestureHandlerManager@@QEAAXV-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception.c)
 *     ?IsHovering@MPCGestureHandlerManager@@QEAA_NV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x180045BA4 (-IsHovering@MPCGestureHandlerManager@@QEAA_NV-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_.c)
 *     ?IsPrimary@MPCInputProviderBase@@UEBA_NXZ @ 0x1801008C0 (-IsPrimary@MPCInputProviderBase@@UEBA_NXZ.c)
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
void __fastcall MPCClickerProcessor::OnGazeUpdate(MPCClickerProcessor *this, struct InputInfo *a2)
{
  _OWORD *v4; // rbx
  unsigned __int64 v5; // rdi
  struct MPCGestureHandlerManager *Instance; // rcx
  _OWORD *v7; // rax
  __int64 v8; // rcx
  unsigned __int64 v9; // rbx
  struct MPCGestureHandlerManager *v10; // rcx
  struct MPCGestureHandlerManager *v11; // rcx
  struct MPCGestureHandlerManager *v12; // rcx
  MPCGestureHandlerManager *v13; // rcx
  const char *v14; // r9
  struct MPCGestureHandlerManager *v15; // rcx
  unsigned __int64 v16; // [rsp+28h] [rbp-E0h] BYREF
  unsigned __int64 *v17; // [rsp+30h] [rbp-D8h]
  __int64 v18; // [rsp+38h] [rbp-D0h]
  _BYTE v19[24]; // [rsp+48h] [rbp-C0h] BYREF
  int v20; // [rsp+60h] [rbp-A8h]
  _BYTE v21[496]; // [rsp+2A0h] [rbp+198h] BYREF
  int v22; // [rsp+490h] [rbp+388h]
  int v23; // [rsp+4A0h] [rbp+398h]
  int v24; // [rsp+4A4h] [rbp+39Ch]
  __int128 v25; // [rsp+4A8h] [rbp+3A0h]
  int WorkspaceId; // [rsp+4B8h] [rbp+3B0h]

  v18 = -2LL;
  if ( MPCInputProviderBase::IsPrimary(this) )
  {
    v4 = (_OWORD *)((char *)a2 + 600);
    if ( *((_BYTE *)a2 + 600) )
    {
      v17 = &v16;
      v5 = (unsigned __int64)this & -(__int64)(this != (MPCClickerProcessor *)24);
      v16 = v5;
      if ( v5 )
        (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v5 + 8LL))((unsigned __int64)this & -(__int64)(this != (MPCClickerProcessor *)24));
      Instance = MPCGestureHandlerManager::GetInstance();
      if ( !MPCGestureHandlerManager::IsInjecting((__int64)Instance, &v16) )
      {
        memset_0(v19, 0, 0x640uLL);
        v20 = 1600;
        v23 = *((_DWORD *)a2 + 151);
        v24 = *((_DWORD *)a2 + 152);
        v25 = *(_OWORD *)((char *)a2 + 612);
        WorkspaceId = *((_DWORD *)a2 + 158);
        v7 = v21;
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
        v22 = 4;
        v17 = &v16;
        v16 = (unsigned __int64)this & -(__int64)(this != (MPCClickerProcessor *)24);
        if ( v5 )
          (*(void (__fastcall **)(unsigned __int64, __int64))(*(_QWORD *)v5 + 8LL))(
            (unsigned __int64)this & -(__int64)(this != (MPCClickerProcessor *)24),
            128LL);
LABEL_22:
        v13 = MPCGestureHandlerManager::GetInstance();
        MPCGestureHandlerManager::DownLevelTo2D(v13, (__int64)v19, &v16, v14);
        goto LABEL_23;
      }
    }
  }
  if ( !*((_QWORD *)this + 462) )
  {
    v17 = &v16;
    v9 = (unsigned __int64)this & -(__int64)(this != (MPCClickerProcessor *)24);
    v16 = v9;
    if ( v9 )
      (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v9 + 8LL))((unsigned __int64)this & -(__int64)(this != (MPCClickerProcessor *)24));
    v10 = MPCGestureHandlerManager::GetInstance();
    if ( MPCGestureHandlerManager::IsInjecting((__int64)v10, &v16) )
      goto LABEL_18;
    v17 = &v16;
    v16 = (unsigned __int64)this & -(__int64)(this != (MPCClickerProcessor *)24);
    if ( v9 )
      (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v9 + 8LL))((unsigned __int64)this & -(__int64)(this != (MPCClickerProcessor *)24));
    v11 = MPCGestureHandlerManager::GetInstance();
    if ( MPCGestureHandlerManager::IsHovering((__int64)v11, &v16) )
    {
LABEL_18:
      memset_0(v19, 0, 0x640uLL);
      v20 = 1600;
      v22 = 2;
      v17 = &v16;
      v16 = (unsigned __int64)this & -(__int64)(this != (MPCClickerProcessor *)24);
      if ( v9 )
        (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v9 + 8LL))((unsigned __int64)this & -(__int64)(this != (MPCClickerProcessor *)24));
      v12 = MPCGestureHandlerManager::GetInstance();
      WorkspaceId = MPCGestureHandlerManager::GetWorkspaceId((__int64)v12, &v16);
      v21[0] = 1;
      v21[312] = 1;
      v17 = &v16;
      v16 = (unsigned __int64)this & -(__int64)(this != (MPCClickerProcessor *)24);
      if ( v9 )
        (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v9 + 8LL))((unsigned __int64)this & -(__int64)(this != (MPCClickerProcessor *)24));
      goto LABEL_22;
    }
  }
LABEL_23:
  v17 = &v16;
  v16 = (unsigned __int64)this & -(__int64)(this != (MPCClickerProcessor *)24);
  if ( v16 )
    (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)((unsigned __int64)this & -(__int64)(this != (MPCClickerProcessor *)24))
                                             + 8LL))((unsigned __int64)this & -(__int64)(this != (MPCClickerProcessor *)24));
  v15 = MPCGestureHandlerManager::GetInstance();
  MPCGestureHandlerManager::OnGazeUpdate((__int64)v15, &v16);
}
