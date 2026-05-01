/*
 * XREFs of ?GetKeyAt@ActivationHints@@UEAAJIPEAUAppIdInfo@@@Z @ 0x18032BC20
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800891F8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$make_unique_string@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAG$0A@$$T@details@wil@@@details@wil@@@0@PEBG_K@Z @ 0x1801AD104 (--$make_unique_string@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTa.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ActivationHints::GetKeyAt(RTL_SRWLOCK *this, unsigned int a2, struct AppIdInfo *a3)
{
  unsigned __int64 v4; // rdi
  RTL_SRWLOCK *v6; // r12
  const char *Ptr; // r9
  const char *v8; // rbx
  char *v9; // rdx
  LPVOID *p_pv; // rax
  char v11; // di
  LPVOID v12; // rsi
  char *v13; // rdx
  LPVOID *v14; // rax
  LPVOID v15; // r14
  char v16; // bl
  char v17; // bl
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  LPVOID v20; // [rsp+80h] [rbp+8h] BYREF
  int v21; // [rsp+88h] [rbp+10h]
  LPVOID pv; // [rsp+90h] [rbp+18h] BYREF
  RTL_SRWLOCK *v23; // [rsp+98h] [rbp+20h]

  v4 = a2;
  v21 = 0;
  *(_OWORD *)a3 = 0uLL;
  v6 = this + 6;
  AcquireSRWLockExclusive(this + 6);
  try
  {
    v23 = v6;
    Ptr = (const char *)this[7].Ptr;
    if ( v4 >= ((char *)this[8].Ptr - (char *)Ptr) / 80 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        38LL,
        (__int64)"pcshell\\twinui\\apppositioner\\lib\\activationhints.cpp",
        (const char *)0x8000000BLL);
    v8 = &Ptr[80 * v4];
    if ( *((_QWORD *)v8 + 2) )
    {
      v9 = (char *)&Ptr[80 * v4];
      if ( *((_QWORD *)v8 + 3) >= 8uLL )
        v9 = *(char **)v8;
      wil::make_unique_string<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,0,std::nullptr_t>>>>(
        &v20,
        v9);
      p_pv = &v20;
      v11 = 17;
      v12 = v20;
    }
    else
    {
      pv = 0LL;
      p_pv = &pv;
      v11 = 2;
      v12 = 0LL;
    }
    *p_pv = 0LL;
    if ( (v11 & 2) != 0 )
    {
      v11 &= ~2u;
      if ( pv )
        CoTaskMemFree(pv);
    }
    if ( (v11 & 1) != 0 )
    {
      v11 &= ~1u;
      if ( v20 )
        CoTaskMemFree(v20);
    }
    if ( *((_QWORD *)v8 + 6) )
    {
      v13 = (char *)(v8 + 32);
      if ( *((_QWORD *)v8 + 7) >= 8uLL )
        v13 = *(char **)v13;
      wil::make_unique_string<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,0,std::nullptr_t>>>>(
        &pv,
        v13);
      v14 = &pv;
      v15 = pv;
      v16 = 68;
    }
    else
    {
      v20 = 0LL;
      v14 = &v20;
      v15 = 0LL;
      v16 = 8;
    }
    v17 = v11 | v16;
    *v14 = 0LL;
    if ( (v17 & 8) != 0 )
    {
      v17 &= ~8u;
      if ( v20 )
        CoTaskMemFree(v20);
    }
    if ( (v17 & 4) != 0 && pv )
      CoTaskMemFree(pv);
    *(_QWORD *)a3 = v12;
    *((_QWORD *)a3 + 1) = v15;
    if ( v6 )
      ReleaseSRWLockExclusive(v6);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x30,
                           (__int64)"pcshell\\twinui\\apppositioner\\lib\\activationhints.cpp",
                           Ptr);
  }
  return result;
}
