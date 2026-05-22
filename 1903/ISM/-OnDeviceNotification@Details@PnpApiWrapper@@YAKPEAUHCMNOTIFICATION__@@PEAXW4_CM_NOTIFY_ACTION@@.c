/*
 * XREFs of ?OnDeviceNotification@Details@PnpApiWrapper@@YAKPEAUHCMNOTIFICATION__@@PEAXW4_CM_NOTIFY_ACTION@@PEAU_CM_NOTIFY_EVENT_DATA@@K@Z @ 0x1800266D0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18002C580 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PnpApiWrapper::Details::OnDeviceNotification(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        unsigned int a5)
{
  int v6; // r8d
  int v7; // r8d
  int v8; // r8d
  unsigned int v9; // edi
  __int64 v10; // rax
  const wchar_t *v11; // r14
  size_t v12; // rbx
  UINT32 v13; // eax
  HRESULT v14; // eax
  HSTRING_HEADER hstringHeader; // [rsp+28h] [rbp-40h] BYREF
  HSTRING string; // [rsp+40h] [rbp-28h] BYREF

  if ( !a2 || *(_QWORD *)a2 != a1 )
    return 0LL;
  if ( !a3 )
  {
    v9 = 3;
    goto LABEL_21;
  }
  v6 = a3 - 1;
  if ( !v6 )
  {
    v9 = 4;
LABEL_21:
    v10 = 24LL;
    goto LABEL_9;
  }
  v7 = v6 - 6;
  if ( v7 )
  {
    v8 = v7 - 1;
    if ( v8 )
    {
      if ( v8 != 1 )
        return 0LL;
      v9 = 2;
    }
    else
    {
      v9 = 1;
    }
  }
  else
  {
    v9 = 0;
  }
  v10 = 8LL;
LABEL_9:
  v11 = (const wchar_t *)(a4 + v10);
  v12 = ((unsigned __int64)a5 - v10) >> 1;
  if ( v12 > 0xFFFFFFFF )
    return 0LL;
  v13 = wcsnlen(v11, v12);
  if ( !v13 || v13 >= v12 )
    return 0LL;
  string = 0LL;
  if ( v13 + 1 < v13 )
  {
LABEL_23:
    RaiseException(0x80070216, 1u, 0, 0LL);
    JUMPOUT(0x18004BB51LL);
  }
  v14 = WindowsCreateStringReference(v11, v13, &hstringHeader, &string);
  if ( v14 < 0 )
  {
    RaiseException(v14, 1u, 0, 0LL);
    goto LABEL_23;
  }
  try
  {
    (*(void (__fastcall **)(_QWORD, HSTRING, _QWORD))(a2 + 8))(v9, string, *(_QWORD *)(a2 + 16));
  }
  catch ( ... )
  {
  }
  return 0LL;
}
