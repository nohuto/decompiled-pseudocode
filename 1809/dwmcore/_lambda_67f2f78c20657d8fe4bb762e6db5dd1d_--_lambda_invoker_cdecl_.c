/*
 * XREFs of _lambda_67f2f78c20657d8fe4bb762e6db5dd1d_::_lambda_invoker_cdecl_ @ 0x1800B3F40
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x18001F9F0 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4CDrawListBitmap@@QEAAAEAV0@AEBV0@@Z @ 0x180026010 (--4CDrawListBitmap@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?End@CDrawListEntryBuilder@@QEAAJXZ @ 0x1800289AC (-End@CDrawListEntryBuilder@@QEAAJXZ.c)
 *     ?GenerateDrawListWorker@CBrushDrawListGenerator@@CAJPEAUGenerateDrawListParameters@1@@Z @ 0x1800B404C (-GenerateDrawListWorker@CBrushDrawListGenerator@@CAJPEAUGenerateDrawListParameters@1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall lambda_67f2f78c20657d8fe4bb762e6db5dd1d_::_lambda_invoker_cdecl_(__int64 *a1, __int64 a2)
{
  __int64 v4; // rdi
  unsigned int DrawListWorker; // edi
  __int64 v7; // rax
  char v8; // bp
  __int64 v9; // rax
  int v10; // eax
  unsigned int v11; // ecx
  __int128 v12; // [rsp+30h] [rbp-28h] BYREF
  char v13; // [rsp+40h] [rbp-18h]

  if ( !(*(unsigned __int8 (__fastcall **)(__int64 *, __int64))(*a1 + 8))(a1, 3LL) )
  {
    v4 = *(_QWORD *)(*(_QWORD *)(a2 + 104) + 32LL);
    if ( v4 )
    {
      if ( *(_DWORD *)(a2 + 48) < *(_DWORD *)(a2 + 100) )
      {
        v7 = *a1;
        v8 = 0;
        v13 = 0;
        v12 = 0LL;
        if ( (*(unsigned __int8 (__fastcall **)(__int64 *, __int64))(v7 + 8))(a1, 2LL) )
        {
          CDrawListBitmap::operator=((__int64 *)&v12, a1 + 7);
          v8 = v13;
        }
        v9 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v4 + 24LL))(v4, *(unsigned int *)(a2 + 48));
        if ( (_QWORD)v12 != *(_QWORD *)v9 || v8 != *(_BYTE *)(v9 + 16) )
        {
          v10 = CDrawListEntryBuilder::End(*(CDrawListEntryBuilder **)(a2 + 104));
          DrawListWorker = v10;
          if ( v10 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x1C7u);
            Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v12 + 1);
            Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v12);
            return DrawListWorker;
          }
        }
        Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v12 + 1);
        Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v12);
      }
    }
  }
  *(_QWORD *)(a2 + 8LL * *(unsigned int *)(a2 + 48) + 56) = a1;
  DrawListWorker = CBrushDrawListGenerator::GenerateDrawListWorker((struct CBrushDrawListGenerator::GenerateDrawListParameters *)a2);
  *(_QWORD *)(a2 + 8LL * *(unsigned int *)(a2 + 48) + 56) = 0LL;
  return DrawListWorker;
}
