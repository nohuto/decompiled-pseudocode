/*
 * XREFs of Isoch_Transfer_PrepareForCompletion @ 0x1C0032508
 * Callers:
 *     Isoch_Transfer_Complete @ 0x1C0032158 (Isoch_Transfer_Complete.c)
 *     Isoch_Transfer_CompleteCancelable @ 0x1C0032228 (Isoch_Transfer_CompleteCancelable.c)
 * Callees:
 *     WPP_RECORDER_SF_DDqdDDDD @ 0x1C00332FC (WPP_RECORDER_SF_DDqdDDDD.c)
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
  struct _MDL *v15; // rcx
  __int64 v16; // rax
  unsigned __int16 v17; // dx
  struct _MDL *v18; // rax

  v7 = *(_QWORD *)(a2 + 48);
  v8 = *(_WORD *)(v7 + 2);
  if ( v8 < 0x39u || (v9 = 52LL, v8 > 0x3Au) )
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
  if ( *(int *)(a2 + 68) < 0 )
    ++*(_DWORD *)(a1 + 244);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_DDqdDDDD(
      *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
      *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL),
      v11,
      a4);
  v15 = *(struct _MDL **)(a2 + 72);
  if ( v15 )
  {
    v16 = *(_QWORD *)(a2 + 48);
    v17 = *(_WORD *)(v16 + 2);
    if ( v17 < 0x39u || v17 > 0x3Au )
      v18 = *(struct _MDL **)(v16 + 48);
    else
      v18 = 0LL;
    if ( v15 != v18 )
    {
      IoFreeMdl(v15);
      *(_QWORD *)(a2 + 72) = 0LL;
    }
  }
  *(_BYTE *)(a2 + 16) = 0;
}
