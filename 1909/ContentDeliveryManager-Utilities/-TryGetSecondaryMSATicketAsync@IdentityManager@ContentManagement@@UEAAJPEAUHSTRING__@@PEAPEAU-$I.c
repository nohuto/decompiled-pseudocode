/*
 * XREFs of ?TryGetSecondaryMSATicketAsync@IdentityManager@ContentManagement@@UEAAJPEAUHSTRING__@@PEAPEAU?$IAsyncOperation@PEAUHSTRING__@@@Foundation@Windows@@@Z @ 0x18000E4E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003584 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Windows::Internal::MakeAsyncOperation_Windows::Internal::CHSTRINGResult_HSTRING_____Windows::Internal::ComTaskPoolHandler__lambda_91da0398866e2bc6f1173300c449b4ce___ @ 0x180016BDC (Windows--Internal--MakeAsyncOperation_Windows--Internal--CHSTRINGResult_HSTRING_____Windows--Int.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ContentManagement::IdentityManager::TryGetSecondaryMSATicketAsync(
        __int64 a1,
        HSTRING a2,
        _QWORD *a3)
{
  HRESULT v6; // eax
  __int64 v7; // r8
  int v8; // ebx
  unsigned __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v12; // [rsp+28h] [rbp-38h] BYREF
  HSTRING newString; // [rsp+38h] [rbp-28h] BYREF
  char v14; // [rsp+40h] [rbp-20h]
  __int64 v15; // [rsp+48h] [rbp-18h] BYREF
  HSTRING string; // [rsp+50h] [rbp-10h]
  char v17; // [rsp+58h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+8h]

  *a3 = 0LL;
  v14 = 0;
  WindowsDeleteString(0LL);
  newString = 0LL;
  v6 = WindowsDuplicateString(a2, &newString);
  v8 = v6;
  if ( v6 >= 0 )
  {
    v15 = a1 - 48;
    string = newString;
    newString = 0LL;
    v17 = 0;
    v14 = 1;
    v8 = Windows::Internal::MakeAsyncOperation_Windows::Internal::CHSTRINGResult_HSTRING_____Windows::Internal::ComTaskPoolHandler__lambda_91da0398866e2bc6f1173300c449b4ce___(
           &v12,
           a3,
           v7,
           &v15,
           -2LL,
           0x8200000003LL,
           0);
    WindowsDeleteString(string);
    if ( v8 >= 0 )
    {
      v8 = 0;
      goto LABEL_7;
    }
    v9 = (unsigned int)v8;
    v10 = 616LL;
  }
  else
  {
    v9 = (unsigned int)v6;
    v10 = 528LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v10,
    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
    (const char *)v9);
LABEL_7:
  WindowsDeleteString(newString);
  return (unsigned int)v8;
}
