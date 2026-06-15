/*
 * XREFs of ?Initialize@CAppInstanceId@@QEAAJPEBG@Z @ 0x1800DBD74
 * Callers:
 *     ?Initialize@CAudioSessionInstanceId@@QEAAJPEBG0@Z @ 0x1800DC160 (-Initialize@CAudioSessionInstanceId@@QEAAJPEBG0@Z.c)
 *     ?Initialize@CAudioSessionInstanceId@@QEAAJPEBG@Z @ 0x1800DC4D4 (-Initialize@CAudioSessionInstanceId@@QEAAJPEBG@Z.c)
 * Callees:
 *     ?SetString@?$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z @ 0x18000A204 (-SetString@-$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18002A780 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x18002DBA0 (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     ?CloneData@?$CSimpleStringT@G$0A@@ATL@@CAPEAUCStringData@2@PEAU32@@Z @ 0x18003BF84 (-CloneData@-$CSimpleStringT@G$0A@@ATL@@CAPEAUCStringData@2@PEAU32@@Z.c)
 *     ?SetString@?$CSimpleStringT@G$0A@@ATL@@QEAAXPEBG@Z @ 0x180042D98 (-SetString@-$CSimpleStringT@G$0A@@ATL@@QEAAXPEBG@Z.c)
 *     ??0?$CSimpleStringT@G$0A@@ATL@@QEAA@PEAUIAtlStringMgr@1@@Z @ 0x180043FB4 (--0-$CSimpleStringT@G$0A@@ATL@@QEAA@PEAUIAtlStringMgr@1@@Z.c)
 *     ?Tokenize@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEBA?AV12@PEBGAEAH@Z @ 0x1800D1B78 (-Tokenize@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEBA-AV12@PEBGAEAH@Z.c)
 *     ??9ATL@@YA_NPEBDAEBV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@0@@Z @ 0x1800DB540 (--9ATL@@YA_NPEBDAEBV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@0@@Z.c)
 *     ?GetAt@?$CSimpleStringT@G$0A@@ATL@@QEBAGH@Z @ 0x1800DB6E0 (-GetAt@-$CSimpleStringT@G$0A@@ATL@@QEBAGH@Z.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CAppInstanceId::Initialize(CAppInstanceId *this, unsigned __int16 *a2)
{
  CAppInstanceId *v3; // r14
  unsigned int v4; // esi
  _BYTE *v5; // rdx
  volatile signed __int32 *v6; // rcx
  wchar_t *v7; // rdi
  int *v8; // rbx
  volatile signed __int32 *v9; // rdi
  __int64 v10; // r8
  _BYTE *v11; // rdx
  volatile signed __int32 *v12; // rcx
  wchar_t *v13; // rbx
  int *v14; // r15
  volatile signed __int32 *v15; // rbx
  __int64 v16; // r8
  __int64 *v17; // rax
  unsigned __int16 *v18; // rcx
  char v19; // r15
  int *v21; // rbx
  __int64 v22; // r8
  wchar_t *String; // [rsp+20h] [rbp-68h] BYREF
  wchar_t *v24; // [rsp+28h] [rbp-60h] BYREF
  __int64 v25; // [rsp+30h] [rbp-58h] BYREF
  __int64 v26; // [rsp+38h] [rbp-50h] BYREF
  wchar_t *EndPtr[2]; // [rsp+40h] [rbp-48h] BYREF
  ATL::CAtlException *v28; // [rsp+50h] [rbp-38h] BYREF
  int v30; // [rsp+A0h] [rbp+18h] BYREF
  __int64 v31; // [rsp+A8h] [rbp+20h] BYREF

  EndPtr[1] = (wchar_t *)-2LL;
  v3 = this;
  LODWORD(v31) = 0;
  ATL::CSimpleStringT<unsigned short,0>::CSimpleStringT<unsigned short,0>(&v25, (__int64)&ATL::g_strmgr);
  ATL::CSimpleStringT<unsigned short,0>::CSimpleStringT<unsigned short,0>(&v24, (__int64)&ATL::g_strmgr);
  ATL::CSimpleStringT<unsigned short,0>::CSimpleStringT<unsigned short,0>(&String, (__int64)&ATL::g_strmgr);
  try
  {
    v4 = 0;
    ATL::CSimpleStringT<unsigned short,0>::SetString(&v25, a2);
  }
  catch ( ATL::CAtlException *v28 )
  {
    v21 = (int *)v28;
    if ( *(_DWORD *)v28 == -1073741571 )
      _o__resetstkoflw();
    v30 = *v21;
    v4 = v30;
    if ( v30 < 0 )
    {
      v7 = v24;
      goto LABEL_29;
    }
    v3 = this;
  }
  v30 = 0;
  v5 = (_BYTE *)*ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Tokenize(
                   &v25,
                   &v31,
                   v22,
                   &v30);
  v6 = (volatile signed __int32 *)(v5 - 24);
  v7 = v24;
  v8 = (int *)(v24 - 12);
  if ( v5 - 24 != (_BYTE *)(v24 - 12) )
  {
    if ( v8[4] >= 0 && *(_QWORD *)v6 == *(_QWORD *)v8 )
    {
      v9 = ATL::CSimpleStringT<unsigned short,0>::CloneData(v6);
      ATL::CStringData::Release((ATL::CStringData *)v8);
      v7 = (wchar_t *)(v9 + 6);
      v24 = v7;
    }
    else
    {
      ATL::CSimpleStringT<unsigned short,0>::SetString((void **)&v24, v5, *((_DWORD *)v5 - 4));
      v7 = v24;
    }
  }
  ATL::CStringData::Release((ATL::CStringData *)(v31 - 24));
  if ( v30 == -1 )
  {
    v4 = -2147467259;
LABEL_29:
    v13 = String;
    goto LABEL_30;
  }
  v11 = (_BYTE *)*ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Tokenize(
                    &v25,
                    &v31,
                    v10,
                    &v30);
  v12 = (volatile signed __int32 *)(v11 - 24);
  v13 = String;
  v14 = (int *)(String - 12);
  if ( v11 - 24 != (_BYTE *)(String - 12) )
  {
    if ( v14[4] >= 0 && *(_QWORD *)v12 == *(_QWORD *)v14 )
    {
      v15 = ATL::CSimpleStringT<unsigned short,0>::CloneData(v12);
      ATL::CStringData::Release((ATL::CStringData *)v14);
      v13 = (wchar_t *)(v15 + 6);
      String = v13;
    }
    else
    {
      ATL::CSimpleStringT<unsigned short,0>::SetString((void **)&String, v11, *((_DWORD *)v11 - 4));
      v13 = String;
    }
  }
  ATL::CStringData::Release((ATL::CStringData *)(v31 - 24));
  if ( v30 == -1
    || ((v17 = ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Tokenize(
                 &v25,
                 &v26,
                 v16,
                 &v30),
         LODWORD(v31) = 1,
         ATL::operator!=(v18, v17))
     || v30 != -1
      ? (v19 = 1)
      : (v19 = 0),
        ATL::CStringData::Release((ATL::CStringData *)(v26 - 24)),
        v19) )
  {
    v4 = -2147467259;
LABEL_30:
    AudSrvTraceLoggingErrorHelper("CAppInstanceId::Initialize", 633, v4);
    goto LABEL_31;
  }
  if ( *((_DWORD *)v13 - 4) == 1 && (unsigned __int16)ATL::CSimpleStringT<unsigned short,0>::GetAt(&String) == 35 )
  {
    *((_DWORD *)v3 + 2) = 1;
    *(_DWORD *)v3 = 0;
  }
  else
  {
    *(_DWORD *)v3 = wcstoul(v13, EndPtr, 10);
  }
  *((_DWORD *)v3 + 1) = wcstoul(v7, EndPtr, 10);
LABEL_31:
  ATL::CStringData::Release((ATL::CStringData *)(v13 - 12));
  ATL::CStringData::Release((ATL::CStringData *)(v7 - 12));
  ATL::CStringData::Release((ATL::CStringData *)(v25 - 24));
  return v4;
}
