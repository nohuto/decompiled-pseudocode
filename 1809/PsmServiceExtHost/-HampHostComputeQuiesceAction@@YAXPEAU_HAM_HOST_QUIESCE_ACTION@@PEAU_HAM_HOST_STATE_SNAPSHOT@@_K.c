/*
 * XREFs of ?HampHostComputeQuiesceAction@@YAXPEAU_HAM_HOST_QUIESCE_ACTION@@PEAU_HAM_HOST_STATE_SNAPSHOT@@_KKK0@Z @ 0x18003AEAC
 * Callers:
 *     ?HampHostUpdateQuiesceState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K1@Z @ 0x180010680 (-HampHostUpdateQuiesceState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K1@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall HampHostComputeQuiesceAction(
        struct _HAM_HOST_QUIESCE_ACTION *a1,
        struct _HAM_HOST_STATE_SNAPSHOT *a2,
        unsigned __int64 a3,
        unsigned int a4,
        unsigned int a5,
        struct _HAM_HOST_QUIESCE_ACTION *a6)
{
  int v6; // r10d
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // r9
  int v9; // ecx
  unsigned __int64 v10; // r11
  int v11; // r10d
  char v12; // dl
  struct _HAM_HOST_QUIESCE_ACTION *v13; // rax
  int v14; // ecx
  unsigned __int64 v15; // rax
  int v16; // ecx

  v6 = *(_DWORD *)a2;
  v7 = a4;
  if ( (*(_DWORD *)a2 & 6) != 0 )
    a3 = *((_QWORD *)a1 + 1);
  v8 = *((_QWORD *)a1 + 1) + *((_QWORD *)a1 + 2) - a3;
  if ( v8 >= a5 )
    v8 = a5;
  if ( (v6 & 8) != 0 )
  {
    v13 = a6;
    *(_QWORD *)a6 = 0LL;
    *((_QWORD *)a6 + 1) = 0LL;
    *((_QWORD *)a6 + 2) = 0LL;
    *((_QWORD *)a6 + 1) = 0LL;
    *(_BYTE *)a6 = 5;
    goto LABEL_11;
  }
  v9 = *(unsigned __int8 *)a1 - 1;
  if ( !v9 )
  {
    v10 = a5 - v8;
    v11 = *(_DWORD *)a2 & 1;
    if ( !v11 )
      v10 = a3;
    a3 = v10;
    v12 = (v11 != 0) + 1;
    if ( v10 )
      goto LABEL_10;
    goto LABEL_22;
  }
  v14 = v9 - 1;
  if ( !v14 )
  {
    v12 = 1;
    if ( (v6 & 1) != 0 )
    {
      v12 = 2;
    }
    else
    {
      v15 = v7;
      if ( v7 >= a3 )
        v15 = a3;
      a3 = v15;
    }
    if ( !a3 )
    {
      v12 = 3;
      a3 = 1000LL;
    }
    goto LABEL_10;
  }
  v16 = v14 - 1;
  if ( !v16 )
  {
    v12 = 4 - (a3 != 0);
    goto LABEL_10;
  }
  if ( v16 == 1 )
  {
    a3 = 0LL;
LABEL_22:
    v12 = 4;
LABEL_10:
    v13 = a6;
    *(_QWORD *)a6 = 0LL;
    *(_BYTE *)a6 = v12;
    *((_QWORD *)a6 + 1) = a3;
LABEL_11:
    *((_QWORD *)v13 + 2) = v8;
  }
}
