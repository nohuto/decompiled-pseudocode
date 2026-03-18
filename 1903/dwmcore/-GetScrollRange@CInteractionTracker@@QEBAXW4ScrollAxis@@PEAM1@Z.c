/*
 * XREFs of ?GetScrollRange@CInteractionTracker@@QEBAXW4ScrollAxis@@PEAM1@Z @ 0x1801DAA90
 * Callers:
 *     ?BoundaryFromValue@CInteractionTracker@@QEBA?AW4Boundary@@MW4ScrollAxis@@@Z @ 0x1801D91A0 (-BoundaryFromValue@CInteractionTracker@@QEBA-AW4Boundary@@MW4ScrollAxis@@@Z.c)
 *     ?ClampValueToBoundary@CInteractionTracker@@QEAAMW4ScrollAxis@@M@Z @ 0x1801D9D50 (-ClampValueToBoundary@CInteractionTracker@@QEAAMW4ScrollAxis@@M@Z.c)
 *     ?ValueFromBoundary@CInteractionTracker@@QEBAMW4Boundary@@W4ScrollAxis@@@Z @ 0x1801DE304 (-ValueFromBoundary@CInteractionTracker@@QEBAMW4Boundary@@W4ScrollAxis@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CInteractionTracker::GetScrollRange(_DWORD *a1, int a2, _DWORD *a3, _DWORD *a4)
{
  int v4; // xmm0_4
  int v5; // xmm1_4
  int v6; // edx

  v4 = 0;
  v5 = 0;
  if ( a2 )
  {
    v6 = a2 - 1;
    if ( v6 )
    {
      if ( v6 == 1 )
      {
        v4 = a1[33];
        v5 = a1[34];
      }
    }
    else
    {
      v4 = a1[22];
      v5 = a1[25];
    }
  }
  else
  {
    v4 = a1[21];
    v5 = a1[24];
  }
  *a3 = v4;
  *a4 = v5;
}
