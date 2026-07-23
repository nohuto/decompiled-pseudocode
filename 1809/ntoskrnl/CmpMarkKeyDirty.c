/*
 * XREFs of CmpMarkKeyDirty @ 0x1405AF028
 * Callers:
 *     CmDeleteLayeredKey @ 0x14026CEBC (CmDeleteLayeredKey.c)
 *     CmpCreateChild @ 0x1405AC7A4 (CmpCreateChild.c)
 *     CmpFreeKeyByCell @ 0x1405AE6F8 (CmpFreeKeyByCell.c)
 *     CmRenameKey @ 0x1407EECF4 (CmRenameKey.c)
 *     CmpLightWeightPrepareDeleteKeyUoW @ 0x140805468 (CmpLightWeightPrepareDeleteKeyUoW.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     CmpMarkIndexDirty @ 0x1405AE40C (CmpMarkIndexDirty.c)
 *     CmpMarkValueDataDirty @ 0x1405AF578 (CmpMarkValueDataDirty.c)
 *     HvpMarkCellDirty @ 0x1405FBC04 (HvpMarkCellDirty.c)
 */

char __fastcall CmpMarkKeyDirty(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3, char a3)
{
  char v3; // r14
  unsigned int v4; // r13d
  __int64 (__fastcall *v6)(ULONG_PTR, ULONG_PTR, _DWORD *); // rax
  __int64 v7; // r12
  __int64 v8; // rax
  __int64 v9; // rsi
  ULONG_PTR v10; // rdx
  ULONG_PTR v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rbx
  char v14; // bl
  __int64 v15; // r14
  bool v16; // zf
  void (__fastcall *v17)(ULONG_PTR, _DWORD *); // rax
  _DWORD v19[2]; // [rsp+20h] [rbp-20h] BYREF
  _DWORD v20[2]; // [rsp+28h] [rbp-18h] BYREF
  _DWORD v21[4]; // [rsp+30h] [rbp-10h] BYREF
  int v22; // [rsp+80h] [rbp+40h] BYREF
  int v23; // [rsp+84h] [rbp+44h]
  char v24; // [rsp+90h] [rbp+50h]

  v24 = a3;
  v21[1] = 0;
  v3 = a3;
  v20[1] = 0;
  v23 = 0;
  v4 = BugCheckParameter3;
  v19[1] = 0;
  v6 = *(__int64 (__fastcall **)(ULONG_PTR, ULONG_PTR, _DWORD *))(BugCheckParameter2 + 8);
  v7 = 0LL;
  v21[0] = -1;
  v20[0] = -1;
  v22 = -1;
  v19[0] = -1;
  v8 = v6(BugCheckParameter2, BugCheckParameter3, v21);
  v9 = v8;
  if ( !v8 )
    return 0;
  if ( (*(_BYTE *)(v8 + 2) & 2) == 0 )
  {
    if ( (unsigned __int8)HvpMarkCellDirty(BugCheckParameter2, v4) )
    {
      v10 = *(unsigned int *)(v9 + 48);
      if ( (_DWORD)v10 == -1 || (unsigned __int8)HvpMarkCellDirty(BugCheckParameter2, v10) )
      {
        v11 = *(unsigned int *)(v9 + 44);
        if ( (_DWORD)v11 == -1 )
          goto LABEL_11;
        if ( (unsigned __int8)HvpMarkCellDirty(BugCheckParameter2, v11) )
        {
          v12 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(BugCheckParameter2 + 8))(
                  BugCheckParameter2,
                  *(unsigned int *)(v9 + 44),
                  &v22);
          v13 = v12;
          if ( v12 )
          {
            if ( (unsigned __int8)HvpMarkCellDirty(BugCheckParameter2, *(unsigned int *)(v12 + 4))
              && (unsigned __int8)HvpMarkCellDirty(BugCheckParameter2, *(unsigned int *)(v13 + 8)) )
            {
              (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v22);
LABEL_11:
              v14 = 1;
              if ( (*(_BYTE *)(v9 + 2) & 0x40) != 0 || !*(_DWORD *)(v9 + 36) )
                goto LABEL_21;
              if ( (unsigned __int8)HvpMarkCellDirty(BugCheckParameter2, *(unsigned int *)(v9 + 40)) )
              {
                v7 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter2 + 8))(
                       BugCheckParameter2,
                       *(unsigned int *)(v9 + 40),
                       v20);
                if ( v7 )
                {
                  v15 = 0LL;
                  if ( *(_DWORD *)(v9 + 36) )
                  {
                    while ( (unsigned __int8)HvpMarkCellDirty(BugCheckParameter2, *(unsigned int *)(v7 + 4 * v15))
                         && (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter2 + 8))(
                              BugCheckParameter2,
                              *(unsigned int *)(v7 + 4 * v15),
                              v19) )
                    {
                      v16 = (unsigned __int8)CmpMarkValueDataDirty(BugCheckParameter2) == 0;
                      v17 = *(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16);
                      if ( v16 )
                      {
                        v17(BugCheckParameter2, v19);
                        goto LABEL_31;
                      }
                      v17(BugCheckParameter2, v19);
                      v15 = (unsigned int)(v15 + 1);
                      if ( (unsigned int)v15 >= *(_DWORD *)(v9 + 36) )
                        goto LABEL_20;
                    }
                    goto LABEL_31;
                  }
LABEL_20:
                  v3 = v24;
LABEL_21:
                  if ( (*(_BYTE *)(v9 + 2) & 4) != 0
                    || !v3
                    || CmpMarkIndexDirty(BugCheckParameter2, *(_DWORD *)(v9 + 16), v4)
                    && (unsigned __int8)HvpMarkCellDirty(BugCheckParameter2, *(unsigned int *)(v9 + 16)) )
                  {
LABEL_25:
                    if ( v7 )
                      (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v20);
                    goto LABEL_27;
                  }
LABEL_31:
                  v14 = 0;
                  goto LABEL_25;
                }
              }
              goto LABEL_33;
            }
            (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v22);
          }
        }
      }
    }
LABEL_33:
    v14 = 0;
    goto LABEL_27;
  }
  v14 = 1;
LABEL_27:
  (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v21);
  return v14;
}
