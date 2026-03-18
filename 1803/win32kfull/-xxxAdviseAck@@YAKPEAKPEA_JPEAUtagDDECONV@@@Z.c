/*
 * XREFs of ?xxxAdviseAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01CF450
 * Callers:
 *     <none>
 * Callees:
 *     ?FreeListAdd@@YAHPEAUtagDDECONV@@PEAXK@Z @ 0x1C01CEF6C (-FreeListAdd@@YAHPEAUtagDDECONV@@PEAXK@Z.c)
 *     ?PopState@@YAXPEAUtagDDECONV@@@Z @ 0x1C01CF130 (-PopState@@YAXPEAUtagDDECONV@@@Z.c)
 *     ?xxxCopyAckIn@@YAKPEAKPEA_JPEAUtagDDECONV@@PEAPEAUtagINTDDEINFO@@@Z @ 0x1C01CF894 (-xxxCopyAckIn@@YAKPEAKPEA_JPEAUtagDDECONV@@PEAPEAUtagINTDDEINFO@@@Z.c)
 *     ?xxxUnexpectedServerPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01D02FC (-xxxUnexpectedServerPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 */

unsigned int __fastcall xxxAdviseAck(unsigned int *a1, __int64 *a2, struct tagDDECONV *a3)
{
  unsigned int result; // eax
  __int64 v5; // rdx
  int v6; // r8d
  struct tagDDECONV *v7; // rcx
  void *v8; // rdx
  __int64 v9; // rdx
  struct tagINTDDEINFO *v10; // [rsp+30h] [rbp+8h] BYREF

  if ( *a1 != 996 )
    return xxxUnexpectedServerPost(a1, a2, a3);
  result = xxxCopyAckIn(a1, a2, a3, &v10);
  if ( (*(_BYTE *)(LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)*(_DWORD *)a3 + gSharedInfo[1] + 25LL) & 1) != 0 )
    result = 0;
  if ( result == 2 )
  {
    if ( (*((_DWORD *)a3 + 20) & 6) != 0 )
    {
      return 1;
    }
    else
    {
      v5 = *((_QWORD *)a3 + 7);
      v6 = *(_DWORD *)(v5 + 64);
      if ( (*(_DWORD *)v10 & 0x8000LL) != 0 )
      {
        v7 = (struct tagDDECONV *)*((_QWORD *)a3 + 4);
        v8 = *(void **)(v5 + 40);
      }
      else
      {
        v8 = *(void **)(v5 + 48);
        v7 = a3;
      }
      FreeListAdd(v7, v8, v6 & 0xFFFFFFFE);
      PopState(a3, v9);
      return 2;
    }
  }
  return result;
}
