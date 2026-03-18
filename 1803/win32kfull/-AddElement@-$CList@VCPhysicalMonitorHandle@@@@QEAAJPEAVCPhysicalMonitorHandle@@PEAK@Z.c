/*
 * XREFs of ?AddElement@?$CList@VCPhysicalMonitorHandle@@@@QEAAJPEAVCPhysicalMonitorHandle@@PEAK@Z @ 0x1C023D5A0
 * Callers:
 *     ?AddHandleToTable@?$CMonitorHandleTable@VCPhysicalMonitorHandle@@PEAX@@QEAAJPEAVCPhysicalMonitorHandle@@PEAPEAX@Z @ 0x1C023D6A4 (-AddHandleToTable@-$CMonitorHandleTable@VCPhysicalMonitorHandle@@PEAX@@QEAAJPEAVCPhysicalMonitor.c)
 * Callees:
 *     memset @ 0x1C013D6C0 (memset.c)
 */

__int64 __fastcall CList<CPhysicalMonitorHandle>::AddElement(__int64 a1, __int64 a2, _DWORD *a3)
{
  __int64 v3; // rax
  unsigned int v7; // edi
  _QWORD *v8; // rsi
  unsigned __int64 v10; // rax
  unsigned int v11; // edx
  __int64 i; // r8
  __int64 v13; // rax
  char v14; // cl

  v3 = *(unsigned int *)(a1 + 12);
  if ( *(_DWORD *)(a1 + 8) == (_DWORD)v3 )
  {
    if ( (_DWORD)v3 )
    {
      v10 = 2 * v3;
      if ( v10 > 0xFFFFFFFF )
        return 3221225621LL;
      v7 = v10;
    }
    else
    {
      v7 = 16;
    }
    v8 = OPMAllocateMemory(8LL * v7, PagedPool);
    if ( !v8 )
      return 3221225495LL;
    v11 = *(_DWORD *)(a1 + 12);
    for ( i = 0LL; (unsigned int)i < v11; v11 = *(_DWORD *)(a1 + 12) )
    {
      v8[i] = *(_QWORD *)(*(_QWORD *)a1 + 8 * i);
      i = (unsigned int)(i + 1);
    }
    if ( v11 < v7 )
      memset(&v8[v11], 0, 8LL * (v7 - v11));
    OPMFreeMemory(*(void **)a1);
    *(_QWORD *)a1 = v8;
    *(_DWORD *)(a1 + 12) = v7;
  }
  v13 = 0LL;
  v14 = 0;
  do
  {
    if ( (unsigned int)v13 >= *(_DWORD *)(a1 + 12) )
      break;
    if ( !*(_QWORD *)(*(_QWORD *)a1 + 8 * v13) )
    {
      v14 = 1;
      *(_QWORD *)(*(_QWORD *)a1 + 8 * v13) = a2;
      *a3 = v13;
    }
    v13 = (unsigned int)(v13 + 1);
  }
  while ( !v14 );
  ++*(_DWORD *)(a1 + 8);
  return 0LL;
}
