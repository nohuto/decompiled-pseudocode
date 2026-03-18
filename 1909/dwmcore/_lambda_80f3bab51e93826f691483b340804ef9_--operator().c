/*
 * XREFs of _lambda_80f3bab51e93826f691483b340804ef9_::operator() @ 0x1800EC964
 * Callers:
 *     _lambda_80f3bab51e93826f691483b340804ef9_::_lambda_invoker_cdecl_ @ 0x1800EC950 (_lambda_80f3bab51e93826f691483b340804ef9_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?End@CDrawListEntryBuilder@@QEAAJXZ @ 0x180037864 (-End@CDrawListEntryBuilder@@QEAAJXZ.c)
 *     ??4CDrawListBitmap@@QEAAAEAV0@AEBV0@@Z @ 0x18003BFBC (--4CDrawListBitmap@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GenerateDrawListWorker@CBrushDrawListGenerator@@CAJPEAUGenerateDrawListParameters@1@@Z @ 0x180095680 (-GenerateDrawListWorker@CBrushDrawListGenerator@@CAJPEAUGenerateDrawListParameters@1@@Z.c)
 *     ??1CDrawListBitmap@@QEAA@XZ @ 0x1800BB350 (--1CDrawListBitmap@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall lambda_80f3bab51e93826f691483b340804ef9_::operator()(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 v5; // rdi
  __int64 v6; // rax
  char v7; // bp
  __int64 v8; // rax
  signed int v9; // eax
  __int64 v10; // rcx
  unsigned int DrawListWorker; // edi
  __int128 v13; // [rsp+30h] [rbp-28h] BYREF
  char v14; // [rsp+40h] [rbp-18h]

  if ( (*(unsigned __int8 (__fastcall **)(__int64 *, __int64))(*a2 + 8))(a2, 3LL) )
    goto LABEL_11;
  v5 = *(_QWORD *)(*(_QWORD *)(a3 + 104) + 32LL);
  if ( !v5 || *(_DWORD *)(a3 + 48) >= *(_DWORD *)(a3 + 100) )
    goto LABEL_11;
  v6 = *a2;
  v7 = 0;
  v14 = 0;
  v13 = 0LL;
  if ( (*(unsigned __int8 (__fastcall **)(__int64 *, __int64))(v6 + 8))(a2, 2LL) )
  {
    CDrawListBitmap::operator=((__int64)&v13, a2 + 7);
    v7 = v14;
  }
  v8 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v5 + 24LL))(v5, *(unsigned int *)(a3 + 48));
  if ( (_QWORD)v13 == *(_QWORD *)v8 && v7 == *(_BYTE *)(v8 + 16)
    || (v9 = CDrawListEntryBuilder::End(*(CDrawListEntryBuilder **)(a3 + 104)), DrawListWorker = v9, v9 >= 0) )
  {
    CDrawListBitmap::~CDrawListBitmap((CDrawListBitmap *)&v13);
LABEL_11:
    *(_QWORD *)(a3 + 8LL * *(unsigned int *)(a3 + 48) + 56) = a2;
    DrawListWorker = CBrushDrawListGenerator::GenerateDrawListWorker((struct CBrushDrawListGenerator::GenerateDrawListParameters *)a3);
    *(_QWORD *)(a3 + 8LL * *(unsigned int *)(a3 + 48) + 56) = 0LL;
    return DrawListWorker;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x1C8u, 0LL);
  CDrawListBitmap::~CDrawListBitmap((CDrawListBitmap *)&v13);
  return DrawListWorker;
}
