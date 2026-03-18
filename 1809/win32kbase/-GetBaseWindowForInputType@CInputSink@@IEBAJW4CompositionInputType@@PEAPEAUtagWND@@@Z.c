/*
 * XREFs of ?GetBaseWindowForInputType@CInputSink@@IEBAJW4CompositionInputType@@PEAPEAUtagWND@@@Z @ 0x1C0183804
 * Callers:
 *     ?GetBaseWindowForInputType@CompositionInputObject@@QEBAJW4CompositionInputType@@PEAPEAUtagWND@@@Z @ 0x1C0183790 (-GetBaseWindowForInputType@CompositionInputObject@@QEBAJW4CompositionInputType@@PEAPEAUtagWND@@@.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00AF730 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CInputSink::GetBaseWindowForInputType(_QWORD *a1, int a2, _QWORD *a3)
{
  int v3; // edx
  int v4; // edx
  int v5; // edx
  __int64 v7; // rcx

  v3 = a2 - 1;
  if ( v3 )
  {
    v4 = v3 - 1;
    if ( v4 )
    {
      v5 = v4 - 1;
      if ( v5 )
      {
        if ( v5 != 1 )
        {
          *a3 = 0LL;
          return 3221225485LL;
        }
        v7 = a1[9];
      }
      else
      {
        v7 = a1[8];
      }
    }
    else
    {
      v7 = a1[7];
    }
  }
  else
  {
    v7 = a1[6];
  }
  return (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v7 + 48LL))(v7, a3);
}
