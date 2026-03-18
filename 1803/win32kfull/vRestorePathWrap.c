/*
 * XREFs of vRestorePathWrap @ 0x1C00E5780
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vRestorePathWrap(__int64 *a1)
{
  __int64 v1; // rcx
  int v2; // eax

  v1 = *a1;
  if ( *(_QWORD *)(v1 + 208) )
  {
    v2 = *(_DWORD *)(v1 + 256);
    if ( (v2 & 2) == 0 )
    {
      *(_DWORD *)(v1 + 256) = v2 & 0xFFFFFFFE;
      DC::hpath((DC *)v1, 0LL);
    }
  }
}
