/*
 * XREFs of ?OnDeviceNotification@Details@PnpApiWrapper@@YAKPEAUHCMNOTIFICATION__@@PEAXW4_CM_NOTIFY_ACTION@@PEAU_CM_NOTIFY_EVENT_DATA@@K@Z @ 0x180076E20
 * Callers:
 *     <none>
 * Callees:
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x180051ED8 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
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
  const WCHAR *v11; // r15
  unsigned __int64 v12; // rbx
  unsigned int v13; // r14d
  unsigned int v14; // eax
  unsigned int v15; // edx
  UINT32 v16; // edx
  HRESULT v17; // eax
  HSTRING_HEADER hstringHeader; // [rsp+28h] [rbp-40h] BYREF
  HSTRING string; // [rsp+40h] [rbp-28h] BYREF

  if ( !a2 || *(_QWORD *)a2 != a1 )
    return 0LL;
  if ( !a3 )
  {
    v9 = 3;
    goto LABEL_14;
  }
  v6 = a3 - 1;
  if ( !v6 )
  {
    v9 = 4;
LABEL_14:
    v10 = 24LL;
    goto LABEL_15;
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
LABEL_15:
  v11 = (const WCHAR *)(a4 + v10);
  v12 = ((unsigned __int64)a5 - v10) >> 1;
  v13 = -1;
  if ( v12 > 0xFFFFFFFF )
    return 0LL;
  v14 = wcsnlen((const wchar_t *)(a4 + v10), ((unsigned __int64)a5 - v10) >> 1);
  if ( !v14 || v14 >= v12 )
    return 0LL;
  string = 0LL;
  v15 = v14 + 1;
  if ( v14 + 1 >= v14 )
    v13 = v14 + 1;
  if ( v15 < v14 )
  {
    Microsoft::WRL::Details::RaiseException(v15 < v14 ? (Microsoft::WRL::Details *)0x80070216LL : 0);
    goto LABEL_27;
  }
  v16 = v13 - 1;
  if ( v14 < v13 )
    v16 = v14;
  v17 = WindowsCreateStringReference(v11, v16, &hstringHeader, &string);
  if ( v17 < 0 )
  {
LABEL_27:
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v17);
    JUMPOUT(0x180076F69LL);
  }
  try
  {
    (*(void (__fastcall **)(_QWORD))(a2 + 8))(v9);
  }
  catch ( ... )
  {
  }
  return 0LL;
}
