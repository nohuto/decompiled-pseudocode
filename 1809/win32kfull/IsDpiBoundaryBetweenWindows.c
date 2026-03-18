/*
 * XREFs of IsDpiBoundaryBetweenWindows @ 0x1C006F2D8
 * Callers:
 *     ?CalcVisRgnWorker@@YAHQEAUtagWND@@PEAPEAUHRGN__@@K@Z @ 0x1C003CB30 (-CalcVisRgnWorker@@YAHQEAUtagWND@@PEAPEAUHRGN__@@K@Z.c)
 *     xxxCreateWindowEx @ 0x1C003DE94 (xxxCreateWindowEx.c)
 *     OffsetChildren @ 0x1C006F050 (OffsetChildren.c)
 *     BuildWindowListWithDpiBoundaryInfo @ 0x1C006F6AC (BuildWindowListWithDpiBoundaryInfo.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsDpiBoundaryBetweenWindows(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  __int64 v3; // r9
  unsigned int v4; // ecx

  v2 = *(_QWORD *)(a1 + 40);
  v3 = *(_QWORD *)(a2 + 40);
  v4 = *(_DWORD *)(v2 + 288);
  if ( *(_QWORD *)(v2 + 256) == *(_QWORD *)(v3 + 256) )
    return (((unsigned __int16)(v4 >> 8) ^ (unsigned __int16)(*(_DWORD *)(v3 + 288) >> 8)) & 0x1FF) != 0;
  return (v4 & 0xF) != 2 || (*(_DWORD *)(v3 + 288) & 0xF) != 2;
}
