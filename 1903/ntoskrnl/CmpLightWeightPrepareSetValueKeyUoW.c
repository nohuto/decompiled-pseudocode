/*
 * XREFs of CmpLightWeightPrepareSetValueKeyUoW @ 0x1406E23D8
 * Callers:
 *     CmpProcessLightWeightUOW @ 0x1406E2310 (CmpProcessLightWeightUOW.c)
 * Callees:
 *     CmpAllocateTransientPoolWithTag @ 0x14008BDA0 (CmpAllocateTransientPoolWithTag.c)
 *     CmpFreeTransientPoolWithTag @ 0x140092A90 (CmpFreeTransientPoolWithTag.c)
 *     CmpSwapValueInList @ 0x140133A04 (CmpSwapValueInList.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     CmpAddValueKeyNew @ 0x14062DEF4 (CmpAddValueKeyNew.c)
 *     CmpFreeValue @ 0x14062ED1C (CmpFreeValue.c)
 *     CmpMarkValueDataDirty @ 0x14062FECC (CmpMarkValueDataDirty.c)
 *     CmpFindNameInList @ 0x1406304D4 (CmpFindNameInList.c)
 *     CmpInitializeValueNameString @ 0x14063248C (CmpInitializeValueNameString.c)
 *     CmpGetValueData @ 0x14064E540 (CmpGetValueData.c)
 *     CmpLightWeightUpdateSharedSetValueData @ 0x1406E2894 (CmpLightWeightUpdateSharedSetValueData.c)
 *     CmpLightWeightCreateSetValueData @ 0x1406E28E0 (CmpLightWeightCreateSetValueData.c)
 *     CmpAddValueToList @ 0x140839838 (CmpAddValueToList.c)
 *     HvMarkCellDirty @ 0x14083A4F8 (HvMarkCellDirty.c)
 */

__int64 __fastcall CmpLightWeightPrepareSetValueKeyUoW(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        struct _LOOKASIDE_LIST_EX *a4)
{
  _DWORD *v4; // rbx
  void *v5; // r13
  __int64 v7; // rax
  ULONG_PTR v8; // rdi
  int v9; // ebx
  _DWORD *TransientPoolWithTag; // rax
  _WORD *v11; // rsi
  __int64 v12; // rax
  __int64 v13; // r15
  unsigned int v14; // eax
  unsigned int v15; // r12d
  PVOID PoolWithTag; // rax
  unsigned int v17; // r15d
  unsigned int v18; // ebx
  __int64 v19; // rax
  int v20; // eax
  int v21; // eax
  size_t Size; // [rsp+20h] [rbp-59h]
  _DWORD *v24; // [rsp+40h] [rbp-39h] BYREF
  _DWORD v25[2]; // [rsp+48h] [rbp-31h] BYREF
  _DWORD v26[2]; // [rsp+50h] [rbp-29h] BYREF
  _DWORD v27[2]; // [rsp+58h] [rbp-21h] BYREF
  _DWORD v28[2]; // [rsp+60h] [rbp-19h] BYREF
  __int64 v29; // [rsp+68h] [rbp-11h]
  _QWORD v30[2]; // [rsp+70h] [rbp-9h] BYREF
  PVOID P; // [rsp+80h] [rbp+7h]
  __int64 v32; // [rsp+88h] [rbp+Fh]
  unsigned int v33; // [rsp+E0h] [rbp+67h] BYREF
  char v34; // [rsp+E8h] [rbp+6Fh]
  char v35; // [rsp+F0h] [rbp+77h]
  _DWORD *v36; // [rsp+F8h] [rbp+7Fh] BYREF

  v4 = *(_DWORD **)(a1 + 104);
  v28[1] = 0;
  v5 = 0LL;
  v26[1] = 0;
  v29 = 0LL;
  v27[1] = 0;
  v25[1] = 0;
  v30[0] = 0LL;
  v30[1] = 0LL;
  v7 = *(_QWORD *)(a1 + 48);
  v28[0] = -1;
  v26[0] = -1;
  v27[0] = -1;
  v25[0] = -1;
  v8 = *(_QWORD *)(v7 + 32);
  v24 = 0LL;
  v34 = 0;
  v35 = 0;
  LOBYTE(v33) = 0;
  v36 = v4;
  if ( !v4 )
  {
    v9 = CmpLightWeightCreateSetValueData(a1, &v36);
    if ( v9 < 0 )
      return (unsigned int)v9;
    v4 = v36;
    CmpLightWeightUpdateSharedSetValueData(v36, *(_QWORD *)(a1 + 48));
    --*v4;
  }
  TransientPoolWithTag = CmpAllocateTransientPoolWithTag(PagedPool, 0x10uLL, 0x77554D43u, a4);
  v11 = TransientPoolWithTag;
  if ( !TransientPoolWithTag )
    return (unsigned int)-1073741670;
  *((_QWORD *)TransientPoolWithTag + 1) = 0LL;
  *TransientPoolWithTag = -1;
  TransientPoolWithTag[1] = -1;
  v12 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(v8 + 8))(v8, *(unsigned int *)(a1 + 92), v28);
  v13 = v12;
  if ( v12 )
  {
    v14 = *(_DWORD *)(v12 + 4);
    v15 = v14 + 0x80000000;
    if ( v14 < 0x80000000 )
      v15 = v14;
    LODWORD(v36) = v15;
    if ( v15 )
    {
      if ( v14 >= 0x80000000 )
      {
        v5 = (void *)(v13 + 8);
      }
      else
      {
        if ( !CmpGetValueData(
                v8,
                *(unsigned int *)(a1 + 92),
                v13,
                (unsigned int *)&v36,
                (__int64)&v24,
                (__int64)&v33,
                (__int64)v27) )
        {
          v9 = -1073741670;
LABEL_34:
          (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v8 + 16))(v8, v28);
          goto LABEL_35;
        }
        v5 = v24;
        v15 = (unsigned int)v36;
        v35 = v33;
        v34 = 1;
      }
    }
    if ( !(unsigned __int8)HvMarkCellDirty(v8, *(unsigned int *)(*(_QWORD *)(a1 + 48) + 40LL), 0LL) )
    {
      v9 = -1073741443;
LABEL_30:
      if ( v34 && v5 )
      {
        if ( v35 )
          ExFreePoolWithTag(v5, 0);
        else
          (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v8 + 16))(v8, v27);
      }
      goto LABEL_34;
    }
    v32 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(v8 + 8))(
            v8,
            *(unsigned int *)(*(_QWORD *)(a1 + 48) + 40LL),
            v26);
    *(_DWORD *)(a1 + 72) = *(_DWORD *)(*(_QWORD *)(a1 + 48) + 40LL) >> 31;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x8000uLL, 0x62534D43u);
    P = PoolWithTag;
    if ( !PoolWithTag )
    {
      v9 = -1073741670;
LABEL_28:
      if ( v32 )
        (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v8 + 16))(v8, v26);
      goto LABEL_30;
    }
    CmpInitializeValueNameString(v13, (__int64)v30, (__int64)PoolWithTag);
    v24 = v4 + 1;
    if ( !CmpFindNameInList(v8, v4 + 1, (unsigned __int16 *)v30, 0, &v33, &v36)
      || (LODWORD(Size) = v15,
          v17 = CmpAddValueKeyNew(v8, (unsigned __int16 *)v30, *(_DWORD *)(v13 + 12), v5, Size, *(_DWORD *)(a1 + 72)),
          v17 == -1) )
    {
      v9 = -1073741670;
LABEL_27:
      ExFreePoolWithTag(P, 0);
      goto LABEL_28;
    }
    v18 = (unsigned int)v36;
    if ( (_DWORD)v36 != -1 )
    {
      if ( (unsigned __int8)HvMarkCellDirty(v8, (unsigned int)v36, 0LL) )
      {
        v19 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(v8 + 8))(v8, v18, v25);
        v29 = v19;
        if ( v19 )
        {
          if ( !CmpMarkValueDataDirty(v8, v19) )
          {
            v9 = -1073741443;
LABEL_23:
            if ( v29 )
              (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v8 + 16))(v8, v25);
            goto LABEL_25;
          }
          v20 = CmpSwapValueInList(v8, v17, v33, (__int64)v24);
LABEL_21:
          v9 = v20;
          if ( v20 >= 0 )
          {
            v9 = 0;
            v11[4] = v30[0];
            v21 = (int)v36;
            *(_DWORD *)v11 = v17;
            *((_DWORD *)v11 + 1) = v21;
            *((_DWORD *)v11 + 3) = v15;
            *(_QWORD *)(a1 + 112) = v11;
            v11 = 0LL;
            v17 = -1;
          }
          goto LABEL_23;
        }
        v9 = -1073741670;
      }
      else
      {
        v9 = -1073741443;
      }
LABEL_25:
      if ( v17 != -1 )
        CmpFreeValue(v8, v17);
      goto LABEL_27;
    }
    v20 = CmpAddValueToList(v8, v17, v33, *(_DWORD *)(a1 + 72), (__int64)v24);
    goto LABEL_21;
  }
  v9 = -1073741670;
LABEL_35:
  if ( v11 )
    CmpFreeTransientPoolWithTag(v11, 0x77554D43u);
  return (unsigned int)v9;
}
