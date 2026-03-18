/*
 * XREFs of ?bCheckFntFileInfo@PFFOBJ@@QEAAHXZ @ 0x1C00846D4
 * Callers:
 *     ?QueryFontTree@PFFOBJ@@QEAAPEAXPEAUDHPDEV__@@_KKKPEA_K@Z @ 0x1C0080984 (-QueryFontTree@PFFOBJ@@QEAAPEAXPEAUDHPDEV__@@_KKKPEA_K@Z.c)
 *     ?ulGetFontData2@@YAKAEAVDCOBJ@@KKPEAXK@Z @ 0x1C00833CC (-ulGetFontData2@@YAKAEAVDCOBJ@@KKPEAXK@Z.c)
 *     ?QueryTrueTypeTable@PFFOBJ@@QEAAJ_KKKJKPEAEPEAPEAEPEAK@Z @ 0x1C02A429C (-QueryTrueTypeTable@PFFOBJ@@QEAAJ_KKKJKPEAEPEAPEAEPEAK@Z.c)
 * Callees:
 *     Win32FileInfo @ 0x1C0091B10 (Win32FileInfo.c)
 */

__int64 __fastcall PFFOBJ::bCheckFntFileInfo(PFFOBJ *this)
{
  __int64 v1; // rdx
  int v3; // eax
  __int64 v5; // rdi
  __int64 v6; // rcx

  v1 = *(_QWORD *)this;
  v3 = *(_DWORD *)(*(_QWORD *)this + 52LL);
  if ( (v3 & 0x2000) == 0 )
  {
    if ( (v3 & 0x1000) == 0 )
      return 1LL;
    v5 = 0LL;
    if ( !*(_DWORD *)(v1 + 36) )
    {
LABEL_10:
      *(_DWORD *)(v1 + 52) &= ~0x1000u;
      return 1LL;
    }
    while ( 1 )
    {
      Win32FileInfo(*(PCWSTR *)(*(_QWORD *)(*(_QWORD *)(v1 + 200) + 8 * v5) + 80LL));
      v1 = *(_QWORD *)this;
      v6 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 200LL) + 8 * v5);
      if ( *(_QWORD *)v6 || *(_DWORD *)(v6 + 24) )
        break;
      v5 = (unsigned int)(v5 + 1);
      if ( (unsigned int)v5 >= *(_DWORD *)(v1 + 36) )
        goto LABEL_10;
    }
    *(_DWORD *)(v1 + 52) |= 0x2000u;
  }
  return 0LL;
}
