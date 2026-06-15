/*
 * XREFs of ?TrackSystemEffectBehavior@@YAJPEAUIMMDevice@@W4APO_TYPE@@_N2AEBU_GUID@@@Z @ 0x18012F1E8
 * Callers:
 *     ?TrackSystemEffectBehavior@@YAJPEBGW4APO_TYPE@@_N2AEBU_GUID@@@Z @ 0x18012F4AC (-TrackSystemEffectBehavior@@YAJPEBGW4APO_TYPE@@_N2AEBU_GUID@@@Z.c)
 * Callees:
 *     _Init_thread_footer @ 0x180060EF0 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x180060F58 (_Init_thread_header.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     IsSkipAPOFailureCheck @ 0x18012F16C (IsSkipAPOFailureCheck.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TrackSystemEffectBehavior(__int64 a1, int a2, char a3, char a4, __int64 a5)
{
  __int64 v7; // rbx
  int v9; // edi
  void *v10; // rdx
  int v11; // eax
  __int64 v12; // rdx
  PROPVARIANT v14; // [rsp+28h] [rbp-38h] BYREF
  __int64 v15; // [rsp+30h] [rbp-30h]
  __int64 v16; // [rsp+38h] [rbp-28h]
  PROPVARIANT pvar; // [rsp+40h] [rbp-20h] BYREF
  __int64 v18; // [rsp+48h] [rbp-18h]
  __int64 v19; // [rsp+50h] [rbp-10h]

  v7 = a2;
  a5 = 0LL;
  if ( dword_1801B4950 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 4LL) )
  {
    Init_thread_header(&dword_1801B4950);
    if ( dword_1801B4950 == -1 )
    {
      xmmword_1801B48F4 = PKEY_Endpoint_LFX_FailCount;
      dword_1801B4904 = 9;
      xmmword_1801B4908 = PKEY_Endpoint_GFX_FailCount;
      dword_1801B4918 = 8;
      xmmword_1801B491C = PKEY_Endpoint_EFX_FailCount;
      dword_1801B492C = 31;
      xmmword_1801B48A4 = PKEY_Endpoint_LFX_ExceptionCount;
      dword_1801B48B4 = 33;
      xmmword_1801B48B8 = PKEY_Endpoint_GFX_ExceptionCount;
      dword_1801B48C8 = 34;
      xmmword_1801B48CC = PKEY_Endpoint_EFX_ExceptionCount;
      dword_1801B48DC = 35;
      Init_thread_footer(&dword_1801B4950);
    }
  }
  if ( !(_DWORD)v7 || IsSkipAPOFailureCheck() )
  {
    v9 = 0;
    goto LABEL_29;
  }
  v14 = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  v9 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)a1 + 32LL))(a1, 2LL, &a5);
  if ( v9 >= 0 )
  {
    v10 = &unk_1801B4890;
    if ( !a4 )
      v10 = &unk_1801B48E0;
    v9 = (*(__int64 (__fastcall **)(__int64, __int64, PROPVARIANT *))(*(_QWORD *)a5 + 40LL))(
           a5,
           (__int64)v10 + 20 * v7,
           &v14);
    if ( !a3 )
    {
      if ( (_WORD)v14 == 19 )
      {
        v11 = v15;
      }
      else
      {
        LOWORD(v14) = 19;
        v11 = 0;
      }
      LODWORD(v15) = v11 + 10;
LABEL_25:
      v12 = 20 * v7 + 1788048;
      if ( !a4 )
        v12 = 20 * v7 + 1788128;
      v9 = (*(__int64 (__fastcall **)(__int64, char *, PROPVARIANT *))(*(_QWORD *)a5 + 48LL))(
             a5,
             (char *)&_ImageBase + v12,
             &v14);
      goto LABEL_28;
    }
    if ( ((_WORD)v14 != 19 || (_DWORD)v15) && (_WORD)v14 )
    {
      LOWORD(v14) = 19;
      if ( a4 )
      {
        pvar = 0LL;
        v18 = 0LL;
        v19 = 0LL;
        (*(void (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)a5 + 40LL))(
          a5,
          &PKEY_Endpoint_AllNonCriticalAPOsDisabled,
          &pvar);
        if ( (_WORD)pvar != 19 || (_DWORD)v18 != 1 || (unsigned int)v15 > 1 )
          LODWORD(v15) = v15 - 1;
        PropVariantClear(&pvar);
      }
      else
      {
        LODWORD(v15) = 0;
      }
      goto LABEL_25;
    }
  }
LABEL_28:
  PropVariantClear(&v14);
LABEL_29:
  if ( a5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a5 + 16LL))(a5);
  return (unsigned int)v9;
}
