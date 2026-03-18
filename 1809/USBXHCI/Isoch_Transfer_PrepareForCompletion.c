/*
 * XREFs of Isoch_Transfer_PrepareForCompletion @ 0x1C002D860
 * Callers:
 *     Isoch_Transfer_Complete @ 0x1C002D4C0 (Isoch_Transfer_Complete.c)
 *     Isoch_Transfer_CompleteCancelable @ 0x1C002D590 (Isoch_Transfer_CompleteCancelable.c)
 * Callees:
 *     WPP_RECORDER_SF_DDqdDDDD @ 0x1C002E64C (WPP_RECORDER_SF_DDqdDDDD.c)
 */

void __fastcall Isoch_Transfer_PrepareForCompletion(__int64 a1, __int64 a2, int a3, int a4)
{
  __int64 v7; // r10
  unsigned __int16 v8; // ax
  __int64 v9; // rcx
  int v10; // edi
  __int64 v11; // r8
  unsigned int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // r8d
  struct _MDL *v16; // rcx
  __int64 v17; // rdx
  unsigned __int16 v18; // ax
  struct _MDL *v19; // rax

  v7 = *(_QWORD *)(a2 + 48);
  v8 = *(_WORD *)(v7 + 2);
  if ( v8 <= 0x38u || (v9 = 52LL, v8 > 0x3Au) )
    v9 = 36LL;
  v10 = 0;
  *(_DWORD *)(v7 + v9) = *(_DWORD *)(a2 + 84);
  v11 = 0LL;
  v12 = *(_DWORD *)(a2 + 96);
  if ( v12 )
  {
    do
    {
      if ( a3 == -1 )
      {
        v13 = *(_DWORD *)(v7 + 12 * v11 + 148);
        if ( v13 == -1 )
        {
          *(_DWORD *)(v7 + 12 * v11 + 148) = -1073610752;
          v13 = -1073610752;
        }
      }
      else
      {
        *(_DWORD *)(v7 + 12 * v11 + 148) = a3;
        v13 = a3;
      }
      if ( v13 )
      {
        ++*(_DWORD *)(v7 + 136);
        ++*(_DWORD *)(a1 + 260);
      }
      else
      {
        ++v10;
      }
      ++*(_DWORD *)(a1 + 256);
      v11 = (unsigned int)(v11 + 1);
      v12 = *(_DWORD *)(a2 + 96);
    }
    while ( (unsigned int)v11 < v12 );
  }
  if ( a4 == -1 )
  {
    a4 = 0;
    if ( *(_DWORD *)(v7 + 136) == v12 )
      a4 = -1073739008;
  }
  *(_DWORD *)(v7 + 4) = a4;
  if ( a4 <= -1073738240 )
  {
    if ( a4 == -1073738240 )
    {
      v14 = -1073741637;
      goto LABEL_33;
    }
    if ( a4 == -2147483136 || a4 == -2147482880 || a4 == -2147482112 || a4 == -1073739264 )
    {
      v14 = -1073741811;
      goto LABEL_33;
    }
LABEL_29:
    v14 = -1073741823;
    goto LABEL_33;
  }
  switch ( a4 )
  {
    case -1073737728:
      v14 = -1073741670;
      break;
    case -1073713152:
      v14 = -1073741810;
      break;
    case -1073676288:
      v14 = -1073741536;
      break;
    default:
      if ( (unsigned int)a4 <= 1 )
      {
        v14 = 0;
        break;
      }
      goto LABEL_29;
  }
LABEL_33:
  *(_DWORD *)(a2 + 68) = v14;
  ++*(_DWORD *)(a1 + 240);
  *(_QWORD *)(a1 + 248) += *(unsigned int *)(a2 + 84);
  v15 = *(_DWORD *)(a2 + 68);
  if ( v15 < 0 )
  {
    ++*(_DWORD *)(a1 + 244);
    v15 = *(_DWORD *)(a2 + 68);
  }
  WPP_RECORDER_SF_DDqdDDDD(
    *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
    *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL),
    v15,
    a4);
  v16 = *(struct _MDL **)(a2 + 72);
  if ( v16 )
  {
    v17 = *(_QWORD *)(a2 + 48);
    v18 = *(_WORD *)(v17 + 2);
    if ( v18 <= 0x38u || v18 > 0x3Au )
      v19 = *(struct _MDL **)(v17 + 48);
    else
      v19 = 0LL;
    if ( v16 != v19 )
    {
      IoFreeMdl(v16);
      *(_QWORD *)(a2 + 72) = 0LL;
    }
  }
  *(_BYTE *)(a2 + 16) = 0;
}
