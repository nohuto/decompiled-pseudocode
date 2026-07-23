/*
 * XREFs of CmpLightWeightCreateSetValueData @ 0x1406967C8
 * Callers:
 *     CmpLightWeightPrepareSetValueKeyUoW @ 0x1406962A4 (CmpLightWeightPrepareSetValueKeyUoW.c)
 *     CmpLightWeightPrepareDeleteValueKeyUoW @ 0x140805610 (CmpLightWeightPrepareDeleteValueKeyUoW.c)
 * Callees:
 *     CmpAllocateTransientPoolWithTag @ 0x140013040 (CmpAllocateTransientPoolWithTag.c)
 *     CmpFreeTransientPoolWithTag @ 0x140017768 (CmpFreeTransientPoolWithTag.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     HvFreeCell @ 0x1405AEBD8 (HvFreeCell.c)
 *     HvpMarkCellDirty @ 0x1405FBC04 (HvpMarkCellDirty.c)
 *     CmpCopyCell @ 0x1406968D8 (CmpCopyCell.c)
 */

__int64 __fastcall CmpLightWeightCreateSetValueData(__int64 a1, _QWORD *a2)
{
  ULONG_PTR v4; // rsi
  _DWORD *TransientPoolWithTag; // rax
  _DWORD *v6; // rdi
  __int64 v7; // rax
  __int64 v8; // rbx
  int v9; // eax
  int v10; // eax
  unsigned int v11; // ebx
  ULONG_PTR v13; // rdx
  int v14; // [rsp+30h] [rbp+8h] BYREF
  int v15; // [rsp+34h] [rbp+Ch]

  v14 = -1;
  v15 = 0;
  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 48) + 24LL);
  TransientPoolWithTag = CmpAllocateTransientPoolWithTag(PagedPool, 0xCuLL, 0x77554D43u);
  v6 = TransientPoolWithTag;
  if ( !TransientPoolWithTag )
    return (unsigned int)-1073741670;
  *(_QWORD *)TransientPoolWithTag = 0LL;
  TransientPoolWithTag[2] = 0;
  *TransientPoolWithTag = 1;
  v7 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(v4 + 8))(
         v4,
         *(unsigned int *)(*(_QWORD *)(a1 + 48) + 32LL),
         &v14);
  v8 = v7;
  if ( v7 )
  {
    v6[1] = 0;
    v6[2] = -1;
    v9 = *(_DWORD *)(v7 + 36);
    if ( v9 )
    {
      v6[1] = v9;
      v10 = CmpCopyCell(v4, *(unsigned int *)(v8 + 40), v4, *(_DWORD *)(v8 + 40) >> 31);
      v6[2] = v10;
      if ( v10 == -1 )
      {
        v11 = -1073741670;
        goto LABEL_7;
      }
      if ( !HvpMarkCellDirty(v4, *(unsigned int *)(v8 + 40), 0) )
      {
        v11 = -1073741443;
        goto LABEL_7;
      }
    }
    v11 = 0;
    *a2 = v6;
    v6 = 0LL;
LABEL_7:
    (*(void (__fastcall **)(ULONG_PTR, int *))(v4 + 16))(v4, &v14);
    goto LABEL_8;
  }
  v11 = -1073741670;
LABEL_8:
  if ( v6 )
  {
    v13 = (unsigned int)v6[2];
    if ( (_DWORD)v13 != -1 )
      HvFreeCell(v4, v13);
    CmpFreeTransientPoolWithTag(v6, 0x77554D43u);
  }
  return v11;
}
