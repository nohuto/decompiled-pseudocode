/*
 * XREFs of ?TrackSystemEffectBehavior@@YAJPEAUIMMDevice@@W4APO_TYPE@@_N2AEBU_GUID@@@Z @ 0x14000AB80
 * Callers:
 *     ?ActivateAPOs@CPipeInstance@@AEAAJ_K@Z @ 0x140009C90 (-ActivateAPOs@CPipeInstance@@AEAAJ_K@Z.c)
 *     ?TrackSystemEffectBehavior@@YAJPEBGW4APO_TYPE@@_N2AEBU_GUID@@@Z @ 0x14000A500 (-TrackSystemEffectBehavior@@YAJPEBGW4APO_TYPE@@_N2AEBU_GUID@@@Z.c)
 * Callees:
 *     _Init_thread_footer @ 0x14001D4D0 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x14001D538 (_Init_thread_header.c)
 *     _guard_dispatch_icall_nop @ 0x14001D9E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TrackSystemEffectBehavior(__int64 a1, int a2, char a3, char a4, DWORD pcbData)
{
  __int64 v7; // rbx
  int v9; // r15d
  int v10; // edi
  __int64 v11; // rbx
  char *v12; // rdx
  __int64 v14; // rdx
  _QWORD v15[2]; // [rsp+40h] [rbp-40h] BYREF
  PROPVARIANT pvar; // [rsp+50h] [rbp-30h] BYREF
  __int64 v17; // [rsp+58h] [rbp-28h]
  __int64 v18; // [rsp+60h] [rbp-20h]
  PROPVARIANT v19; // [rsp+68h] [rbp-18h] BYREF
  __int64 v20; // [rsp+70h] [rbp-10h]
  __int64 v21; // [rsp+78h] [rbp-8h]
  int pvData; // [rsp+B8h] [rbp+38h] BYREF

  v15[1] = -2LL;
  v7 = a2;
  v9 = 0;
  v15[0] = 0LL;
  if ( dword_140089280 > *(_DWORD *)(*(_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + 4LL) )
  {
    Init_thread_header(&dword_140089280);
    if ( dword_140089280 == -1 )
    {
      xmmword_140088F64 = PKEY_Endpoint_LFX_FailCount;
      dword_140088F74 = 9;
      xmmword_140088F78 = PKEY_Endpoint_GFX_FailCount;
      dword_140088F88 = 8;
      xmmword_140088F8C = PKEY_Endpoint_EFX_FailCount;
      dword_140088F9C = 31;
      xmmword_140088F14 = PKEY_Endpoint_LFX_ExceptionCount;
      dword_140088F24 = 33;
      xmmword_140088F28 = PKEY_Endpoint_GFX_ExceptionCount;
      dword_140088F38 = 34;
      xmmword_140088F3C = PKEY_Endpoint_EFX_ExceptionCount;
      dword_140088F4C = 35;
      Init_thread_footer(&dword_140089280);
    }
  }
  if ( (_DWORD)v7 )
  {
    if ( !byte_140088EF0 )
    {
      pvData = 0;
      pcbData = 4;
      if ( !RegGetValueW(
              HKEY_LOCAL_MACHINE,
              L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio\\Policy",
              L"SkipAPOFailureCheck",
              0x10u,
              0LL,
              &pvData,
              &pcbData) )
        byte_140088FA0 = pvData != 0;
      byte_140088EF0 = 1;
    }
    if ( !byte_140088FA0 )
    {
      pvar = 0LL;
      v17 = 0LL;
      v18 = 0LL;
      v10 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD *))(*(_QWORD *)a1 + 32LL))(a1, 2LL, v15);
      if ( v10 < 0 )
      {
LABEL_11:
        PropVariantClear(&pvar);
        goto LABEL_12;
      }
      v11 = 20 * v7;
      v12 = (char *)&unk_140088F00;
      if ( !a4 )
        v12 = (char *)&unk_140088F50;
      v10 = (*(__int64 (__fastcall **)(_QWORD, char *, PROPVARIANT *))(*(_QWORD *)v15[0] + 40LL))(
              v15[0],
              &v12[v11],
              &pvar);
      if ( a3 )
      {
        if ( (_WORD)pvar == 19 )
        {
          if ( !(_DWORD)v17 )
            goto LABEL_11;
        }
        else if ( !(_WORD)pvar )
        {
          goto LABEL_11;
        }
        LOWORD(pvar) = 19;
        if ( !a4 )
        {
          LODWORD(v17) = 0;
          goto LABEL_35;
        }
        v19 = 0LL;
        v20 = 0LL;
        v21 = 0LL;
        (*(void (__fastcall **)(_QWORD, void *, PROPVARIANT *))(*(_QWORD *)v15[0] + 40LL))(
          v15[0],
          &PKEY_Endpoint_AllNonCriticalAPOsDisabled,
          &v19);
        if ( (_WORD)v19 != 19 || (_DWORD)v20 != 1 || (unsigned int)v17 > 1 )
          LODWORD(v17) = v17 - 1;
        PropVariantClear(&v19);
      }
      else
      {
        if ( (_WORD)pvar == 19 )
          v9 = v17;
        else
          LOWORD(pvar) = 19;
        LODWORD(v17) = v9 + 10;
      }
      v14 = v11 + 560896;
      if ( a4 )
      {
LABEL_36:
        v10 = (*(__int64 (__fastcall **)(_QWORD, char *, PROPVARIANT *))(*(_QWORD *)v15[0] + 48LL))(
                v15[0],
                (char *)&_ImageBase + v14,
                &pvar);
        goto LABEL_11;
      }
LABEL_35:
      v14 = v11 + 560976;
      goto LABEL_36;
    }
    v10 = 0;
  }
  else
  {
    v10 = 0;
  }
LABEL_12:
  if ( v15[0] )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v15[0] + 16LL))(v15[0]);
  return (unsigned int)v10;
}
