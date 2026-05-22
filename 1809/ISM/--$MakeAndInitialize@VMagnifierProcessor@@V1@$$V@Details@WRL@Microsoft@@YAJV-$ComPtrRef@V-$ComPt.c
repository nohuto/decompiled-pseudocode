/*
 * XREFs of ??$MakeAndInitialize@VMagnifierProcessor@@V1@$$V@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VMagnifierProcessor@@@WRL@Microsoft@@@012@@Z @ 0x18008CEC8
 * Callers:
 *     ?Initialize@DWMInputRouter@@IEAAJXZ @ 0x180087644 (-Initialize@DWMInputRouter@@IEAAJXZ.c)
 * Callees:
 *     ?GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ @ 0x18000C384 (-GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ.c)
 *     ??0MagnifierProcessor@@QEAA@XZ @ 0x18008D5CC (--0MagnifierProcessor@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18012C2B8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<MagnifierProcessor,MagnifierProcessor,>(
        MagnifierProcessor **a1)
{
  MagnifierProcessor *v2; // rcx
  unsigned int v3; // edi
  MagnifierProcessor *v4; // rax
  MagnifierProcessor *v5; // rsi
  struct InputSystemServerConnection *BamoServerConnection; // rax
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // rcx

  v2 = *a1;
  v3 = 0;
  if ( v2 )
  {
    *a1 = 0LL;
    (*(void (__fastcall **)(MagnifierProcessor *))(*(_QWORD *)v2 + 16LL))(v2);
  }
  *a1 = 0LL;
  v4 = (MagnifierProcessor *)operator new(0x88uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v4 )
  {
    v5 = MagnifierProcessor::MagnifierProcessor(v4);
    BamoServerConnection = ISMStatics::GetBamoServerConnection();
    v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)BamoServerConnection + 19) + 8LL) + 56LL))(*((_QWORD *)BamoServerConnection + 19) + 8LL);
    v9 = *((_QWORD *)v5 + 3);
    if ( v9 != v7 )
    {
      v10 = *((_QWORD *)v5 + 3);
      if ( v7 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v7 + 24));
        v10 = *((_QWORD *)v5 + 3);
      }
      *((_QWORD *)v5 + 3) = v7;
      v9 = v7;
      if ( v10 )
      {
        (**(void (__fastcall ***)(__int64, __int64, __int64))(v10 + 16))(v10 + 16, v8, v7);
        v9 = *((_QWORD *)v5 + 3);
      }
    }
    *(_QWORD *)(v9 + 56) = ((unsigned __int64)v5 + 16) & -(__int64)(v5 != 0LL);
    (*(void (__fastcall **)(MagnifierProcessor *))(*(_QWORD *)v5 + 8LL))(v5);
    *a1 = v5;
    (*(void (__fastcall **)(MagnifierProcessor *))(*(_QWORD *)v5 + 16LL))(v5);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v3;
}
