/*
 * XREFs of ?PopAllSameSize@CSuperWetInkDataCircularQueue@@QEAAXV?$span@E$0?0@gsl@@IPEAI11@Z @ 0x1801BC8B4
 * Callers:
 *     ?LookupPerFrameData@CRemoteSuperWetSharedSection@@QEAAJIPEAV?$vector@EV?$allocator@E@std@@@std@@@Z @ 0x1801BC724 (-LookupPerFrameData@CRemoteSuperWetSharedSection@@QEAAJIPEAV-$vector@EV-$allocator@E@std@@@std@@.c)
 *     ?ConsumeTipPoints@CRemoteSuperWetInkScribble@@MEAAJXZ @ 0x1801BCC20 (-ConsumeTipPoints@CRemoteSuperWetInkScribble@@MEAAJXZ.c)
 * Callees:
 *     memcpy_s_1 @ 0x1801BCB90 (memcpy_s_1.c)
 */

unsigned __int64 __fastcall CSuperWetInkDataCircularQueue::PopAllSameSize(
        _DWORD *a1,
        unsigned int *a2,
        unsigned int a3,
        unsigned int *a4,
        _DWORD *a5,
        unsigned int *a6)
{
  unsigned int *v7; // r9
  unsigned int v9; // ebx
  unsigned __int64 result; // rax
  unsigned int v11; // esi
  unsigned int v12; // r13d
  unsigned int v13; // r12d
  __int64 v14; // r8
  __int64 v15; // r11
  signed __int64 v16; // rbp
  signed __int64 v17; // rdx
  char v19; // [rsp+70h] [rbp+18h]
  unsigned int v20; // [rsp+88h] [rbp+30h]

  v7 = a2;
  v9 = *(_DWORD *)(*(_QWORD *)a1 + 4LL);
  result = (unsigned __int64)a6;
  *a4 = 0;
  *a5 = 0;
  *a6 = v9;
  if ( v9 > a3 )
  {
    v11 = a1[2];
    v19 = 1;
    if ( v11 >= *a2 )
      v11 = *a2;
    v12 = v9 - a3;
    v13 = 0;
    if ( v11 )
    {
      do
      {
        if ( v13 >= v12 )
          break;
        result = *(_QWORD *)a1;
        v14 = (unsigned int)a1[2];
        if ( **(unsigned int **)a1 > v14 + (unsigned __int64)v9 - 4 )
          break;
        v15 = *a4;
        v20 = *(_DWORD *)(v9 % (unsigned int)v14 + *(_QWORD *)a1 + 4LL);
        result = v20 / (unsigned int)v14;
        v16 = *(unsigned int *)(v20 % (unsigned int)v14 + *(_QWORD *)a1 + 8LL);
        v17 = *(_QWORD *)v7 - v15;
        if ( v17 < v16 )
          break;
        memcpy_s_1(
          (void *const)(v15 + *((_QWORD *)v7 + 1)),
          v17,
          (const void *const)(v20 % (unsigned int)v14 + *(_QWORD *)a1 + 12LL),
          (unsigned int)v16);
        result = *(_QWORD *)a1;
        if ( **(_DWORD **)a1 > v20 + a1[2] )
          break;
        if ( v19 )
        {
          *a5 = v16;
          result = (unsigned int)v16;
          v19 = 0;
        }
        else
        {
          result = (unsigned int)*a5;
          if ( (_DWORD)v16 != (_DWORD)result )
            return result;
        }
        *a4 += result;
        v7 = a2;
        v13 += v9 - v20;
        v9 = v20;
      }
      while ( *a4 < v11 );
    }
  }
  return result;
}
