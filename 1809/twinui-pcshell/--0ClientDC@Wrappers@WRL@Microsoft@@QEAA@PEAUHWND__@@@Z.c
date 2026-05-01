/*
 * XREFs of ??0ClientDC@Wrappers@WRL@Microsoft@@QEAA@PEAUHWND__@@@Z @ 0x1803B4450
 * Callers:
 *     s_OnMeasureItem @ 0x1803B5A70 (s_OnMeasureItem.c)
 * Callees:
 *     <none>
 */

Microsoft::WRL::Wrappers::ClientDC *__fastcall Microsoft::WRL::Wrappers::ClientDC::ClientDC(
        Microsoft::WRL::Wrappers::ClientDC *this,
        HWND a2)
{
  *((_QWORD *)this + 1) = 0LL;
  *(_QWORD *)this = &Microsoft::WRL::Wrappers::ClientDC::`vftable';
  *((_QWORD *)this + 2) = a2;
  *((_QWORD *)this + 1) = GetDC(a2);
  return this;
}
