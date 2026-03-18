/*
 * XREFs of ?AddElement@?$CList@VCPhysicalMonitorHandle@@@OPM@@QEAAJPEAVCPhysicalMonitorHandle@@PEAK@Z @ 0x1C0254AC4
 * Callers:
 *     ?AddHandleToTable@?$CMonitorHandleTable@VCPhysicalMonitorHandle@@PEAX@OPM@@QEAAJPEAVCPhysicalMonitorHandle@@PEAPEAX@Z @ 0x1C0254BD8 (-AddHandleToTable@-$CMonitorHandleTable@VCPhysicalMonitorHandle@@PEAX@OPM@@QEAAJPEAVCPhysicalMon.c)
 * Callees:
 *     memset @ 0x1C0163640 (memset.c)
 */

__int64 __fastcall OPM::CList<CPhysicalMonitorHandle>::AddElement(__int64 a1, __int64 a2, _DWORD *a3)
{
  __int64 v3; // rax
  unsigned int v7; // edi
  _QWORD *v8; // rsi
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rdx
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
        return v10 > 0xFFFFFFFF ? 0xC0000095 : 0;
      v7 = v10;
    }
    else
    {
      v7 = 16;
    }
    v8 = OPM::OPMAllocateMemory((OPM *)(8LL * v7), 1uLL, (enum _POOL_TYPE)a3);
    if ( !v8 )
      return 3221225495LL;
    v11 = *(unsigned int *)(a1 + 12);
    for ( i = 0LL; (unsigned int)i < (unsigned int)v11; v11 = *(unsigned int *)(a1 + 12) )
    {
      v8[i] = *(_QWORD *)(*(_QWORD *)a1 + 8 * i);
      i = (unsigned int)(i + 1);
    }
    if ( (unsigned int)v11 < v7 )
      memset(&v8[(unsigned int)v11], 0, 8LL * (v7 - (unsigned int)v11));
    OPM::OPMFreeMemory(*(OPM **)a1, (void *)v11);
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
