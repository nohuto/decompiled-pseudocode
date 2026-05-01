/*
 * XREFs of ?ComputeSystemDPI@@YAXPEAH0@Z @ 0x1804363C4
 * Callers:
 *     ?SHComputeDPI@@YAXPEAUHWND__@@PEAH1@Z @ 0x180436590 (-SHComputeDPI@@YAXPEAUHWND__@@PEAH1@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ComputeSystemDPI(int *a1, int *a2)
{
  HDC DC; // rax
  HDC v5; // rbx

  DC = GetDC(0LL);
  v5 = DC;
  if ( DC )
  {
    *a1 = GetDeviceCaps(DC, 88);
    *a2 = GetDeviceCaps(v5, 90);
    ReleaseDC(0LL, v5);
  }
  else
  {
    *a1 = 96;
    *a2 = 96;
  }
}
