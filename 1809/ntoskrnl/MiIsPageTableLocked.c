/*
 * XREFs of MiIsPageTableLocked @ 0x14012DAEC
 * Callers:
 *     MiAgePte @ 0x14006ADC0 (MiAgePte.c)
 *     MiWalkVaCheckCommon @ 0x140087E0C (MiWalkVaCheckCommon.c)
 *     MiResetAccessBitPte @ 0x14016E930 (MiResetAccessBitPte.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetPageTableLockBuffer @ 0x14006CE70 (MiGetPageTableLockBuffer.c)
 *     MiShouldLockPteDirectly @ 0x140098600 (MiShouldLockPteDirectly.c)
 *     PsGetCurrentProcess @ 0x1400F13B0 (PsGetCurrentProcess.c)
 */

unsigned __int64 __fastcall MiIsPageTableLocked(__int64 a1, unsigned __int64 a2)
{
  char v4; // dl
  _QWORD *v5; // rax
  bool v6; // zf
  __int64 v7; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  char *PageTableLockBuffer; // rax
  int v12; // [rsp+38h] [rbp+10h] BYREF

  v4 = *(_BYTE *)(a1 + 184) & 7;
  if ( a2 == 0xFFFFF6FB7DBEDF68uLL )
  {
    if ( v4 )
    {
      if ( v4 == 7 )
      {
        v5 = &unk_14043B768;
      }
      else
      {
        v5 = &unk_14043B760;
        if ( v4 != 5 )
          v5 = &unk_14043B778;
      }
    }
    else
    {
      v5 = (_QWORD *)(a1 + 176);
    }
    v6 = *v5 == 0LL;
    return !v6;
  }
  if ( !v4 && a2 >= 0xFFFFF6FB7DBED000uLL && a2 <= 0xFFFFF6FB7DBEDFFFuLL )
  {
    v7 = *(_QWORD *)(*(_QWORD *)&PsGetCurrentProcess()[1].IdealGlobalNode + 552LL);
    if ( v7 )
    {
      v6 = *(_DWORD *)(v7 + 4 * ((a2 >> 3) & 0x1FF)) == 0;
      return !v6;
    }
  }
  if ( MiShouldLockPteDirectly(a1, a2) )
    return ((unsigned __int64)MI_READ_PTE_LOCK_FREE(a2) >> 60) & 1;
  PageTableLockBuffer = MiGetPageTableLockBuffer(v10, v9, &v12);
  return ((*(_DWORD *)PageTableLockBuffer >> v12) & 1) != 0;
}
