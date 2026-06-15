/*
 * XREFs of ?GetPeakValue@CAudioStream@@QEAAJPEAM@Z @ 0x1800D9F44
 * Callers:
 *     ?GetPeakValue@CAudioSession@@UEAAJPEAM@Z @ 0x1800CE680 (-GetPeakValue@CAudioSession@@UEAAJPEAM@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005A58 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E4E0 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180064BC0 (__security_check_cookie.c)
 *     memset_0 @ 0x180065BEE (memset_0.c)
 *     _alloca_probe @ 0x18006C8D0 (_alloca_probe.c)
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 *     ?reset@?$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800D1AA0 (-reset@-$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wi.c)
 *     _freea @ 0x1800D20D4 (_freea.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAudioStream::GetPeakValue(CAudioStream *this, float *a2)
{
  struct _RTL_CRITICAL_SECTION *v5; // rdi
  size_t v6; // rcx
  __int64 v7; // rax
  void *v8; // rsp
  _QWORD *v9; // rbx
  _DWORD *v10; // rax
  unsigned int v11; // esi
  __int64 v12; // rdx
  int v13; // eax
  float *v14; // rax
  __int64 v15; // rcx
  __int64 v16; // [rsp+0h] [rbp-20h] BYREF
  _QWORD Memory[3]; // [rsp+20h] [rbp+0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+38h]

  Memory[0] = -2LL;
  if ( !a2 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x424,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
      (const char *)0x80004003LL);
    return 2147500035LL;
  }
  v5 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 128);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 128));
  Memory[1] = v5;
  *a2 = 0.0;
  if ( !*((_QWORD *)this + 23) )
    goto LABEL_29;
  v6 = (12LL * *((unsigned int *)this + 22) + 16) & -(__int64)(12 * (unsigned __int64)*((unsigned int *)this + 22) < 12 * (unsigned __int64)*((unsigned int *)this + 22) + 16);
  if ( !v6 )
  {
    v9 = 0LL;
    goto LABEL_14;
  }
  if ( v6 <= 0x400 )
  {
    v7 = v6 + 15;
    if ( v6 + 15 < v6 )
      v7 = 0xFFFFFFFFFFFFFF0LL;
    v8 = alloca(v7 & 0xFFFFFFFFFFFFFFF0uLL);
    v9 = Memory;
    if ( &v16 == (__int64 *)-32LL )
      goto LABEL_14;
    LODWORD(Memory[0]) = 52428;
    goto LABEL_12;
  }
  v10 = malloc(v6);
  v9 = v10;
  if ( v10 )
  {
    *v10 = 56797;
LABEL_12:
    v9 += 2;
  }
LABEL_14:
  Memory[2] = v9;
  if ( !v9 )
  {
    v11 = -2147024882;
    v12 = 1069LL;
LABEL_20:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
      (const char *)v11);
    if ( v9 )
      freea(v9);
    if ( v5 )
      LeaveCriticalSection(v5);
    return v11;
  }
  memset_0(v9, 0, 12LL * *((unsigned int *)this + 22));
  v13 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *, _QWORD))(**((_QWORD **)this + 23) + 24LL))(
          *((_QWORD *)this + 23),
          v9,
          *((unsigned int *)this + 22));
  v11 = v13;
  if ( v13 >= 0 )
  {
    if ( *((_DWORD *)this + 22) )
    {
      v14 = (float *)v9;
      v15 = *((unsigned int *)this + 22);
      do
      {
        *a2 = fmaxf(*v14, *a2);
        v14 += 3;
        --v15;
      }
      while ( v15 );
    }
  }
  else
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x430,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
      (const char *)(unsigned int)v13);
    if ( v11 != -2147417848 )
    {
      v12 = 1088LL;
      goto LABEL_20;
    }
    wil::com_ptr_t<Windows::Foundation::Collections::IPropertySet,wil::err_returncode_policy>::reset((__int64 *)this + 23);
  }
  freea(v9);
LABEL_29:
  if ( v5 )
    LeaveCriticalSection(v5);
  return 0LL;
}
