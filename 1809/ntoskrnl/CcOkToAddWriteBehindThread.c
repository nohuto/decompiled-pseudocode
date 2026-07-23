/*
 * XREFs of CcOkToAddWriteBehindThread @ 0x1402696D0
 * Callers:
 *     CcWorkerThread @ 0x14007F2D0 (CcWorkerThread.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CcOkToAddWriteBehindThread(__int64 a1)
{
  __int64 v1; // r9
  __int64 v2; // r8
  unsigned int v4; // edx
  unsigned int v5; // edi
  unsigned int v6; // eax
  unsigned int v7; // r11d
  __int64 v8; // rbx
  unsigned int v9; // r9d
  __int64 v10; // r8
  int v11; // eax
  int v12; // eax
  unsigned int v13; // eax
  int v14; // ecx

  v1 = *(unsigned int *)(a1 + 304);
  v2 = *(_QWORD *)(a1 + 680);
  v4 = *(_DWORD *)(a1 + 456);
  v5 = 0;
  v6 = *(_DWORD *)(v2 + 8 * v1);
  v7 = v6 - v4;
  *(_DWORD *)(v2 + 8 * v1) = v4;
  v8 = *(unsigned int *)(a1 + 304);
  v9 = 1;
  v10 = *(_QWORD *)(a1 + 680);
  if ( v6 < v4 )
    v7 = 0;
  if ( (_DWORD)v8 )
    v5 = *(_DWORD *)(v10 + 8LL * (unsigned int)(v8 - 1) + 4);
  *(_DWORD *)(v10 + 8 * v8 + 4) = v7;
  if ( v7 )
  {
    v11 = *(_DWORD *)(a1 + 688);
    if ( v7 < v5 )
    {
      if ( v11 > 0 )
      {
        *(_DWORD *)(a1 + 688) = 0;
        v11 = 0;
      }
      v12 = v11 - 1;
    }
    else
    {
      if ( v11 < 0 )
      {
        *(_DWORD *)(a1 + 688) = 0;
        v11 = 0;
      }
      v12 = v11 + 1;
    }
    *(_DWORD *)(a1 + 688) = v12;
    if ( v12 == 3 )
    {
      v9 = 2;
      *(_DWORD *)(a1 + 688) = 0;
      v13 = *(_DWORD *)(a1 + 304);
      if ( v13 < *(_DWORD *)(a1 + 308) )
      {
        *(_DWORD *)(v10 + 8LL * (v13 + 1)) = *(_DWORD *)(a1 + 456);
        *(_DWORD *)(v10 + 8LL * (unsigned int)(*(_DWORD *)(a1 + 304) + 1) + 4) = 0;
      }
    }
    else if ( v12 == -3 )
    {
      v14 = *(_DWORD *)(a1 + 304);
      v9 = 3;
      *(_DWORD *)(a1 + 688) = 0;
      if ( v14 )
      {
        *(_DWORD *)(v10 + 8LL * (unsigned int)(v14 - 1)) = *(_DWORD *)(a1 + 456);
        *(_DWORD *)(v10 + 8LL * (unsigned int)(*(_DWORD *)(a1 + 304) - 1) + 4) = 0;
      }
    }
  }
  return v9;
}
