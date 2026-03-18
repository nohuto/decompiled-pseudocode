/*
 * XREFs of ?PutFNTCacheCheckSum@@YAXKK@Z @ 0x1C0285928
 * Callers:
 *     ??0PFFMEMOBJ@@QEAA@IPEBGKKPEAUtagDESIGNVECTOR@@K_KPEAUHDEV__@@PEAUDHPDEV__@@PEAVPFT@@KKPEAU_FNTCHECKSUM@@PEAPEAU_FONTFILEVIEW@@PEAU_UNIVERSAL_FONT_ID@@H@Z @ 0x1C007A238 (--0PFFMEMOBJ@@QEAA@IPEBGKKPEAUtagDESIGNVECTOR@@K_KPEAUHDEV__@@PEAUDHPDEV__@@PEAVPFT@@KKPEAU_FNTC.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C0107FBC (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     SearchFntCacheNewLink @ 0x1C0285AAC (SearchFntCacheNewLink.c)
 */

void __fastcall PutFNTCacheCheckSum(unsigned int a1, int a2)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // [rsp+40h] [rbp+18h] BYREF

  v6 = ghsemFntCache;
  GreAcquireSemaphore(ghsemFntCache);
  v4 = qword_1C032C338;
  if ( qword_1C032C338 && a1 )
  {
    if ( (dword_1C032C330 & 2) != 0 )
    {
      v5 = SearchFntCacheNewLink(a1);
      if ( v5 )
      {
        if ( *(_DWORD *)(v5 + 4) )
          *(_DWORD *)(v5 + 24) |= 1u;
        else
          *(_DWORD *)(v5 + 4) = a2;
        *(_DWORD *)(v4 + 20) = 1;
      }
    }
    else
    {
      *(_DWORD *)(qword_1C032C338 + 16) |= 2u;
    }
  }
  SEMOBJ::vUnlock((SEMOBJ *)&v6);
}
