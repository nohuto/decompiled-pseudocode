/*
 * XREFs of MiIsPageTableLocked @ 0x14012AC00
 * Callers:
 *     MiAgePte @ 0x14004CAB0 (MiAgePte.c)
 *     MiTrimPte @ 0x14005AA40 (MiTrimPte.c)
 *     MiWalkVaCheckCommon @ 0x140156DE4 (MiWalkVaCheckCommon.c)
 *     MiResetAccessBitPte @ 0x140177CF0 (MiResetAccessBitPte.c)
 * Callees:
 *     MiShouldLockPteDirectly @ 0x14005E490 (MiShouldLockPteDirectly.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400C5EE0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetPageTableLockBuffer @ 0x1400FE0EC (MiGetPageTableLockBuffer.c)
 */

unsigned __int64 __fastcall MiIsPageTableLocked(__int64 a1, unsigned __int64 a2)
{
  char v3; // r8
  unsigned __int64 v4; // rdx
  __int64 v5; // rcx
  _QWORD *v7; // rax
  bool v8; // zf
  __int64 v9; // rcx
  char *PageTableLockBuffer; // rax
  int v11; // [rsp+38h] [rbp+10h] BYREF

  v3 = *(_BYTE *)(a1 + 184) & 7;
  if ( a2 == 0xFFFFF6FB7DBEDF68uLL )
  {
    if ( v3 )
    {
      if ( v3 == 7 )
      {
        v7 = &unk_140466070;
      }
      else
      {
        v7 = &unk_140466068;
        if ( v3 != 5 )
          v7 = &unk_140466080;
      }
    }
    else
    {
      v7 = (_QWORD *)(a1 + 176);
    }
    v8 = *v7 == 0LL;
  }
  else
  {
    if ( v3
      || a2 < 0xFFFFF6FB7DBED000uLL
      || a2 > 0xFFFFF6FB7DBEDFFFuLL
      || (v9 = *(_QWORD *)(*(_QWORD *)&KeGetCurrentThread()->ApcState.Process[1].IdealNode[14] + 608LL)) == 0 )
    {
      if ( MiShouldLockPteDirectly(a1, a2) )
        return ((unsigned __int64)MI_READ_PTE_LOCK_FREE(v4) >> 60) & 1;
      PageTableLockBuffer = MiGetPageTableLockBuffer(v5, v4, &v11);
      return ((*(_DWORD *)PageTableLockBuffer >> v11) & 1) != 0;
    }
    v8 = *(_DWORD *)(v9 + 4 * ((a2 >> 3) & 0x1FF)) == 0;
  }
  return !v8;
}
