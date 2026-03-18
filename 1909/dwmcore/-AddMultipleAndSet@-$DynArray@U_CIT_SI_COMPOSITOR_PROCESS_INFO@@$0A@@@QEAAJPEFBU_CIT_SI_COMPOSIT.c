/*
 * XREFs of ?AddMultipleAndSet@?$DynArray@U_CIT_SI_COMPOSITOR_PROCESS_INFO@@$0A@@@QEAAJPEFBU_CIT_SI_COMPOSITOR_PROCESS_INFO@@I@Z @ 0x1800C4324
 * Callers:
 *     _lambda_d9cc5af84aa64a7820423eccd07e515b_::operator() @ 0x1800B52C8 (_lambda_d9cc5af84aa64a7820423eccd07e515b_--operator().c)
 *     ?SendReportToE3@CEnergyReporter@@AEAAXXZ @ 0x1800C72C4 (-SendReportToE3@CEnergyReporter@@AEAAXXZ.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18006AD4C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     memcpy_0 @ 0x1800F020B (memcpy_0.c)
 */

__int64 __fastcall DynArray<_CIT_SI_COMPOSITOR_PROCESS_INFO,0>::AddMultipleAndSet(
        __int64 a1,
        const void *a2,
        unsigned int a3)
{
  __int64 v4; // rcx
  unsigned int v5; // esi
  unsigned int v6; // ebx
  signed int v8; // eax
  __int64 v9; // rcx

  v4 = *(unsigned int *)(a1 + 24);
  v5 = v4 + a3;
  if ( (unsigned int)v4 + a3 < (unsigned int)v4 )
  {
    v6 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, 0x80070216, 0xB8u, 0LL);
  }
  else
  {
    v6 = 0;
    if ( v5 > *(_DWORD *)(a1 + 20) )
    {
      v8 = DynArrayImpl<0>::AddMultipleAndSet(a1, 24, a3, a2);
      v6 = v8;
      if ( v8 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0xC3u, 0LL);
    }
    else
    {
      memcpy_0((void *)(*(_QWORD *)a1 + 24 * v4), a2, 24LL * a3);
      *(_DWORD *)(a1 + 24) = v5;
    }
  }
  return v6;
}
