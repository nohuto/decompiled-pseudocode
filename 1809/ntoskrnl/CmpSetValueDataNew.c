/*
 * XREFs of CmpSetValueDataNew @ 0x1405ADE10
 * Callers:
 *     CmpAddValueKeyNew @ 0x1405ADC78 (CmpAddValueKeyNew.c)
 *     CmpSetValueKeyExisting @ 0x1405AF27C (CmpSetValueKeyExisting.c)
 *     CmpCopyValue @ 0x1407FE584 (CmpCopyValue.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     HvFreeCell @ 0x1405AEBD8 (HvFreeCell.c)
 *     HvAllocateCell @ 0x1405FCE54 (HvAllocateCell.c)
 */

__int64 __fastcall CmpSetValueDataNew(ULONG_PTR BugCheckParameter2, char *Src, size_t Size, int a4, _DWORD *a5)
{
  size_t v5; // rsi
  bool v6; // cf
  int Cell; // eax
  int *v11; // rdx
  int v13; // eax
  _DWORD *v14; // rdi
  unsigned int v15; // r15d
  int v16; // eax
  _DWORD *v17; // r12
  size_t v18; // r8
  unsigned __int16 i; // ax
  ULONG_PTR v20; // rdx
  ULONG_PTR v21; // rdx
  _DWORD *v22; // rdi
  _DWORD v23[2]; // [rsp+30h] [rbp-20h] BYREF
  _DWORD v24[2]; // [rsp+38h] [rbp-18h] BYREF
  void *v25; // [rsp+40h] [rbp-10h] BYREF
  _DWORD *v26; // [rsp+48h] [rbp-8h] BYREF
  int v27; // [rsp+80h] [rbp+30h] BYREF
  int v28; // [rsp+84h] [rbp+34h]

  v5 = (unsigned int)Size;
  v27 = -1;
  v6 = *(_DWORD *)(BugCheckParameter2 + 212) < 4u;
  v28 = 0;
  if ( v6 || (unsigned int)(Size - 16345) > 0x7FFFC026 )
  {
    Cell = HvAllocateCell(BugCheckParameter2, Size, a4, (unsigned int)&v25, (__int64)&v27);
    *a5 = Cell;
    if ( Cell != -1 )
    {
      memmove(v25, Src, v5);
      v11 = &v27;
LABEL_5:
      (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, v11);
      return 0LL;
    }
  }
  else
  {
    v24[0] = -1;
    v24[1] = 0;
    v23[1] = 0;
    v25 = 0LL;
    v23[0] = -1;
    v13 = HvAllocateCell(BugCheckParameter2, 8, a4, (unsigned int)&v26, (__int64)v24);
    *a5 = v13;
    if ( v13 != -1 )
    {
      v14 = v26;
      *v26 = 25188;
      v14[1] = -1;
      v15 = ((int)v5 + 16343) / 0x3FD8u;
      v16 = HvAllocateCell(
              BugCheckParameter2,
              4 * (unsigned int)(unsigned __int16)v15,
              a4,
              (unsigned int)&v25,
              (__int64)v23);
      v17 = v25;
      v14[1] = v16;
      if ( v16 != -1 )
      {
        if ( *((_WORD *)v14 + 1) >= (unsigned __int16)v15 )
        {
LABEL_13:
          (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v23);
          v11 = v24;
          goto LABEL_5;
        }
        while ( 1 )
        {
          v17[*((unsigned __int16 *)v14 + 1)] = HvAllocateCell(
                                                  BugCheckParameter2,
                                                  16344,
                                                  a4,
                                                  (unsigned int)&v25,
                                                  (__int64)&v27);
          if ( v17[*((unsigned __int16 *)v14 + 1)] == -1 )
            break;
          v18 = (unsigned int)v5;
          if ( (unsigned int)v5 > 0x3FD8 )
            v18 = 16344LL;
          memmove(v25, Src, v18);
          (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v27);
          v25 = 0LL;
          ++*((_WORD *)v14 + 1);
          Src += 16344;
          LODWORD(v5) = v5 - 16344;
          if ( *((_WORD *)v14 + 1) >= (unsigned __int16)v15 )
            goto LABEL_13;
        }
      }
      if ( v17 )
      {
        for ( i = *((_WORD *)v14 + 1); i; *((_WORD *)v14 + 1) = i )
        {
          v20 = (unsigned int)v17[i];
          if ( (_DWORD)v20 != -1 )
          {
            HvFreeCell(BugCheckParameter2, v20);
            i = *((_WORD *)v14 + 1);
          }
          --i;
        }
        (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v23);
      }
      v21 = (unsigned int)v14[1];
      if ( (_DWORD)v21 != -1 )
        HvFreeCell(BugCheckParameter2, v21);
      (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v24);
      v22 = a5;
      HvFreeCell(BugCheckParameter2, (unsigned int)*a5);
      *v22 = -1;
    }
  }
  return 3221225626LL;
}
