/*
 * XREFs of ?RecoverViews@ViewEventDispatcher@@UEAAJUEventRegistrationToken@@PEAPEAUIObjectArray@@@Z @ 0x180216E50
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180017174 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006C60C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?CreateInstance@CEnumerableObjectCollection@@SAJHAEBU_GUID@@PEAPEAX@Z @ 0x1800ED150 (-CreateInstance@CEnumerableObjectCollection@@SAJHAEBU_GUID@@PEAPEAX@Z.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x1800F6B54 (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V-$C.c)
 *     ?RemoveAt@?$CTSimpleArray@V?$ComPtr@UIWeakReference@WeakReference@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIWeakReference@WeakReference@@@WRL@Microsoft@@@@VComPtrCompareHelper@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIWeakReference@WeakReference@@@WRL@Microsoft@@@@@@QEAAJ_K@Z @ 0x180217C78 (-RemoveAt@-$CTSimpleArray@V-$ComPtr@UIWeakReference@WeakReference@@@WRL@Microsoft@@$0PPPPPPPO@V-.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall ViewEventDispatcher::RecoverViews(
        RTL_SRWLOCK *this,
        struct EventRegistrationToken a2,
        struct IObjectArray **a3)
{
  int v5; // r12d
  RTL_SRWLOCK *v6; // r15
  unsigned int v7; // edi
  char *v8; // rcx
  char *Ptr; // rdx
  __int64 v11; // rbx
  const struct _GUID *v12; // rdx
  __int64 v13; // rcx
  int v14; // eax
  char *v15; // r14
  RTL_SRWLOCK *v16; // r15
  __int64 v17; // rdi
  PCWSTR StringRawBuffer; // rax
  void *v19; // r8
  char v20; // r13
  PVOID v21; // rdx
  __int64 *v22; // rcx
  int v23; // eax
  struct IObjectArray *v24; // rax
  __int64 v25; // [rsp+20h] [rbp-30h] BYREF
  RTL_SRWLOCK *v26; // [rsp+28h] [rbp-28h]
  __int64 v27; // [rsp+30h] [rbp-20h]
  RTL_SRWLOCK *v28; // [rsp+38h] [rbp-18h]
  __int64 *v29; // [rsp+40h] [rbp-10h]
  char v30; // [rsp+48h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+38h]
  __int64 v32; // [rsp+90h] [rbp+40h] BYREF
  struct IObjectArray **v33; // [rsp+A0h] [rbp+50h]
  void *v34; // [rsp+A8h] [rbp+58h] BYREF

  v33 = a3;
  v27 = -2LL;
  v5 = 0;
  *a3 = 0LL;
  v6 = this + 34;
  v26 = this + 34;
  AcquireSRWLockExclusive(this + 34);
  v28 = v6;
  if ( LOBYTE(this[35].Ptr) )
  {
    v7 = -2147019873;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x66B,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
      (const char *)0x8007139FLL);
  }
  else
  {
    v25 = 0LL;
    v8 = 0LL;
    if ( !this[40].Ptr )
      goto LABEL_7;
    Ptr = (char *)this[39].Ptr;
    while ( *(_QWORD *)(*(_QWORD *)Ptr + 40LL) != a2.value )
    {
      ++v8;
      Ptr += 8;
      if ( v8 >= this[40].Ptr )
        goto LABEL_7;
    }
    Microsoft::WRL::ComPtr<IApplicationView>::operator=(&v25, (__int64 *)this[39].Ptr + (_QWORD)v8);
    v11 = v25;
    if ( v25 )
    {
      v34 = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v34);
      v14 = CEnumerableObjectCollection::CreateInstance(v13, v12, &v34);
      v7 = v14;
      if ( v14 >= 0 )
      {
        v15 = (char *)this[48].Ptr;
        if ( v15 )
        {
          v16 = this + 47;
          do
          {
            v17 = *((_QWORD *)v16->Ptr + (_QWORD)v15 - 1);
            StringRawBuffer = WindowsGetStringRawBuffer(*(HSTRING *)(v11 + 16), 0LL);
            if ( (*(unsigned __int8 (__fastcall **)(__int64, PCWSTR))(*(_QWORD *)v17 + 696LL))(v17, StringRawBuffer) )
            {
              v32 = *((_QWORD *)v16->Ptr + (_QWORD)v15 - 1);
              Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v32);
              CTSimpleArray<Microsoft::WRL::ComPtr<WeakReference::IWeakReference>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<WeakReference::IWeakReference>>,ComPtrCompareHelper,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<WeakReference::IWeakReference>>>::RemoveAt(
                &this[47],
                v15 - 1);
              (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v32 + 664LL))(v32, v11 + 8, 1LL);
              v29 = &v32;
              v20 = 1;
              v30 = 1;
              v21 = this[44].Ptr;
              if ( v21 != this[46].Ptr
                || (v5 = CTSimpleArray<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>>::_EnsureCapacity(
                           (__int64)&this[43],
                           (unsigned __int64)v21 + 1,
                           v19),
                    v5 >= 0) )
              {
                v22 = (__int64 *)((char *)this[43].Ptr + 8 * (__int64)this[44].Ptr++);
                if ( v22 )
                {
                  *v22 = v32;
                  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v22);
                }
              }
              if ( v5 >= 0 )
              {
                v23 = (*(__int64 (__fastcall **)(void *, __int64))(*(_QWORD *)v34 + 40LL))(v34, v32);
                v5 = 0;
                if ( v23 >= 0 )
                {
                  v20 = 0;
                }
                else
                {
                  wil::details::in1diag3::_Log_Hr(
                    retaddr,
                    1686LL,
                    (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
                    (const char *)(unsigned int)v23);
                  CTSimpleArray<Microsoft::WRL::ComPtr<WeakReference::IWeakReference>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<WeakReference::IWeakReference>>,ComPtrCompareHelper,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<WeakReference::IWeakReference>>>::RemoveAt(
                    &this[43],
                    (char *)this[44].Ptr - 1);
                }
              }
              else
              {
                wil::details::in1diag3::_Log_Hr(
                  retaddr,
                  1684LL,
                  (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
                  (const char *)(unsigned int)v5);
                v5 = 0;
              }
              if ( v20 )
              {
                v30 = 0;
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 800LL))(v32);
              }
              Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v32);
            }
            --v15;
          }
          while ( v15 );
          v6 = v26;
        }
        v24 = (struct IObjectArray *)v34;
        v34 = 0LL;
        *v33 = v24;
        v7 = 0;
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x67E,
          (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
          (const char *)(unsigned int)v14);
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v34);
    }
    else
    {
LABEL_7:
      v7 = -2147023728;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x678,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
        (const char *)0x80070490LL);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v25);
  }
  if ( v6 )
    ReleaseSRWLockExclusive(v6);
  return v7;
}
