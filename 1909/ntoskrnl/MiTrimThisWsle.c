/*
 * XREFs of MiTrimThisWsle @ 0x14005AEA0
 * Callers:
 *     MiTrimPte @ 0x14005AAE0 (MiTrimPte.c)
 *     MiTrimPteWorker @ 0x1402C8EF4 (MiTrimPteWorker.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x1400A5D60 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetPfnPriority @ 0x1400BBB00 (MiGetPfnPriority.c)
 *     MiLocateCloneAddress @ 0x1400BFAB8 (MiLocateCloneAddress.c)
 */

__int64 __fastcall MiTrimThisWsle(
        __int64 a1,
        unsigned __int64 Process,
        __int64 a3,
        unsigned int *a4,
        char a5,
        _DWORD *a6)
{
  unsigned __int64 v9; // r11
  unsigned __int64 v10; // r10
  __int64 v11; // r9
  unsigned __int64 v12; // rcx
  __int64 v13; // r8
  char v14; // al
  int v15; // ecx
  __int64 v16; // rax
  __int64 v18; // rax
  __int64 v19; // r8
  __int64 v20; // rax
  __int64 v21; // r8
  __int64 v22; // rdx

  v9 = Process;
  v10 = ((Process >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( a6 )
    *a6 = 0;
  v11 = *a4;
  if ( Process < 0xFFFFF68000000000uLL || Process > 0xFFFFF6FFFFFFFFFFuLL )
  {
    v12 = *(_QWORD *)v10;
    if ( v10 >= 0xFFFFF6FB7DBED000uLL && v10 <= 0xFFFFF6FB7DBED7F8uLL && (MiFlags & 0xC00000) != 0 )
    {
      Process = (unsigned __int64)KeGetCurrentThread()->ApcState.Process;
      if ( *(_BYTE *)(Process + 648) != 1 && (v12 & 1) != 0 && ((v12 & 0x20) == 0 || (v12 & 0x42) == 0) )
      {
        Process = (unsigned __int64)KeGetCurrentThread()->ApcState.Process;
        v19 = *(_QWORD *)(Process + 1544);
        if ( v19 )
        {
          v20 = *(_QWORD *)(v19 + 8 * ((v10 >> 3) & 0x1FF));
          v21 = v12 | 0x20;
          Process = (unsigned __int8)v20;
          LOBYTE(Process) = v20 & 0x20;
          if ( (v20 & 0x20) == 0 )
            v21 = *(_QWORD *)v10;
          v12 = v21;
          if ( (v20 & 0x42) != 0 )
            v12 = v21 | 0x42;
        }
      }
    }
    v13 = HIBYTE(v12) & 0xF;
  }
  else
  {
    v13 = (*(_DWORD *)(48
                     * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(((Process >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) >> 12) & 0xFFFFFFFFFLL)
                     - 0x58000000000LL) >> 1) & 7;
  }
  if ( (v11 & 0x60) != 0 )
  {
    if ( (*(_QWORD *)(a3 + 40) & 0x200000000000000LL) == 0 )
      goto LABEL_13;
    if ( (v11 & 0x20) == 0
      || (*(_DWORD *)(a3 + 16) & 0x400LL) != 0
      || (v22 = *(_QWORD *)(a3 + 8), v22 < 0) && !MiLocateCloneAddress(a1 - 1280, v22 | 0x8000000000000000uLL) )
    {
      if ( (v11 & 0x40) == 0 || (*(_DWORD *)(a3 + 16) & 0x400LL) == 0 )
        goto LABEL_13;
    }
  }
  else
  {
    v11 &= 0xFu;
    if ( (_DWORD)v11 )
    {
      v14 = *(_BYTE *)(a3 + 35);
      if ( (v14 & 8) != 0 || (v14 & 7u) >= 5 )
      {
        if ( (unsigned int)v13 < (unsigned int)v11 )
          goto LABEL_13;
        if ( (a5 & 1) != 0 )
        {
          if ( *((_QWORD *)a4 + 30) && v9 <= 0x7FFFFFFEFFFFLL && a6 )
          {
            *a6 = 1;
            return 0LL;
          }
LABEL_13:
          v15 = 2;
          if ( (a5 & 1) == 0 || v9 <= 0x7FFFFFFEFFFFLL && (*(_BYTE *)(a1 + 184) & 7) == 0 && *(_QWORD *)(a1 + 624) && a6 )
          {
            if ( (*(_BYTE *)(a1 + 184) & 7) != 0 && *(_WORD *)(a3 + 32) != 1
              || (unsigned int)v13 >= 6
              || (unsigned int)MiGetPfnPriority(a3, Process, v13, v11) >= 5 )
            {
              return 0LL;
            }
            v16 = 1LL;
          }
          else
          {
            v16 = 2LL;
            if ( (_DWORD)v13 && (unsigned int)v13 < 7 )
            {
              v15 = 0;
              v16 = 0LL;
            }
            if ( v15 == 2 )
              return 0LL;
          }
          v18 = 10 * v16;
          if ( !LOBYTE(a4[2 * v18 + 80]) )
          {
            LOBYTE(a4[2 * v18 + 80]) = 1;
            *(_QWORD *)&a4[2 * v18 + 78] = v9;
          }
          _bittestandset((signed __int32 *)&a4[2 * v18 + 62], ((unsigned int)v10 >> 3) & 0x1FF);
          return 0LL;
        }
      }
    }
  }
  return 1LL;
}
