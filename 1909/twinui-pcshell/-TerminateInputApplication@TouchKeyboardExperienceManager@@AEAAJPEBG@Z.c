/*
 * XREFs of ?TerminateInputApplication@TouchKeyboardExperienceManager@@AEAAJPEBG@Z @ 0x1803386BC
 * Callers:
 *     ?OnInputAppChangeApproved@TouchKeyboardExperienceManager@@QEAAJPEBG@Z @ 0x1803310B4 (-OnInputAppChangeApproved@TouchKeyboardExperienceManager@@QEAAJPEBG@Z.c)
 *     ?PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ @ 0x180331F00 (-PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007560C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??$MakeAndInitialize@VStubImmersiveApplication@@V1@AEAPEBG@Details@WRL@Microsoft@@YAJPEAPEAVStubImmersiveApplication@@AEAPEBG@Z @ 0x18032B66C (--$MakeAndInitialize@VStubImmersiveApplication@@V1@AEAPEBG@Details@WRL@Microsoft@@YAJPEAPEAVStub.c)
 *     ?UnregisterForApplicationStateChanges@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x1803389DC (-UnregisterForApplicationStateChanges@TouchKeyboardExperienceManager@@AEAAJXZ.c)
 *     ?UnregisterForViewEvents@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x180338B48 (-UnregisterForViewEvents@TouchKeyboardExperienceManager@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall TouchKeyboardExperienceManager::TerminateInputApplication(
        RTL_SRWLOCK *this,
        const unsigned __int16 *a2)
{
  HRESULT Instance; // eax
  unsigned int v5; // ebx
  LPVOID v6; // rbx
  int v7; // eax
  __int64 v8; // rdx
  int v9; // eax
  int v10; // eax
  __int64 v11; // rdx
  StubImmersiveApplication *v13; // [rsp+30h] [rbp-20h] BYREF
  __int64 v14; // [rsp+38h] [rbp-18h] BYREF
  LPVOID ppv[2]; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  const unsigned __int16 *v17; // [rsp+78h] [rbp+28h] BYREF
  int v18; // [rsp+80h] [rbp+30h] BYREF
  int v19; // [rsp+88h] [rbp+38h] BYREF

  v17 = a2;
  ppv[1] = (LPVOID)-2LL;
  ppv[0] = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)ppv);
  Instance = CoCreateInstance(&CLSID_ShellServiceHost, 0LL, 0x404u, &GUID_6d5140c1_7436_11ce_8034_00aa006009fa, ppv);
  v5 = Instance;
  if ( Instance >= 0 )
  {
    v14 = 0LL;
    v6 = ppv[0];
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v14);
    v7 = (*(__int64 (__fastcall **)(LPVOID, SID *, GUID *, __int64 *))(*(_QWORD *)v6 + 24LL))(
           v6,
           &SID_ProcessLifetimeManagerControl,
           &GUID_69c083b1_7f6f_490d_9d77_c0219a95b25d,
           &v14);
    v5 = v7;
    if ( v7 < 0 )
    {
      v8 = 1909LL;
LABEL_18:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v8,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v7);
      goto LABEL_22;
    }
    v9 = (*(__int64 (__fastcall **)(__int64, const unsigned __int16 *, int *))(*(_QWORD *)v14 + 56LL))(v14, a2, &v18);
    if ( v9 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x778,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v9);
    if ( (unsigned int)(v18 - 1) <= 3 )
    {
      v13 = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v13);
      v10 = Microsoft::WRL::Details::MakeAndInitialize<StubImmersiveApplication,StubImmersiveApplication,unsigned short const * &>(
              &v13,
              (__int64 *)&v17);
      v5 = v10;
      if ( v10 < 0 )
      {
        v11 = 1918LL;
LABEL_14:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v11,
          (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
          (const char *)(unsigned int)v10);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v13);
LABEL_22:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v14);
        goto LABEL_23;
      }
      v19 = 0;
      v10 = (*(__int64 (__fastcall **)(__int64, StubImmersiveApplication *, __int64, int *))(*(_QWORD *)v14 + 96LL))(
              v14,
              v13,
              2LL,
              &v19);
      v5 = v10;
      if ( v10 < 0 && v10 != -805306193 && v10 != -2147319765 )
      {
        v11 = 1930LL;
        goto LABEL_14;
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v13);
    }
    v7 = TouchKeyboardExperienceManager::UnregisterForApplicationStateChanges((TouchKeyboardExperienceManager *)this);
    v5 = v7;
    if ( v7 >= 0 )
    {
      TouchKeyboardExperienceManager::UnregisterForViewEvents((TouchKeyboardExperienceManager *)this);
      AcquireSRWLockExclusive(this + 90);
      LODWORD(this[89].Ptr) = 0;
      BYTE4(this[89].Ptr) = 0;
      if ( this != (RTL_SRWLOCK *)-720LL )
        ReleaseSRWLockExclusive(this + 90);
      v5 = 0;
      goto LABEL_22;
    }
    v8 = 1934LL;
    goto LABEL_18;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x772,
    (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
    (const char *)(unsigned int)Instance);
LABEL_23:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)ppv);
  return v5;
}
