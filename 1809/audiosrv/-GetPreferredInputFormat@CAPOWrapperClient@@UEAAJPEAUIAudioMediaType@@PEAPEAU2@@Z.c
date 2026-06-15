/*
 * XREFs of ?GetPreferredInputFormat@CAPOWrapperClient@@UEAAJPEAUIAudioMediaType@@PEAPEAU2@@Z @ 0x180131FB0
 * Callers:
 *     <none>
 * Callees:
 *     ?Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@MH@Z @ 0x180006370 (-Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@MH@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005F87C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAPOWrapperClient::GetPreferredInputFormat(
        CAPOWrapperClient *this,
        struct IAudioMediaType *a2,
        struct IAudioMediaType **a3)
{
  __int64 v5; // rdx
  __int64 v6; // rdx
  unsigned int v7; // ebx
  int v8; // eax
  __int64 v9; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  LPVOID pv; // [rsp+50h] [rbp+8h] BYREF

  if ( !*((_QWORD *)this + 2) )
  {
    v5 = 308LL;
LABEL_15:
    v7 = -2147024809;
    goto LABEL_16;
  }
  if ( !a3 || !a2 )
  {
    v5 = 309LL;
    goto LABEL_15;
  }
  v6 = ((__int64 (__fastcall *)(struct IAudioMediaType *))a2->lpVtbl->GetAudioFormat)(a2);
  if ( !v6 )
  {
    v7 = -2004287480;
    v5 = 312LL;
LABEL_16:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      v5,
      (__int64)"avcore\\audiocore\\server\\lib\\audioengineutil\\apowrapperclient.cpp",
      (const char *)v7);
    return v7;
  }
  pv = 0LL;
  v8 = (*(__int64 (__fastcall **)(_QWORD, __int64, LPVOID *))(**((_QWORD **)this + 2) + 56LL))(
         *((_QWORD *)this + 2),
         v6,
         &pv);
  v7 = v8;
  if ( v8 >= 0 )
  {
    v8 = CAudioMediaType::Create(
           (const struct tWAVEFORMATEX *)pv,
           (unsigned int)*((unsigned __int16 *)pv + 8) + 18,
           a3,
           0.0,
           1);
    v7 = v8;
    if ( v8 >= 0 )
    {
      v7 = 0;
      goto LABEL_13;
    }
    v9 = 318LL;
  }
  else
  {
    v9 = 315LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    v9,
    (__int64)"avcore\\audiocore\\server\\lib\\audioengineutil\\apowrapperclient.cpp",
    (const char *)(unsigned int)v8);
LABEL_13:
  CoTaskMemFree(pv);
  pv = 0LL;
  return v7;
}
