/*
 * XREFs of ?AddMultipleAndSet@?$DynArray@U_CIT_SI_COMPOSITOR_PROCESS_INFO@@$0A@@@QEAAJPEFBU_CIT_SI_COMPOSITOR_PROCESS_INFO@@I@Z @ 0x18002220C
 * Callers:
 *     ?SendReportToE3@CEnergyReporter@@AEAAXXZ @ 0x18006AF20 (-SendReportToE3@CEnergyReporter@@AEAAXXZ.c)
 *     _lambda_8e28f867b71c5b412c422ba9f3efd952_::operator() @ 0x180083BD4 (_lambda_8e28f867b71c5b412c422ba9f3efd952_--operator().c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180022680 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     memcpy_0 @ 0x1800F007B (memcpy_0.c)
 */

__int64 __fastcall DynArray<_CIT_SI_COMPOSITOR_PROCESS_INFO,0>::AddMultipleAndSet(
        __int64 a1,
        const void *a2,
        __int64 a3)
{
  __int64 v4; // rcx
  unsigned int v5; // esi
  unsigned int v6; // ebx
  int v8; // eax
  unsigned int v9; // ecx

  v4 = *(unsigned int *)(a1 + 24);
  v5 = v4 + a3;
  v6 = (int)v4 + (int)a3 < (unsigned int)v4 ? 0x80070216 : 0;
  if ( (int)v4 + (int)a3 < (unsigned int)v4 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, v6, 0xB5u);
  }
  else if ( v5 > *(_DWORD *)(a1 + 20) )
  {
    v8 = DynArrayImpl<0>::AddMultipleAndSet(a1, 24LL, a3, a2);
    v6 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0xC0u);
  }
  else
  {
    memcpy_0((void *)(*(_QWORD *)a1 + 24 * v4), a2, 24LL * (unsigned int)a3);
    *(_DWORD *)(a1 + 24) = v5;
  }
  return v6;
}
