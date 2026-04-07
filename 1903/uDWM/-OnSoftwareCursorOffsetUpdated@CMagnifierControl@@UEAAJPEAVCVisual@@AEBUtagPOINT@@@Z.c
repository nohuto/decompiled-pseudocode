/*
 * XREFs of ?OnSoftwareCursorOffsetUpdated@CMagnifierControl@@UEAAJPEAVCVisual@@AEBUtagPOINT@@@Z @ 0x1800851D0
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateFullscreenBoundsFromSoftwareCursorOffset@CMagnifierControl@@AEAAJAEBUtagPOINT@@@Z @ 0x1800854D4 (-UpdateFullscreenBoundsFromSoftwareCursorOffset@CMagnifierControl@@AEAAJAEBUtagPOINT@@@Z.c)
 */

__int64 __fastcall CMagnifierControl::OnSoftwareCursorOffsetUpdated(
        CMagnifierControl *this,
        struct CVisual *a2,
        const struct tagPOINT *a3)
{
  __int64 v6; // rbx
  __int64 v7; // rax
  unsigned int v8; // r8d
  struct tagPOINT *v9; // rdx
  LONG v10; // r9d
  __int64 v12; // [rsp+20h] [rbp-20h]
  tagCURSORINFO pci; // [rsp+28h] [rbp-18h] BYREF
  struct tagPOINT Point; // [rsp+60h] [rbp+20h] BYREF
  tagLASTINPUTINFO plii; // [rsp+78h] [rbp+38h] BYREF

  if ( !*((_BYTE *)this + 128) )
    return 0LL;
  plii.dwTime = 0;
  memset(&pci.flags, 0, 20);
  pci.cbSize = 24;
  plii.cbSize = 8;
  GetLastInputInfo(&plii);
  if ( GetCursorInfo(&pci) )
  {
    Point = 0LL;
    v6 = 0LL;
    if ( GetCursorPos(&Point) )
    {
      LODWORD(v12) = Point.x - a3->x;
      HIDWORD(v12) = Point.y - a3->y;
      v6 = v12;
    }
    v7 = *((_QWORD *)a2 + 15);
    v8 = *((_DWORD *)this + 46);
    if ( (HCURSOR)*((_QWORD *)this + 21) != pci.hCursor || *((_QWORD *)this + 22) != v7 )
    {
      *((_QWORD *)this + 21) = pci.hCursor;
      goto LABEL_12;
    }
    if ( v8 < 2 )
    {
      if ( (_DWORD)v6 == *((_DWORD *)this + 33) || HIDWORD(v6) == *((_DWORD *)this + 34) )
      {
        *((_DWORD *)this + 46) = v8 + 1;
        goto LABEL_13;
      }
LABEL_12:
      *((_DWORD *)this + 46) = 0;
      *((_QWORD *)this + 22) = v7;
      *(_QWORD *)((char *)this + 132) = v6;
    }
  }
LABEL_13:
  if ( *((_QWORD *)this + 6) )
  {
    v9 = (struct tagPOINT *)((char *)this + 140);
    v10 = a3->y + *((_DWORD *)this + 34);
    Point.x = a3->x + *((_DWORD *)this + 33);
    Point.y = v10;
    if ( Point.x != *((_DWORD *)this + 35) || v10 != *((_DWORD *)this + 36) )
    {
      *v9 = Point;
      CMagnifierControl::UpdateFullscreenBoundsFromSoftwareCursorOffset((CMagnifierControl *)((char *)this - 16), v9);
    }
  }
  return 0LL;
}
