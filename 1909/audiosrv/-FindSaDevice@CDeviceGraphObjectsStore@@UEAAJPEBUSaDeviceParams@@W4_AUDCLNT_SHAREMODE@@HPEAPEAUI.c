/*
 * XREFs of ?FindSaDevice@CDeviceGraphObjectsStore@@UEAAJPEBUSaDeviceParams@@W4_AUDCLNT_SHAREMODE@@HPEAPEAUISaDeviceProxy@@@Z @ 0x180040400
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180047D84 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_d @ 0x1800C2194 (WPP_SF_d.c)
 *     ??$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800D4F8C (--$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIInspectable@@@WRL@Mic.c)
 *     ??$As@UISaDeviceProxy@@@?$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800F16A4 (--$As@UISaDeviceProxy@@@-$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UISa.c)
 *     ?SaDeviceExists@CDeviceGraphObjectsStore@@UEAA_NW4_AUDCLNT_SHAREMODE@@@Z @ 0x1800F38D0 (-SaDeviceExists@CDeviceGraphObjectsStore@@UEAA_NW4_AUDCLNT_SHAREMODE@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CDeviceGraphObjectsStore::FindSaDevice(
        CDeviceGraphObjectsStore *this,
        const struct SaDeviceParams *a2,
        enum _AUDCLNT_SHAREMODE a3,
        int a4,
        struct ISaDeviceProxy **a5)
{
  struct ISaDeviceProxy ****v5; // r14
  struct _RTL_CRITICAL_SECTION *v6; // r13
  struct ISaDeviceProxy **v7; // rdi
  __int64 v8; // rdx
  unsigned int v9; // r12d
  struct ISaDeviceProxy ****v10; // r15
  struct ISaDeviceProxy ***i; // rbx
  unsigned int v12; // r12d
  int v13; // ebx
  bool v14; // bl
  bool v15; // zf
  int v16; // ebx
  enum _AUDCLNT_SHAREMODE v17; // eax
  struct ISaDeviceProxy **v18; // r15
  __int64 v19; // rdx
  unsigned int v20; // esi
  struct ISaDeviceProxy ***j; // rbx
  struct ISaDeviceProxy **v23; // rsi
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rcx
  struct ISaDeviceProxy **v27; // rdi
  CDeviceGraphObjectsStore *v28; // rcx
  CDeviceGraphObjectsStore *v29; // rcx
  struct ISaDeviceProxy **v30; // rax
  CDeviceGraphObjectsStore *v31; // rcx
  __int64 v32; // [rsp+20h] [rbp-61h] BYREF
  struct ISaDeviceProxy **v33; // [rsp+28h] [rbp-59h] BYREF
  struct ISaDeviceProxy **v34; // [rsp+30h] [rbp-51h] BYREF
  struct ISaDeviceProxy **v35; // [rsp+38h] [rbp-49h] BYREF
  __int64 (__fastcall **v36)(); // [rsp+40h] [rbp-41h] BYREF
  const struct SaDeviceParams *v37; // [rsp+48h] [rbp-39h]
  __int64 (__fastcall ***v38)(); // [rsp+78h] [rbp-9h]
  __int64 v39; // [rsp+80h] [rbp-1h]
  CDeviceGraphObjectsStore *v40; // [rsp+E0h] [rbp+5Fh] BYREF
  const struct SaDeviceParams *v41; // [rsp+E8h] [rbp+67h]
  enum _AUDCLNT_SHAREMODE v42; // [rsp+F0h] [rbp+6Fh]
  int v43; // [rsp+F8h] [rbp+77h]

  v43 = a4;
  v42 = a3;
  v41 = a2;
  v40 = this;
  v39 = -2LL;
  v5 = (struct ISaDeviceProxy ****)((char *)this + 88);
  *a5 = 0LL;
  v6 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 24);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 24));
  v36 = off_18015C410;
  LODWORD(v37) = 1;
  v38 = &v36;
  v7 = 0LL;
  EnterCriticalSection(v6);
  v9 = 0;
  v10 = v5;
  do
  {
    if ( v7 )
      goto LABEL_61;
    for ( i = *v10; i != v10[1]; ++i )
    {
      v23 = *i;
      v34 = v23;
      if ( v23 )
        (*((void (__fastcall **)(struct ISaDeviceProxy **))*v23 + 1))(v23);
      v32 = 0LL;
      if ( (int)Microsoft::WRL::WeakRef::As<IInspectable>(&v34, &v32) < 0 )
      {
        v25 = v32;
        if ( v32 )
        {
          v32 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
        }
LABEL_53:
        if ( !v23 )
          continue;
LABEL_54:
        (*((void (__fastcall **)(struct ISaDeviceProxy **))*v23 + 2))(v23);
        continue;
      }
      if ( !v32 )
        goto LABEL_53;
      v33 = 0LL;
      if ( (int)Microsoft::WRL::ComPtr<IInspectable>::As<ISaDeviceProxy>(&v32, &v33) < 0 )
      {
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v33);
        v24 = v32;
        if ( !v32 )
          goto LABEL_45;
LABEL_44:
        v32 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
        goto LABEL_45;
      }
      v35 = v33;
      if ( !v38 )
      {
        std::_Xbad_function_call();
        JUMPOUT(0x1800B0F43LL);
      }
      if ( ((unsigned __int8 (__fastcall *)(__int64 (__fastcall ***)(), struct ISaDeviceProxy ***))(*v38)[2])(v38, &v35) )
      {
        v7 = v33;
        v33 = 0LL;
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v33);
        v26 = v32;
        if ( v32 )
        {
          v32 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
        }
        if ( v23 )
          (*((void (__fastcall **)(struct ISaDeviceProxy **))*v23 + 2))(v23);
        break;
      }
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v33);
      v24 = v32;
      if ( v32 )
        goto LABEL_44;
LABEL_45:
      if ( v23 )
        goto LABEL_54;
    }
    ++v9;
    v10 += 3;
  }
  while ( v9 < 4 );
  if ( !v7 )
  {
    v12 = -2005139430;
    v13 = -2005139430;
    goto LABEL_8;
  }
LABEL_61:
  v13 = 0;
  v12 = -2005139430;
LABEL_8:
  if ( v6 )
    LeaveCriticalSection(v6);
  if ( v38 )
  {
    if ( v38 == &v36 )
      v8 = 0LL;
    else
      LOBYTE(v8) = 1;
    ((void (__fastcall *)(__int64 (__fastcall ***)(), __int64))(*v38)[4])(v38, v8);
    v38 = 0LL;
  }
  v14 = v13 >= 0;
  if ( v7 )
    (*((void (__fastcall **)(struct ISaDeviceProxy **))*v7 + 2))(v7);
  v15 = !v14;
  v16 = v43;
  if ( v15 )
  {
    v17 = v42;
  }
  else if ( !v43 || (v17 = v42) != AUDCLNT_SHAREMODE_SHARED )
  {
    v12 = -2005139364;
    goto LABEL_32;
  }
  if ( v17 == AUDCLNT_SHAREMODE_EXCLUSIVE )
  {
    if ( CDeviceGraphObjectsStore::SaDeviceExists(v40, AUDCLNT_SHAREMODE_SHARED) && !v16 )
      v12 = -2005139363;
  }
  else
  {
    if ( *((_DWORD *)v41 + 2) == 1 )
      goto LABEL_32;
    v36 = off_18015C3E0;
    v37 = v41;
    v38 = &v36;
    v18 = a5;
    *a5 = 0LL;
    EnterCriticalSection(v6);
    v20 = 0;
LABEL_21:
    if ( !*v18 )
    {
      for ( j = *v5; ; ++j )
      {
        if ( j == v5[1] )
        {
LABEL_24:
          ++v20;
          v5 += 3;
          if ( v20 >= 4 )
          {
            if ( !*v18 )
              goto LABEL_26;
            goto LABEL_92;
          }
          goto LABEL_21;
        }
        v27 = *j;
        v35 = v27;
        if ( v27 )
          (*((void (__fastcall **)(struct ISaDeviceProxy **))*v27 + 1))(v27);
        v40 = 0LL;
        if ( (int)Microsoft::WRL::WeakRef::As<IInspectable>(&v35, &v40) < 0 )
        {
          v29 = v40;
          if ( v40 )
          {
            v40 = 0LL;
            (*(void (__fastcall **)(CDeviceGraphObjectsStore *))(*(_QWORD *)v29 + 16LL))(v29);
          }
LABEL_84:
          if ( !v27 )
            continue;
LABEL_85:
          (*((void (__fastcall **)(struct ISaDeviceProxy **))*v27 + 2))(v27);
          continue;
        }
        if ( !v40 )
          goto LABEL_84;
        a5 = 0LL;
        if ( (int)Microsoft::WRL::ComPtr<IInspectable>::As<ISaDeviceProxy>(&v40, &a5) < 0 )
          break;
        v34 = a5;
        if ( !v38 )
        {
          std::_Xbad_function_call();
          JUMPOUT(0x1800B110BLL);
        }
        if ( ((unsigned __int8 (__fastcall *)(__int64 (__fastcall ***)(), struct ISaDeviceProxy ***))(*v38)[2])(
               v38,
               &v34) )
        {
          v30 = a5;
          a5 = 0LL;
          *v18 = (struct ISaDeviceProxy *)v30;
          Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&a5);
          v31 = v40;
          if ( v40 )
          {
            v40 = 0LL;
            (*(void (__fastcall **)(CDeviceGraphObjectsStore *))(*(_QWORD *)v31 + 16LL))(v31);
          }
          if ( v27 )
            (*((void (__fastcall **)(struct ISaDeviceProxy **))*v27 + 2))(v27);
          goto LABEL_24;
        }
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&a5);
        v28 = v40;
        if ( v40 )
          goto LABEL_75;
LABEL_76:
        if ( v27 )
          goto LABEL_85;
      }
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&a5);
      v28 = v40;
      if ( !v40 )
        goto LABEL_76;
LABEL_75:
      v40 = 0LL;
      (*(void (__fastcall **)(CDeviceGraphObjectsStore *))(*(_QWORD *)v28 + 16LL))(v28);
      goto LABEL_76;
    }
LABEL_92:
    v12 = 0;
LABEL_26:
    if ( v6 )
      LeaveCriticalSection(v6);
    if ( v38 )
    {
      if ( v38 == &v36 )
        v19 = 0LL;
      else
        LOBYTE(v19) = 1;
      ((void (__fastcall *)(__int64 (__fastcall ***)(), __int64))(*v38)[4])(v38, v19);
    }
  }
LABEL_32:
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 14LL, &WPP_7c1e90e9a9dc33e1c6e4e37efc6dae83_Traceguids, v12);
  }
  if ( v6 )
    LeaveCriticalSection(v6);
  return v12;
}
