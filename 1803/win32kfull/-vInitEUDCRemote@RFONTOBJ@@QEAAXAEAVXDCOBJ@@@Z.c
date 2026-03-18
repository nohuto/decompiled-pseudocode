/*
 * XREFs of ?vInitEUDCRemote@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C02775D8
 * Callers:
 *     ?vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C000399C (-vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 * Callees:
 *     ?UpdateFontLinksLockOrder@RFONTOBJ@@AEAAXXZ @ 0x1C0003340 (-UpdateFontLinksLockOrder@RFONTOBJ@@AEAAXXZ.c)
 *     ?vInit@RFONTOBJ@@QEAAXAEAVXDCOBJ@@PEAVPFE@@PEAU_EUDCLOGFONT@@H@Z @ 0x1C000363C (-vInit@RFONTOBJ@@QEAAXAEAVXDCOBJ@@PEAVPFE@@PEAU_EUDCLOGFONT@@H@Z.c)
 *     ?ComputeEUDCLogfont@RFONTOBJ@@QEAAXPEAU_EUDCLOGFONT@@AEAVXDCOBJ@@@Z @ 0x1C000406C (-ComputeEUDCLogfont@RFONTOBJ@@QEAAXPEAU_EUDCLOGFONT@@AEAVXDCOBJ@@@Z.c)
 *     ??1RFONTTMPOBJ@@QEAA@XZ @ 0x1C000476C (--1RFONTTMPOBJ@@QEAA@XZ.c)
 *     ??0MDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0078C50 (--0MDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C0078C80 (--1DCOBJ@@QEAA@XZ.c)
 *     ?vDeleteRFONTRef@PFFOBJ@@QEAAXXZ @ 0x1C0081170 (-vDeleteRFONTRef@PFFOBJ@@QEAAXXZ.c)
 *     ??0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAVPDEVOBJ@@@Z @ 0x1C0083964 (--0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAVPDEVOBJ@@@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C0088BE8 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C0088FF8 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     PALLOCMEM2 @ 0x1C00CB03C (PALLOCMEM2.c)
 *     ??0IFIOBJR@@QEAA@PEBU_IFIMETRICS@@AEAVRFONTOBJ@@AEAVDCOBJ@@@Z @ 0x1C00CB7B4 (--0IFIOBJR@@QEAA@PEBU_IFIMETRICS@@AEAVRFONTOBJ@@AEAVDCOBJ@@@Z.c)
 *     ?pGetLinkedFontList@PFEOBJ@@QEAAPEAU_LIST_ENTRY@@XZ @ 0x1C00CCBE8 (-pGetLinkedFontList@PFEOBJ@@QEAAPEAU_LIST_ENTRY@@XZ.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     ?vMakeInactive@RFONTOBJ@@QEAAXXZ @ 0x1C0197244 (-vMakeInactive@RFONTOBJ@@QEAAXXZ.c)
 *     ??1LFONTOBJ@@QEAA@XZ @ 0x1C01973D8 (--1LFONTOBJ@@QEAA@XZ.c)
 *     ?ppfeFromUFI@@YAPEAVPFE@@PEAU_UNIVERSAL_FONT_ID@@@Z @ 0x1C02774BC (-ppfeFromUFI@@YAPEAVPFE@@PEAU_UNIVERSAL_FONT_ID@@@Z.c)
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
  __int64 v14; // rax
  struct RFONT **v15; // r14
  __int64 v16; // rbx
  unsigned int v17; // ecx
  HDC *v18; // rdx
  unsigned int v19; // esi
  __int64 v20; // r13
  struct PFE *v21; // rax
  struct PFE *v22; // r12
  struct _LIST_ENTRY *LinkedFontList; // rax
  struct _LIST_ENTRY *i; // rcx
  int Blink; // eax
  __int64 v26; // rcx
  __int64 v27; // rdx
  struct RFONT **v28; // rsi
  HDC v29; // [rsp+50h] [rbp-B0h] BYREF
  struct RFONT *v30; // [rsp+58h] [rbp-A8h] BYREF
  int v31; // [rsp+60h] [rbp-A0h]
  __int64 v32; // [rsp+68h] [rbp-98h] BYREF
  RFONTOBJ *v33; // [rsp+70h] [rbp-90h]
  struct LFONT *v34; // [rsp+78h] [rbp-88h] BYREF
  __int64 v35; // [rsp+80h] [rbp-80h] BYREF
  int v36; // [rsp+88h] [rbp-78h]
  __int64 v37; // [rsp+90h] [rbp-70h] BYREF
  int v38; // [rsp+A0h] [rbp-60h]
  _BYTE v39[16]; // [rsp+A8h] [rbp-58h] BYREF
  _OWORD v40[2]; // [rsp+B8h] [rbp-48h] BYREF
  _OWORD v41[4]; // [rsp+E0h] [rbp-20h] BYREF
  _BYTE v42[80]; // [rsp+120h] [rbp+20h] BYREF

  v2 = this;
  v33 = this;
  v3 = *(_QWORD *)this;
  v4 = 0LL;
  v6 = *(_QWORD **)(v3 + 728);
  if ( v6 )
  {
    if ( *v6 )
      return;
    DbgkWerCaptureLiveKernelDump(L"win32kfull.sys", 356LL, 24LL);
    v3 = *(_QWORD *)v2;
  }
  v7 = 0;
  if ( !*(_QWORD *)(v3 + 728) )
  {
    v8 = *((_DWORD *)*a2 + 78);
    if ( v8 <= 0xA )
    {
      *(_QWORD *)(v3 + 728) = v3 + 736;
    }
    else
    {
      v9 = PALLOCMEM2(8 * v8, 1718382187LL, 1);
      *(_QWORD *)(*(_QWORD *)v2 + 728LL) = v9;
      if ( !v9 )
        return;
      v7 = 1;
    }
  }
  *(_DWORD *)(*(_QWORD *)v2 + 824LL) = 0;
  v10 = (*a2)[6];
  v12 = (struct HLFONT__ *)(*a2)[267];
  v32 = *(_QWORD *)(*(_QWORD *)v2 + 104LL);
  v11 = v32;
  v29 = v10;
  LFONTOBJ::LFONTOBJ((LFONTOBJ *)&v34, v12, (struct PDEVOBJ *)&v29);
  v13 = *a2;
  v14 = *(_QWORD *)v2;
  v36 = 0;
  v35 = v14;
  MDCOBJ::MDCOBJ((MDCOBJ *)v39, *v13);
  IFIOBJR::IFIOBJR(
    (IFIOBJR *)v41,
    *(const struct _IFIMETRICS **)(v11 + 32),
    (struct RFONTOBJ *)&v35,
    (struct DCOBJ *)v39);
  RFONTOBJ::ComputeEUDCLogfont(v2, (struct _EUDCLOGFONT *)v40, (struct XDCOBJ *)a2);
  v15 = (struct RFONT **)v42;
  v16 = 0LL;
  v17 = *((_DWORD *)*a2 + 78);
  if ( v17 <= 0xA || (v15 = (struct RFONT **)PALLOCMEM2(8 * v17, 1718382187LL, 1)) != 0LL )
  {
    *(_DWORD *)(*(_QWORD *)v2 + 696LL) |= 0x200u;
    v18 = *a2;
    if ( ((_DWORD)(*a2)[6][10] & 0x8000) != 0 )
    {
      EtwTraceGreLockReleaseSemaphore(L"prfnt->hsemEUDC", *(_QWORD *)(*(_QWORD *)v2 + 832LL));
      GreReleaseSemaphoreInternal(*(_QWORD *)(*(_QWORD *)v2 + 832LL));
      EtwTraceGreLockReleaseSemaphore(L"prfnt->hsemCache", *(_QWORD *)(*(_QWORD *)v2 + 496LL));
      GreReleaseSemaphoreInternal(*(_QWORD *)(*(_QWORD *)v2 + 496LL));
      v18 = *a2;
    }
    if ( *((_DWORD *)v18 + 78) )
    {
      v19 = 0;
      do
      {
        v20 = 0LL;
        v37 = 0LL;
        v31 = 0;
        v30 = 0LL;
        v29 = (HDC)ghsemPublicPFT;
        GreAcquireSemaphore(ghsemPublicPFT);
        v21 = ppfeFromUFI((struct _UNIVERSAL_FONT_ID *)((*a2)[38] + 2 * v19));
        v22 = v21;
        if ( v21 )
        {
          v20 = *(_QWORD *)v21;
          v37 = v20;
          v38 = 0;
          ++*(_DWORD *)(v20 + 68);
        }
        SEMOBJ::vUnlock((SEMOBJ *)&v29);
        if ( v22 )
        {
          v41[0] = v40[0];
          v41[1] = v40[1];
          LinkedFontList = PFEOBJ::pGetLinkedFontList((PFEOBJ *)&v32);
          if ( LinkedFontList )
          {
            for ( i = LinkedFontList->Flink; i != LinkedFontList; i = i->Flink )
            {
              if ( (struct PFE *)i[2].Flink == v22 || (struct PFE *)i[2].Blink == v22 )
              {
                Blink = (int)i[1].Blink;
                if ( Blink )
                  HIDWORD(v41[0]) = HIDWORD(v40[0]) * Blink / SHIDWORD(i[1].Blink);
                break;
              }
            }
          }
          RFONTOBJ::vInit((RFONTOBJ *)&v30, (struct XDCOBJ *)a2, v22, (struct _EUDCLOGFONT *)v41);
          if ( v30 )
          {
            v15[v16] = v30;
            v16 = (unsigned int)(v16 + 1);
          }
        }
        RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v30);
        if ( v20 && !v38 )
          PFFOBJ::vDeleteRFONTRef((PFFOBJ *)&v37);
        v18 = *a2;
        ++v19;
      }
      while ( v19 < *((_DWORD *)*a2 + 78) );
      v2 = v33;
    }
    if ( ((_DWORD)v18[6][10] & 0x8000) != 0 )
    {
      GreAcquireSemaphore(*(_QWORD *)(*(_QWORD *)v2 + 496LL));
      GreAcquireSemaphore(*(_QWORD *)(*(_QWORD *)v2 + 832LL));
    }
    v26 = *(_QWORD *)v2;
    if ( (*(_DWORD *)(*(_QWORD *)v2 + 696LL) & 0x200) != 0 )
    {
      if ( (_DWORD)v16 )
      {
        v27 = (unsigned int)v16;
        do
        {
          *(_QWORD *)(v4 * 8 + *(_QWORD *)(*(_QWORD *)v2 + 728LL)) = v15[v4];
          ++v4;
          --v27;
        }
        while ( v27 );
        *(_DWORD *)(*(_QWORD *)v2 + 824LL) = v16;
      }
      else
      {
        if ( *(_QWORD *)(v26 + 728) != v26 + 736 )
        {
          Win32FreePool(*(_QWORD *)(v26 + 728));
          v26 = *(_QWORD *)v2;
        }
        *(_QWORD *)(v26 + 728) = 0LL;
        *(_DWORD *)(*(_QWORD *)v2 + 824LL) = 0;
      }
      RFONTOBJ::UpdateFontLinksLockOrder(v2);
      *(_DWORD *)(*(_QWORD *)v2 + 696LL) &= ~0x200u;
    }
    else if ( (_DWORD)v16 )
    {
      v28 = v15;
      do
      {
        v30 = *v28;
        v31 = 0;
        RFONTOBJ::vMakeInactive(&v30);
        RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)&v30);
        ++v28;
        --v16;
      }
      while ( v16 );
    }
    if ( v15 != (struct RFONT **)v42 )
      Win32FreePool(v15);
  }
  else if ( v7 )
  {
    Win32FreePool(*(_QWORD *)(*(_QWORD *)v2 + 728LL));
    *(_QWORD *)(*(_QWORD *)v2 + 728LL) = 0LL;
  }
  DCOBJ::~DCOBJ((DCOBJ *)v39);
  RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)&v35);
  LFONTOBJ::~LFONTOBJ(&v34);
}
