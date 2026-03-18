/*
 * XREFs of ?ValidateGdiCommand@@YAEIIPEBE00_K1PEBUtagRECT@@2IIEEIPEAPEAE@Z @ 0x1C01EA5B4
 * Callers:
 *     ?VmBusCddGdiCommand@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C01EAD90 (-VmBusCddGdiCommand@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ?ValidateRect@@YAEPEBUtagRECT@@@Z @ 0x1C01EA7F8 (-ValidateRect@@YAEPEBUtagRECT@@@Z.c)
 *     ?ValidateRectBounds@@YAEPEBUtagRECT@@I_K@Z @ 0x1C01EA840 (-ValidateRectBounds@@YAEPEBUtagRECT@@I_K@Z.c)
 *     ?ValidateSubRect@@YAEPEBUtagRECT@@0@Z @ 0x1C01EA90C (-ValidateSubRect@@YAEPEBUtagRECT@@0@Z.c)
 */

unsigned __int8 __fastcall ValidateGdiCommand(
        __int64 a1,
        unsigned int a2,
        const unsigned __int8 *a3,
        unsigned __int8 *a4,
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
  __int64 v16; // rax
  unsigned int v17; // eax
  const unsigned __int8 *v18; // rcx
  unsigned __int8 *v19; // rdi
  __int64 v20; // rcx
  char v21; // bl
  __int64 v22; // rax
  int v23; // esi
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // rcx

  v15 = 16LL * a14;
  if ( v15 <= 0xFFFFFFFF )
  {
    if ( (int)v15 + (int)a1 < (unsigned int)a1 )
    {
      v16 = WdLogNewEntry5_WdError(a1);
      *(_QWORD *)(v16 + 24) = 1656LL;
      goto LABEL_31;
    }
    v17 = v15 + a1;
    if ( v17 > a2 )
    {
      v16 = WdLogNewEntry5_WdError(a1);
      *(_QWORD *)(v16 + 24) = 1661LL;
      goto LABEL_31;
    }
    if ( *a15 <= a5 )
    {
      v16 = WdLogNewEntry5_WdError(a1);
      *(_QWORD *)(v16 + 24) = 1666LL;
      goto LABEL_31;
    }
    v18 = &a4[v17];
    v19 = (unsigned __int8 *)&a3[*a15 - a5];
    *a15 = v19;
    if ( v19 <= a4 || v19 >= v18 || (v18 -= (__int64)v19, (__int64)v18 < (int)(16 * a14)) )
    {
      v16 = WdLogNewEntry5_WdError(v18);
      *(_QWORD *)(v16 + 24) = 1673LL;
      goto LABEL_31;
    }
    v21 = 0;
    if ( !ValidateRect(a8) )
    {
      v22 = WdLogNewEntry5_WdError(v20);
      *(_QWORD *)(v22 + 24) = 1687LL;
LABEL_27:
      WdLogEvent5_WdError(v22);
      return v21;
    }
    v23 = 0;
    if ( a14 )
    {
      while ( ValidateSubRect((const struct tagRECT *)&v19[16 * v23], a8) )
      {
        if ( !ValidateRectBounds((const struct tagRECT *)&v19[16 * v23], a10, a6) )
        {
          v22 = WdLogNewEntry5_WdError(v25);
          *(_QWORD *)(v22 + 24) = 1707LL;
          goto LABEL_27;
        }
        if ( ++v23 >= a14 )
          goto LABEL_19;
      }
      v22 = WdLogNewEntry5_WdError(v24);
      *(_QWORD *)(v22 + 24) = 1702LL;
      goto LABEL_27;
    }
LABEL_19:
    if ( a9 )
    {
      if ( !ValidateRect(a9) )
      {
        v22 = WdLogNewEntry5_WdError(v26);
        *(_QWORD *)(v22 + 24) = 1715LL;
        goto LABEL_27;
      }
      if ( a13 && !ValidateRectBounds(a9, a11, a7) )
      {
        v22 = WdLogNewEntry5_WdError(v27);
        *(_QWORD *)(v22 + 24) = 1722LL;
        goto LABEL_27;
      }
    }
    return 1;
  }
  v16 = WdLogNewEntry5_WdError(a1);
  *(_QWORD *)(v16 + 24) = 1650LL;
LABEL_31:
  WdLogEvent5_WdError(v16);
  return 0;
}
