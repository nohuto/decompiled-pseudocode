/*
 * XREFs of CmpLightWeightPrepareSetValueKeyUoW @ 0x1406962A4
 * Callers:
 *     CmpProcessLightWeightUOW @ 0x140695BDC (CmpProcessLightWeightUOW.c)
 * Callees:
 *     CmpAllocateTransientPoolWithTag @ 0x140013040 (CmpAllocateTransientPoolWithTag.c)
 *     CmpFreeTransientPoolWithTag @ 0x140017768 (CmpFreeTransientPoolWithTag.c)
 *     CmpSwapValueInList @ 0x14010EF7C (CmpSwapValueInList.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     CmpAddValueKeyNew @ 0x1405ADC78 (CmpAddValueKeyNew.c)
 *     CmpAddValueToListEx @ 0x1405AE8B0 (CmpAddValueToListEx.c)
 *     CmpFreeValue @ 0x1405AEB5C (CmpFreeValue.c)
 *     CmpMarkValueDataDirty @ 0x1405AF578 (CmpMarkValueDataDirty.c)
 *     CmpInitializeValueNameString @ 0x1405B046C (CmpInitializeValueNameString.c)
 *     CmpFindNameInList @ 0x1405D162C (CmpFindNameInList.c)
 *     CmpGetValueData @ 0x1405D30A0 (CmpGetValueData.c)
 *     HvpMarkCellDirty @ 0x1405FBC04 (HvpMarkCellDirty.c)
 *     CmpLightWeightUpdateSharedSetValueData @ 0x140694A38 (CmpLightWeightUpdateSharedSetValueData.c)
 *     CmpLightWeightCreateSetValueData @ 0x1406967C8 (CmpLightWeightCreateSetValueData.c)
 */

__int64 __fastcall CmpLightWeightPrepareSetValueKeyUoW(__int64 a1)
{
  _DWORD *v1; // rbx
  void *v2; // r12
  __int64 v4; // rax
  ULONG_PTR v5; // rdi
  int v6; // ebx
  _QWORD *TransientPoolWithTag; // rax
  _WORD *v8; // rsi
  __int64 v9; // rax
  ULONG_PTR v10; // r15
  unsigned int v11; // eax
  unsigned int v12; // r13d
  _WORD *PoolWithTag; // rax
  unsigned int v14; // r15d
  unsigned int v15; // ebx
  __int64 v16; // rax
  int v17; // eax
  int v18; // eax
  size_t v20; // [rsp+20h] [rbp-59h]
  _DWORD v21[2]; // [rsp+40h] [rbp-39h] BYREF
  _DWORD v22[2]; // [rsp+48h] [rbp-31h] BYREF
  _DWORD v23[2]; // [rsp+50h] [rbp-29h] BYREF
  _DWORD v24[2]; // [rsp+58h] [rbp-21h] BYREF
  unsigned int *v25; // [rsp+60h] [rbp-19h]
  __int64 v26; // [rsp+68h] [rbp-11h]
  PVOID P; // [rsp+70h] [rbp-9h]
  __int64 v28; // [rsp+78h] [rbp-1h]
  unsigned __int16 v29[40]; // [rsp+80h] [rbp+7h] BYREF
  char v30; // [rsp+E0h] [rbp+67h]
  char v31; // [rsp+E8h] [rbp+6Fh] BYREF
  _DWORD *v32; // [rsp+F0h] [rbp+77h] BYREF
  ULONG_PTR BugCheckParameter3; // [rsp+F8h] [rbp+7Fh] BYREF

  v1 = *(_DWORD **)(a1 + 104);
  v2 = 0LL;
  v24[1] = 0;
  v26 = 0LL;
  v22[1] = 0;
  v23[1] = 0;
  v21[1] = 0;
  v4 = *(_QWORD *)(a1 + 48);
  v24[0] = -1;
  v22[0] = -1;
  v23[0] = -1;
  v21[0] = -1;
  v5 = *(_QWORD *)(v4 + 24);
  BugCheckParameter3 = 0LL;
  v30 = 0;
  v31 = 0;
  v32 = v1;
  if ( !v1 )
  {
    v6 = CmpLightWeightCreateSetValueData(a1, &v32);
    if ( v6 < 0 )
      return (unsigned int)v6;
    v1 = v32;
    CmpLightWeightUpdateSharedSetValueData((__int64)v32, *(_QWORD *)(a1 + 48));
    --*v1;
  }
  TransientPoolWithTag = CmpAllocateTransientPoolWithTag(PagedPool, 0x10uLL, 0x77554D43u);
  v8 = TransientPoolWithTag;
  if ( !TransientPoolWithTag )
    return (unsigned int)-1073741670;
  *TransientPoolWithTag = 0LL;
  TransientPoolWithTag[1] = 0LL;
  *(_DWORD *)TransientPoolWithTag = -1;
  *((_DWORD *)TransientPoolWithTag + 1) = -1;
  v9 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(v5 + 8))(v5, *(unsigned int *)(a1 + 92), v24);
  v10 = v9;
  if ( v9 )
  {
    v11 = *(_DWORD *)(v9 + 4);
    v12 = v11 + 0x80000000;
    if ( v11 < 0x80000000 )
      v12 = v11;
    LODWORD(v32) = v12;
    if ( v12 )
    {
      if ( v11 >= 0x80000000 )
      {
        v2 = (void *)(v10 + 8);
      }
      else
      {
        if ( !CmpGetValueData(
                v5,
                *(unsigned int *)(a1 + 92),
                v10,
                (unsigned int *)&v32,
                (__int64)&BugCheckParameter3,
                (__int64)&v31,
                (__int64)v23) )
        {
          v6 = -1073741670;
LABEL_34:
          (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v5 + 16))(v5, v24);
          goto LABEL_35;
        }
        v2 = (void *)BugCheckParameter3;
        v12 = (unsigned int)v32;
        v30 = 1;
      }
    }
    if ( !HvpMarkCellDirty(v5, *(unsigned int *)(*(_QWORD *)(a1 + 48) + 32LL), 0) )
    {
      v6 = -1073741443;
LABEL_30:
      if ( v30 && v2 )
      {
        if ( v31 )
          ExFreePoolWithTag(v2, 0);
        else
          (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v5 + 16))(v5, v23);
      }
      goto LABEL_34;
    }
    v28 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(v5 + 8))(
            v5,
            *(unsigned int *)(*(_QWORD *)(a1 + 48) + 32LL),
            v22);
    *(_DWORD *)(a1 + 72) = *(_DWORD *)(*(_QWORD *)(a1 + 48) + 32LL) >> 31;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x8000uLL, 0x62534D43u);
    P = PoolWithTag;
    if ( !PoolWithTag )
    {
      v6 = -1073741670;
LABEL_28:
      if ( v28 )
        (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v5 + 16))(v5, v22);
      goto LABEL_30;
    }
    CmpInitializeValueNameString(v10, (__int64)v29, PoolWithTag);
    v25 = v1 + 1;
    if ( !CmpFindNameInList(v5, (_DWORD)v1 + 4, (int)v29, 0, (__int64)&v32, (__int64)&BugCheckParameter3)
      || (LODWORD(v20) = v12,
          v14 = CmpAddValueKeyNew(v5, v29, *(_DWORD *)(v10 + 12), v2, v20, *(_DWORD *)(a1 + 72)),
          v14 == -1) )
    {
      v6 = -1073741670;
LABEL_27:
      ExFreePoolWithTag(P, 0);
      goto LABEL_28;
    }
    v15 = BugCheckParameter3;
    if ( (_DWORD)BugCheckParameter3 != -1 )
    {
      if ( HvpMarkCellDirty(v5, (unsigned int)BugCheckParameter3, 0) )
      {
        v16 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(v5 + 8))(v5, v15, v21);
        v26 = v16;
        if ( v16 )
        {
          if ( !CmpMarkValueDataDirty(v5, v16) )
          {
            v6 = -1073741443;
LABEL_23:
            if ( v26 )
              (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v5 + 16))(v5, v21);
            goto LABEL_25;
          }
          v17 = CmpSwapValueInList(v5, v14, (unsigned int)v32, (__int64)v25);
LABEL_21:
          v6 = v17;
          if ( v17 >= 0 )
          {
            v6 = 0;
            v8[4] = v29[0];
            v18 = BugCheckParameter3;
            *(_DWORD *)v8 = v14;
            *((_DWORD *)v8 + 1) = v18;
            *((_DWORD *)v8 + 3) = v12;
            *(_QWORD *)(a1 + 112) = v8;
            v8 = 0LL;
            v14 = -1;
          }
          goto LABEL_23;
        }
        v6 = -1073741670;
      }
      else
      {
        v6 = -1073741443;
      }
LABEL_25:
      if ( v14 != -1 )
        CmpFreeValue(v5, v14);
      goto LABEL_27;
    }
    v17 = CmpAddValueToListEx(v5, v14, (unsigned int)v32, *(_DWORD *)(a1 + 72), v25, 1);
    goto LABEL_21;
  }
  v6 = -1073741670;
LABEL_35:
  if ( v8 )
    CmpFreeTransientPoolWithTag(v8, 0x77554D43u);
  return (unsigned int)v6;
}
