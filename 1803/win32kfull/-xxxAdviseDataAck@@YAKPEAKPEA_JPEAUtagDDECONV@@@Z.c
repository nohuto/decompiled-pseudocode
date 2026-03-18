/*
 * XREFs of ?xxxAdviseDataAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01CF6E0
 * Callers:
 *     <none>
 * Callees:
 *     ?FreeListAdd@@YAHPEAUtagDDECONV@@PEAXK@Z @ 0x1C01CEF6C (-FreeListAdd@@YAHPEAUtagDDECONV@@PEAXK@Z.c)
 *     ?PopState@@YAXPEAUtagDDECONV@@@Z @ 0x1C01CF130 (-PopState@@YAXPEAUtagDDECONV@@@Z.c)
 *     ?xxxCopyAckIn@@YAKPEAKPEA_JPEAUtagDDECONV@@PEAPEAUtagINTDDEINFO@@@Z @ 0x1C01CF894 (-xxxCopyAckIn@@YAKPEAKPEA_JPEAUtagDDECONV@@PEAPEAUtagINTDDEINFO@@@Z.c)
 *     ?xxxUnexpectedClientPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01D0234 (-xxxUnexpectedClientPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     xxxClientFreeDDEHandle @ 0x1C01E1A5C (xxxClientFreeDDEHandle.c)
 */

unsigned int __fastcall xxxAdviseDataAck(unsigned int *a1, __int64 *a2, struct tagDDECONV *a3)
{
  unsigned int result; // eax
  __int64 v5; // r9
  int v6; // r8d
  __int64 v7; // rdx
  __int64 v8; // rdx
  struct tagINTDDEINFO *v9; // [rsp+30h] [rbp+8h] BYREF

  if ( *a1 != 996 )
    return xxxUnexpectedClientPost(a1, a2, a3);
  result = xxxCopyAckIn(a1, a2, a3, &v9);
  if ( (*(_BYTE *)(LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)*(_DWORD *)a3 + gSharedInfo[1] + 25LL) & 1) != 0 )
    result = 0;
  if ( result == 2 )
  {
    v5 = *((_QWORD *)a3 + 7);
    v6 = *(_DWORD *)(v5 + 64);
    v7 = v6 & 0xFFFFFFFE;
    if ( (*(_DWORD *)v9 & 0x8000LL) != 0 && (v6 & 0x400) != 0 )
      FreeListAdd(*((struct tagDDECONV **)a3 + 4), *(void **)(v5 + 48), v7);
    else
      xxxClientFreeDDEHandle(*(_QWORD *)(v5 + 40), v7);
    if ( (*(_BYTE *)(LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)*(_DWORD *)a3 + gSharedInfo[1] + 25LL) & 1) != 0 )
    {
      return 0;
    }
    else
    {
      PopState(a3, v8);
      return 2;
    }
  }
  return result;
}
