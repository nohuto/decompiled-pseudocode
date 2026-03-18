/*
 * XREFs of ?vInitEUDCRemote@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C02A0B54
 * Callers:
 *     ?vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C0104A14 (-vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 * Callees:
 *     ?pGetLinkedFontList@PFEOBJ@@QEAAPEAU_LIST_ENTRY@@XZ @ 0x1C004ED30 (-pGetLinkedFontList@PFEOBJ@@QEAAPEAU_LIST_ENTRY@@XZ.c)
 *     ??0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAVPDEVOBJ@@@Z @ 0x1C004EEA0 (--0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAVPDEVOBJ@@@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C0052D74 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ??0IFIOBJR@@QEAA@PEBU_IFIMETRICS@@AEAVRFONTOBJ@@AEAVDCOBJ@@@Z @ 0x1C00547E0 (--0IFIOBJR@@QEAA@PEBU_IFIMETRICS@@AEAVRFONTOBJ@@AEAVDCOBJ@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C006110C (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0061358 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vDeleteRFONTRef@PFFOBJ@@QEAAXXZ @ 0x1C00752FC (-vDeleteRFONTRef@PFFOBJ@@QEAAXXZ.c)
 *     PALLOCMEM2 @ 0x1C0075884 (PALLOCMEM2.c)
 *     ?vInit@RFONTOBJ@@QEAAXAEAVXDCOBJ@@PEAVPFE@@PEAU_EUDCLOGFONT@@H@Z @ 0x1C0104EE8 (-vInit@RFONTOBJ@@QEAAXAEAVXDCOBJ@@PEAVPFE@@PEAU_EUDCLOGFONT@@H@Z.c)
 *     ?UpdateFontLinksLockOrder@RFONTOBJ@@AEAAXXZ @ 0x1C0105714 (-UpdateFontLinksLockOrder@RFONTOBJ@@AEAAXXZ.c)
 *     ?ComputeEUDCLogfont@RFONTOBJ@@QEAAXPEAU_EUDCLOGFONT@@AEAVXDCOBJ@@@Z @ 0x1C0105858 (-ComputeEUDCLogfont@RFONTOBJ@@QEAAXPEAU_EUDCLOGFONT@@AEAVXDCOBJ@@@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C0107FBC (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     memset @ 0x1C0166840 (memset.c)
 *     ?ppfeFromUFI@@YAPEAVPFE@@PEAU_UNIVERSAL_FONT_ID@@@Z @ 0x1C02A0A38 (-ppfeFromUFI@@YAPEAVPFE@@PEAU_UNIVERSAL_FONT_ID@@@Z.c)
 *     ?vMakeInactive@RFONTOBJ@@QEAAXXZ @ 0x1C02A1B98 (-vMakeInactive@RFONTOBJ@@QEAAXXZ.c)
 */

void __fastcall RFONTOBJ::vInitEUDCRemote(HDC *this, HDC **a2)
{
  HDC v3; // r12
  HDC v4; // rcx
  _QWORD *v6; // rax
  char v7; // r15
  unsigned int v8; // edx
  void *v9; // rax
  HDC v10; // rax
  __int64 v11; // rbx
  struct HLFONT__ *v12; // rdx
  HDC *v13; // rdx
  HDC *v14; // rsi
  __int64 v15; // rbx
  unsigned int v16; // ecx
  HDC *v17; // rdx
  unsigned int v18; // r13d
  struct PFE *v19; // rax
  struct PFE *v20; // r15
  struct _LIST_ENTRY *LinkedFontList; // rax
  struct _LIST_ENTRY *i; // rcx
  int Blink; // eax
  HDC v24; // rcx
  HDC v25; // rdx
  __int64 v26; // r8
  HDC *v27; // rdi
  HDC v28; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v29; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v30; // [rsp+60h] [rbp-A0h] BYREF
  struct LFONT *v31; // [rsp+68h] [rbp-98h] BYREF
  _QWORD v32[2]; // [rsp+70h] [rbp-90h] BYREF
  HDC v33[2]; // [rsp+80h] [rbp-80h] BYREF
  int v34; // [rsp+90h] [rbp-70h]
  _OWORD v35[2]; // [rsp+98h] [rbp-68h] BYREF
  _OWORD v36[4]; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v37[80]; // [rsp+100h] [rbp+0h] BYREF

  v3 = 0LL;
  v4 = *this;
  v6 = (_QWORD *)*((_QWORD *)v4 + 93);
  if ( v6 )
  {
    if ( *v6 )
      return;
    DbgkWerCaptureLiveKernelDump(L"win32kfull.sys", 356LL, 24LL);
    v4 = *this;
  }
  v7 = 0;
  if ( !*((_QWORD *)v4 + 93) )
  {
    v8 = *((_DWORD *)*a2 + 76);
    if ( v8 <= 0xA )
    {
      *((_QWORD *)v4 + 93) = v4 + 188;
    }
    else
    {
      v9 = PALLOCMEM2(8 * v8, 1718382187LL, 1);
      *((_QWORD *)*this + 93) = v9;
      if ( !v9 )
        return;
      v7 = 1;
    }
  }
  *((_DWORD *)*this + 210) = 0;
  v10 = (*a2)[6];
  v12 = (struct HLFONT__ *)(*a2)[216];
  v30 = *((_QWORD *)*this + 15);
  v11 = v30;
  v28 = v10;
  LFONTOBJ::LFONTOBJ((LFONTOBJ *)&v31, v12, (struct PDEVOBJ *)&v28);
  v13 = *a2;
  v28 = *this;
  DCOBJ::DCOBJ((DCOBJ *)v32, *v13);
  IFIOBJR::IFIOBJR(
    (IFIOBJR *)v36,
    *(const struct _IFIMETRICS **)(v11 + 32),
    (struct RFONTOBJ *)&v28,
    (struct DCOBJ *)v32);
  memset(v35, 0, sizeof(v35));
  RFONTOBJ::ComputeEUDCLogfont((RFONTOBJ *)this, (struct _EUDCLOGFONT *)v35, (struct XDCOBJ *)a2);
  v14 = (HDC *)v37;
  v15 = 0LL;
  v16 = *((_DWORD *)*a2 + 76);
  if ( v16 <= 0xA || (v14 = (HDC *)PALLOCMEM2(8 * v16, 1718382187LL, 1)) != 0LL )
  {
    *((_DWORD *)*this + 178) |= 0x200u;
    v17 = *a2;
    if ( ((_DWORD)(*a2)[6][10] & 0x8000) != 0 )
    {
      EtwTraceGreLockReleaseSemaphore(L"prfnt->hsemEUDC", *((_QWORD *)*this + 106));
      GreReleaseSemaphoreInternal(*((_QWORD *)*this + 106));
      EtwTraceGreLockReleaseSemaphore(L"prfnt->hsemCache", *((_QWORD *)*this + 63));
      GreReleaseSemaphoreInternal(*((_QWORD *)*this + 63));
      v17 = *a2;
    }
    v18 = 0;
    if ( *((_DWORD *)v17 + 76) )
    {
      do
      {
        v28 = 0LL;
        v33[0] = v3;
        v29 = ghsemPublicPFT;
        GreAcquireSemaphore(ghsemPublicPFT);
        v19 = ppfeFromUFI((struct _UNIVERSAL_FONT_ID *)((*a2)[37] + 2 * v18));
        v20 = v19;
        if ( v19 )
        {
          v3 = *(HDC *)v19;
          v33[0] = v3;
          ++*((_DWORD *)v3 + 17);
          v34 = 0;
        }
        SEMOBJ::vUnlock((SEMOBJ *)&v29);
        if ( v20 )
        {
          v36[0] = v35[0];
          v36[1] = v35[1];
          LinkedFontList = PFEOBJ::pGetLinkedFontList((PFEOBJ *)&v30);
          if ( LinkedFontList )
          {
            for ( i = LinkedFontList->Flink; i != LinkedFontList; i = i->Flink )
            {
              if ( (struct PFE *)i[2].Flink == v20 || (struct PFE *)i[2].Blink == v20 )
              {
                Blink = (int)i[1].Blink;
                if ( Blink )
                  HIDWORD(v36[0]) = HIDWORD(v35[0]) * Blink / SHIDWORD(i[1].Blink);
                break;
              }
            }
          }
          RFONTOBJ::vInit((RFONTOBJ *)&v28, (struct XDCOBJ *)a2, v20, (struct _EUDCLOGFONT *)v36);
          if ( v28 )
          {
            v14[v15] = v28;
            v15 = (unsigned int)(v15 + 1);
          }
        }
        RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v28);
        if ( v3 )
        {
          v3 = 0LL;
          if ( !v34 )
            PFFOBJ::vDeleteRFONTRef((PFFOBJ *)v33);
        }
        v17 = *a2;
        ++v18;
      }
      while ( v18 < *((_DWORD *)*a2 + 76) );
    }
    if ( ((_DWORD)v17[6][10] & 0x8000) != 0 )
    {
      GreAcquireSemaphore(*((_QWORD *)*this + 63));
      GreAcquireSemaphore(*((_QWORD *)*this + 106));
    }
    v24 = *this;
    if ( ((_DWORD)(*this)[178] & 0x200) != 0 )
    {
      if ( (_DWORD)v15 )
      {
        v25 = v3;
        v26 = (unsigned int)v15;
        do
        {
          *(_QWORD *)((char *)v25 + *((_QWORD *)*this + 93)) = *(HDC *)((char *)v14 + (_QWORD)v25);
          v25 += 2;
          --v26;
        }
        while ( v26 );
        *((_DWORD *)*this + 210) = v15;
      }
      else
      {
        if ( *((HDC *)v24 + 93) != v24 + 188 )
        {
          Win32FreePool(*((_QWORD *)v24 + 93));
          v24 = *this;
        }
        *((_QWORD *)v24 + 93) = v3;
        *((_DWORD *)*this + 210) = (_DWORD)v3;
      }
      RFONTOBJ::UpdateFontLinksLockOrder((RFONTOBJ *)this);
      *((_DWORD *)*this + 178) &= ~0x200u;
    }
    else if ( (_DWORD)v15 )
    {
      v27 = v14;
      do
      {
        v28 = *v27;
        RFONTOBJ::vMakeInactive((RFONTOBJ *)&v28);
        v28 = v3;
        RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v28);
        ++v27;
        --v15;
      }
      while ( v15 );
    }
    if ( v14 != (HDC *)v37 )
      Win32FreePool(v14);
  }
  else if ( v7 )
  {
    Win32FreePool(*((_QWORD *)*this + 93));
    *((_QWORD *)*this + 93) = 0LL;
  }
  if ( (HDC)v32[0] != v3 )
    XDCOBJ::vUnlockFast((XDCOBJ *)v32);
  v28 = v3;
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v28);
  if ( v31 )
    DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(v31);
}
