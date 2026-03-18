/*
 * XREFs of ?GetDirtyRects@CBitmap@@UEAA_NPEAPEBUtagRECT@@PEAI1@Z @ 0x180222EB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CBitmap::GetDirtyRects(CBitmap *this, const struct tagRECT **a2, unsigned int *a3, unsigned int *a4)
{
  unsigned int v4; // r11d
  bool v5; // r10
  unsigned int v6; // eax
  unsigned int v7; // ebx

  v4 = *((_DWORD *)this + 16);
  v5 = 1;
  *((_BYTE *)this + 172) = 1;
  v6 = 0;
  v7 = *a4;
  *a4 = v4;
  if ( *(_QWORD *)((char *)this + 164) == __PAIR64__(v4, v7) && *((_DWORD *)this + 40) )
  {
    *a2 = (const struct tagRECT *)*((_QWORD *)this + 19);
    v6 = *((_DWORD *)this + 40);
  }
  else
  {
    *a2 = 0LL;
    v5 = v7 == v4;
  }
  *a3 = v6;
  return v5;
}
