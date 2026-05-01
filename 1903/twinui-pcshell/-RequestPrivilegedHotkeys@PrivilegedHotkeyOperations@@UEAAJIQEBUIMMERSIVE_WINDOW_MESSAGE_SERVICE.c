/*
 * XREFs of ?RequestPrivilegedHotkeys@PrivilegedHotkeyOperations@@UEAAJIQEBUIMMERSIVE_WINDOW_MESSAGE_SERVICE_HOTKEY_REGISTRATION@@PEAUIImmersiveWindowMessageNotification@@PEAK@Z @ 0x1801EC0B0
 * Callers:
 *     <none>
 * Callees:
 *     ??$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x180044C6C (--$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIInspectable@@@WRL@Mic.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1SyncIamAccess@IamAccess@@QEAA@XZ @ 0x180078D48 (--1SyncIamAccess@IamAccess@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??$As@UIServiceProvider@@@?$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIServiceProvider@@@WRL@Microsoft@@@Details@12@@Z @ 0x1801E8BA4 (--$As@UIServiceProvider@@@-$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UI.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall PrivilegedHotkeyOperations::RequestPrivilegedHotkeys(
        PrivilegedHotkeyOperations *this,
        unsigned int a2,
        const struct IMMERSIVE_WINDOW_MESSAGE_SERVICE_HOTKEY_REGISTRATION *a3,
        struct IImmersiveWindowMessageNotification *a4,
        unsigned int *a5)
{
  unsigned int *v9; // rsi
  unsigned int v10; // ebx
  int v11; // eax
  __int64 v12; // rbx
  int v13; // eax
  __int64 v14; // rcx
  RTL_SRWLOCK *v15; // rbx
  int v16; // eax
  __int64 v18; // [rsp+30h] [rbp-20h] BYREF
  RTL_SRWLOCK *v19[3]; // [rsp+38h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  struct IInspectable *v21; // [rsp+80h] [rbp+30h] BYREF

  v19[1] = (RTL_SRWLOCK *)-2LL;
  v9 = a5;
  *a5 = 0;
  v21 = 0LL;
  Microsoft::WRL::WeakRef::As<IInspectable>((PrivilegedHotkeyOperations *)((char *)this + 56), &v21);
  if ( v21 )
  {
    v18 = 0LL;
    v11 = Microsoft::WRL::ComPtr<IInspectable>::As<IServiceProvider>(&v21, &v18);
    v10 = v11;
    if ( v11 >= 0 )
    {
      a5 = 0LL;
      v12 = v18;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&a5);
      v13 = (*(__int64 (__fastcall **)(__int64, GUID *, GUID *, unsigned int **))(*(_QWORD *)v12 + 24LL))(
              v12,
              &IID_IImmersiveWindowMessageService,
              &GUID_bf8b6ede_2069_4010_a9e7_4480e24c01ca,
              &a5);
      v10 = v13;
      if ( v13 >= 0 )
      {
        v14 = *((_QWORD *)this + 6);
        v15 = (RTL_SRWLOCK *)v14;
        v19[0] = (RTL_SRWLOCK *)v14;
        if ( v14 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v14 + 36));
          v15 = v19[0];
        }
        AcquireSRWLockExclusive((PSRWLOCK)(v14 + 48));
        EnableIAMAccess(v15[5].Ptr, 1LL);
        v16 = (*(__int64 (__fastcall **)(unsigned int *, _QWORD, const struct IMMERSIVE_WINDOW_MESSAGE_SERVICE_HOTKEY_REGISTRATION *, struct IImmersiveWindowMessageNotification *, unsigned int *))(*(_QWORD *)a5 + 56LL))(
                a5,
                a2,
                a3,
                a4,
                v9);
        v10 = v16;
        if ( v16 >= 0 )
          v10 = 0;
        else
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x206,
            (__int64)"pcshell\\twinui\\privilegedoperations\\lib\\privilegedoperations.cpp",
            (const char *)(unsigned int)v16);
        IamAccess::SyncIamAccess::~SyncIamAccess(v19);
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1FF,
          (__int64)"pcshell\\twinui\\privilegedoperations\\lib\\privilegedoperations.cpp",
          (const char *)(unsigned int)v13);
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&a5);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1FC,
        (__int64)"pcshell\\twinui\\privilegedoperations\\lib\\privilegedoperations.cpp",
        (const char *)(unsigned int)v11);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v18);
  }
  else
  {
    v10 = -2147023728;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1FA,
      (__int64)"pcshell\\twinui\\privilegedoperations\\lib\\privilegedoperations.cpp",
      (const char *)0x80070490LL);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v21);
  return v10;
}
