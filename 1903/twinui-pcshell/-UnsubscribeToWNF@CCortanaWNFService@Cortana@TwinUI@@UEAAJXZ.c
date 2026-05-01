/*
 * XREFs of ?UnsubscribeToWNF@CCortanaWNFService@Cortana@TwinUI@@UEAAJXZ @ 0x1801D2A40
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180063E40 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SafeUnsubscribeWnf@@YAXPEAPEAU_WNF_USER_SUBSCRIPTION@@@Z @ 0x1801D2560 (-SafeUnsubscribeWnf@@YAXPEAPEAU_WNF_USER_SUBSCRIPTION@@@Z.c)
 */

__int64 __fastcall TwinUI::Cortana::CCortanaWNFService::UnsubscribeToWNF(TwinUI::Cortana::CCortanaWNFService *this)
{
  __int64 v1; // rax
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  v1 = *((_QWORD *)this + 7);
  *((_QWORD *)this + 7) = 0LL;
  v5 = 0LL;
  v4 = v1;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v4);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v5);
  SafeUnsubscribeWnf((struct _WNF_USER_SUBSCRIPTION **)this + 1);
  SafeUnsubscribeWnf((struct _WNF_USER_SUBSCRIPTION **)this + 2);
  SafeUnsubscribeWnf((struct _WNF_USER_SUBSCRIPTION **)this + 3);
  SafeUnsubscribeWnf((struct _WNF_USER_SUBSCRIPTION **)this + 4);
  SafeUnsubscribeWnf((struct _WNF_USER_SUBSCRIPTION **)this + 5);
  SafeUnsubscribeWnf((struct _WNF_USER_SUBSCRIPTION **)this + 6);
  return 0LL;
}
