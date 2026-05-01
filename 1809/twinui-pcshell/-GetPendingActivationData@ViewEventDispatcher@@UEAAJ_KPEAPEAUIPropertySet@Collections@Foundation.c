/*
 * XREFs of ?GetPendingActivationData@ViewEventDispatcher@@UEAAJ_KPEAPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1802151D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006C60C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?_FindPendingActivation@ViewEventDispatcher@@AEAAJ_KPEAPEAU?$CLinkedNode@UPendingActivationData@ViewEventDispatcher@@@@@Z @ 0x18021E86C (-_FindPendingActivation@ViewEventDispatcher@@AEAAJ_KPEAPEAU-$CLinkedNode@UPendingActivationData@.c)
 */

__int64 __fastcall ViewEventDispatcher::GetPendingActivationData(
        RTL_SRWLOCK *this,
        __int64 a2,
        struct Windows::Foundation::Collections::IPropertySet **a3)
{
  RTL_SRWLOCK *v3; // rsi
  int PendingActivation; // eax
  unsigned int v8; // ebx
  __int64 v9; // rbx
  struct Windows::Foundation::Collections::IPropertySet *v10; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v13; // [rsp+30h] [rbp+8h] BYREF

  v3 = this + 35;
  AcquireSRWLockShared(this + 35);
  PendingActivation = ViewEventDispatcher::_FindPendingActivation(&this[-2], a2, &v13);
  v8 = PendingActivation;
  if ( PendingActivation >= 0 )
  {
    v9 = v13;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)(v13 + 32));
    v10 = *(struct Windows::Foundation::Collections::IPropertySet **)(v9 + 32);
    v8 = 0;
    *a3 = v10;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x65D,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
      (const char *)(unsigned int)PendingActivation);
  }
  if ( v3 )
    ReleaseSRWLockShared(v3);
  return v8;
}
