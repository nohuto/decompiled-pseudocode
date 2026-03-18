/*
 * XREFs of ?GetLinkedFontUFIs@RFONTOBJ@@QEAAHAEAVXDCOBJ@@PEAU_UNIVERSAL_FONT_ID@@H@Z @ 0x1C0091288
 * Callers:
 *     NtGdiGetLinkedUFIs @ 0x1C0090910 (NtGdiGetLinkedUFIs.c)
 * Callees:
 *     ?AddUFIToBuffer@RFONTOBJ@@AEAAXPEAVPFE@@AEAPEAU_UNIVERSAL_FONT_ID@@AEAHH@Z @ 0x1C00914F4 (-AddUFIToBuffer@RFONTOBJ@@AEAAXPEAVPFE@@AEAPEAU_UNIVERSAL_FONT_ID@@AEAHH@Z.c)
 *     ?pGetLinkedFontList@PFEOBJ@@QEAAPEAU_LIST_ENTRY@@XZ @ 0x1C0092BB0 (-pGetLinkedFontList@PFEOBJ@@QEAAPEAU_LIST_ENTRY@@XZ.c)
 *     ?GetEUDCDefaultFontPFE@RFONTOBJ@@AEAAPEAVPFE@@I@Z @ 0x1C0093CC8 (-GetEUDCDefaultFontPFE@RFONTOBJ@@AEAAPEAVPFE@@I@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C009C5D4 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?bInitSystemTT@RFONTOBJ@@QEAAHAEAVXDCOBJ@@@Z @ 0x1C02A0380 (-bInitSystemTT@RFONTOBJ@@QEAAHAEAVXDCOBJ@@@Z.c)
 */

__int64 __fastcall RFONTOBJ::GetLinkedFontUFIs(
        RFONTOBJ *this,
        struct XDCOBJ *a2,
        struct _UNIVERSAL_FONT_ID *a3,
        int a4)
{
  __int64 v7; // rax
  __int64 v8; // rcx
  unsigned int v9; // r15d
  struct _LIST_ENTRY *i; // rdi
  __int64 v11; // rcx
  struct PFE *EUDCDefaultFontPFE; // rax
  struct _UNIVERSAL_FONT_ID *v13; // rsi
  int v14; // edi
  __int64 v15; // rcx
  unsigned int v16; // edi
  struct PFE *Flink; // rdx
  __int64 v19; // rax
  int v20; // eax
  __int64 v21; // rax
  int v22; // eax
  __int64 v23; // rax
  _QWORD v24[2]; // [rsp+30h] [rbp-10h] BYREF
  struct _UNIVERSAL_FONT_ID *v25; // [rsp+80h] [rbp+40h] BYREF
  int v26; // [rsp+88h] [rbp+48h] BYREF

  v25 = a3;
  v26 = 0;
  if ( a4 && !a3 )
    return 0LL;
  v7 = *(_QWORD *)this;
  if ( *(_DWORD *)(*(_QWORD *)this + 708LL) )
  {
    if ( !*(_QWORD *)(v7 + 720) && !(unsigned int)RFONTOBJ::bInitSystemTT(this, a2) )
      return 0LL;
    *(_DWORD *)(*(_QWORD *)this + 712LL) |= 0x100u;
    v7 = *(_QWORD *)this;
  }
  v8 = *(_QWORD *)(v7 + 720);
  if ( v8 )
  {
    v26 = 1;
    if ( a4 > 0 )
    {
      v19 = *(_QWORD *)(v8 + 120);
      v24[0] = 0LL;
      *(_QWORD *)a3 = *(_QWORD *)(v19 + 84);
      v25 = (struct _UNIVERSAL_FONT_ID *)((char *)a3 + 8);
      RFONTOBJ::~RFONTOBJ((RFONTOBJ *)v24);
      v7 = *(_QWORD *)this;
    }
  }
  v9 = *(_DWORD *)(v7 + 844) != 0;
  GreAcquireSemaphore(ghsemEUDC1);
  ++gcEUDCCount;
  EtwTraceGreLockReleaseSemaphore(L"ghsemEUDC1", ghsemEUDC1);
  GreReleaseSemaphoreInternal(ghsemEUDC1);
  v24[0] = *(_QWORD *)(*(_QWORD *)this + 120LL);
  for ( i = PFEOBJ::pGetLinkedFontList((PFEOBJ *)v24)->Flink; i != PFEOBJ::pGetLinkedFontList((PFEOBJ *)v24); i = i->Flink )
  {
    Flink = (struct PFE *)*((_QWORD *)&i[2].Flink + v9);
    if ( !Flink )
      Flink = (struct PFE *)i[2].Flink;
    RFONTOBJ::AddUFIToBuffer(this, Flink, &v25, &v26, a4);
  }
  GreAcquireSemaphore(ghsemEUDC1);
  --gcEUDCCount;
  EtwTraceGreLockReleaseSemaphore(L"ghsemEUDC1", ghsemEUDC1);
  GreReleaseSemaphoreInternal(ghsemEUDC1);
  v11 = *(_QWORD *)(*(_QWORD *)this + 736LL);
  if ( v11 )
  {
    v20 = v26;
    v13 = v25;
    v14 = ++v26;
    if ( v20 < a4 )
    {
      v21 = *(_QWORD *)(v11 + 120);
      v24[0] = 0LL;
      *(_QWORD *)v25 = *(_QWORD *)(v21 + 84);
      v13 = (struct _UNIVERSAL_FONT_ID *)((char *)v13 + 8);
      v25 = v13;
      RFONTOBJ::~RFONTOBJ((RFONTOBJ *)v24);
    }
  }
  else
  {
    EUDCDefaultFontPFE = RFONTOBJ::GetEUDCDefaultFontPFE(this, v9);
    RFONTOBJ::AddUFIToBuffer(this, EUDCDefaultFontPFE, &v25, &v26, a4);
    v13 = v25;
    v14 = v26;
  }
  v15 = *(_QWORD *)(*(_QWORD *)this + 728LL);
  if ( v15 )
  {
    v22 = v14;
    v16 = v14 + 1;
    if ( v22 < a4 )
    {
      v23 = *(_QWORD *)(v15 + 120);
      v24[0] = 0LL;
      *(_QWORD *)v13 = *(_QWORD *)(v23 + 84);
      RFONTOBJ::~RFONTOBJ((RFONTOBJ *)v24);
    }
  }
  else
  {
    GreAcquireSemaphore(ghsemEUDC1);
    ++gcEUDCCount;
    EtwTraceGreLockReleaseSemaphore(L"ghsemEUDC1", ghsemEUDC1);
    GreReleaseSemaphoreInternal(ghsemEUDC1);
    RFONTOBJ::AddUFIToBuffer(this, (struct PFE *)(&gappfeSysEUDC)[v9], &v25, &v26, a4);
    GreAcquireSemaphore(ghsemEUDC1);
    --gcEUDCCount;
    EtwTraceGreLockReleaseSemaphore(L"ghsemEUDC1", ghsemEUDC1);
    GreReleaseSemaphoreInternal(ghsemEUDC1);
    return (unsigned int)v26;
  }
  return v16;
}
