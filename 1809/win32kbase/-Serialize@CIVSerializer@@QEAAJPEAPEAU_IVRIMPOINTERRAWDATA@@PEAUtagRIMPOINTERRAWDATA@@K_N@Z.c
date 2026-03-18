/*
 * XREFs of ?Serialize@CIVSerializer@@QEAAJPEAPEAU_IVRIMPOINTERRAWDATA@@PEAUtagRIMPOINTERRAWDATA@@K_N@Z @ 0x1C0155B58
 * Callers:
 *     ?IVMeasureRimCompleteFrame@@YAJPEAURIMCOMPLETEFRAME@@U_UNICODE_STRING@@AEAUCIVSerializer@@@Z @ 0x1C0154464 (-IVMeasureRimCompleteFrame@@YAJPEAURIMCOMPLETEFRAME@@U_UNICODE_STRING@@AEAUCIVSerializer@@@Z.c)
 *     ?IVSerializeRimCompleteFrameForTouchInputPacket@@YAHPEAURIMCOMPLETEFRAME@@U_UNICODE_STRING@@AEAUCIVSerializer@@@Z @ 0x1C0154738 (-IVSerializeRimCompleteFrameForTouchInputPacket@@YAHPEAURIMCOMPLETEFRAME@@U_UNICODE_STRING@@AEAU.c)
 * Callees:
 *     ?Ensure@CIVSerializer@@QEAA_N_K@Z @ 0x1C01541A0 (-Ensure@CIVSerializer@@QEAA_N_K@Z.c)
 *     ?Serialize@CIVSerializer@@QEAAJPEAPEAXPEAX_K_N@Z @ 0x1C0155E20 (-Serialize@CIVSerializer@@QEAAJPEAPEAXPEAX_K_N@Z.c)
 */

__int64 __fastcall CIVSerializer::Serialize(
        CIVSerializer *this,
        struct _IVRIMPOINTERRAWDATA **a2,
        struct tagRIMPOINTERRAWDATA *a3,
        unsigned int a4,
        bool a5)
{
  unsigned int v8; // ecx
  int *v9; // rdx
  __int64 v10; // r8
  int v11; // eax
  __int64 v12; // r9
  __int64 v13; // r10
  __int64 v14; // rbp
  struct _IVRIMPOINTERRAWDATA *v15; // rbx
  unsigned int *v16; // r15
  char *v17; // r13
  unsigned int v18; // eax

  v8 = 24 * a4;
  if ( a4 )
  {
    v9 = (int *)((char *)a3 + 4);
    v10 = a4;
    do
    {
      v11 = *v9;
      v9 += 6;
      v8 += (v11 + 7) & 0xFFFFFFF8;
      --v10;
    }
    while ( v10 );
  }
  if ( a5 )
  {
    *((_QWORD *)this + 2) += (v8 + 7LL) & 0xFFFFFFFFFFFFFFF8uLL;
    return 0LL;
  }
  if ( CIVSerializer::Ensure(this, 24LL * a4) )
  {
    v14 = 0LL;
    v15 = (struct _IVRIMPOINTERRAWDATA *)(v13 + *(_QWORD *)this);
    *a2 = v15;
    if ( !a4 )
    {
LABEL_14:
      *a2 = (struct _IVRIMPOINTERRAWDATA *)(((unsigned __int64)v15 - *(_QWORD *)this) | 1);
      return 0LL;
    }
    v16 = (unsigned int *)(v12 + 4);
    v17 = (char *)v15 - v12;
    while ( 1 )
    {
      *(_DWORD *)&v17[(_QWORD)v16 - 4] = *(v16 - 1);
      v18 = *v16;
      *(_QWORD *)&v17[(_QWORD)v16 + 12] = 0LL;
      *(_DWORD *)&v17[(_QWORD)v16] = v18;
      if ( (int)CIVSerializer::Serialize(this, (void **)v15 + 3 * v14 + 1, *(void **)(v16 + 1), *v16, 0) < 0 )
        break;
      if ( (_DWORD)v14 )
        *((_QWORD *)v15 + 3 * (unsigned int)(v14 - 1) + 2) = ((unsigned __int64)v15 + 24 * v14 - *(_QWORD *)this) | 1;
      v14 = (unsigned int)(v14 + 1);
      v16 += 6;
      if ( (unsigned int)v14 >= a4 )
      {
        v15 = *a2;
        goto LABEL_14;
      }
    }
  }
  return 3221225495LL;
}
