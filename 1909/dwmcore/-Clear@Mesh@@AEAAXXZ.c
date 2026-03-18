/*
 * XREFs of ?Clear@Mesh@@AEAAXXZ @ 0x18006F3A0
 * Callers:
 *     ??1CDrawListEntryBuilder@@QEAA@XZ @ 0x18006F024 (--1CDrawListEntryBuilder@@QEAA@XZ.c)
 *     ??0CDrawListEntryBuilder@@QEAA@XZ @ 0x18006F2A8 (--0CDrawListEntryBuilder@@QEAA@XZ.c)
 *     ?Init@Mesh@@AEAAJAEBUContentInfo@1@AEBUD2D_RECT_F@@@Z @ 0x1801B86C4 (-Init@Mesh@@AEAAJAEBUContentInfo@1@AEBUD2D_RECT_F@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall Mesh::Clear(Mesh *this)
{
  __int64 v1; // rax

  v1 = *((_QWORD *)this + 2);
  *((_QWORD *)this + 3) = 0LL;
  *((_DWORD *)this + 3) = 0;
  *((_QWORD *)this + 6) = 0LL;
  *((_DWORD *)this + 14) = 0;
  if ( v1 )
  {
    *(_QWORD *)(v1 + 64) = 0LL;
    *(_DWORD *)(v1 + 32) = 0;
    *(_DWORD *)(v1 + 56) = 0;
    *(_QWORD *)(v1 + 88) = 0LL;
    *(_QWORD *)(v1 + 96) = 0LL;
    *(_DWORD *)(v1 + 104) = 0;
    *(_DWORD *)(v1 + 128) = 0;
  }
  *((_BYTE *)this + 76) = *((_BYTE *)this + 76) & 4 | 1;
}
