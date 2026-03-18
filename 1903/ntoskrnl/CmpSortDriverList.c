/*
 * XREFs of CmpSortDriverList @ 0x140A12368
 * Callers:
 *     CmGetSystemDriverList @ 0x140A11BA0 (CmGetSystemDriverList.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     CmpFindValueByName @ 0x1406304A4 (CmpFindValueByName.c)
 *     CmpFindSubKeyByName @ 0x14076514C (CmpFindSubKeyByName.c)
 *     CmpValueToData @ 0x140765554 (CmpValueToData.c)
 *     CmpDoSort @ 0x140A12524 (CmpDoSort.c)
 */

char __fastcall CmpSortDriverList(ULONG_PTR BugCheckParameter3, __int64 a2, __int64 a3)
{
  __int64 (__fastcall *v5)(ULONG_PTR, __int64, int *); // rax
  __int64 v6; // rax
  unsigned int SubKeyByName; // ebx
  __int64 v8; // rax
  unsigned int v9; // ebx
  __int64 v10; // rax
  unsigned int ValueByName; // ebx
  ULONG_PTR v12; // rax
  PVOID v13; // rbx
  char v14; // bl
  _DWORD v16[2]; // [rsp+30h] [rbp-20h] BYREF
  __int64 v17; // [rsp+38h] [rbp-18h] BYREF
  __int64 v18; // [rsp+40h] [rbp-10h] BYREF
  PVOID v19; // [rsp+48h] [rbp-8h]
  unsigned int v20; // [rsp+70h] [rbp+20h] BYREF
  int v21; // [rsp+88h] [rbp+38h] BYREF
  int v22; // [rsp+8Ch] [rbp+3Ch]

  v18 = 0LL;
  v19 = 0LL;
  v16[1] = 0;
  v22 = 0;
  v5 = *(__int64 (__fastcall **)(ULONG_PTR, __int64, int *))(BugCheckParameter3 + 8);
  v17 = 0xFFFFFFFFLL;
  v16[0] = -1;
  v21 = -1;
  v6 = v5(BugCheckParameter3, a2, &v21);
  if ( v6 )
  {
    SubKeyByName = CmpFindSubKeyByName(BugCheckParameter3, v6, (unsigned __int16 *)&CmpControlString);
    (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter3 + 16))(BugCheckParameter3, &v21);
    if ( SubKeyByName != -1 )
    {
      v8 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(BugCheckParameter3 + 8))(
             BugCheckParameter3,
             SubKeyByName,
             &v21);
      if ( v8 )
      {
        v9 = CmpFindSubKeyByName(BugCheckParameter3, v8, L"\"$");
        (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter3 + 16))(BugCheckParameter3, &v21);
        if ( v9 != -1 )
        {
          v10 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(BugCheckParameter3 + 8))(
                  BugCheckParameter3,
                  v9,
                  &v21);
          if ( v10 )
          {
            ValueByName = CmpFindValueByName(BugCheckParameter3, v10, (int)L"\b\n");
            (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter3 + 16))(BugCheckParameter3, &v21);
            if ( ValueByName != -1 )
            {
              v12 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter3 + 8))(
                      BugCheckParameter3,
                      ValueByName,
                      v16);
              if ( v12 )
              {
                if ( *(_DWORD *)(v12 + 12) == 7 )
                {
                  v13 = CmpValueToData(BugCheckParameter3, ValueByName, v12, &v20, (__int64)&v17);
                  v19 = v13;
                  (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter3 + 16))(BugCheckParameter3, v16);
                  if ( v13 )
                  {
                    WORD1(v18) = v20 - 2;
                    LOWORD(v18) = v20 - 2;
                    v14 = CmpDoSort(a3, &v18);
                    (*(void (__fastcall **)(ULONG_PTR, __int64 *))(BugCheckParameter3 + 16))(BugCheckParameter3, &v17);
                    return v14;
                  }
                }
                else
                {
                  (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter3 + 16))(BugCheckParameter3, v16);
                }
              }
            }
          }
        }
      }
    }
  }
  return 0;
}
