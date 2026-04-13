/*
 * XREFs of ??$CreateActivationFactory@V?$SimpleSealedActivationFactory@VAppInstallInfoRecordImpl@ContentManagement@@$0A@@WRL@Microsoft@@@Details@WRL@Microsoft@@YAJPEAIPEBUCreatorMap@012@AEBU_GUID@@PEAPEAUIUnknown@@@Z @ 0x180021720
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800CABF4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CBD10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::CreateActivationFactory<Microsoft::WRL::SimpleSealedActivationFactory<ContentManagement::AppInstallInfoRecordImpl,0>>(
        int *a1,
        __int64 a2,
        _DWORD *a3,
        volatile signed __int32 **a4)
{
  volatile signed __int32 *v4; // rdi
  volatile signed __int32 *v9; // rax
  volatile signed __int32 *v10; // rbx
  bool v11; // zf
  signed __int32 v12; // eax
  signed __int32 v13; // eax
  int v14; // edi
  signed __int32 v15; // eax
  int v16; // eax
  unsigned int v17; // esi
  signed __int32 v18; // eax
  int v19; // ebx
  signed __int32 v20; // eax
  volatile signed __int32 *v22; // [rsp+20h] [rbp-28h]

  v4 = 0LL;
  v22 = 0LL;
  v9 = (volatile signed __int32 *)operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  v10 = v9;
  if ( !v9 )
  {
    v17 = -2147024882;
    goto LABEL_23;
  }
  *((_QWORD *)v9 + 3) = 0LL;
  v11 = Microsoft::WRL::Details::ModuleBase::module_ == 0LL;
  *((_DWORD *)v9 + 3) = 1;
  *(_QWORD *)v9 = &Microsoft::WRL::ActivationFactory<Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::`vftable';
  *((_DWORD *)v9 + 8) = 4;
  if ( !v11 )
    _InterlockedAdd((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_, 1u);
  *(_QWORD *)v9 = &Microsoft::WRL::SimpleSealedActivationFactory<ContentManagement::AppInstallInfoRecordImpl,0>::`vftable';
  v12 = _InterlockedIncrement(v9 + 3);
  if ( (v10[8] & 4) == 0 && v12 == 2 )
    _InterlockedAdd((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_, 1u);
  v22 = v10;
  v13 = _InterlockedExchangeAdd(v10 + 3, 0xFFFFFFFF);
  v14 = *((_DWORD *)v10 + 8);
  v15 = v13 - 1;
  if ( v15 )
  {
    if ( (v14 & 4) == 0 && v15 == 1 )
      goto LABEL_13;
  }
  else
  {
    (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v10 + 56LL))(v10, 1LL);
    if ( (v14 & 4) != 0 && Microsoft::WRL::Details::ModuleBase::module_ )
LABEL_13:
      _InterlockedDecrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
  }
  if ( *a3 == 53
    && a3[1] == *(_DWORD *)&GUID_00000035_0000_0000_c000_000000000046.Data2
    && a3[2] == *(_DWORD *)GUID_00000035_0000_0000_c000_000000000046.Data4
    && a3[3] == *(_DWORD *)&GUID_00000035_0000_0000_c000_000000000046.Data4[4] )
  {
    *a4 = v10;
    v16 = *a1;
    if ( (*a1 & 4) == 0 )
    {
      _InterlockedAdd(v10 + 3, 1u);
      v16 = *a1;
    }
    v4 = 0LL;
    *((_DWORD *)v10 + 8) = v16;
    v22 = 0LL;
    v17 = 0;
    *((_QWORD *)v10 + 3) = a2;
  }
  else
  {
    v4 = v10;
    v17 = -2147467262;
  }
LABEL_23:
  if ( v4 )
  {
    v18 = _InterlockedExchangeAdd(v4 + 3, 0xFFFFFFFF);
    v19 = *((_DWORD *)v22 + 8);
    v20 = v18 - 1;
    if ( v20 )
    {
      if ( (v19 & 4) == 0 && v20 == 1 )
        goto LABEL_30;
    }
    else
    {
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v22 + 56LL))(v22, 1LL);
      if ( (v19 & 4) != 0 && Microsoft::WRL::Details::ModuleBase::module_ )
LABEL_30:
        _InterlockedDecrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
    }
  }
  return v17;
}
