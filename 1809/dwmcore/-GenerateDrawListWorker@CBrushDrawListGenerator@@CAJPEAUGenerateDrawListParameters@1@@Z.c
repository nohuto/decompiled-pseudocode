/*
 * XREFs of ?GenerateDrawListWorker@CBrushDrawListGenerator@@CAJPEAUGenerateDrawListParameters@1@@Z @ 0x1800B404C
 * Callers:
 *     _lambda_67f2f78c20657d8fe4bb762e6db5dd1d_::_lambda_invoker_cdecl_ @ 0x1800B3F40 (_lambda_67f2f78c20657d8fe4bb762e6db5dd1d_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEBAJPEAUGenerateDrawListParameters@1@@Z @ 0x1800B4690 (-GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEBAJPEAUGenerateDrawListParameters@1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBrushDrawListGenerator::GenerateDrawListWorker(
        struct CBrushDrawListGenerator::GenerateDrawListParameters *a1)
{
  unsigned int i; // ebp
  __int64 v3; // rcx
  int DrawListPrimitive; // eax
  unsigned int v5; // ecx
  unsigned int v6; // ebp
  int v8; // edi
  __int64 v9; // rbx
  int v10; // eax
  unsigned int v11; // ecx

  for ( i = *((_DWORD *)a1 + 12); i < *((_DWORD *)a1 + 24); ++i )
  {
    v3 = *((_QWORD *)a1 + i + 7);
    if ( v3 && (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 8LL))(v3, 3LL) )
      break;
  }
  if ( i == *((_DWORD *)a1 + 24) )
  {
    DrawListPrimitive = CBrushDrawListGenerator::GenerateDrawListPrimitive(*(CBrushDrawListGenerator **)a1, a1);
    v6 = DrawListPrimitive;
    if ( DrawListPrimitive < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, DrawListPrimitive, 0x1A2u);
      return v6;
    }
  }
  else
  {
    v8 = *((_DWORD *)a1 + 12);
    v9 = *((_QWORD *)a1 + i + 7);
    *((_DWORD *)a1 + 12) = i;
    v10 = (*(__int64 (__fastcall **)(__int64, __int64 (__fastcall *)(__int64 *, __int64), struct CBrushDrawListGenerator::GenerateDrawListParameters *))(*(_QWORD *)v9 + 32LL))(
            v9,
            lambda_67f2f78c20657d8fe4bb762e6db5dd1d_::_lambda_invoker_cdecl_,
            a1);
    *((_QWORD *)a1 + i + 7) = v9;
    v6 = v10;
    *((_DWORD *)a1 + 12) = v8;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x1E1u);
      return v6;
    }
  }
  return 0;
}
