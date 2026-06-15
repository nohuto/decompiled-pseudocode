/*
 * XREFs of ??1CPolicyConfig@@UEAA@XZ @ 0x1800DD07C
 * Callers:
 *     ??_GCPolicyConfig@@UEAAPEAXI@Z @ 0x1800BEAE0 (--_GCPolicyConfig@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x180023370 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?Release@CAudioSessionStore@@UEAAKXZ @ 0x180039900 (-Release@CAudioSessionStore@@UEAAKXZ.c)
 *     ?FreeNode@?$CAtlList@PEAVCAudioSessionStore@@V?$CElementTraits@PEAVCAudioSessionStore@@@ATL@@@ATL@@AEAAXPEAVCNode@12@@Z @ 0x18004D08C (-FreeNode@-$CAtlList@PEAVCAudioSessionStore@@V-$CElementTraits@PEAVCAudioSessionStore@@@ATL@@@AT.c)
 *     ?RemoveAll@?$CAtlList@PEAVCAudioSessionStore@@V?$CElementTraits@PEAVCAudioSessionStore@@@ATL@@@ATL@@QEAAXXZ @ 0x18004D0B4 (-RemoveAll@-$CAtlList@PEAVCAudioSessionStore@@V-$CElementTraits@PEAVCAudioSessionStore@@@ATL@@@A.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800BD31C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall CPolicyConfig::~CPolicyConfig(CPolicyConfig *this)
{
  CPolicyConfig *v1; // rdi
  __int64 v2; // rsi
  __int64 *v3; // rcx
  __int64 *v4; // rdx
  CAudioSessionStore *v5; // r14
  __int64 v6; // rax
  int *v7; // rbx
  struct _RTL_CRITICAL_SECTION *v8; // [rsp+20h] [rbp-58h]
  ATL::CAtlException *v9; // [rsp+30h] [rbp-48h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+38h] [rbp-40h] BYREF
  char v11; // [rsp+40h] [rbp-38h]
  CAudioSessionStore *v13; // [rsp+98h] [rbp+20h]

  v1 = this;
  *(_QWORD *)this = &CPolicyConfig::`vftable'{for `IPolicyConfig'};
  *((_QWORD *)this + 1) = &CPolicyConfig::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IPolicyConfigInternal>'};
  v8 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 24);
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 24);
  v11 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v2 = *((_QWORD *)v1 + 10);
  while ( 2 )
  {
    if ( v2 )
    {
      try
      {
        v3 = (__int64 *)((char *)v1 + 64);
        v4 = (__int64 *)*((_QWORD *)v1 + 8);
        if ( !v4 )
          ATL::AtlThrowImpl(-2147467259);
        v5 = (CAudioSessionStore *)v4[2];
        v6 = *v4;
        *v3 = *v4;
        if ( v6 )
          *(_QWORD *)(v6 + 8) = 0LL;
        else
          *((_QWORD *)v1 + 9) = 0LL;
        ATL::CAtlList<CAudioSessionStore *,ATL::CElementTraits<CAudioSessionStore *>>::FreeNode((__int64)v3, v4);
        v13 = v5;
      }
      catch ( ATL::CAtlException *v9 )
      {
        v7 = (int *)v9;
        if ( *(_DWORD *)v9 == -1073741571 )
          _o__resetstkoflw();
        v1 = this;
        if ( *v7 >= 0 )
        {
          v5 = v13;
          goto LABEL_12;
        }
LABEL_14:
        --v2;
        continue;
      }
LABEL_12:
      if ( v5 )
        CAudioSessionStore::Release(v5);
      goto LABEL_14;
    }
    break;
  }
  if ( v11 )
  {
    LeaveCriticalSection(lpCriticalSection);
    v11 = 0;
  }
  ATL::CAtlList<CAudioSessionStore *,ATL::CElementTraits<CAudioSessionStore *>>::RemoveAll((__int64 *)v1 + 8);
  DeleteCriticalSection(v8);
  *((_DWORD *)v1 + 5) = -1073741823;
}
