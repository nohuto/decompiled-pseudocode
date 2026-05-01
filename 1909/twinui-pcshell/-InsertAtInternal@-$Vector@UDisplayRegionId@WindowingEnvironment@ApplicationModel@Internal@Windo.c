/*
 * XREFs of ?InsertAtInternal@?$Vector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@UDisplayRegionIdEqualityPredicate@2345@UDisplayRegionIdLifetimeTraits@2345@U?$VectorOptions@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@$00$00$0A@@4Collections@Foundation@5@@Internal@Collections@Foundation@Windows@@AEAAJIUDisplayRegionId@WindowingEnvironment@ApplicationModel@25@_N@Z @ 0x180063114
 * Callers:
 *     ?AppViewActivationRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewActivationRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x18001F810 (-AppViewActivationRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewActivationRequestedEventArgs.c)
 *     ?SetDisplayRegionId@CImmersiveWindowCollection@CImmersiveApp@@QEAAJI@Z @ 0x180062EDC (-SetDisplayRegionId@CImmersiveWindowCollection@CImmersiveApp@@QEAAJI@Z.c)
 *     ?Append@?$Vector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@UDisplayRegionIdEqualityPredicate@2345@UDisplayRegionIdLifetimeTraits@2345@U?$VectorOptions@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@$00$00$0A@@4Collections@Foundation@5@@Internal@Collections@Foundation@Windows@@UEAAJUDisplayRegionId@WindowingEnvironment@ApplicationModel@25@@Z @ 0x180161B80 (-Append@-$Vector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@UDispl.c)
 *     ?InsertAt@?$Vector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@UDisplayRegionIdEqualityPredicate@2345@UDisplayRegionIdLifetimeTraits@2345@U?$VectorOptions@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@$00$00$0A@@4Collections@Foundation@5@@Internal@Collections@Foundation@Windows@@UEAAJIUDisplayRegionId@WindowingEnvironment@ApplicationModel@25@@Z @ 0x180165660 (-InsertAt@-$Vector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@UDis.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIShellExperienceViewEventArg@Experience@Shell@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180050F60 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIShellExperienceV.c)
 *     memmove_s @ 0x1800B41AC (memmove_s.c)
 *     Microsoft::WRL::EventSource_Windows::Foundation::ITypedEventHandler_Windows::Internal::ComposableShell::Tabs::TabTransferEventBroker___Windows::Internal::ComposableShell::Tabs::TabDroppedEventArgs____Microsoft::WRL::InvokeModeOptions__2___::DoInvoke__lambda_6467f9191169c2bc35f91af727f9d16b___ @ 0x18015F60C (Microsoft--WRL--EventSource_Windows--Foundation--ITypedEventHandler_Windows--Intern_ea_18015F60C.c)
 *     ??$Make@VVectorChangedEventArgs@Internal@Collections@Foundation@Windows@@AEAW4CollectionChange@345@AEAI@Details@WRL@Microsoft@@YA?AV?$ComPtr@VVectorChangedEventArgs@Internal@Collections@Foundation@Windows@@@12@AEAW4CollectionChange@Collections@Foundation@Windows@@AEAI@Z @ 0x18015FD70 (--$Make@VVectorChangedEventArgs@Internal@Collections@Foundation@Windows@@AEAW4CollectionChange@3.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId,Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionIdEqualityPredicate,Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionIdLifetimeTraits,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId,1,1,0>>::InsertAtInternal(
        __int64 a1,
        unsigned int a2,
        int a3,
        char a4)
{
  _DWORD *v4; // rbx
  _DWORD *v5; // r12
  RTL_SRWLOCK *v6; // r15
  unsigned int v11; // eax
  int v12; // esi
  unsigned int v13; // r8d
  int v14; // ebx
  __int64 v15; // rcx
  unsigned int v16; // ebx
  void *v17; // rax
  unsigned int v18; // eax
  __int64 v20; // rbx
  unsigned int v21; // [rsp+20h] [rbp-50h] BYREF
  int v22; // [rsp+28h] [rbp-48h] BYREF
  _DWORD *v23; // [rsp+30h] [rbp-40h]
  __int64 v24; // [rsp+38h] [rbp-38h] BYREF
  _QWORD v25[2]; // [rsp+40h] [rbp-30h] BYREF
  unsigned int v26; // [rsp+50h] [rbp-20h]
  unsigned int v27; // [rsp+54h] [rbp-1Ch]
  __int64 v28; // [rsp+58h] [rbp-18h] BYREF
  __int64 v29; // [rsp+60h] [rbp-10h] BYREF

  v4 = (_DWORD *)(a1 + 120);
  v5 = 0LL;
  v23 = (_DWORD *)(a1 + 120);
  v6 = (RTL_SRWLOCK *)(a1 + 128);
  if ( *(_DWORD *)(a1 + 120) == 1 )
  {
    if ( !LODWORD(v6->Ptr) )
      LODWORD(v6->Ptr) = -268435456;
  }
  else
  {
    AcquireSRWLockExclusive((PSRWLOCK)(a1 + 128));
  }
  v11 = *(_DWORD *)(a1 + 88);
  if ( a4 )
    a2 = *(_DWORD *)(a1 + 88);
  if ( a2 > v11 )
  {
    v12 = -2147483637;
    RoOriginateError(2147483659LL, 0LL);
  }
  else if ( v11 >= 0x7FFFFFFF )
  {
    v12 = -2147024882;
  }
  else
  {
    v12 = -2147483627;
    if ( !*(_DWORD *)(a1 + 172) )
    {
      v12 = 0;
      if ( *(int *)(a1 + 168) > 0 )
      {
        v5 = (_DWORD *)(a1 + 172);
        *(_DWORD *)(a1 + 172) = 1;
      }
    }
    if ( v12 < 0 )
    {
      RoOriginateError((unsigned int)v12, 0LL);
    }
    else
    {
      v13 = *(_DWORD *)(a1 + 92);
      if ( *(_DWORD *)(a1 + 88) + 1 > v13 )
      {
        v14 = 1;
        v27 = v13 + 1;
        v26 = (v13 >> 1) + v13;
        v15 = *(_QWORD *)(a1 + 104);
        if ( v13 + 1 <= v26 )
          v14 = v13 >> 1;
        v12 = 0;
        v16 = v13 + v14;
        if ( v15 )
          v17 = (void *)_o_realloc(v15, 4LL * v16);
        else
          v17 = malloc(4LL * v16);
        if ( v17 )
        {
          *(_QWORD *)(a1 + 104) = v17;
          *(_DWORD *)(a1 + 92) = v16;
        }
        else
        {
          v12 = -2147024882;
        }
      }
      if ( v12 >= 0 )
      {
        v18 = *(_DWORD *)(a1 + 88);
        if ( a2 < v18
          && memmove_s(
               (void *const)(*(_QWORD *)(a1 + 104) + 4LL * (a2 + 1)),
               4LL * (*(_DWORD *)(a1 + 92) - a2 - 1),
               (const void *const)(*(_QWORD *)(a1 + 104) + 4LL * a2),
               4LL * (v18 - a2)) )
        {
          v12 = -2147418113;
          RoOriginateError(2147549183LL, 0LL);
        }
        if ( v12 >= 0 )
        {
          *(_DWORD *)(*(_QWORD *)(a1 + 104) + 4LL * a2) = a3;
          ++*(_DWORD *)(a1 + 88);
          ++*(_DWORD *)(a1 + 136);
        }
      }
    }
    v4 = v23;
  }
  if ( v4 )
  {
    if ( *v4 == 1 )
      LODWORD(v6->Ptr) += 0x10000000;
    else
      ReleaseSRWLockExclusive(v6);
    v23 = 0LL;
  }
  if ( v12 >= 0 )
  {
    v12 = 0;
    v21 = a2;
    v22 = 1;
    if ( !v5 )
      return (unsigned int)v12;
    Microsoft::WRL::Details::Make<Windows::Foundation::Collections::Internal::VectorChangedEventArgs,enum Windows::Foundation::Collections::CollectionChange &,unsigned int &>(
      &v24,
      &v22,
      &v21);
    v20 = v24;
    if ( v24 )
    {
      v29 = v24;
      v25[0] = &v28;
      v28 = a1 + 16;
      v25[1] = &v29;
      v12 = Microsoft::WRL::EventSource_Windows::Foundation::ITypedEventHandler_Windows::Internal::ComposableShell::Tabs::TabTransferEventBroker___Windows::Internal::ComposableShell::Tabs::TabDroppedEventArgs____Microsoft::WRL::InvokeModeOptions__2___::DoInvoke__lambda_6467f9191169c2bc35f91af727f9d16b___(
              a1 + 144,
              v25);
      v24 = 0LL;
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::Shell::Experience::IShellExperienceViewEventArg>::Release(v20);
    }
  }
  if ( v5 )
    *v5 = 0;
  return (unsigned int)v12;
}
