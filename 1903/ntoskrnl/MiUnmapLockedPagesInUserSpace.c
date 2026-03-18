/*
 * XREFs of MiUnmapLockedPagesInUserSpace @ 0x14015B1BC
 * Callers:
 *     MmUnmapLockedPages @ 0x14006AD00 (MmUnmapLockedPages.c)
 * Callees:
 *     MiUnlockAndDereferenceVad @ 0x1400504B0 (MiUnlockAndDereferenceVad.c)
 *     MiObtainReferencedVadEx @ 0x140050770 (MiObtainReferencedVadEx.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400C5EE0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiCheckSecuredVad @ 0x14064C0CC (MiCheckSecuredVad.c)
 *     MiUnmapVad @ 0x14064C934 (MiUnmapVad.c)
 */

void __fastcall MiUnmapLockedPagesInUserSpace(unsigned __int64 a1, _DWORD *a2)
{
  unsigned __int64 v2; // r14
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // rax
  char *v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rbp
  int v10; // r9d
  int v11; // r10d
  char v12; // r11
  int v13; // [rsp+60h] [rbp+8h] BYREF
  __int64 v14; // [rsp+68h] [rbp+10h] BYREF

  v2 = (((a2[8] + a2[11]) & 0xFFF) + (unsigned __int64)(unsigned int)a2[10] + 4095) >> 12;
  v5 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v6 = MiObtainReferencedVadEx(a1, 1, &v13);
  v7 = (char *)v6;
  if ( v6 )
  {
    v8 = *(unsigned int *)(v6 + 24);
    if ( (*(_DWORD *)(v6 + 48) & 0x70) == 0x10
      && (a1 & 0xFFFFFFFFFFFFF000uLL) == (v8 | ((unsigned __int64)*(unsigned __int8 *)(v6 + 32) << 32)) << 12
      && v2 == (*(unsigned int *)(v6 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v6 + 33) << 32))
             - (v8 | ((unsigned __int64)*(unsigned __int8 *)(v6 + 32) << 32))
             + 1 )
    {
      v9 = (__int64)a2 - ((a1 >> 9) & 0x7FFFFFFFF8LL) + 0x98000000000LL;
      while ( 1 )
      {
        v14 = MI_READ_PTE_LOCK_FREE(v5);
        if ( *(_QWORD *)(v5 + v9 + 48) != (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v14) >> 12) & 0xFFFFFFFFFLL) )
          break;
        v5 += 8LL;
        if ( !--v2 )
        {
          if ( (v12 & 8) == 0
            || (KeGetCurrentThread()->ApcState.Process[1].DirectoryTableBase & 0x2000000000LL) != 0
            || (int)MiCheckSecuredVad((_DWORD)v7, v11, (v10 + 1) << 12, 85, 0) >= 0 )
          {
            MiUnmapVad(v7, 0LL, 0LL);
            return;
          }
          break;
        }
      }
    }
    MiUnlockAndDereferenceVad(v7);
  }
}
