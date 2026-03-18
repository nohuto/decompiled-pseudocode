/*
 * XREFs of ?ValidateGdiCommand@@YAEIIPEBE00_K1PEBUtagRECT@@2IIEEIPEAPEAE@Z @ 0x1C021A57C
 * Callers:
 *     ?VmBusCddGdiCommand@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C021AD90 (-VmBusCddGdiCommand@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ?ValidateRect@@YAEPEBUtagRECT@@@Z @ 0x1C021A7BC (-ValidateRect@@YAEPEBUtagRECT@@@Z.c)
 *     ?ValidateRectBounds@@YAEPEBUtagRECT@@I_K@Z @ 0x1C021A804 (-ValidateRectBounds@@YAEPEBUtagRECT@@I_K@Z.c)
 *     ?ValidateSubRect@@YAEPEBUtagRECT@@0@Z @ 0x1C021A8B8 (-ValidateSubRect@@YAEPEBUtagRECT@@0@Z.c)
 */

unsigned __int8 __fastcall ValidateGdiCommand(
        __int64 a1,
        __int64 a2,
        const unsigned __int8 *a3,
        const unsigned __int8 *a4,
        const unsigned __int8 *a5,
        unsigned __int64 a6,
        unsigned __int64 a7,
        const struct tagRECT *a8,
        const struct tagRECT *a9,
        unsigned int a10,
        unsigned int a11,
        unsigned __int8 a12,
        char a13,
        unsigned int a14,
        unsigned __int8 **a15)
{
  unsigned __int64 v15; // rax
  unsigned int v16; // r10d
  __int64 v17; // rax
  unsigned __int8 *v18; // rdx
  __int64 v19; // rdx
  const unsigned __int8 *v20; // rcx
  const unsigned __int8 *v21; // rsi
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  char v25; // bl
  __int64 v26; // rax
  int v27; // edi
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8

  v15 = 16LL * a14;
  if ( v15 > 0xFFFFFFFF )
  {
    v17 = WdLogNewEntry5_WdError(a1, a2, 0xFFFFFFFFLL);
    *(_QWORD *)(v17 + 24) = 1633LL;
    goto LABEL_30;
  }
  v16 = v15 + a1;
  if ( (int)v15 + (int)a1 < (unsigned int)a1 )
  {
    v17 = WdLogNewEntry5_WdError(a1, a2, 0xFFFFFFFFLL);
    *(_QWORD *)(v17 + 24) = 1639LL;
    goto LABEL_30;
  }
  if ( v16 <= (unsigned int)a2 )
  {
    v18 = *a15;
    if ( *a15 <= a5 )
    {
      v17 = WdLogNewEntry5_WdError(a1, v18, a15);
      *(_QWORD *)(v17 + 24) = 1649LL;
      goto LABEL_30;
    }
    v19 = v18 - a5;
    v20 = &a4[v16];
    v21 = &a3[v19];
    *a15 = (unsigned __int8 *)&a3[v19];
    if ( &a3[v19] <= a4 || v21 >= v20 || (v20 -= (__int64)v21, (__int64)v20 < (int)v15) )
    {
      v17 = WdLogNewEntry5_WdError(v20, v19, a15);
      *(_QWORD *)(v17 + 24) = 1656LL;
      goto LABEL_30;
    }
    v25 = 0;
    if ( !ValidateRect(a8) )
    {
      v26 = WdLogNewEntry5_WdError(v23, v22, v24);
      *(_QWORD *)(v26 + 24) = 1670LL;
LABEL_24:
      WdLogEvent5_WdError(v26);
      return v25;
    }
    v27 = 0;
    if ( a14 )
    {
      while ( ValidateSubRect((const struct tagRECT *)&v21[16 * v27], a8) )
      {
        if ( !ValidateRectBounds((const struct tagRECT *)&v21[16 * v27], a10, a6) )
        {
          v26 = WdLogNewEntry5_WdError(v32, v31, v33);
          *(_QWORD *)(v26 + 24) = 1690LL;
          goto LABEL_24;
        }
        if ( ++v27 >= a14 )
          goto LABEL_16;
      }
      v26 = WdLogNewEntry5_WdError(v29, v28, v30);
      *(_QWORD *)(v26 + 24) = 1685LL;
      goto LABEL_24;
    }
LABEL_16:
    if ( a9 )
    {
      if ( !ValidateRect(a9) )
      {
        v26 = WdLogNewEntry5_WdError(v35, v34, v36);
        *(_QWORD *)(v26 + 24) = 1698LL;
        goto LABEL_24;
      }
      if ( a13 && !ValidateRectBounds(a9, a11, a7) )
      {
        v26 = WdLogNewEntry5_WdError(v38, v37, v39);
        *(_QWORD *)(v26 + 24) = 1705LL;
        goto LABEL_24;
      }
    }
    return 1;
  }
  v17 = WdLogNewEntry5_WdError(a1, a2, 0xFFFFFFFFLL);
  *(_QWORD *)(v17 + 24) = 1644LL;
LABEL_30:
  WdLogEvent5_WdError(v17);
  return 0;
}
