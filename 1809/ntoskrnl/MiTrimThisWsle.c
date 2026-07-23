/*
 * XREFs of MiTrimThisWsle @ 0x140087EB0
 * Callers:
 *     MiTrimPte @ 0x140087BC0 (MiTrimPte.c)
 *     MiTrimPteWorker @ 0x1402B3F24 (MiTrimPteWorker.c)
 * Callees:
 *     MiGetPfnPriority @ 0x140082B60 (MiGetPfnPriority.c)
 *     MiGetVaAge @ 0x1400880A0 (MiGetVaAge.c)
 *     MiLocateCloneAddress @ 0x1400946C8 (MiLocateCloneAddress.c)
 */

__int64 __fastcall MiTrimThisWsle(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4, char a5, _DWORD *a6)
{
  __int64 v9; // rdi
  char v10; // r9
  unsigned int VaAge; // r10d
  unsigned __int64 v12; // r11
  unsigned int v13; // r9d
  char v14; // al
  int v15; // ecx
  __int64 v16; // rax
  __int64 v18; // rdx

  v9 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( a6 )
    *a6 = 0;
  VaAge = (unsigned __int8)MiGetVaAge(a1, a2);
  if ( (v10 & 0x60) != 0 )
  {
    if ( (*(_QWORD *)(a3 + 40) & 0x200000000000000LL) == 0 )
      goto LABEL_8;
    if ( (v10 & 0x20) == 0
      || (*(_DWORD *)(a3 + 16) & 0x400LL) != 0
      || (v18 = *(_QWORD *)(a3 + 8), v18 < 0) && !MiLocateCloneAddress(a1 - 1280, v18 | 0x8000000000000000uLL) )
    {
      if ( (v10 & 0x40) == 0 || (*(_DWORD *)(a3 + 16) & 0x400LL) == 0 )
        goto LABEL_8;
    }
  }
  else
  {
    v13 = v10 & 0xF;
    if ( v13 )
    {
      v14 = *(_BYTE *)(a3 + 35);
      if ( (v14 & 8) != 0 || (v14 & 7u) >= 5 )
      {
        if ( VaAge < v13 )
          goto LABEL_8;
        if ( (a5 & 1) != 0 )
        {
          if ( *(_QWORD *)(a4 + 240) && v12 <= 0x7FFFFFFEFFFFLL && a6 )
          {
            *a6 = 1;
            return 0LL;
          }
LABEL_8:
          v15 = 2;
          if ( (a5 & 1) == 0
            || v12 <= 0x7FFFFFFEFFFFLL && (*(_BYTE *)(a1 + 184) & 7) == 0 && *(_QWORD *)(a1 + 576) && a6 )
          {
            if ( (*(_BYTE *)(a1 + 184) & 7) != 0 && *(_WORD *)(a3 + 32) != 1
              || VaAge >= 6
              || (unsigned int)MiGetPfnPriority(a3) >= 5 )
            {
              return 0LL;
            }
            v16 = 1LL;
          }
          else
          {
            v16 = 2LL;
            if ( VaAge && VaAge < 7 )
            {
              v15 = 0;
              v16 = 0LL;
            }
            if ( v15 == 2 )
              return 0LL;
          }
          if ( !*(_BYTE *)(a4 + 80 * v16 + 320) )
          {
            *(_BYTE *)(a4 + 80 * v16 + 320) = 1;
            *(_QWORD *)(a4 + 80 * v16 + 312) = v12;
          }
          _bittestandset((signed __int32 *)(a4 + 80 * v16 + 248), ((unsigned int)v9 >> 3) & 0x1FF);
          return 0LL;
        }
      }
    }
  }
  return 1LL;
}
