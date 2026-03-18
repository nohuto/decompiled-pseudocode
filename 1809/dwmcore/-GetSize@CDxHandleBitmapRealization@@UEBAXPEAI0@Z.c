/*
 * XREFs of ?GetSize@CDxHandleBitmapRealization@@UEBAXPEAI0@Z @ 0x18006BFD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CDxHandleBitmapRealization::GetSize(
        CDxHandleBitmapRealization *this,
        unsigned int *a2,
        unsigned int *a3)
{
  __int64 v3; // rcx

  v3 = *((_QWORD *)this + 34);
  if ( v3 )
  {
    (*(void (__fastcall **)(__int64, unsigned int *, unsigned int *))(*(_QWORD *)(v3 + 104) + 72LL))(v3 + 104, a2, a3);
  }
  else
  {
    *a2 = 0;
    *a3 = 0;
  }
}
