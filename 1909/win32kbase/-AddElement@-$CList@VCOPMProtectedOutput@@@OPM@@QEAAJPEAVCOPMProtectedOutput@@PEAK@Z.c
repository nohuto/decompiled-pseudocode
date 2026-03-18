/*
 * XREFs of ?AddElement@?$CList@VCOPMProtectedOutput@@@OPM@@QEAAJPEAVCOPMProtectedOutput@@PEAK@Z @ 0x1C00AF774
 * Callers:
 *     ?CreateProtectedOutput@COPM@@QEAAJW4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS@@AEAU_LUID@@KPEAPEAXPEAH@Z @ 0x1C00AF65C (-CreateProtectedOutput@COPM@@QEAAJW4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS@@AEAU_LUID@@KPEAPEAXPEAH.c)
 * Callees:
 *     memset @ 0x1C00BF640 (memset.c)
 */

__int64 __fastcall OPM::CList<COPMProtectedOutput>::AddElement(__int64 a1, __int64 a2, _DWORD *a3)
{
  int v3; // eax
  unsigned __int64 v7; // rdi
  _QWORD *PoolWithTag; // rsi
  unsigned int v9; // edx
  __int64 i; // r8
  __int64 v11; // rax
  char v12; // cl

  v3 = *(_DWORD *)(a1 + 12);
  if ( *(_DWORD *)(a1 + 8) == v3 )
  {
    if ( v3 )
    {
      v7 = 2LL * *(unsigned int *)(a1 + 12);
      if ( v7 > 0xFFFFFFFF )
        return 3221225621LL;
    }
    else
    {
      LODWORD(v7) = 16;
    }
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8LL * (unsigned int)v7, 0x4D504F47u);
    if ( !PoolWithTag )
      return 3221225495LL;
    v9 = *(_DWORD *)(a1 + 12);
    for ( i = 0LL; (unsigned int)i < v9; v9 = *(_DWORD *)(a1 + 12) )
    {
      PoolWithTag[i] = *(_QWORD *)(*(_QWORD *)a1 + 8 * i);
      i = (unsigned int)(i + 1);
    }
    if ( v9 < (unsigned int)v7 )
      memset(&PoolWithTag[v9], 0, 8LL * ((unsigned int)v7 - v9));
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
