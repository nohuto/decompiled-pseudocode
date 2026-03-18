/*
 * XREFs of ?GetLinkedFontUFIs@RFONTOBJ@@QEAAHAEAVXDCOBJ@@PEAU_UNIVERSAL_FONT_ID@@H@Z @ 0x1C00C4EB8
 * Callers:
 *     NtGdiGetLinkedUFIs @ 0x1C00C4B20 (NtGdiGetLinkedUFIs.c)
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C008471C (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?AddUFIToBuffer@RFONTOBJ@@AEAAXPEAVPFE@@AEAPEAU_UNIVERSAL_FONT_ID@@AEAHH@Z @ 0x1C00C50E4 (-AddUFIToBuffer@RFONTOBJ@@AEAAXPEAVPFE@@AEAPEAU_UNIVERSAL_FONT_ID@@AEAHH@Z.c)
 *     ?pGetLinkedFontList@PFEOBJ@@QEAAPEAU_LIST_ENTRY@@XZ @ 0x1C00C5138 (-pGetLinkedFontList@PFEOBJ@@QEAAPEAU_LIST_ENTRY@@XZ.c)
 *     ?GetEUDCDefaultFontPFE@RFONTOBJ@@AEAAPEAVPFE@@I@Z @ 0x1C00C5158 (-GetEUDCDefaultFontPFE@RFONTOBJ@@AEAAPEAVPFE@@I@Z.c)
 *     ?bInitSystemTT@RFONTOBJ@@QEAAHAEAVXDCOBJ@@@Z @ 0x1C028A810 (-bInitSystemTT@RFONTOBJ@@QEAAHAEAVXDCOBJ@@@Z.c)
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
  __int64 v18; // rax
  struct PFE *Flink; // rdx
  int v20; // eax
  __int64 v21; // rax
  int v22; // eax
  __int64 v23; // rax
  __int64 v24; // [rsp+30h] [rbp-10h] BYREF
  int v25; // [rsp+38h] [rbp-8h]
  struct _UNIVERSAL_FONT_ID *v26; // [rsp+80h] [rbp+40h] BYREF
  int v27; // [rsp+88h] [rbp+48h] BYREF

  v26 = a3;
  v27 = 0;
  if ( a4 && !a3 )
    return 0LL;
  v7 = *(_QWORD *)this;
  if ( !*(_DWORD *)(*(_QWORD *)this + 708LL) )
    goto LABEL_3;
  if ( !*(_QWORD *)(v7 + 720) && !(unsigned int)RFONTOBJ::bInitSystemTT(this, a2) )
    return 0LL;
  *(_DWORD *)(*(_QWORD *)this + 712LL) |= 0x100u;
  v7 = *(_QWORD *)this;
LABEL_3:
  v8 = *(_QWORD *)(v7 + 720);
  if ( v8 )
  {
    v27 = 1;
    if ( a4 > 0 )
    {
      v18 = *(_QWORD *)(v8 + 120);
      v25 = 0;
      v24 = 0LL;
      *(_QWORD *)a3 = *(_QWORD *)(v18 + 84);
      v26 = (struct _UNIVERSAL_FONT_ID *)((char *)a3 + 8);
      RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v24);
      v7 = *(_QWORD *)this;
    }
  }
  v9 = *(_DWORD *)(v7 + 844) != 0;
  GreAcquireSemaphore(ghsemEUDC1);
  ++gcEUDCCount;
  EtwTraceGreLockReleaseSemaphore(L"ghsemEUDC1", ghsemEUDC1);
  GreReleaseSemaphoreInternal(ghsemEUDC1);
  v24 = *(_QWORD *)(*(_QWORD *)this + 120LL);
  for ( i = PFEOBJ::pGetLinkedFontList((PFEOBJ *)&v24)->Flink; i != PFEOBJ::pGetLinkedFontList((PFEOBJ *)&v24); i = i->Flink )
  {
    Flink = (struct PFE *)*((_QWORD *)&i[2].Flink + v9);
    if ( !Flink )
      Flink = (struct PFE *)i[2].Flink;
    RFONTOBJ::AddUFIToBuffer(this, Flink, &v26, &v27, a4);
  }
  GreAcquireSemaphore(ghsemEUDC1);
  --gcEUDCCount;
  EtwTraceGreLockReleaseSemaphore(L"ghsemEUDC1", ghsemEUDC1);
  GreReleaseSemaphoreInternal(ghsemEUDC1);
  v11 = *(_QWORD *)(*(_QWORD *)this + 736LL);
  if ( v11 )
  {
    v20 = v27;
    v13 = v26;
    v14 = ++v27;
    if ( v20 < a4 )
    {
      v21 = *(_QWORD *)(v11 + 120);
      v25 = 0;
      v24 = 0LL;
      *(_QWORD *)v26 = *(_QWORD *)(v21 + 84);
      v13 = (struct _UNIVERSAL_FONT_ID *)((char *)v13 + 8);
      v26 = v13;
      RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v24);
    }
  }
  else
  {
    EUDCDefaultFontPFE = RFONTOBJ::GetEUDCDefaultFontPFE(this, v9);
    RFONTOBJ::AddUFIToBuffer(this, EUDCDefaultFontPFE, &v26, &v27, a4);
    v13 = v26;
    v14 = v27;
  }
  v15 = *(_QWORD *)(*(_QWORD *)this + 728LL);
  if ( v15 )
  {
    v22 = v14;
    v16 = v14 + 1;
    if ( v22 < a4 )
    {
      v23 = *(_QWORD *)(v15 + 120);
      v25 = 0;
      v24 = 0LL;
      *(_QWORD *)v13 = *(_QWORD *)(v23 + 84);
      RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v24);
    }
  }
  else
  {
    GreAcquireSemaphore(ghsemEUDC1);
    ++gcEUDCCount;
    EtwTraceGreLockReleaseSemaphore(L"ghsemEUDC1", ghsemEUDC1);
    GreReleaseSemaphoreInternal(ghsemEUDC1);
    RFONTOBJ::AddUFIToBuffer(this, (struct PFE *)(&gappfeSysEUDC)[v9], &v26, &v27, a4);
    GreAcquireSemaphore(ghsemEUDC1);
    --gcEUDCCount;
    EtwTraceGreLockReleaseSemaphore(L"ghsemEUDC1", ghsemEUDC1);
    GreReleaseSemaphoreInternal(ghsemEUDC1);
    return (unsigned int)v27;
  }
  return v16;
}
