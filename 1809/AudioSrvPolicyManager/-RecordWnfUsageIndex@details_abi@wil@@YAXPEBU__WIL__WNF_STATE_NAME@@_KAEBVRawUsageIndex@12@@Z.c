/*
 * XREFs of ?RecordWnfUsageIndex@details_abi@wil@@YAXPEBU__WIL__WNF_STATE_NAME@@_KAEBVRawUsageIndex@12@@Z @ 0x180005480
 * Callers:
 *     ?Record@UsageIndexes@details_abi@wil@@QEAAXXZ @ 0x180005930 (-Record@UsageIndexes@details_abi@wil@@QEAAXXZ.c)
 * Callees:
 *     ?NtStatusToHr@details@wil@@YAJJ@Z @ 0x180002048 (-NtStatusToHr@details@wil@@YAJJ@Z.c)
 *     ?_FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ @ 0x180003084 (-_FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ.c)
 *     ?wil_details_NtQueryWnfStateData@@YAJPEBU__WIL__WNF_STATE_NAME@@PEBU__WIL__WNF_TYPE_ID@@PEBXPEAKPEAX3@Z @ 0x180003C54 (-wil_details_NtQueryWnfStateData@@YAJPEBU__WIL__WNF_STATE_NAME@@PEBU__WIL__WNF_TYPE_ID@@PEBXPEAK.c)
 *     ?wil_details_NtUpdateWnfStateData@@YAJPEBU__WIL__WNF_STATE_NAME@@PEBXKPEBU__WIL__WNF_TYPE_ID@@1KK@Z @ 0x180003CF0 (-wil_details_NtUpdateWnfStateData@@YAJPEBU__WIL__WNF_STATE_NAME@@PEBXKPEBU__WIL__WNF_TYPE_ID@@1K.c)
 *     ?Read@UsageIndexProperty@details_abi@wil@@QEAA_NAEAPEAEPEAE@Z @ 0x1800048F0 (-Read@UsageIndexProperty@details_abi@wil@@QEAA_NAEAPEAEPEAE@Z.c)
 *     ?SetBuffer@RawUsageIndex@details_abi@wil@@QEAAXPEAX_K1@Z @ 0x180004B00 (-SetBuffer@RawUsageIndex@details_abi@wil@@QEAAXPEAX_K1@Z.c)
 *     __security_check_cookie @ 0x1800369D0 (__security_check_cookie.c)
 *     _alloca_probe @ 0x180038000 (_alloca_probe.c)
 *     _guard_dispatch_icall_nop @ 0x1800380A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall wil::details_abi::RecordWnfUsageIndex(
        wil::details_abi *this,
        const struct __WIL__WNF_STATE_NAME *a2,
        const void *a3,
        const struct wil::details_abi::RawUsageIndex *a4)
{
  const void *v4; // rdi
  const struct __WIL__WNF_STATE_NAME *v5; // rsi
  const struct __WIL__WNF_STATE_NAME *v6; // r13
  unsigned __int64 v7; // r15
  unsigned __int16 v8; // r9
  __int16 v9; // cx
  __int64 v10; // rax
  wil::details *v11; // rbx
  unsigned int v12; // eax
  char v13; // cl
  char v14; // cl
  const struct __WIL__WNF_TYPE_ID *v15; // r9
  int v16; // ebx
  unsigned int v17; // r14d
  __int64 v18; // r12
  __int64 (__fastcall ***v19)(); // rdx
  char v20; // bl
  __int64 (__fastcall ***v21)(); // rdx
  int updated; // eax
  const struct __WIL__WNF_TYPE_ID *v23; // r9
  void *v24; // r14
  HANDLE ProcessHeap; // rax
  void *v26; // rbx
  HANDLE v27; // rax
  __int64 *v28; // [rsp+20h] [rbp-E0h]
  void *v29; // [rsp+20h] [rbp-E0h]
  unsigned int v30; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v31; // [rsp+48h] [rbp-B8h] BYREF
  unsigned __int8 *v32; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v33; // [rsp+58h] [rbp-A8h] BYREF
  __int128 v34; // [rsp+68h] [rbp-98h]
  __int64 v35; // [rsp+78h] [rbp-88h] BYREF
  __int64 v36; // [rsp+80h] [rbp-80h] BYREF
  __int64 v37; // [rsp+88h] [rbp-78h] BYREF
  _WORD v38[2]; // [rsp+90h] [rbp-70h] BYREF
  char v39; // [rsp+94h] [rbp-6Ch]
  unsigned __int16 v40; // [rsp+96h] [rbp-6Ah]
  char v41; // [rsp+98h] [rbp-68h]
  __int64 v42; // [rsp+A0h] [rbp-60h]
  void *v43; // [rsp+A8h] [rbp-58h]
  __int128 v44; // [rsp+B0h] [rbp-50h]
  LPVOID lpMem; // [rsp+C0h] [rbp-40h]
  __int16 v46; // [rsp+C8h] [rbp-38h]
  char v47; // [rsp+CAh] [rbp-36h]
  __int16 v48; // [rsp+D0h] [rbp-30h] BYREF
  char v49; // [rsp+D2h] [rbp-2Eh]
  unsigned int v50; // [rsp+D4h] [rbp-2Ch]
  unsigned __int16 v51; // [rsp+D8h] [rbp-28h]
  __int128 v52; // [rsp+E0h] [rbp-20h]
  __int64 v53; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v54; // [rsp+F8h] [rbp-8h] BYREF
  _QWORD v55[3]; // [rsp+100h] [rbp+0h] BYREF
  __int64 (__fastcall **v56)(); // [rsp+118h] [rbp+18h] BYREF
  __int128 v57; // [rsp+120h] [rbp+20h]
  _WORD *v58; // [rsp+130h] [rbp+30h]
  wil::details::in1diag3 *v59; // [rsp+180h] [rbp+80h]
  _WORD v60[2048]; // [rsp+190h] [rbp+90h] BYREF

  v55[1] = -2LL;
  v4 = a3;
  v5 = this;
  v6 = (wil::details_abi *)((char *)this + 8 * (_QWORD)a2);
  v7 = 0LL;
  v36 = 0LL;
  while ( 1 )
  {
    LOBYTE(a3) = *((_BYTE *)v4 + 8);
    v8 = *((_WORD *)v4 + 3);
    LOBYTE(a2) = *((_BYTE *)v4 + 4);
    v9 = *((_WORD *)v4 + 1);
    v38[0] = *(_WORD *)v4;
    v38[1] = v9;
    v39 = (char)a2;
    v40 = v8;
    v41 = (char)a3;
    if ( v8 )
    {
      v10 = v8;
      if ( (_BYTE)a3 == 1 )
      {
        v10 = v8 + 2LL;
      }
      else if ( (_BYTE)a3 == 2 )
      {
        v10 = v8 + 4LL;
      }
      v42 = v10;
    }
    else
    {
      v42 = 0LL;
    }
    v43 = 0LL;
    v44 = 0LL;
    lpMem = 0LL;
    v46 = 0;
    v47 = 0;
    v30 = 4096;
    v11 = (wil::details *)(unsigned int)wil_details_NtQueryWnfStateData(v5, a2, a3, &v31, v60, &v30);
    wil::details::NtStatusToHr(v11);
    if ( (_DWORD)v11 )
    {
      v12 = 0;
      v30 = 0;
      v31 = 0;
    }
    else
    {
      v12 = v30;
    }
    wil::details_abi::RawUsageIndex::SetBuffer((wil::details_abi::RawUsageIndex *)v38, v60, v12, (const char *)0x1000);
    if ( HIBYTE(v46) )
      break;
    v35 = 0LL;
    *(_QWORD *)&v33 = &v35;
    *((_QWORD *)&v33 + 1) = &v36;
    *(_QWORD *)&v34 = v38;
    v56 = off_18003B070;
    v57 = v33;
    v58 = v38;
    v59 = (wil::details::in1diag3 *)&v56;
    v55[2] = &v56;
    v32 = (unsigned __int8 *)(*((_QWORD *)v4 + 3) + 10LL);
    v13 = *((_BYTE *)v4 + 4);
    LOWORD(v33) = *((_WORD *)v4 + 1);
    BYTE2(v33) = v13;
    DWORD1(v33) = 0;
    WORD4(v33) = 0;
    v34 = 0LL;
    v14 = *((_BYTE *)v4 + 8);
    v48 = *((_WORD *)v4 + 3);
    v49 = v14;
    v50 = 0;
    v51 = 0;
    v52 = 0LL;
LABEL_14:
    while ( wil::details_abi::UsageIndexProperty::Read(
              (wil::details_abi::UsageIndexProperty *)&v33,
              &v32,
              *((unsigned __int8 **)v4 + 4)) )
    {
      v16 = 0;
      v17 = DWORD1(v33);
      if ( DWORD1(v33) )
      {
        v18 = *((_QWORD *)&v34 + 1);
        while ( wil::details_abi::UsageIndexProperty::Read(
                  (wil::details_abi::UsageIndexProperty *)&v48,
                  &v32,
                  *((unsigned __int8 **)v4 + 4)) )
        {
          v30 = v50;
          v53 = v51;
          v54 = *((_QWORD *)&v52 + 1);
          v55[0] = WORD4(v33);
          v37 = v18;
          if ( !v59 )
            wil::details::in1diag3::_FailFastImmediate_Unexpected(0LL);
          v28 = &v53;
          if ( !(*(unsigned __int8 (__fastcall **)(wil::details::in1diag3 *, __int64 *, _QWORD *, __int64 *))(*(_QWORD *)v59 + 16LL))(
                  v59,
                  &v37,
                  v55,
                  &v54) )
          {
            if ( v59 )
            {
              v19 = &v56;
              LOBYTE(v19) = v59 != (wil::details::in1diag3 *)&v56;
              (*(void (__fastcall **)(wil::details::in1diag3 *, __int64 (__fastcall ***)()))(*(_QWORD *)v59 + 24LL))(
                v59,
                v19);
            }
            v20 = 0;
            goto LABEL_28;
          }
          if ( ++v16 >= v17 )
            goto LABEL_14;
        }
      }
    }
    if ( v59 )
    {
      v21 = &v56;
      LOBYTE(v21) = v59 != (wil::details::in1diag3 *)&v56;
      (*(void (__fastcall **)(wil::details::in1diag3 *, __int64 (__fastcall ***)()))(*(_QWORD *)v59 + 24LL))(v59, v21);
    }
    v20 = 1;
LABEL_28:
    if ( (_BYTE)v46 )
    {
      updated = wil_details_NtUpdateWnfStateData(v5, v43, (int)v44 - (int)v43, v15, v28, v31, 1u);
      if ( updated == -1073741823 )
      {
        ++v7;
        v20 = 0;
        goto LABEL_33;
      }
      if ( updated )
        wil_details_NtUpdateWnfStateData(v5, v43, v44 - (_DWORD)v43, v23, v29, 0, 0);
    }
    v5 = (const struct __WIL__WNF_STATE_NAME *)((char *)v5 + 8);
    v36 = v35;
LABEL_33:
    v24 = lpMem;
    if ( lpMem )
    {
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, v24);
    }
    if ( v20 || v5 >= v6 || v7 >= 0x32 )
      return;
  }
  v26 = lpMem;
  if ( lpMem )
  {
    v27 = GetProcessHeap();
    HeapFree(v27, 0, v26);
  }
}
