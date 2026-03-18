/*
 * XREFs of ??1VIDMM_PROCESS_HEAP@@UEAA@XZ @ 0x1C00C550C
 * Callers:
 *     ??_GVIDMM_PROCESS_HEAP@@UEAAPEAXI@Z @ 0x1C0029D00 (--_GVIDMM_PROCESS_HEAP@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??_GDXGFASTMUTEX@@QEAAPEAXI@Z @ 0x1C0024EF8 (--_GDXGFASTMUTEX@@QEAAPEAXI@Z.c)
 */

void __fastcall VIDMM_PROCESS_HEAP::~VIDMM_PROCESS_HEAP(VIDMM_PROCESS_HEAP *this, __int64 a2)
{
  DXGFASTMUTEX *v3; // rcx
  _QWORD *v4; // rax
  _QWORD *v5; // rax
  _QWORD *v6; // rax
  _QWORD *v7; // rax
  __int64 v8; // rcx
  __int64 v9; // r8
  _QWORD *v10; // rdx
  _QWORD *v11; // rax
  _QWORD *v12; // rax

  *(_QWORD *)this = &VIDMM_PROCESS_HEAP::`vftable';
  v3 = (DXGFASTMUTEX *)*((_QWORD *)this + 2);
  if ( v3 )
    DXGFASTMUTEX::`scalar deleting destructor'(v3);
  *((_QWORD *)this + 2) = 0LL;
  if ( *((VIDMM_PROCESS_HEAP **)this + 26) != (VIDMM_PROCESS_HEAP *)((char *)this + 208) )
  {
    v4 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v3, a2);
    v4[3] = 270LL;
    v4[4] = 2LL;
    v4[5] = 0LL;
    v4[6] = 0LL;
    v4[7] = 0LL;
    WdLogEvent5_WdCriticalError(v4);
  }
  if ( *((VIDMM_PROCESS_HEAP **)this + 24) != (VIDMM_PROCESS_HEAP *)((char *)this + 192) )
  {
    v5 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v3, a2);
    v5[3] = 270LL;
    v5[4] = 2LL;
    v5[5] = 1LL;
    v5[6] = 0LL;
    v5[7] = 0LL;
    WdLogEvent5_WdCriticalError(v5);
  }
  if ( *((VIDMM_PROCESS_HEAP **)this + 28) != (VIDMM_PROCESS_HEAP *)((char *)this + 224) )
  {
    v6 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v3, a2);
    v6[3] = 270LL;
    v6[4] = 2LL;
    v6[5] = 2LL;
    v6[6] = 0LL;
    v6[7] = 0LL;
    WdLogEvent5_WdCriticalError(v6);
  }
  if ( *((VIDMM_PROCESS_HEAP **)this + 30) != (VIDMM_PROCESS_HEAP *)((char *)this + 240) )
  {
    v7 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v3, a2);
    v8 = 2LL;
    v9 = 2LL;
    v7[3] = 270LL;
    v10 = v7 + 4;
    do
    {
      *v10++ = v8++;
      --v9;
    }
    while ( v9 );
    v7[6] = 0LL;
    v7[7] = 0LL;
    WdLogEvent5_WdCriticalError(v7);
  }
  if ( *((VIDMM_PROCESS_HEAP **)this + 32) != (VIDMM_PROCESS_HEAP *)((char *)this + 256) )
  {
    v11 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v3, a2);
    v11[3] = 270LL;
    v11[4] = 2LL;
    v11[5] = 4LL;
    v11[6] = 0LL;
    v11[7] = 0LL;
    WdLogEvent5_WdCriticalError(v11);
  }
  if ( *((VIDMM_PROCESS_HEAP **)this + 34) != (VIDMM_PROCESS_HEAP *)((char *)this + 272) )
  {
    v12 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v3, a2);
    v12[3] = 270LL;
    v12[4] = 2LL;
    v12[5] = 5LL;
    v12[6] = 0LL;
    v12[7] = 0LL;
    WdLogEvent5_WdCriticalError(v12);
  }
  ExDeletePagedLookasideList((PPAGED_LOOKASIDE_LIST)((char *)this + 64));
  *(_QWORD *)this = &VIDMM_PROCESS_HEAP_INTERFACE::`vftable';
}
