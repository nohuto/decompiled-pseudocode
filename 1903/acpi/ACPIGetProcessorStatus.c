/*
 * XREFs of ACPIGetProcessorStatus @ 0x1C0024DA0
 * Callers:
 *     ACPIGetWorkerForInteger @ 0x1C00249A0 (ACPIGetWorkerForInteger.c)
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x1C001145C (AMLIDereferenceHandleEx.c)
 *     AMLIGetNamedChild @ 0x1C0015140 (AMLIGetNamedChild.c)
 */

__int64 __fastcall ACPIGetProcessorStatus(__int64 a1, __int64 a2, int *a3)
{
  unsigned int v3; // esi
  volatile signed __int32 *v5; // r14
  __int64 *v6; // rcx
  int v8; // ebx
  __int64 v9; // rax
  __int16 v10; // dx
  int v11; // r8d
  __int64 v12; // rcx
  char *v13; // r10
  unsigned __int64 v14; // r11
  unsigned __int64 i; // rax
  unsigned __int8 v16; // cl
  unsigned __int64 v17; // r9
  char *v18; // rdx
  char v19; // al
  __int16 v20; // ax
  char v21; // al
  __int64 result; // rax
  __int64 *v23; // rax
  __int64 v24; // r8
  __int16 v25; // ax
  const char *v26; // rcx
  __int16 v27; // ax

  v3 = 0;
  dword_1C0082AD0 = 0;
  v5 = 0LL;
  v6 = *(__int64 **)(a1 + 712);
  v8 = 15;
  if ( !v6 )
    goto LABEL_52;
  if ( (*(_QWORD *)(a1 + 8) & 0x1000000000LL) == 0 )
    goto LABEL_52;
  v9 = *v6;
  v10 = *(_WORD *)(*v6 + 66);
  if ( v10 == 12 && !*(_QWORD *)(v9 + 96) )
    goto LABEL_52;
  if ( v10 == 12 )
  {
    v11 = *(unsigned __int8 *)(*(_QWORD *)(v9 + 96) + 8LL);
    goto LABEL_7;
  }
  v23 = AMLIGetNamedChild(v6, 1145656671);
  v5 = (volatile signed __int32 *)v23;
  if ( !v23 )
    goto LABEL_25;
  v24 = *v23;
  v25 = *(_WORD *)(*v23 + 66);
  if ( v25 != 1 )
  {
    if ( v25 != 8 )
      goto LABEL_25;
    if ( (*(_QWORD *)(a1 + 8) & 0x400000000000LL) != 0 )
    {
      v26 = *(const char **)(a1 + 568);
      if ( v26 )
      {
        v11 = _strtoui64(v26, 0LL, 16);
        goto LABEL_7;
      }
    }
LABEL_52:
    v3 = -1073741808;
    goto LABEL_22;
  }
  v11 = *(_DWORD *)(v24 + 80);
LABEL_7:
  *(_DWORD *)(a1 + 196) = v11;
  v12 = *((_QWORD *)AcpiInformation + 4);
  if ( v12 )
  {
    v13 = (char *)(v12 + 44);
    v14 = v12 + *(unsigned int *)(v12 + 4);
    for ( i = v12 + 46; ; i = v17 + 2 )
    {
      if ( i > v14 )
        goto LABEL_25;
      v16 = v13[1];
      if ( v16 < 2u )
        goto LABEL_25;
      v17 = (unsigned __int64)&v13[v16];
      if ( v17 > v14 )
        goto LABEL_25;
      v18 = v13;
      v13 += v16;
      v19 = *v18;
      if ( *v18 )
      {
        if ( v19 == 11 )
        {
          if ( v16 >= 0x28u )
          {
            v27 = *(_WORD *)(**(_QWORD **)(a1 + 712) + 66LL);
            if ( (v27 == 12 || v27 == 6 && (*(_QWORD *)(a1 + 8) & 0x1000000000LL) != 0) && *((_DWORD *)v18 + 2) == v11 )
            {
              v21 = v18[12];
              goto LABEL_21;
            }
          }
        }
        else if ( v19 == 9
               && v16 >= 0x10u
               && *(_WORD *)(**(_QWORD **)(a1 + 712) + 66LL) == 6
               && (*(_QWORD *)(a1 + 8) & 0x1000000000LL) != 0
               && *((_DWORD *)v18 + 3) == v11 )
        {
          if ( (v18[8] & 1) == 0 )
LABEL_25:
            v8 = 0;
          goto LABEL_22;
        }
      }
      else if ( v16 >= 8u )
      {
        v20 = *(_WORD *)(**(_QWORD **)(a1 + 712) + 66LL);
        if ( (v20 == 12 || v20 == 6 && (*(_QWORD *)(a1 + 8) & 0x1000000000LL) != 0) && (unsigned __int8)v18[2] == v11 )
        {
          v21 = v18[4];
LABEL_21:
          v8 = (v21 & 1) != 0 ? 0xF : 0;
          goto LABEL_22;
        }
      }
    }
  }
  if ( dword_1C0082AD0 )
  {
    if ( dword_1C0083400 != v11 )
      goto LABEL_25;
  }
  else
  {
    dword_1C0083400 = v11;
    dword_1C0082AD0 = 1;
  }
LABEL_22:
  if ( v5 )
    AMLIDereferenceHandleEx(v5);
  result = v3;
  *a3 = v8;
  return result;
}
