/*
 * XREFs of ?GetStreamAmbHeadTracking@CVADServer@@UEAAJ_KPEAH@Z @ 0x1800D9A60
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18002B5B0 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005F87C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_qq @ 0x1800C3C58 (WPP_SF_qq.c)
 */

__int64 __fastcall CVADServer::GetStreamAmbHeadTracking(CVADServer *this, __int64 a2, int *a3)
{
  int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // r8
  __int64 v10; // rcx
  int v11; // eax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-18h] BYREF
  char v14; // [rsp+38h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 224);
  v14 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  if ( !*((_DWORD *)this + 46) )
  {
    v6 = -2004287487;
    v7 = 2295LL;
LABEL_20:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      v7,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)(unsigned int)v6);
    goto LABEL_22;
  }
  v8 = *((_QWORD *)this + 24);
  if ( !v8 )
  {
    v6 = -2004287487;
    v7 = 2296LL;
    goto LABEL_20;
  }
  v9 = *(_QWORD *)(v8 + 48);
  if ( a2 != v9 )
  {
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_qq(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x2Bu,
        (__int64)&WPP_8f522ea4bf9e3fa5b38ae1f25d9817c8_Traceguids,
        a2,
        v9);
    }
    v6 = -2147024809;
    v7 = 2301LL;
    goto LABEL_20;
  }
  v10 = *(_QWORD *)(v8 + 208);
  if ( !v10 )
  {
    v6 = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      523LL,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
      (const char *)0x80070057LL);
LABEL_19:
    v7 = 2307LL;
    goto LABEL_20;
  }
  v11 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v10 + 40LL))(v10, a3);
  if ( v11 == -2005139384 )
    v11 = -2147024809;
  v6 = v11;
  if ( v11 >= 0 )
    v6 = 0;
  else
    wil::details::in1diag3::Return_Hr(
      retaddr,
      533LL,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
      (const char *)(unsigned int)v11);
  if ( v6 < 0 )
    goto LABEL_19;
  v6 = 0;
LABEL_22:
  if ( v14 )
    LeaveCriticalSection(lpCriticalSection);
  return (unsigned int)v6;
}
