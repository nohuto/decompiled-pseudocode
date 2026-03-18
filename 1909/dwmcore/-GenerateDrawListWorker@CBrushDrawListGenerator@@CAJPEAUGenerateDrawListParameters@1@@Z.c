/*
 * XREFs of ?GenerateDrawListWorker@CBrushDrawListGenerator@@CAJPEAUGenerateDrawListParameters@1@@Z @ 0x180095680
 * Callers:
 *     _lambda_80f3bab51e93826f691483b340804ef9_::operator() @ 0x1800EC964 (_lambda_80f3bab51e93826f691483b340804ef9_--operator().c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEBAJPEAUGenerateDrawListParameters@1@@Z @ 0x180094470 (-GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEBAJPEAUGenerateDrawListParameters@1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBrushDrawListGenerator::GenerateDrawListWorker(
        struct CBrushDrawListGenerator::GenerateDrawListParameters *a1)
{
  unsigned int i; // ebp
  __int64 v3; // rcx
  signed int DrawListPrimitive; // eax
  __int64 v5; // rcx
  unsigned int v6; // ebp
  int v8; // edi
  _QWORD *v9; // rdx
  __int64 v10; // rbx
  signed int v11; // eax
  __int64 v12; // rcx

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
      MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, DrawListPrimitive, 0x1A2u, 0LL);
      return v6;
    }
  }
  else
  {
    v8 = *((_DWORD *)a1 + 12);
    v9 = *(_QWORD **)a1;
    v10 = *((_QWORD *)a1 + i + 7);
    *((_DWORD *)a1 + 12) = i;
    v11 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 (__fastcall *)(), struct CBrushDrawListGenerator::GenerateDrawListParameters *))(*(_QWORD *)v10 + 32LL))(
            v10,
            *v9,
            lambda_80f3bab51e93826f691483b340804ef9_::_lambda_invoker_cdecl_,
            a1);
    *((_QWORD *)a1 + i + 7) = v10;
    v6 = v11;
    *((_DWORD *)a1 + 12) = v8;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x1E2u, 0LL);
      return v6;
    }
  }
  return 0;
}
