/*
 * XREFs of ?FindFirstMatchingSaDevice@CDeviceGraphObjectsStore@@IEAAJV?$function@$$A6A_NPEAUISaDeviceProxy@@@Z@std@@PEAPEAUISaDeviceProxy@@@Z @ 0x1800F26BC
 * Callers:
 *     ?FindRenderSaDevice@CDeviceGraphObjectsStore@@UEAAJPEAPEAUISaDeviceProxy@@@Z @ 0x1800F28E0 (-FindRenderSaDevice@CDeviceGraphObjectsStore@@UEAAJPEAPEAUISaDeviceProxy@@@Z.c)
 *     ?FindSaDevice@CDeviceGraphObjectsStore@@UEAAJPEAPEAUISaDeviceProxy@@@Z @ 0x1800F2920 (-FindSaDevice@CDeviceGraphObjectsStore@@UEAAJPEAPEAUISaDeviceProxy@@@Z.c)
 *     ?FindSaDeviceByResourceId@CDeviceGraphObjectsStore@@UEAAJ_KPEAPEAUISaDeviceProxy@@@Z @ 0x1800F2960 (-FindSaDeviceByResourceId@CDeviceGraphObjectsStore@@UEAAJ_KPEAPEAUISaDeviceProxy@@@Z.c)
 *     ?SaDeviceExists@CDeviceGraphObjectsStore@@UEAA_NW4_AUDCLNT_SHAREMODE@@@Z @ 0x1800F3D80 (-SaDeviceExists@CDeviceGraphObjectsStore@@UEAA_NW4_AUDCLNT_SHAREMODE@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180043864 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 *     ??$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800D53DC (--$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIInspectable@@@WRL@Mic.c)
 *     ??$As@UISaDeviceProxy@@@?$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800F1B54 (--$As@UISaDeviceProxy@@@-$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UISa.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CDeviceGraphObjectsStore::FindFirstMatchingSaDevice(__int64 a1, _QWORD *a2, __int64 *a3)
{
  __int64 **v5; // r14
  struct _RTL_CRITICAL_SECTION *v6; // r12
  __int64 v7; // rdx
  unsigned int i; // r13d
  __int64 *j; // rdi
  __int64 v10; // rbx
  int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rcx
  unsigned int v16; // ebx
  _QWORD *v17; // rcx
  _QWORD v19[5]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v20; // [rsp+90h] [rbp+48h] BYREF
  _QWORD *v21; // [rsp+98h] [rbp+50h]
  __int64 v22; // [rsp+A0h] [rbp+58h] BYREF
  __int64 v23; // [rsp+A8h] [rbp+60h] BYREF

  v21 = a2;
  v19[1] = -2LL;
  v5 = (__int64 **)(a1 + 88);
  *a3 = 0LL;
  v6 = (struct _RTL_CRITICAL_SECTION *)(a1 + 24);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 24));
  v19[2] = v6;
  for ( i = 0; i < 4; ++i )
  {
    if ( *a3 )
      break;
    for ( j = *v5; j != v5[1]; ++j )
    {
      v10 = *j;
      v23 = v10;
      if ( v10 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
      v20 = 0LL;
      v11 = Microsoft::WRL::WeakRef::As<IInspectable>(&v23, &v20);
      v12 = v20;
      if ( v11 >= 0 && v20 )
      {
        v22 = 0LL;
        if ( (int)Microsoft::WRL::ComPtr<IInspectable>::As<ISaDeviceProxy>(&v20, &v22) >= 0 )
        {
          v19[0] = v22;
          v13 = a2[7];
          if ( !v13 )
          {
            std::_Xbad_function_call();
            JUMPOUT(0x1800F2893LL);
          }
          if ( (*(unsigned __int8 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v13 + 16LL))(v13, v19) )
          {
            v14 = v22;
            v22 = 0LL;
            *a3 = v14;
            Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v22);
            v15 = v20;
            if ( v20 )
            {
              v20 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
            }
            if ( v10 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
            break;
          }
        }
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v22);
        v12 = v20;
      }
      if ( v12 )
      {
        v20 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
      }
      if ( v10 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    }
    v5 += 3;
  }
  v16 = *a3 == 0 ? 0x887C001A : 0;
  if ( v6 )
    LeaveCriticalSection(v6);
  v17 = (_QWORD *)a2[7];
  if ( v17 )
  {
    LOBYTE(v7) = v17 != a2;
    (*(void (__fastcall **)(_QWORD *, __int64, _QWORD))(*v17 + 32LL))(v17, v7, *v17);
    a2[7] = 0LL;
  }
  return v16;
}
