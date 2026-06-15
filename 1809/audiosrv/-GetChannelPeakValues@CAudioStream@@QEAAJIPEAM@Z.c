/*
 * XREFs of ?GetChannelPeakValues@CAudioStream@@QEAAJIPEAM@Z @ 0x1800CB760
 * Callers:
 *     ?GetChannelsPeakValues@CAudioSession@@UEAAJIPEAM@Z @ 0x1800BFAC0 (-GetChannelsPeakValues@CAudioSession@@UEAAJIPEAM@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003DCC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _freea @ 0x180015D40 (_freea.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005F87C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180060590 (__security_check_cookie.c)
 *     memset_0 @ 0x18006158E (memset_0.c)
 *     _alloca_probe @ 0x180068810 (_alloca_probe.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     ?reset@?$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800C36C0 (-reset@-$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wi.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAudioStream::GetChannelPeakValues(CAudioStream *this, unsigned int a2, float *a3)
{
  float *v3; // r15
  __int64 v4; // r14
  unsigned int v6; // ebx
  __int64 v7; // rdx
  struct _RTL_CRITICAL_SECTION *v9; // rdi
  __int64 *v10; // r12
  size_t v11; // rcx
  __int64 v12; // rax
  void *v13; // rsp
  _QWORD *v14; // rbx
  _DWORD *v15; // rax
  unsigned int v16; // esi
  __int64 v17; // rdx
  int v18; // eax
  float *v19; // rax
  __int64 v20; // rcx
  float v21; // xmm0_4
  __int64 v22; // [rsp+0h] [rbp-20h] BYREF
  _QWORD Memory[3]; // [rsp+20h] [rbp+0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+38h]

  Memory[0] = -2LL;
  v3 = a3;
  v4 = a2;
  if ( !a3 )
  {
    v6 = -2147467261;
    v7 = 1110LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      v7,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
      (const char *)v6);
    return v6;
  }
  if ( a2 != *((_DWORD *)this + 22) )
  {
    v6 = -2147024809;
    v7 = 1111LL;
    goto LABEL_3;
  }
  if ( a2 )
    memset_0(a3, 0, 4LL * a2);
  v9 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 128);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 128));
  Memory[1] = (char *)this + 128;
  v10 = (__int64 *)((char *)this + 184);
  if ( !*((_QWORD *)this + 23) )
    goto LABEL_34;
  v11 = (12LL * *((unsigned int *)this + 22) + 16) & -(__int64)(12 * (unsigned __int64)*((unsigned int *)this + 22) < 12 * (unsigned __int64)*((unsigned int *)this + 22) + 16);
  if ( !v11 )
  {
    v14 = 0LL;
    goto LABEL_19;
  }
  if ( v11 <= 0x400 )
  {
    v12 = v11 + 15;
    if ( v11 + 15 < v11 )
      v12 = 0xFFFFFFFFFFFFFF0LL;
    v13 = alloca(v12 & 0xFFFFFFFFFFFFFFF0uLL);
    v14 = Memory;
    if ( &v22 == (__int64 *)-32LL )
      goto LABEL_19;
    LODWORD(Memory[0]) = 52428;
    goto LABEL_17;
  }
  v15 = malloc(v11);
  v14 = v15;
  if ( v15 )
  {
    *v15 = 56797;
LABEL_17:
    v14 += 2;
  }
LABEL_19:
  Memory[2] = v14;
  if ( !v14 )
  {
    v16 = -2147024882;
    v17 = 1124LL;
LABEL_25:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      v17,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
      (const char *)v16);
    freea(v14);
    if ( v9 )
      LeaveCriticalSection(v9);
    return v16;
  }
  memset_0(v14, 0, 12LL * *((unsigned int *)this + 22));
  v18 = (*(__int64 (__fastcall **)(__int64, _QWORD *, _QWORD))(*(_QWORD *)*v10 + 24LL))(
          *v10,
          v14,
          *((unsigned int *)this + 22));
  v16 = v18;
  if ( v18 >= 0 )
  {
    if ( (_DWORD)v4 )
    {
      v19 = (float *)v14;
      v20 = v4;
      do
      {
        v21 = fminf(*v19, 1.0);
        if ( v21 <= 0.0 )
          v21 = 0.0;
        *v3 = v21;
        v19 += 3;
        ++v3;
        --v20;
      }
      while ( v20 );
    }
  }
  else
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x467,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
      (const char *)(unsigned int)v18);
    if ( v16 != -2147417848 )
    {
      v17 = 1142LL;
      goto LABEL_25;
    }
    wil::com_ptr_t<Windows::Foundation::Collections::IPropertySet,wil::err_returncode_policy>::reset(v10);
  }
  freea(v14);
LABEL_34:
  if ( v9 )
    LeaveCriticalSection(v9);
  return 0LL;
}
