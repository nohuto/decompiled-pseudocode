/*
 * XREFs of _lambda_75ecb61212cbd325c11a4ad813499630_::operator() @ 0x180056BD4
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_c375c8f4cb799a2f5bee00a6619de85c___::Run @ 0x180056B60 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_c375c8f4cb799a2f5bee00a6619de85c___--Run.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_75ecb61212cbd325c11a4ad813499630_::operator()(_QWORD *a1)
{
  char v2; // di
  char v3; // bl
  int v5; // [rsp+30h] [rbp-40h] BYREF
  __int64 v6; // [rsp+38h] [rbp-38h] BYREF
  int v7; // [rsp+40h] [rbp-30h] BYREF
  int v8; // [rsp+44h] [rbp-2Ch] BYREF
  __int64 v9; // [rsp+48h] [rbp-28h]
  RECT rc; // [rsp+50h] [rbp-20h] BYREF

  v9 = -2LL;
  *(_QWORD *)&rc.left = 0LL;
  *(_QWORD *)&rc.right = 0LL;
  v8 = 0;
  v5 = 0;
  v2 = 0;
  v3 = 0;
  v6 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v6);
  if ( (**(int (__fastcall ***)(_QWORD, GUID *, __int64 *))*a1)(*a1, &GUID_3fc0257d_21c2_4ad3_8fb0_fd481cd204e2, &v6) >= 0 )
  {
    (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)v6 + 32LL))(v6, &v7);
    (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)v6 + 48LL))(v6, &v5);
    if ( v7 == 4 )
    {
      v2 = 1;
      v3 = 0;
      (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)v6 + 40LL))(v6, &v8);
    }
    else
    {
      if ( v7 != 3 || (v5 & 1) == 0 )
      {
        v3 = 0;
        goto LABEL_6;
      }
      v3 = 1;
    }
    (*(void (__fastcall **)(__int64, RECT *))(*(_QWORD *)v6 + 24LL))(v6, &rc);
  }
LABEL_6:
  if ( (v5 & 1) == 0 )
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1[1] + 120LL) + 32LL))(*(_QWORD *)(a1[1] + 120LL), *a1);
  if ( v2 )
  {
    (*(void (__fastcall **)(PVOID, _QWORD, RECT *, _QWORD, int))(*(_QWORD *)CApplicationManagerUtility::g_pIAMGlobals[19].Ptr
                                                               + 24LL))(
      CApplicationManagerUtility::g_pIAMGlobals[19].Ptr,
      *(_QWORD *)(a1[1] + 128LL),
      &rc,
      0LL,
      v8);
  }
  else if ( v3 )
  {
    IsRectEmpty(&rc);
    (*(void (__fastcall **)(PVOID, _QWORD, __int64))(*(_QWORD *)CApplicationManagerUtility::g_pIAMGlobals[20].Ptr + 32LL))(
      CApplicationManagerUtility::g_pIAMGlobals[20].Ptr,
      *(_QWORD *)(a1[1] + 128LL),
      5LL);
  }
  return Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v6);
}
