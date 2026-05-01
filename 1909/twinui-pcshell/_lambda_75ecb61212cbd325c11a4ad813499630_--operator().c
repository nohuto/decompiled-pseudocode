/*
 * XREFs of _lambda_75ecb61212cbd325c11a4ad813499630_::operator() @ 0x18004B7D4
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_c375c8f4cb799a2f5bee00a6619de85c___::Run @ 0x18004B760 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_c375c8f4cb799a2f5bee00a6619de85c___--Run.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_75ecb61212cbd325c11a4ad813499630_::operator()(_QWORD *a1)
{
  char v2; // r14
  char v3; // si
  int (__fastcall ***v4)(_QWORD, GUID *, __int64 *); // rdi
  int (__fastcall *v5)(_QWORD, GUID *, __int64 *); // rbx
  PVOID Ptr; // rdi
  void (__fastcall *v8)(PVOID, _QWORD, __int64); // rbx
  int v9; // [rsp+30h] [rbp-40h] BYREF
  __int64 v10; // [rsp+38h] [rbp-38h] BYREF
  int v11; // [rsp+40h] [rbp-30h] BYREF
  int v12; // [rsp+44h] [rbp-2Ch] BYREF
  __int64 v13; // [rsp+48h] [rbp-28h]
  RECT rc; // [rsp+50h] [rbp-20h] BYREF

  v13 = -2LL;
  *(_QWORD *)&rc.left = 0LL;
  *(_QWORD *)&rc.right = 0LL;
  v12 = 0;
  v9 = 0;
  v2 = 0;
  v3 = 0;
  v10 = 0LL;
  v4 = (int (__fastcall ***)(_QWORD, GUID *, __int64 *))*a1;
  v5 = **(int (__fastcall ***)(_QWORD, GUID *, __int64 *))*a1;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
  if ( v5(v4, &GUID_3fc0257d_21c2_4ad3_8fb0_fd481cd204e2, &v10) >= 0 )
  {
    (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)v10 + 32LL))(v10, &v11);
    (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)v10 + 48LL))(v10, &v9);
    if ( v11 == 4 )
    {
      v2 = 1;
      v3 = 0;
      (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)v10 + 40LL))(v10, &v12);
    }
    else
    {
      if ( v11 != 3 || (v9 & 1) == 0 )
      {
        v3 = 0;
        goto LABEL_6;
      }
      v3 = 1;
    }
    (*(void (__fastcall **)(__int64, RECT *))(*(_QWORD *)v10 + 24LL))(v10, &rc);
  }
LABEL_6:
  if ( (v9 & 1) == 0 )
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1[1] + 120LL) + 32LL))(*(_QWORD *)(a1[1] + 120LL), *a1);
  if ( v2 )
  {
    (*(void (__fastcall **)(PVOID, _QWORD, RECT *, _QWORD, int))(*(_QWORD *)CApplicationManagerUtility::g_pIAMGlobals[19].Ptr
                                                               + 24LL))(
      CApplicationManagerUtility::g_pIAMGlobals[19].Ptr,
      *(_QWORD *)(a1[1] + 128LL),
      &rc,
      0LL,
      v12);
  }
  else if ( v3 )
  {
    Ptr = CApplicationManagerUtility::g_pIAMGlobals[20].Ptr;
    v8 = *(void (__fastcall **)(PVOID, _QWORD, __int64))(*(_QWORD *)Ptr + 32LL);
    IsRectEmpty(&rc);
    v8(Ptr, *(_QWORD *)(a1[1] + 128LL), 5LL);
  }
  return Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
}
