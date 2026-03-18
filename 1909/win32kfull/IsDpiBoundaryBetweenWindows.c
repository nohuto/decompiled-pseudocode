/*
 * XREFs of IsDpiBoundaryBetweenWindows @ 0x1C0067C24
 * Callers:
 *     OffsetChildren @ 0x1C002C01C (OffsetChildren.c)
 *     xxxCreateWindowEx @ 0x1C0061510 (xxxCreateWindowEx.c)
 *     ?CalcVisRgnWorker@@YAHQEAUtagWND@@PEAPEAUHRGN__@@K@Z @ 0x1C0066520 (-CalcVisRgnWorker@@YAHQEAUtagWND@@PEAPEAUHRGN__@@K@Z.c)
 *     BuildWindowListWithDpiBoundaryInfo @ 0x1C0068D34 (BuildWindowListWithDpiBoundaryInfo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsDpiBoundaryBetweenWindows(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  __int64 v3; // rcx
  unsigned int v4; // r10d
  unsigned int v5; // r9d
  unsigned int v6; // ecx
  int v7; // r8d
  int v8; // eax

  v2 = *(_QWORD *)(a1 + 40);
  v3 = *(_QWORD *)(a2 + 40);
  if ( *(_QWORD *)(v2 + 256) == *(_QWORD *)(v3 + 256) )
  {
    v4 = *(_DWORD *)(v3 + 288);
    v5 = *(_DWORD *)(v2 + 288);
    if ( (((unsigned __int16)(v4 >> 8) ^ (unsigned __int16)(v5 >> 8)) & 0x1FF) != 0 )
      return 1;
    v6 = 0;
    if ( (v5 & 0xF) != 2 || (v7 = 1, (v5 & 0x20000000) == 0) )
      v7 = 0;
    if ( (v4 & 0xF) != 2 || (v8 = 1, (v4 & 0x20000000) == 0) )
      v8 = 0;
    if ( v7 != v8 )
      return 1;
  }
  else
  {
    return (*(_DWORD *)(v2 + 288) & 0xF) != 2 || (*(_DWORD *)(v3 + 288) & 0xF) != 2;
  }
  return v6;
}
