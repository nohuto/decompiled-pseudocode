/*
 * XREFs of ?UnsubscribeFromServices@AccessibilityExperienceManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x180333DE0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@UISwitchItemFilteredCollection@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18009772C (--4-$ComPtr@UISwitchItemFilteredCollection@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall AccessibilityExperienceManager::UnsubscribeFromServices(
        AccessibilityExperienceManager *this,
        struct IServiceProvider *a2)
{
  __int64 v3; // rbx
  struct _RTL_CRITICAL_SECTION *v4; // r12
  __int64 v5; // rdi
  __int64 v6; // rdi
  unsigned int v7; // r13d
  __int64 v9[2]; // [rsp+20h] [rbp-10h] BYREF
  __int64 v10; // [rsp+70h] [rbp+40h] BYREF
  __int64 v11; // [rsp+80h] [rbp+50h] BYREF
  __int64 v12; // [rsp+88h] [rbp+58h] BYREF

  v9[1] = -2LL;
  v3 = 0LL;
  v9[0] = 0LL;
  v12 = 0LL;
  v11 = 0LL;
  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 280);
  EnterCriticalSection((LPCRITICAL_SECTION)this + 7);
  v5 = *((_QWORD *)this + 27);
  if ( v5 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v5 + 8LL))(*((_QWORD *)this + 27));
    v10 = 0LL;
    v3 = v5;
    v9[0] = v5;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
  }
  v6 = *((_QWORD *)this + 40);
  Microsoft::WRL::ComPtr<ISwitchItemFilteredCollection>::operator=(&v12, (__int64 *)this + 45);
  LODWORD(v10) = *((_DWORD *)this + 52);
  Microsoft::WRL::ComPtr<ISwitchItemFilteredCollection>::operator=(&v11, (__int64 *)this + 30);
  v7 = *((_DWORD *)this + 53);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 27);
  *((_QWORD *)this + 40) = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 45);
  *((_DWORD *)this + 52) = 0;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 30);
  *((_DWORD *)this + 53) = 0;
  if ( v4 )
    LeaveCriticalSection(v4);
  if ( v11 && v7 )
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v11 + 48LL))(v11, v7);
  if ( v12 && (_DWORD)v10 )
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v12 + 48LL))(v12, (unsigned int)v10);
  if ( v3 )
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 56LL))(v3, v6);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v11);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v12);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v9);
  return 0LL;
}
