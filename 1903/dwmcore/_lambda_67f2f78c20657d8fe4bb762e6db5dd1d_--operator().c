/*
 * XREFs of _lambda_67f2f78c20657d8fe4bb762e6db5dd1d_::operator() @ 0x1800737A4
 * Callers:
 *     _lambda_67f2f78c20657d8fe4bb762e6db5dd1d_::_lambda_invoker_cdecl_ @ 0x180073790 (_lambda_67f2f78c20657d8fe4bb762e6db5dd1d_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x18001F5BC (-InternalRelease@-$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEBAJPEAUGenerateDrawListParameters@1@@Z @ 0x1800690F0 (-GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEBAJPEAUGenerateDrawListParameters@1@@Z.c)
 *     ?End@CDrawListEntryBuilder@@QEAAJXZ @ 0x180071388 (-End@CDrawListEntryBuilder@@QEAAJXZ.c)
 *     ??4CDrawListBitmap@@QEAAAEAV0@AEBV0@@Z @ 0x180073C40 (--4CDrawListBitmap@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall lambda_67f2f78c20657d8fe4bb762e6db5dd1d_::operator()(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 v5; // rdi
  unsigned int i; // ebp
  __int64 v7; // rcx
  int DrawListPrimitive; // eax
  unsigned int v9; // ecx
  unsigned int v10; // ebp
  __int64 v12; // rax
  char v13; // si
  __int64 v14; // rax
  int v15; // eax
  unsigned int v16; // ecx
  int v17; // edi
  __int64 v18; // rbx
  int v19; // eax
  unsigned int v20; // ecx
  __int128 v21; // [rsp+30h] [rbp-28h] BYREF
  char v22; // [rsp+40h] [rbp-18h]

  if ( !(*(unsigned __int8 (__fastcall **)(__int64 *, __int64))(*a2 + 8))(a2, 3LL) )
  {
    v5 = *(_QWORD *)(*(_QWORD *)(a3 + 104) + 32LL);
    if ( v5 )
    {
      if ( *(_DWORD *)(a3 + 48) < *(_DWORD *)(a3 + 100) )
      {
        v12 = *a2;
        v13 = 0;
        v22 = 0;
        v21 = 0LL;
        if ( (*(unsigned __int8 (__fastcall **)(__int64 *, __int64))(v12 + 8))(a2, 2LL) )
        {
          CDrawListBitmap::operator=(&v21, a2 + 7);
          v13 = v22;
        }
        v14 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v5 + 24LL))(v5, *(unsigned int *)(a3 + 48));
        if ( (_QWORD)v21 != *(_QWORD *)v14 || v13 != *(_BYTE *)(v14 + 16) )
        {
          v15 = CDrawListEntryBuilder::End(*(CDrawListEntryBuilder **)(a3 + 104));
          v10 = v15;
          if ( v15 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0x1C7u, 0LL);
            Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v21 + 1);
            Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v21);
            return v10;
          }
        }
        Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v21 + 1);
        Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v21);
      }
    }
  }
  *(_QWORD *)(a3 + 8LL * *(unsigned int *)(a3 + 48) + 56) = a2;
  for ( i = *(_DWORD *)(a3 + 48); i < *(_DWORD *)(a3 + 96); ++i )
  {
    v7 = *(_QWORD *)(a3 + 8LL * i + 56);
    if ( v7 )
    {
      if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v7 + 8LL))(v7, 3LL) )
        break;
    }
  }
  if ( i == *(_DWORD *)(a3 + 96) )
  {
    DrawListPrimitive = CBrushDrawListGenerator::GenerateDrawListPrimitive(
                          *(CBrushDrawListGenerator **)a3,
                          (struct CBrushDrawListGenerator::GenerateDrawListParameters *)a3);
    v10 = DrawListPrimitive;
    if ( DrawListPrimitive < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, DrawListPrimitive, 0x1A2u, 0LL);
      goto LABEL_11;
    }
  }
  else
  {
    v17 = *(_DWORD *)(a3 + 48);
    v18 = *(_QWORD *)(a3 + 8LL * i + 56);
    *(_DWORD *)(a3 + 48) = i;
    v19 = (*(__int64 (__fastcall **)(__int64, __int64 (__fastcall *)(__int64, __int64), __int64))(*(_QWORD *)v18 + 32LL))(
            v18,
            lambda_67f2f78c20657d8fe4bb762e6db5dd1d_::_lambda_invoker_cdecl_,
            a3);
    *(_QWORD *)(a3 + 8LL * i + 56) = v18;
    v10 = v19;
    *(_DWORD *)(a3 + 48) = v17;
    if ( v19 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, v19, 0x1E1u, 0LL);
      goto LABEL_11;
    }
  }
  v10 = 0;
LABEL_11:
  *(_QWORD *)(a3 + 8LL * *(unsigned int *)(a3 + 48) + 56) = 0LL;
  return v10;
}
