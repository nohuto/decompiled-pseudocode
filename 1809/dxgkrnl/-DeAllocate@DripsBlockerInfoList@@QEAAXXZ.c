/*
 * XREFs of ?DeAllocate@DripsBlockerInfoList@@QEAAXXZ @ 0x1C020E788
 * Callers:
 *     ?Initialize@DXGGLOBAL@@QEAAJXZ @ 0x1C015434C (-Initialize@DXGGLOBAL@@QEAAJXZ.c)
 *     ??1DXGGLOBAL@@AEAA@XZ @ 0x1C020D74C (--1DXGGLOBAL@@AEAA@XZ.c)
 * Callees:
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x1C0010EFC (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0011F20 (--_V@YAXPEAX@Z.c)
 */

void __fastcall DripsBlockerInfoList::DeAllocate(DripsBlockerInfoList *this)
{
  char *v2; // rcx
  char *v3; // rbx

  v2 = (char *)*((_QWORD *)this + 1);
  if ( v2 )
  {
    v3 = v2 - 8;
    `vector destructor iterator'(
      v2,
      72LL,
      *((_QWORD *)v2 - 1),
      (void (__fastcall *)(char *))DripsBlockerInfoList::DripsBlockerInfoEntry::~DripsBlockerInfoEntry);
    operator delete[](v3);
  }
  *((_QWORD *)this + 1) = 0LL;
}
