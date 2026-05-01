/*
 * XREFs of ?RecoverViews@ViewEventDispatcher@@UEAAJUEventRegistrationToken@@PEAPEAUIObjectArray@@@Z @ 0x18028C9A0
 * Callers:
 *     <none>
 * Callees:
 *     ?CreateInstance@CEnumerableObjectCollection@@SAJHAEBU_GUID@@PEAPEAX@Z @ 0x18002FC38 (-CreateInstance@CEnumerableObjectCollection@@SAJHAEBU_GUID@@PEAPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006EC20 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007560C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x18013B2DC (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V-$C.c)
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180148704 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?RemoveAt@?$CTSimpleArray@V?$ComPtr@UIWeakReference@WeakReference@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIWeakReference@WeakReference@@@WRL@Microsoft@@@@VComPtrCompareHelper@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIWeakReference@WeakReference@@@WRL@Microsoft@@@@@@QEAAJ_K@Z @ 0x18028D4D8 (-RemoveAt@-$CTSimpleArray@V-$ComPtr@UIWeakReference@WeakReference@@@WRL@Microsoft@@$0PPPPPPPO@V-.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall ViewEventDispatcher::RecoverViews(
        RTL_SRWLOCK *this,
        struct EventRegistrationToken a2,
        struct IObjectArray **a3)
{
  RTL_SRWLOCK *v5; // r12
  unsigned int v6; // edi
  unsigned __int64 v7; // rcx
  PVOID Ptr; // r8
  __int64 *v9; // rdx
  __int64 v11; // rbx
  const struct _GUID *v12; // rdx
  __int64 v13; // rcx
  int v14; // eax
  char *v15; // r15
  RTL_SRWLOCK *v16; // r12
  __int64 v17; // rsi
  unsigned __int8 (__fastcall *v18)(__int64, PCWSTR); // rdi
  PCWSTR StringRawBuffer; // rax
  void *v20; // r8
  char v21; // r13
  int v22; // esi
  PVOID v23; // rdx
  __int64 *v24; // rcx
  int v25; // eax
  struct IObjectArray *v26; // rax
  __int64 v27; // [rsp+20h] [rbp-30h] BYREF
  RTL_SRWLOCK *v28; // [rsp+28h] [rbp-28h]
  __int64 v29; // [rsp+30h] [rbp-20h]
  RTL_SRWLOCK *v30; // [rsp+38h] [rbp-18h]
  __int64 *v31; // [rsp+40h] [rbp-10h]
  char v32; // [rsp+48h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+38h]
  __int64 v34; // [rsp+90h] [rbp+40h] BYREF
  struct IObjectArray **v35; // [rsp+A0h] [rbp+50h]
  void *v36; // [rsp+A8h] [rbp+58h] BYREF

  v35 = a3;
  v29 = -2LL;
  *a3 = 0LL;
  v5 = this + 32;
  v28 = this + 32;
  AcquireSRWLockExclusive(this + 32);
  v30 = v5;
  if ( LOBYTE(this[33].Ptr) )
  {
    v6 = -2147019873;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x564,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
      (const char *)0x8007139FLL);
  }
  else
  {
    v27 = 0LL;
    v7 = 0LL;
    Ptr = this[38].Ptr;
    if ( !Ptr )
      goto LABEL_7;
    v9 = (__int64 *)this[37].Ptr;
    while ( *(_QWORD *)(*v9 + 40) != a2.value )
    {
      ++v7;
      ++v9;
      if ( v7 >= (unsigned __int64)Ptr )
        goto LABEL_7;
    }
    Microsoft::WRL::ComPtr<IApplicationView>::operator=(&v27, v9);
    v11 = v27;
    if ( v27 )
    {
      v36 = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v36);
      v14 = CEnumerableObjectCollection::CreateInstance(v13, v12, &v36);
      v6 = v14;
      if ( v14 >= 0 )
      {
        v15 = (char *)this[46].Ptr;
        if ( v15 )
        {
          v16 = this + 45;
          do
          {
            v17 = *((_QWORD *)v16->Ptr + (_QWORD)v15 - 1);
            v18 = *(unsigned __int8 (__fastcall **)(__int64, PCWSTR))(*(_QWORD *)v17 + 704LL);
            StringRawBuffer = WindowsGetStringRawBuffer(*(HSTRING *)(v11 + 16), 0LL);
            if ( v18(v17, StringRawBuffer) )
            {
              v34 = *((_QWORD *)v16->Ptr + (_QWORD)v15 - 1);
              Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v34);
              CTSimpleArray<Microsoft::WRL::ComPtr<WeakReference::IWeakReference>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<WeakReference::IWeakReference>>,ComPtrCompareHelper,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<WeakReference::IWeakReference>>>::RemoveAt(
                &this[45],
                v15 - 1);
              (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v34 + 672LL))(v34, v11 + 8, 1LL);
              v31 = &v34;
              v21 = 1;
              v32 = 1;
              v22 = 0;
              v23 = this[42].Ptr;
              if ( v23 != this[44].Ptr
                || (v22 = CTSimpleArray<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>>::_EnsureCapacity(
                            (__int64)&this[41],
                            (unsigned __int64)v23 + 1,
                            v20),
                    v22 >= 0) )
              {
                v24 = (__int64 *)((char *)this[41].Ptr + 8 * (__int64)this[42].Ptr++);
                if ( v24 )
                {
                  *v24 = v34;
                  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v24);
                }
              }
              if ( v22 >= 0 )
              {
                v25 = (*(__int64 (__fastcall **)(void *, __int64))(*(_QWORD *)v36 + 40LL))(v36, v34);
                if ( v25 >= 0 )
                {
                  v21 = 0;
                }
                else
                {
                  wil::details::in1diag3::_Log_Hr(
                    retaddr,
                    (void *)0x58F,
                    (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
                    (const char *)(unsigned int)v25);
                  CTSimpleArray<Microsoft::WRL::ComPtr<WeakReference::IWeakReference>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<WeakReference::IWeakReference>>,ComPtrCompareHelper,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<WeakReference::IWeakReference>>>::RemoveAt(
                    &this[41],
                    (char *)this[42].Ptr - 1);
                }
              }
              else
              {
                wil::details::in1diag3::_Log_Hr(
                  retaddr,
                  (void *)0x58D,
                  (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
                  (const char *)(unsigned int)v22);
              }
              if ( v21 )
              {
                v32 = 0;
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v34 + 808LL))(v34);
              }
              Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v34);
            }
            --v15;
          }
          while ( v15 );
          v5 = v28;
        }
        v26 = (struct IObjectArray *)v36;
        v36 = 0LL;
        *v35 = v26;
        v6 = 0;
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x577,
          (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
          (const char *)(unsigned int)v14);
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v36);
    }
    else
    {
LABEL_7:
      v6 = -2147023728;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x571,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
        (const char *)0x80070490LL);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v27);
  }
  if ( v5 )
    ReleaseSRWLockExclusive(v5);
  return v6;
}
