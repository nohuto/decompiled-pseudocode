/*
 * XREFs of ?vInitEUDCRemote@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C02A05A4
 * Callers:
 *     ?vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C013E618 (-vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C0059398 (_TlgKeywordOn.c)
 *     ?pGetLinkedFontList@PFEOBJ@@QEAAPEAU_LIST_ENTRY@@XZ @ 0x1C0092BB0 (-pGetLinkedFontList@PFEOBJ@@QEAAPEAU_LIST_ENTRY@@XZ.c)
 *     PALLOCMEM2 @ 0x1C0095D7C (PALLOCMEM2.c)
 *     ?vDeleteRFONTRef@PFFOBJ@@QEAAXXZ @ 0x1C009674C (-vDeleteRFONTRef@PFFOBJ@@QEAAXXZ.c)
 *     ??1RFONTTMPOBJ@@QEAA@XZ @ 0x1C009C5BC (--1RFONTTMPOBJ@@QEAA@XZ.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C009C5D4 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ??0IFIOBJR@@QEAA@PEBU_IFIMETRICS@@AEAVRFONTOBJ@@AEAVDCOBJ@@@Z @ 0x1C009E040 (--0IFIOBJR@@QEAA@PEBU_IFIMETRICS@@AEAVRFONTOBJ@@AEAVDCOBJ@@@Z.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C00AB2B4 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C00AD630 (--1DCOBJ@@QEAA@XZ.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00B8724 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     _TlgWrite @ 0x1C00E93B8 (_TlgWrite.c)
 *     ?ComputeEUDCLogfont@RFONTOBJ@@QEAAXPEAU_EUDCLOGFONT@@AEAVXDCOBJ@@@Z @ 0x1C013E408 (-ComputeEUDCLogfont@RFONTOBJ@@QEAAXPEAU_EUDCLOGFONT@@AEAVXDCOBJ@@@Z.c)
 *     ?vInit@RFONTOBJ@@QEAAXAEAVXDCOBJ@@PEAVPFE@@PEAU_EUDCLOGFONT@@H@Z @ 0x1C013EDEC (-vInit@RFONTOBJ@@QEAAXAEAVXDCOBJ@@PEAVPFE@@PEAU_EUDCLOGFONT@@H@Z.c)
 *     ??0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAVPDEVOBJ@@@Z @ 0x1C013F6C8 (--0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAVPDEVOBJ@@@Z.c)
 *     ?UpdateFontLinksLockOrder@RFONTOBJ@@AEAAXXZ @ 0x1C013F814 (-UpdateFontLinksLockOrder@RFONTOBJ@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     memset @ 0x1C0168440 (memset.c)
 *     ?bActive@RFONTOBJ@@QEBAHXZ @ 0x1C026F990 (-bActive@RFONTOBJ@@QEBAHXZ.c)
 *     ??1LFONTOBJ@@QEAA@XZ @ 0x1C02877C0 (--1LFONTOBJ@@QEAA@XZ.c)
 *     ?ppfeFromUFI@@YAPEAVPFE@@PEAU_UNIVERSAL_FONT_ID@@@Z @ 0x1C02A0488 (-ppfeFromUFI@@YAPEAVPFE@@PEAU_UNIVERSAL_FONT_ID@@@Z.c)
 *     ?vMakeInactive@RFONTOBJ@@QEAAXXZ @ 0x1C02A16B8 (-vMakeInactive@RFONTOBJ@@QEAAXXZ.c)
 */

void __fastcall RFONTOBJ::vInitEUDCRemote(RFONTOBJ *this, HDC **a2)
{
  RFONTOBJ *v2; // rsi
  __int64 v3; // rcx
  __int64 v4; // rdi
  _QWORD *v6; // rax
  char v7; // r12
  unsigned int v8; // edx
  void *v9; // rax
  HDC v10; // rax
  __int64 v11; // rbx
  struct HLFONT__ *v12; // rdx
  HDC *v13; // rdx
  __int64 *v14; // r15
  __int64 v15; // rbx
  unsigned int v16; // ecx
  HDC *v17; // rdx
  unsigned int v18; // esi
  __int64 v19; // r13
  struct PFE *v20; // rax
  struct PFE *v21; // r12
  struct _LIST_ENTRY *LinkedFontList; // rax
  struct _LIST_ENTRY *i; // rcx
  int Blink; // eax
  int v25; // r14d
  __int64 v26; // rdx
  HDC v27; // rdx
  __int64 v28; // rcx
  __int64 *v29; // rdi
  __int64 v30; // [rsp+50h] [rbp-B0h] BYREF
  int v31; // [rsp+58h] [rbp-A8h] BYREF
  HDC v32; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v33; // [rsp+68h] [rbp-98h] BYREF
  __int64 v34; // [rsp+70h] [rbp-90h] BYREF
  __int64 v35; // [rsp+78h] [rbp-88h] BYREF
  struct LFONT *v36; // [rsp+80h] [rbp-80h] BYREF
  __int64 v37; // [rsp+88h] [rbp-78h] BYREF
  int v38; // [rsp+98h] [rbp-68h]
  _BYTE v39[16]; // [rsp+A0h] [rbp-60h] BYREF
  _OWORD v40[2]; // [rsp+B0h] [rbp-50h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v42; // [rsp+E0h] [rbp-20h]
  int *v43; // [rsp+F0h] [rbp-10h]
  __int64 v44; // [rsp+F8h] [rbp-8h]
  __int64 *v45; // [rsp+100h] [rbp+0h]
  __int64 v46; // [rsp+108h] [rbp+8h]
  __int64 *v47; // [rsp+110h] [rbp+10h]
  __int64 v48; // [rsp+118h] [rbp+18h]
  __int64 *v49; // [rsp+120h] [rbp+20h]
  __int64 v50; // [rsp+128h] [rbp+28h]
  _BYTE v51[80]; // [rsp+130h] [rbp+30h] BYREF

  v2 = this;
  v34 = (__int64)this;
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
  v12 = (struct HLFONT__ *)(*a2)[216];
  v35 = *(_QWORD *)(*(_QWORD *)v2 + 120LL);
  v11 = v35;
  v32 = v10;
  LFONTOBJ::LFONTOBJ((LFONTOBJ *)&v36, v12, (struct PDEVOBJ *)&v32);
  v13 = *a2;
  v32 = *(HDC *)v2;
  DCOBJ::DCOBJ((DCOBJ *)v39, *v13);
  IFIOBJR::IFIOBJR(
    (IFIOBJR *)&pData,
    *(const struct _IFIMETRICS **)(v11 + 32),
    (struct RFONTOBJ *)&v32,
    (struct DCOBJ *)v39);
  memset(v40, 0, sizeof(v40));
  RFONTOBJ::ComputeEUDCLogfont(v2, (struct _EUDCLOGFONT *)v40, (struct XDCOBJ *)a2);
  v14 = (__int64 *)v51;
  v15 = 0LL;
  v16 = *((_DWORD *)*a2 + 76);
  if ( v16 <= 0xA || (v14 = (__int64 *)PALLOCMEM2(8 * v16, 1718382187LL, 1)) != 0LL )
  {
    *(_DWORD *)(*(_QWORD *)v2 + 712LL) |= 0x200u;
    v17 = *a2;
    if ( ((_DWORD)(*a2)[6][10] & 0x8000) != 0 )
    {
      EtwTraceGreLockReleaseSemaphore(L"prfnt->hsemEUDC", *(_QWORD *)(*(_QWORD *)v2 + 848LL));
      GreReleaseSemaphoreInternal(*(_QWORD *)(*(_QWORD *)v2 + 848LL));
      EtwTraceGreLockReleaseSemaphore(L"prfnt->hsemCache", *(_QWORD *)(*(_QWORD *)v2 + 504LL));
      GreReleaseSemaphoreInternal(*(_QWORD *)(*(_QWORD *)v2 + 504LL));
      v17 = *a2;
    }
    if ( *((_DWORD *)v17 + 76) )
    {
      v18 = 0;
      do
      {
        v19 = 0LL;
        v37 = 0LL;
        v30 = 0LL;
        v33 = ghsemPublicPFT;
        GreAcquireSemaphore(ghsemPublicPFT);
        v20 = ppfeFromUFI((struct _UNIVERSAL_FONT_ID *)((*a2)[37] + 2 * v18));
        v21 = v20;
        if ( v20 )
        {
          v19 = *(_QWORD *)v20;
          v37 = v19;
          v38 = 0;
          ++*(_DWORD *)(v19 + 68);
        }
        SEMOBJ::vUnlock((SEMOBJ *)&v33);
        if ( v21 )
        {
          pData = (EVENT_DATA_DESCRIPTOR)v40[0];
          v42 = v40[1];
          LinkedFontList = PFEOBJ::pGetLinkedFontList((PFEOBJ *)&v35);
          if ( LinkedFontList )
          {
            for ( i = LinkedFontList->Flink; i != LinkedFontList; i = i->Flink )
            {
              if ( (struct PFE *)i[2].Flink == v21 || (struct PFE *)i[2].Blink == v21 )
              {
                Blink = (int)i[1].Blink;
                if ( Blink )
                  pData.Reserved = HIDWORD(v40[0]) * Blink / SHIDWORD(i[1].Blink);
                break;
              }
            }
          }
          RFONTOBJ::vInit((RFONTOBJ *)&v30, (struct XDCOBJ *)a2, v21, (struct _EUDCLOGFONT *)&pData);
          if ( v30 )
          {
            v14[v15] = v30;
            v15 = (unsigned int)(v15 + 1);
          }
        }
        RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v30);
        if ( v19 && !v38 )
          PFFOBJ::vDeleteRFONTRef((PFFOBJ *)&v37);
        v17 = *a2;
        ++v18;
      }
      while ( v18 < *((_DWORD *)*a2 + 76) );
      v2 = (RFONTOBJ *)v34;
    }
    if ( ((_DWORD)v17[6][10] & 0x8000) != 0 )
    {
      GreAcquireSemaphore(*(_QWORD *)(*(_QWORD *)v2 + 504LL));
      GreAcquireSemaphore(*(_QWORD *)(*(_QWORD *)v2 + 848LL));
    }
    v25 = *(_DWORD *)(*(_QWORD *)v2 + 712LL) & 0x200;
    *(_DWORD *)(*(_QWORD *)v2 + 712LL) &= ~0x200u;
    if ( !RFONTOBJ::bActive(v2)
      && v25
      && hProvider > 5u
      && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000000000uLL) )
    {
      v31 = 68651;
      v43 = &v31;
      v45 = &v34;
      v47 = &v33;
      v49 = &v30;
      v44 = 4LL;
      v34 = 0x1000000LL;
      v46 = 8LL;
      LODWORD(v33) = 1;
      v48 = 4LL;
      LODWORD(v30) = 0;
      v50 = 4LL;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02E93E3, 0LL, 0LL, 6u, &pData);
    }
    if ( (unsigned __int8)-(v25 != 0) & RFONTOBJ::bActive(v2) )
    {
      if ( (_DWORD)v15 )
      {
        v26 = (unsigned int)v15;
        do
        {
          *(_QWORD *)(v4 * 8 + *(_QWORD *)(*(_QWORD *)v2 + 744LL)) = v14[v4];
          ++v4;
          --v26;
        }
        while ( v26 );
        *(_DWORD *)(*(_QWORD *)v2 + 840LL) = v15;
      }
      else
      {
        v27 = *(HDC *)v2;
        v28 = *(_QWORD *)(*(_QWORD *)v2 + 744LL);
        if ( v28 != *(_QWORD *)v2 + 752LL )
        {
          Win32FreePool(v28);
          v27 = *(HDC *)v2;
        }
        *((_QWORD *)v27 + 93) = 0LL;
        *(_DWORD *)(*(_QWORD *)v2 + 840LL) = 0;
      }
      RFONTOBJ::UpdateFontLinksLockOrder(v2);
    }
    else if ( (_DWORD)v15 )
    {
      v29 = v14;
      do
      {
        v30 = *v29;
        RFONTOBJ::vMakeInactive((RFONTOBJ *)&v30);
        RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)&v30);
        ++v29;
        --v15;
      }
      while ( v15 );
    }
    if ( v14 != (__int64 *)v51 )
      Win32FreePool(v14);
  }
  else if ( v7 )
  {
    Win32FreePool(*(_QWORD *)(*(_QWORD *)v2 + 744LL));
    *(_QWORD *)(*(_QWORD *)v2 + 744LL) = 0LL;
  }
  DCOBJ::~DCOBJ((DCOBJ *)v39);
  RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)&v32);
  LFONTOBJ::~LFONTOBJ(&v36);
}
