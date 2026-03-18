/*
 * XREFs of vDeactivateEudcRFONTsWorker @ 0x1C0160A24
 * Callers:
 *     prfntDeactivateEudcRFONTs @ 0x1C00CB6E8 (prfntDeactivateEudcRFONTs.c)
 * Callees:
 *     ?prfntInactive@PDEVOBJ@@QEAAPEAVRFONT@@PEAV2@@Z @ 0x1C0080A24 (-prfntInactive@PDEVOBJ@@QEAAPEAVRFONT@@PEAV2@@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C008471C (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?prfntInactive@PDEVOBJ@@QEAAPEAVRFONT@@XZ @ 0x1C00855AC (-prfntInactive@PDEVOBJ@@QEAAPEAVRFONT@@XZ.c)
 *     ?vInsert@RFONTOBJ@@QEAAXPEAPEAVRFONT@@W4_RFL_TYPE@@@Z @ 0x1C008605C (-vInsert@RFONTOBJ@@QEAAXPEAPEAVRFONT@@W4_RFL_TYPE@@@Z.c)
 *     ?prfntActive@PDEVOBJ@@QEAAPEAVRFONT@@PEAV2@@Z @ 0x1C00863BC (-prfntActive@PDEVOBJ@@QEAAPEAVRFONT@@PEAV2@@Z.c)
 *     ?prfntActive@PDEVOBJ@@QEAAPEAVRFONT@@XZ @ 0x1C00863E4 (-prfntActive@PDEVOBJ@@QEAAPEAVRFONT@@XZ.c)
 *     ?vRemove@RFONTOBJ@@QEAAXPEAPEAVRFONT@@W4_RFL_TYPE@@@Z @ 0x1C0086C2C (-vRemove@RFONTOBJ@@QEAAXPEAPEAVRFONT@@W4_RFL_TYPE@@@Z.c)
 *     ?cInactive@PDEVOBJ@@QEAAIXZ @ 0x1C0126690 (-cInactive@PDEVOBJ@@QEAAIXZ.c)
 *     ?SkipInvalidPff@@YAPEAVPFF@@PEAV1@@Z @ 0x1C015F17C (-SkipInvalidPff@@YAPEAVPFF@@PEAV1@@Z.c)
 */

struct PFF *__fastcall vDeactivateEudcRFONTsWorker(struct RFONT *a1, _QWORD *a2, struct PFF *a3, unsigned __int64 *a4)
{
  unsigned __int64 v7; // rdi
  __int64 v8; // rax
  bool v9; // cc
  __int64 v10; // rbx
  int v11; // eax
  struct PFF *result; // rax
  struct PFF *v13; // rsi
  unsigned __int64 v14; // [rsp+20h] [rbp-20h] BYREF
  int v15; // [rsp+28h] [rbp-18h]
  __int64 v16; // [rsp+30h] [rbp-10h] BYREF
  int v17; // [rsp+38h] [rbp-8h]
  struct RFONT *v18; // [rsp+70h] [rbp+30h] BYREF
  __int64 v19; // [rsp+80h] [rbp+40h] BYREF

  v18 = a1;
  while ( 1 )
  {
    result = SkipInvalidPff(a3);
    v13 = result;
    if ( !result )
      break;
    if ( (*((_DWORD *)result + 13) & 8) != 0 )
    {
      v7 = *((_QWORD *)result + 9);
      while ( v7 )
      {
        v8 = *(_QWORD *)(v7 + 120);
        if ( v8 == *a2 || v8 == a2[1] )
        {
          v15 = 0;
          v9 = *(_DWORD *)(v7 + 660) <= 0;
          v10 = *(_QWORD *)(v7 + 104);
          v14 = v7;
          v19 = v10;
          if ( v9 )
          {
            v18 = PDEVOBJ::prfntInactive((PDEVOBJ *)&v19);
            RFONTOBJ::vRemove((__int64)&v14, (unsigned __int64 *)&v18, 1);
            PDEVOBJ::prfntInactive((PDEVOBJ *)&v19, v18);
            v11 = PDEVOBJ::cInactive((PDEVOBJ *)&v19) - 1;
            if ( (*(_DWORD *)(v10 + 40) & 0x800000) != 0 )
              *(_DWORD *)(*(_QWORD *)(v10 + 3520) + 1536LL) = v11;
            else
              *(_DWORD *)(v10 + 1536) = v11;
          }
          else
          {
            v18 = PDEVOBJ::prfntActive((PDEVOBJ *)&v19);
            RFONTOBJ::vRemove((__int64)&v14, (unsigned __int64 *)&v18, 1);
            PDEVOBJ::prfntActive((PDEVOBJ *)&v19, v18);
          }
          RFONTOBJ::vInsert(&v14, a4, 1);
          v14 = 0LL;
          RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v14);
        }
        v17 = 0;
        v16 = 0LL;
        v7 = *(_QWORD *)(v7 + 496);
        RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v16);
      }
    }
    a3 = (struct PFF *)*((_QWORD *)v13 + 1);
  }
  return result;
}
