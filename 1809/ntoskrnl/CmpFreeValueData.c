/*
 * XREFs of CmpFreeValueData @ 0x1405AEF04
 * Callers:
 *     CmpFreeValue @ 0x1405AEB5C (CmpFreeValue.c)
 *     CmpSetValueKeyExisting @ 0x1405AF27C (CmpSetValueKeyExisting.c)
 *     CmDeleteValueKey @ 0x1405B7634 (CmDeleteValueKey.c)
 *     CmpCopyValue @ 0x1407FE584 (CmpCopyValue.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     HvFreeCell @ 0x1405AEBD8 (HvFreeCell.c)
 */

char __fastcall CmpFreeValueData(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3, unsigned int a3)
{
  unsigned int v4; // ebp
  __int64 (__fastcall *v6)(ULONG_PTR, ULONG_PTR, int *); // rax
  __int64 v7; // rax
  unsigned __int16 v8; // di
  __int64 v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // r14
  ULONG_PTR v12; // rdx
  _DWORD v13[10]; // [rsp+20h] [rbp-28h] BYREF
  int v14; // [rsp+68h] [rbp+20h] BYREF
  int v15; // [rsp+6Ch] [rbp+24h]

  v4 = BugCheckParameter3;
  if ( a3 >= 0x80000000 || (_DWORD)BugCheckParameter3 == -1 )
    return 1;
  if ( *(_DWORD *)(BugCheckParameter2 + 212) < 4u || a3 - 16345 > 0x7FFFC026 )
  {
LABEL_5:
    HvFreeCell(BugCheckParameter2, v4);
    return 1;
  }
  v14 = -1;
  v15 = 0;
  v13[1] = 0;
  v6 = *(__int64 (__fastcall **)(ULONG_PTR, ULONG_PTR, int *))(BugCheckParameter2 + 8);
  v13[0] = -1;
  v7 = v6(BugCheckParameter2, BugCheckParameter3, &v14);
  v8 = 0;
  v9 = v7;
  if ( v7 )
  {
    v10 = *(unsigned int *)(v7 + 4);
    if ( (_DWORD)v10 == -1 )
    {
LABEL_15:
      (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v14);
      goto LABEL_5;
    }
    v11 = (*(__int64 (__fastcall **)(ULONG_PTR, __int64, _DWORD *))(BugCheckParameter2 + 8))(
            BugCheckParameter2,
            v10,
            v13);
    if ( v11 )
    {
      while ( v8 < *(_WORD *)(v9 + 2) )
      {
        v12 = *(unsigned int *)(v11 + 4LL * v8);
        if ( (_DWORD)v12 != -1 )
          HvFreeCell(BugCheckParameter2, v12);
        ++v8;
      }
      (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v13);
      HvFreeCell(BugCheckParameter2, *(unsigned int *)(v9 + 4));
      goto LABEL_15;
    }
    (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v14);
  }
  return 0;
}
