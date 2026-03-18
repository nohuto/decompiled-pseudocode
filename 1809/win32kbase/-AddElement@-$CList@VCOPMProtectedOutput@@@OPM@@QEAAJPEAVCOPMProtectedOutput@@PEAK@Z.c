/*
 * XREFs of ?AddElement@?$CList@VCOPMProtectedOutput@@@OPM@@QEAAJPEAVCOPMProtectedOutput@@PEAK@Z @ 0x1C00A1874
 * Callers:
 *     ?CreateProtectedOutput@COPM@@QEAAJW4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS@@AEAU_LUID@@KPEAPEAXPEAH@Z @ 0x1C00A175C (-CreateProtectedOutput@COPM@@QEAAJW4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS@@AEAU_LUID@@KPEAPEAXPEAH.c)
 * Callees:
 *     memset @ 0x1C00AF780 (memset.c)
 */

__int64 __fastcall OPM::CList<COPMProtectedOutput>::AddElement(__int64 a1, __int64 a2, _DWORD *a3)
{
  __int64 v3; // rax
  unsigned int v7; // edi
  _QWORD *PoolWithTag; // rsi
  unsigned int v9; // edx
  __int64 i; // r8
  __int64 v11; // rax
  char v12; // cl
  unsigned __int64 v14; // rax

  v3 = *(unsigned int *)(a1 + 12);
  if ( *(_DWORD *)(a1 + 8) == (_DWORD)v3 )
  {
    if ( (_DWORD)v3 )
    {
      v14 = 2 * v3;
      if ( v14 > 0xFFFFFFFF )
        return v14 > 0xFFFFFFFF ? 0xC0000095 : 0;
      v7 = v14;
    }
    else
    {
      v7 = 16;
    }
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8LL * v7, 0x4D504F47u);
    if ( !PoolWithTag )
      return 3221225495LL;
    v9 = *(_DWORD *)(a1 + 12);
    for ( i = 0LL; (unsigned int)i < v9; v9 = *(_DWORD *)(a1 + 12) )
    {
      PoolWithTag[i] = *(_QWORD *)(*(_QWORD *)a1 + 8 * i);
      i = (unsigned int)(i + 1);
    }
    if ( v9 < v7 )
      memset(&PoolWithTag[v9], 0, 8LL * (v7 - v9));
    if ( *(_QWORD *)a1 )
      ExFreePoolWithTag(*(PVOID *)a1, 0x4D504F47u);
    *(_QWORD *)a1 = PoolWithTag;
    *(_DWORD *)(a1 + 12) = v7;
  }
  v11 = 0LL;
  v12 = 0;
  do
  {
    if ( (unsigned int)v11 >= *(_DWORD *)(a1 + 12) )
      break;
    if ( !*(_QWORD *)(*(_QWORD *)a1 + 8 * v11) )
    {
      v12 = 1;
      *(_QWORD *)(*(_QWORD *)a1 + 8 * v11) = a2;
      *a3 = v11;
    }
    v11 = (unsigned int)(v11 + 1);
  }
  while ( !v12 );
  ++*(_DWORD *)(a1 + 8);
  return 0LL;
}
