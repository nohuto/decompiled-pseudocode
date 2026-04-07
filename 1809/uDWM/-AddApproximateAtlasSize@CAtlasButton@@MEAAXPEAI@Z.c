/*
 * XREFs of ?AddApproximateAtlasSize@CAtlasButton@@MEAAXPEAI@Z @ 0x180037420
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CAtlasButton::AddApproximateAtlasSize(CAtlasButton *this, unsigned int *a2)
{
  _DWORD *v2; // r11
  int v3; // r9d
  __int64 v5; // rdx

  v2 = (_DWORD *)*((_QWORD *)this + 9);
  v3 = 0;
  if ( v2 )
    *a2 += ((v2[8] > 0) + 1 + (v2[9] > 0)) * ((v2[10] > 0) + 1 + (v2[11] > 0));
  if ( *((_QWORD *)this + 17) )
    *a2 += ((*(_DWORD *)(*((_QWORD *)this + 17) + 32LL) > 0) + 1 + (*(_DWORD *)(*((_QWORD *)this + 17) + 36LL) > 0))
         * ((*(_DWORD *)(*((_QWORD *)this + 17) + 40LL) > 0) + 1 + (*(_DWORD *)(*((_QWORD *)this + 17) + 44LL) > 0));
  v5 = *((_QWORD *)this + 18);
  if ( v5 )
  {
    LOBYTE(v3) = *(_DWORD *)(v5 + 32) > 0;
    *a2 += (v3 + 1 + (*(_DWORD *)(*((_QWORD *)this + 18) + 36LL) > 0))
         * ((*(_DWORD *)(*((_QWORD *)this + 18) + 40LL) > 0) + 1 + (*(_DWORD *)(*((_QWORD *)this + 18) + 44LL) > 0));
  }
}
