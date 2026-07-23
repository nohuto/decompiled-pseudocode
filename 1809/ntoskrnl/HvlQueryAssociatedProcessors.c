/*
 * XREFs of HvlQueryAssociatedProcessors @ 0x140274FA0
 * Callers:
 *     <none>
 * Callees:
 *     HvcallpNoHypervisorPresent @ 0x14013E7A0 (HvcallpNoHypervisorPresent.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     HvlpAcquireHypercallPage @ 0x140271A54 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x140272574 (HvlpReleaseHypercallPage.c)
 */

__int64 __fastcall HvlQueryAssociatedProcessors(int a1, unsigned int *a2, void *a3)
{
  unsigned int v7; // edi
  _QWORD *v8; // rbx
  unsigned int *v9; // r14
  unsigned int v10; // ebx
  PHYSICAL_ADDRESS v11[3]; // [rsp+20h] [rbp-58h] BYREF
  PHYSICAL_ADDRESS v12[3]; // [rsp+40h] [rbp-38h] BYREF

  if ( (HvlpFlags & 2) == 0 )
    return 3221225506LL;
  v7 = 0;
  if ( !a2 )
    return 3221225485LL;
  v8 = HvlpAcquireHypercallPage(v12, 1, 0LL, 8LL);
  v9 = (unsigned int *)HvlpAcquireHypercallPage(v11, 2, 0LL, 2056LL);
  *(_DWORD *)v8 = a1;
  if ( (unsigned __int16)HvcallCodeVa() )
  {
    v7 = -1073741823;
  }
  else
  {
    v10 = *v9;
    if ( *a2 < *v9 )
      v7 = -1073741789;
    else
      memmove(a3, v9 + 1, 4LL * v10);
    *a2 = v10;
  }
  HvlpReleaseHypercallPage((unsigned int *)v11);
  HvlpReleaseHypercallPage((unsigned int *)v12);
  return v7;
}
