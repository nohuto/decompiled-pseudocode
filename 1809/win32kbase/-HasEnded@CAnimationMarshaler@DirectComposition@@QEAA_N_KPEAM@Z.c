/*
 * XREFs of ?HasEnded@CAnimationMarshaler@DirectComposition@@QEAA_N_KPEAM@Z @ 0x1C00105A8
 * Callers:
 *     ?RemoveExpiredAnimations@CApplicationChannel@DirectComposition@@IEAAXXZ @ 0x1C0010160 (-RemoveExpiredAnimations@CApplicationChannel@DirectComposition@@IEAAXXZ.c)
 * Callees:
 *     <none>
 */

char __fastcall DirectComposition::CAnimationMarshaler::HasEnded(
        DirectComposition::CAnimationMarshaler *this,
        unsigned __int64 a2,
        float *a3)
{
  int v4; // r9d
  __int64 v6; // rcx

  v4 = *((_DWORD *)this + 8);
  if ( (v4 & 0x120) == 0x20 && (*((_BYTE *)this + 208) & 2) == 0 )
  {
    v6 = *((_QWORD *)this + 14);
    if ( v6 )
    {
      if ( a2 >= *((_QWORD *)this + 15) + v6 )
      {
        v4 |= 0x100u;
        *((_DWORD *)this + 8) = v4;
      }
    }
  }
  if ( (v4 & 0x100) == 0 )
    return 0;
  *a3 = *((float *)this + 40);
  return 1;
}
