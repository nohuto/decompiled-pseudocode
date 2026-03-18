/*
 * XREFs of ?bUnreferenceNetworkedFontFileNode@@YA_NPEAU_NETWORKED_FONT_FONT_FILE_NODE@@@Z @ 0x1C0286DE8
 * Callers:
 *     ?vUnreferenceFileviewSection@@YAXPEAU_FILEVIEW@@@Z @ 0x1C007E4B8 (-vUnreferenceFileviewSection@@YAXPEAU_FILEVIEW@@@Z.c)
 *     ?ObtainSectionForNetworkedFontFile@@YAJPEAU_UNICODE_STRING@@PEAU_FILEVIEW@@PEAU_OBJECT_ATTRIBUTES@@PEAT_LARGE_INTEGER@@_N@Z @ 0x1C028653C (-ObtainSectionForNetworkedFontFile@@YAJPEAU_UNICODE_STRING@@PEAU_FILEVIEW@@PEAU_OBJECT_ATTRIBUTE.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C0107FBC (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 */

char __fastcall bUnreferenceNetworkedFontFileNode(HANDLE *Buffer)
{
  char v3; // bl
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v5 = *(_QWORD *)gpxsGlobals;
  GreAcquireSemaphore(v5);
  if ( (*((_DWORD *)Buffer + 8))-- == 1 )
  {
    if ( *Buffer )
    {
      ZwClose(*Buffer);
      *Buffer = 0LL;
    }
    RtlDeleteElementGenericTableAvl(*((PRTL_AVL_TABLE *)gpxsGlobals + 1), Buffer);
    v3 = 1;
  }
  else
  {
    v3 = 0;
  }
  SEMOBJ::vUnlock((SEMOBJ *)&v5);
  return v3;
}
