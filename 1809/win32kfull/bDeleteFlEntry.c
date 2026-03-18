/*
 * XREFs of bDeleteFlEntry @ 0x1C027C558
 * Callers:
 *     GreEudcUnloadLinkW @ 0x1C027BF94 (GreEudcUnloadLinkW.c)
 * Callees:
 *     ?FindLinkedFontEntry@@YAPEAU_PFEDATA@@PEAU_LIST_ENTRY@@PEBG1@Z @ 0x1C007D448 (-FindLinkedFontEntry@@YAPEAU_PFEDATA@@PEAU_LIST_ENTRY@@PEBG1@Z.c)
 *     ?FindBaseFontEntry@@YAPEAU_FLENTRY@@PEBG@Z @ 0x1C007D5F8 (-FindBaseFontEntry@@YAPEAU_FLENTRY@@PEBG@Z.c)
 *     ?ParseFontLinkEntry@@YA_NPEAGPEAUFontLinkData@@@Z @ 0x1C007D760 (-ParseFontLinkEntry@@YA_NPEAGPEAUFontLinkData@@@Z.c)
 *     ?bAppendSysDirectory@@YAHPEAGPEBGI@Z @ 0x1C007D8D0 (-bAppendSysDirectory@@YAHPEAGPEBGI@Z.c)
 *     ??0MALLOCOBJ@@QEAA@K@Z @ 0x1C0080080 (--0MALLOCOBJ@@QEAA@K@Z.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C00824F8 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     bUnloadEudcFont @ 0x1C00CB0C4 (bUnloadEudcFont.c)
 *     vUnlinkEudcRFONTs @ 0x1C027C8C0 (vUnlinkEudcRFONTs.c)
 *     vUnlinkEudcRFONTsAndPFEs @ 0x1C027C9B8 (vUnlinkEudcRFONTsAndPFEs.c)
 */

__int64 __fastcall bDeleteFlEntry(unsigned __int16 *a1, char *a2, int a3)
{
  wchar_t *v6; // rdi
  unsigned __int16 *v7; // rbx
  struct _LIST_ENTRY *BaseFontEntry; // rax
  struct _LIST_ENTRY *v9; // rsi
  struct _LIST_ENTRY *LinkedFontEntry; // rax
  struct _LIST_ENTRY *v11; // r14
  struct _LIST_ENTRY *Flink; // rax
  struct _LIST_ENTRY *Blink; // rcx
  bool v14; // zf
  struct _LIST_ENTRY *v15; // rcx
  struct _LIST_ENTRY *v16; // rcx
  struct _LIST_ENTRY *v17; // rax
  unsigned int v18; // ebp
  wchar_t *Str1; // [rsp+20h] [rbp-38h] BYREF
  char v21[8]; // [rsp+28h] [rbp-30h] BYREF
  unsigned __int16 *v22; // [rsp+30h] [rbp-28h]
  unsigned __int16 *v23; // [rsp+78h] [rbp+20h] BYREF

  MALLOCOBJ::MALLOCOBJ((MALLOCOBJ *)&Str1, 0x208u);
  MALLOCOBJ::MALLOCOBJ((MALLOCOBJ *)&v23, 0x24Au);
  v6 = Str1;
  v7 = v23;
  if ( Str1 )
  {
    if ( v23 )
    {
      if ( (int)StringCchCopyW((char *)v23, 293LL, a2) >= 0 )
      {
        if ( ParseFontLinkEntry(v7, (struct FontLinkData *)v21) )
        {
          if ( (unsigned int)bAppendSysDirectory(v6, v7) )
          {
            if ( _wcsicmp(v6, Dst) )
            {
              if ( off_1C030C480 != (_UNKNOWN *)&off_1C030C480 )
              {
                BaseFontEntry = (struct _LIST_ENTRY *)FindBaseFontEntry(a1);
                v9 = BaseFontEntry;
                if ( BaseFontEntry )
                {
                  LinkedFontEntry = FindLinkedFontEntry(BaseFontEntry + 1, v6, v22);
                  v11 = LinkedFontEntry;
                  if ( LinkedFontEntry )
                  {
                    if ( LODWORD(LinkedFontEntry[1].Flink) == a3 )
                    {
                      Flink = LinkedFontEntry->Flink;
                      if ( Flink->Blink == v11 )
                      {
                        Blink = v11->Blink;
                        if ( Blink->Flink == v11 )
                        {
                          Blink->Flink = Flink;
                          Flink->Blink = Blink;
                          v14 = HIDWORD(v9[6].Flink)-- == 1;
                          v15 = v11 + 2;
                          if ( !v14 )
                          {
                            vUnlinkEudcRFONTs(v15);
                            v18 = 1;
                            ++LODWORD(v9[6].Blink);
                            goto LABEL_18;
                          }
                          vUnlinkEudcRFONTsAndPFEs(v15, v9);
                          v16 = v9->Flink;
                          if ( v9->Flink->Blink == v9 )
                          {
                            v17 = v9->Blink;
                            if ( v17->Flink == v9 )
                            {
                              v17->Flink = v16;
                              v16->Blink = v17;
                              Win32FreePool(v9);
                              --dword_1C03177C8;
                              v18 = 1;
                              ++dword_1C03177CC;
LABEL_18:
                              bUnloadEudcFont((__int64 *)&v11[2]);
                              Win32FreePool(v11);
                              goto LABEL_21;
                            }
                          }
                        }
                      }
                      __fastfail(3u);
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  v18 = 0;
LABEL_21:
  if ( v7 )
    Win32FreePool(v7);
  if ( v6 )
    Win32FreePool(v6);
  return v18;
}
