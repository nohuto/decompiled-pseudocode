/*
 * XREFs of ?PostHitTestProcessing@MPCHeadProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@@Z @ 0x18013F180
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 *     ??0?$com_ptr_t@VInputSite@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVInputSite@@@Z @ 0x1800570C8 (--0-$com_ptr_t@VInputSite@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVInputSite@@@Z.c)
 *     ?DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAUInputInfo@@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x180085EE4 (-DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAUInputInfo@@V-$com_ptr_t@UIMPCInputProviderBase.c)
 *     ?GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ @ 0x18008616C (-GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ.c)
 *     ?OnGazeUpdate@MPCGestureHandlerManager@@QEAAXV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1800866B0 (-OnGazeUpdate@MPCGestureHandlerManager@@QEAAXV-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception.c)
 *     ?IsPrimary@MPCInputProviderBase@@UEBA_NXZ @ 0x18013D110 (-IsPrimary@MPCInputProviderBase@@UEBA_NXZ.c)
 *     ?Display3DCursor@MPCHeadProcessor@@UEAA_NXZ @ 0x18013F120 (-Display3DCursor@MPCHeadProcessor@@UEAA_NXZ.c)
 */

void __fastcall MPCHeadProcessor::PostHitTestProcessing(
        MPCHeadProcessor *this,
        struct MPCHolographicInputContext *a2,
        struct InputInfo *a3)
{
  char v5; // cl
  __int128 v6; // xmm0
  bool v7; // al
  __int64 **v8; // rax
  __int64 **v9; // rbx
  __int64 *v10; // rax
  const char *v11; // r9
  __int64 v12; // rax
  __int64 v13; // rbx
  __int64 *v14; // rax
  char v15; // cl
  __int64 v16; // rax
  __int64 v17; // [rsp+40h] [rbp+8h] BYREF

  if ( MPCInputProviderBase::IsPrimary((unsigned __int64)this) && *((_BYTE *)a3 + 152) )
  {
    v5 = *((_BYTE *)a3 + 457);
    v6 = *(_OWORD *)((char *)a3 + 164);
    *((_DWORD *)a3 + 168) = *((_DWORD *)a3 + 39);
    *((_DWORD *)a3 + 169) = *((_DWORD *)a3 + 40);
    *((_DWORD *)a3 + 174) = *((_DWORD *)a3 + 46);
    *((_BYTE *)a3 + 700) = v5 != 0;
    *((_DWORD *)a3 + 164) = 4;
    *(_OWORD *)((char *)a3 + 680) = v6;
    v7 = v5 || !MPCHeadProcessor::Display3DCursor(this);
    *((_BYTE *)a3 + 700) = v7;
    MPCGestureHandlerManager::GetInstance();
    v9 = v8;
    v10 = wil::com_ptr_t<InputSite,wil::err_exception_policy>::com_ptr_t<InputSite,wil::err_exception_policy>(
            &v17,
            (unsigned __int64)this & -(__int64)(this != (MPCHeadProcessor *)24));
    MPCGestureHandlerManager::DownLevelTo2D(v9, (__int64)a3, v10, v11);
    MPCGestureHandlerManager::GetInstance();
    v13 = v12;
    v14 = wil::com_ptr_t<InputSite,wil::err_exception_policy>::com_ptr_t<InputSite,wil::err_exception_policy>(
            &v17,
            (unsigned __int64)this & -(__int64)(this != (MPCHeadProcessor *)24));
    MPCGestureHandlerManager::OnGazeUpdate(v13, v14);
  }
  v15 = *((_BYTE *)a3 + 224) != 0;
  if ( !*((_BYTE *)this + 4609) || *((_BYTE *)this + 4608) != v15 )
  {
    v16 = *((_QWORD *)this + 3);
    *((_BYTE *)this + 4608) = v15;
    *((_BYTE *)this + 4609) = 1;
    *(_BYTE *)(v16 + 1504) = v15;
    (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 2) + 48LL))(
      *((_QWORD *)this + 2),
      *((_QWORD *)this + 3));
  }
}
