/*
 * XREFs of CcSetLazyWriteScanQueued @ 0x1400D74F0
 * Callers:
 *     CcLazyWriteScan @ 0x1400D57DC (CcLazyWriteScan.c)
 *     CcQueueLazyWriteScanThread @ 0x140183980 (CcQueueLazyWriteScanThread.c)
 * Callees:
 *     <none>
 */

void __fastcall CcSetLazyWriteScanQueued(_BYTE *a1, int a2, char a3)
{
  int v3; // edx
  int v4; // edx
  int v5; // edx
  int v6; // edx

  v3 = a2 - 1;
  if ( v3 )
  {
    v4 = v3 - 1;
    if ( v4 )
    {
      v5 = v4 - 2;
      if ( v5 )
      {
        v6 = v5 - 4;
        if ( v6 )
        {
          if ( v6 == 8 )
            a1[598] = a3;
        }
        else
        {
          a1[594] = a3;
        }
      }
      else
      {
        a1[595] = a3;
      }
    }
    else
    {
      a1[597] = a3;
    }
  }
  else
  {
    a1[596] = a3;
  }
}
