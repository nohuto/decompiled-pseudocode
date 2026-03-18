/*
 * XREFs of ?vInitEUDCRemote@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C028AB48
 * Callers:
 *     ?vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C00C3E78 (-vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 * Callees:
 *     ??1RFONTTMPOBJ@@QEAA@XZ @ 0x1C000254C (--1RFONTTMPOBJ@@QEAA@XZ.c)
 *     ?vInit@RFONTOBJ@@QEAAXAEAVXDCOBJ@@PEAVPFE@@PEAU_EUDCLOGFONT@@H@Z @ 0x1C000321C (-vInit@RFONTOBJ@@QEAAXAEAVXDCOBJ@@PEAVPFE@@PEAU_EUDCLOGFONT@@H@Z.c)
 *     ?UpdateFontLinksLockOrder@RFONTOBJ@@AEAAXXZ @ 0x1C0006CFC (-UpdateFontLinksLockOrder@RFONTOBJ@@AEAAXXZ.c)
 *     ?ComputeEUDCLogfont@RFONTOBJ@@QEAAXPEAU_EUDCLOGFONT@@AEAVXDCOBJ@@@Z @ 0x1C00074D0 (-ComputeEUDCLogfont@RFONTOBJ@@QEAAXPEAU_EUDCLOGFONT@@AEAVXDCOBJ@@@Z.c)
 *     ??0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAVPDEVOBJ@@@Z @ 0x1C0023F04 (--0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAVPDEVOBJ@@@Z.c)
 *     ?vUnlock@SPRITERANGELOCK@@QEAAXXZ @ 0x1C0045A3C (-vUnlock@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C004899C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0056C48 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C0056E10 (--1DCOBJ@@QEAA@XZ.c)
 *     PALLOCMEM2 @ 0x1C00800BC (PALLOCMEM2.c)
 *     ?vMakeInactive@RFONTOBJ@@QEAAXXZ @ 0x1C00816A8 (-vMakeInactive@RFONTOBJ@@QEAAXXZ.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C008471C (--1RFONTOBJ@@QEAA@XZ.c)
 *     ??0IFIOBJR@@QEAA@PEBU_IFIMETRICS@@AEAVRFONTOBJ@@AEAVDCOBJ@@@Z @ 0x1C00853D0 (--0IFIOBJR@@QEAA@PEBU_IFIMETRICS@@AEAVRFONTOBJ@@AEAVDCOBJ@@@Z.c)
 *     ?vDeleteRFONTRef@PFFOBJ@@QEAAXXZ @ 0x1C0086DC0 (-vDeleteRFONTRef@PFFOBJ@@QEAAXXZ.c)
 *     ??0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z @ 0x1C00A19EC (--0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z.c)
 *     ?pGetLinkedFontList@PFEOBJ@@QEAAPEAU_LIST_ENTRY@@XZ @ 0x1C00C5138 (-pGetLinkedFontList@PFEOBJ@@QEAAPEAU_LIST_ENTRY@@XZ.c)
 *     _TlgKeywordOn @ 0x1C00DA1F0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0117A34 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     ?bActive@RFONTOBJ@@QEBA_NAEBVSEMOBJSHARED@@@Z @ 0x1C015F19C (-bActive@RFONTOBJ@@QEBA_NAEBVSEMOBJSHARED@@@Z.c)
 *     ??1LFONTOBJ@@QEAA@XZ @ 0x1C026F550 (--1LFONTOBJ@@QEAA@XZ.c)
 *     ?ppfeFromUFI@@YAPEAVPFE@@PEAU_UNIVERSAL_FONT_ID@@@Z @ 0x1C028AA2C (-ppfeFromUFI@@YAPEAVPFE@@PEAU_UNIVERSAL_FONT_ID@@@Z.c)
 */

void __fastcall RFONTOBJ::vInitEUDCRemote(RFONTOBJ *this, HDC **a2)
{
  RFONTOBJ *v2; // rsi
  __int64 v3; // rcx
  __int64 v4; // rdi
  _QWORD *v6; // rax
  char v7; // r13
  unsigned int v8; // edx
  void *v9; // rax
  HDC v10; // rax
  __int64 v11; // rbx
  struct HLFONT__ *v12; // rdx
  HDC *v13; // rdx
  __int64 v14; // rax
  __int64 *v15; // r12
  unsigned int v16; // r14d
  unsigned int v17; // ecx
  HDC *v18; // rdx
  unsigned int v19; // esi
  __int64 v20; // r13
  struct PFE *v21; // rax
  struct PFE *v22; // rbx
  struct _LIST_ENTRY *LinkedFontList; // rax
  struct _LIST_ENTRY *i; // rcx
  int Blink; // eax
  __int64 v26; // rax
  int v27; // r15d
  const struct SEMOBJSHARED *v28; // rdx
  const struct SEMOBJSHARED *v29; // rdx
  bool v30; // bl
  __int64 v31; // rdx
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 *v34; // rbx
  __int64 v35; // rsi
  int v36; // [rsp+50h] [rbp-B0h] BYREF
  HDC v37; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v38; // [rsp+60h] [rbp-A0h] BYREF
  int v39; // [rsp+68h] [rbp-98h]
  __int64 v40; // [rsp+70h] [rbp-90h] BYREF
  __int64 v41; // [rsp+78h] [rbp-88h] BYREF
  struct LFONT *v42; // [rsp+80h] [rbp-80h] BYREF
  __int64 v43; // [rsp+88h] [rbp-78h] BYREF
  int v44; // [rsp+90h] [rbp-70h]
  __int64 v45; // [rsp+98h] [rbp-68h] BYREF
  int v46; // [rsp+A8h] [rbp-58h]
  _OWORD v47[2]; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v48[48]; // [rsp+D0h] [rbp-30h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+100h] [rbp+0h] BYREF
  __int128 v50; // [rsp+110h] [rbp+10h]
  int *v51; // [rsp+120h] [rbp+20h]
  __int64 v52; // [rsp+128h] [rbp+28h]
  __int64 *v53; // [rsp+130h] [rbp+30h]
  __int64 v54; // [rsp+138h] [rbp+38h]
  __int64 *v55; // [rsp+140h] [rbp+40h]
  __int64 v56; // [rsp+148h] [rbp+48h]
  HDC *v57; // [rsp+150h] [rbp+50h]
  __int64 v58; // [rsp+158h] [rbp+58h]
  _BYTE v59[80]; // [rsp+160h] [rbp+60h] BYREF

  v2 = this;
  v41 = (__int64)this;
  v3 = *(_QWORD *)this;
  v4 = 0LL;
  v6 = *(_QWORD **)(v3 + 744);
  if ( v6 )
  {
    if ( *v6 )
      return;
    DbgkWerCaptureLiveKernelDump(L"win32kfull.sys", 356LL, 24LL);
    v3 = *(_QWORD *)v2;
  }
  v7 = 0;
  if ( !*(_QWORD *)(v3 + 744) )
  {
    v8 = *((_DWORD *)*a2 + 76);
    if ( v8 <= 0xA )
    {
      *(_QWORD *)(v3 + 744) = v3 + 752;
    }
    else
    {
      v9 = PALLOCMEM2(8 * v8, 1718382187LL, 1);
      *(_QWORD *)(*(_QWORD *)v2 + 744LL) = v9;
      if ( !v9 )
        return;
      v7 = 1;
    }
  }
  *(_DWORD *)(*(_QWORD *)v2 + 840LL) = 0;
  v10 = (*a2)[6];
  v12 = (struct HLFONT__ *)(*a2)[219];
  v40 = *(_QWORD *)(*(_QWORD *)v2 + 120LL);
  v11 = v40;
  v37 = v10;
  LFONTOBJ::LFONTOBJ((LFONTOBJ *)&v42, v12, (struct PDEVOBJ *)&v37);
  v13 = *a2;
  v14 = *(_QWORD *)v2;
  v44 = 0;
  v43 = v14;
  DCOBJ::DCOBJ((DCOBJ *)v48, *v13);
  IFIOBJR::IFIOBJR(
    (IFIOBJR *)&pData,
    *(const struct _IFIMETRICS **)(v11 + 32),
    (struct RFONTOBJ *)&v43,
    (struct DCOBJ *)v48);
  RFONTOBJ::ComputeEUDCLogfont(v2, (struct _EUDCLOGFONT *)v47, (struct XDCOBJ *)a2);
  v15 = (__int64 *)v59;
  v16 = 0;
  v17 = *((_DWORD *)*a2 + 76);
  if ( v17 <= 0xA || (v15 = (__int64 *)PALLOCMEM2(8 * v17, 1718382187LL, 1)) != 0LL )
  {
    *(_DWORD *)(*(_QWORD *)v2 + 712LL) |= 0x200u;
    v18 = *a2;
    if ( ((_DWORD)(*a2)[6][10] & 0x8000) != 0 )
    {
      EtwTraceGreLockReleaseSemaphore(L"prfnt->hsemEUDC", *(_QWORD *)(*(_QWORD *)v2 + 848LL));
      GreReleaseSemaphoreInternal(*(_QWORD *)(*(_QWORD *)v2 + 848LL));
      EtwTraceGreLockReleaseSemaphore(L"prfnt->hsemCache", *(_QWORD *)(*(_QWORD *)v2 + 504LL));
      GreReleaseSemaphoreInternal(*(_QWORD *)(*(_QWORD *)v2 + 504LL));
      v18 = *a2;
    }
    if ( *((_DWORD *)v18 + 76) )
    {
      v19 = 0;
      do
      {
        v20 = 0LL;
        v45 = 0LL;
        v39 = 0;
        v38 = 0LL;
        v37 = (HDC)ghsemPublicPFT;
        GreAcquireSemaphore(ghsemPublicPFT);
        v21 = ppfeFromUFI((struct _UNIVERSAL_FONT_ID *)((*a2)[37] + 2 * v19));
        v22 = v21;
        if ( v21 )
        {
          v20 = *(_QWORD *)v21;
          v45 = v20;
          v46 = 0;
          ++*(_DWORD *)(v20 + 68);
        }
        SEMOBJ::vUnlock((SEMOBJ *)&v37);
        if ( v22 )
        {
          pData = (EVENT_DATA_DESCRIPTOR)v47[0];
          v50 = v47[1];
          LinkedFontList = PFEOBJ::pGetLinkedFontList((PFEOBJ *)&v40);
          if ( LinkedFontList )
          {
            for ( i = LinkedFontList->Flink; i != LinkedFontList; i = i->Flink )
            {
              if ( (struct PFE *)i[2].Flink == v22 || (struct PFE *)i[2].Blink == v22 )
              {
                Blink = (int)i[1].Blink;
                if ( Blink )
                  pData.Reserved = HIDWORD(v47[0]) * Blink / SHIDWORD(i[1].Blink);
                break;
              }
            }
          }
          RFONTOBJ::vInit((RFONTOBJ *)&v38, (struct XDCOBJ *)a2, v22, (struct _EUDCLOGFONT *)&pData);
          if ( v38 )
          {
            v26 = v16++;
            v15[v26] = v38;
          }
        }
        RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v38);
        if ( v20 && !v46 )
          PFFOBJ::vDeleteRFONTRef((PFFOBJ *)&v45);
        v18 = *a2;
        ++v19;
      }
      while ( v19 < *((_DWORD *)*a2 + 76) );
      v2 = (RFONTOBJ *)v41;
    }
    if ( ((_DWORD)v18[6][10] & 0x8000) != 0 )
    {
      GreAcquireSemaphore(*(_QWORD *)(*(_QWORD *)v2 + 504LL));
      GreAcquireSemaphore(*(_QWORD *)(*(_QWORD *)v2 + 848LL));
    }
    v27 = *(_DWORD *)(*(_QWORD *)v2 + 712LL) & 0x200;
    *(_DWORD *)(*(_QWORD *)v2 + 712LL) &= ~0x200u;
    SEMOBJSHARED::SEMOBJSHARED((SEMOBJSHARED *)&v38, ghsemRFONTList);
    if ( !RFONTOBJ::bActive(v2, v28)
      && v27
      && hProvider > 5u
      && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000000000uLL) )
    {
      v36 = 68651;
      v51 = &v36;
      v53 = &v41;
      v55 = &v40;
      v57 = &v37;
      v52 = 4LL;
      v41 = 0x1000000LL;
      v54 = 8LL;
      LODWORD(v40) = 1;
      v56 = 4LL;
      LODWORD(v37) = 0;
      v58 = 4LL;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02D707D, 0LL, 0LL, 6u, &pData);
    }
    v30 = RFONTOBJ::bActive(v2, v29);
    SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)&v38);
    if ( ((unsigned __int8)-(v27 != 0) & v30) != 0 )
    {
      if ( v16 )
      {
        v31 = v16;
        do
        {
          *(_QWORD *)(v4 * 8 + *(_QWORD *)(*(_QWORD *)v2 + 744LL)) = v15[v4];
          ++v4;
          --v31;
        }
        while ( v31 );
        *(_DWORD *)(*(_QWORD *)v2 + 840LL) = v16;
      }
      else
      {
        v32 = *(_QWORD *)v2;
        v33 = *(_QWORD *)(*(_QWORD *)v2 + 744LL);
        if ( v33 != *(_QWORD *)v2 + 752LL )
        {
          Win32FreePool(v33);
          v32 = *(_QWORD *)v2;
        }
        *(_QWORD *)(v32 + 744) = 0LL;
        *(_DWORD *)(*(_QWORD *)v2 + 840LL) = 0;
      }
      RFONTOBJ::UpdateFontLinksLockOrder(v2);
    }
    else if ( v16 )
    {
      v34 = v15;
      v35 = v16;
      do
      {
        v38 = *v34;
        v39 = 0;
        RFONTOBJ::vMakeInactive((RFONTOBJ *)&v38);
        RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)&v38);
        ++v34;
        --v35;
      }
      while ( v35 );
    }
    if ( v15 != (__int64 *)v59 )
      Win32FreePool(v15);
  }
  else if ( v7 )
  {
    Win32FreePool(*(_QWORD *)(*(_QWORD *)v2 + 744LL));
    *(_QWORD *)(*(_QWORD *)v2 + 744LL) = 0LL;
  }
  DCOBJ::~DCOBJ((DCOBJ *)v48);
  RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)&v43);
  LFONTOBJ::~LFONTOBJ(&v42);
}
