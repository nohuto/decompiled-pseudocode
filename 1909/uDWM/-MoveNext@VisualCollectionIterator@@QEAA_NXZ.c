/*
 * XREFs of ?MoveNext@VisualCollectionIterator@@QEAA_NXZ @ 0x18000BB70
 * Callers:
 *     ?BringDesktopToFront@CWindowList@@QEAAJPEAVCVisual@@@Z @ 0x18000ACE8 (-BringDesktopToFront@CWindowList@@QEAAJPEAVCVisual@@@Z.c)
 *     ?UpdateLayout@CAccent@@UEAAJ_N@Z @ 0x18000B9E0 (-UpdateLayout@CAccent@@UEAAJ_N@Z.c)
 *     ?UpdateLayout@CVisual@@UEAAJ_N@Z @ 0x1800226B0 (-UpdateLayout@CVisual@@UEAAJ_N@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall VisualCollectionIterator::MoveNext(VisualCollectionIterator *this)
{
  char v1; // r8

  v1 = *((_BYTE *)this + 13);
  if ( *((_BYTE *)this + 12) )
  {
    if ( !v1 )
      ++*((_DWORD *)this + 2);
  }
  else
  {
    *((_DWORD *)this + 2) = 0;
    *((_BYTE *)this + 12) = 1;
  }
  if ( *((_DWORD *)this + 2) >= *(_DWORD *)(*(_QWORD *)this + 40LL) )
  {
    *((_BYTE *)this + 13) = 1;
    v1 = 1;
  }
  return v1 == 0;
}
