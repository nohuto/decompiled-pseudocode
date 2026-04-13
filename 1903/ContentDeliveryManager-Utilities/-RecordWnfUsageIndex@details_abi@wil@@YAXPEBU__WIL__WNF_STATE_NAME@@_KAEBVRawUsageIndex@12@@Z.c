/*
 * XREFs of ?RecordWnfUsageIndex@details_abi@wil@@YAXPEBU__WIL__WNF_STATE_NAME@@_KAEBVRawUsageIndex@12@@Z @ 0x180007E7C
 * Callers:
 *     ?Record@UsageIndexes@details_abi@wil@@QEAAXXZ @ 0x18000831C (-Record@UsageIndexes@details_abi@wil@@QEAAXXZ.c)
 * Callees:
 *     ?NtStatusToHr@details@wil@@YAJJ@Z @ 0x180002240 (-NtStatusToHr@details@wil@@YAJJ@Z.c)
 *     ?FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ @ 0x180003764 (-FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ.c)
 *     ?wil_details_NtQueryWnfStateData@@YAJPEBU__WIL__WNF_STATE_NAME@@PEBU__WIL__WNF_TYPE_ID@@PEBXPEAKPEAX3@Z @ 0x1800056C8 (-wil_details_NtQueryWnfStateData@@YAJPEBU__WIL__WNF_STATE_NAME@@PEBU__WIL__WNF_TYPE_ID@@PEBXPEAK.c)
 *     ?wil_details_NtUpdateWnfStateData@@YAJPEBU__WIL__WNF_STATE_NAME@@PEBXKPEBU__WIL__WNF_TYPE_ID@@1KK@Z @ 0x180005764 (-wil_details_NtUpdateWnfStateData@@YAJPEBU__WIL__WNF_STATE_NAME@@PEBXKPEBU__WIL__WNF_TYPE_ID@@1K.c)
 *     ?Read@UsageIndexProperty@details_abi@wil@@QEAA_NAEAPEAEPEAE@Z @ 0x180007150 (-Read@UsageIndexProperty@details_abi@wil@@QEAA_NAEAPEAEPEAE@Z.c)
 *     ?SetBuffer@RawUsageIndex@details_abi@wil@@QEAAXPEAX_K1@Z @ 0x180007318 (-SetBuffer@RawUsageIndex@details_abi@wil@@QEAAXPEAX_K1@Z.c)
 *     __security_check_cookie @ 0x1800CA900 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CBD10 (_guard_dispatch_icall_nop.c)
 *     _alloca_probe @ 0x1800CBD30 (_alloca_probe.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall wil::details_abi::RecordWnfUsageIndex(
        wil::details_abi *this,
        const struct __WIL__WNF_STATE_NAME *a2,
        const void *a3,
        const struct wil::details_abi::RawUsageIndex *a4)
{
  const void *v4; // rdi
  const struct __WIL__WNF_STATE_NAME *v5; // rsi
  const struct __WIL__WNF_STATE_NAME *v6; // r12
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
  char v17; // bl
  int updated; // eax
  const struct __WIL__WNF_TYPE_ID *v19; // r9
  void *v20; // r14
  HANDLE ProcessHeap; // rax
  void *v22; // rbx
  HANDLE v23; // rax
  __int64 *v24; // [rsp+20h] [rbp-E0h]
  void *v25; // [rsp+20h] [rbp-E0h]
  unsigned int v26; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v27; // [rsp+48h] [rbp-B8h] BYREF
  unsigned __int8 *v28; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v29; // [rsp+58h] [rbp-A8h] BYREF
  __int128 v30; // [rsp+68h] [rbp-98h]
  _WORD v31[2]; // [rsp+80h] [rbp-80h] BYREF
  char v32; // [rsp+84h] [rbp-7Ch]
  unsigned __int16 v33; // [rsp+86h] [rbp-7Ah]
  char v34; // [rsp+88h] [rbp-78h]
  __int64 v35; // [rsp+90h] [rbp-70h]
  void *v36; // [rsp+98h] [rbp-68h]
  __int128 v37; // [rsp+A0h] [rbp-60h]
  LPVOID lpMem; // [rsp+B0h] [rbp-50h]
  __int16 v39; // [rsp+B8h] [rbp-48h]
  char v40; // [rsp+BAh] [rbp-46h]
  __int64 v41; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v42; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v43; // [rsp+D0h] [rbp-30h] BYREF
  __int16 v44; // [rsp+D8h] [rbp-28h] BYREF
  char v45; // [rsp+DAh] [rbp-26h]
  unsigned int v46; // [rsp+DCh] [rbp-24h]
  unsigned __int16 v47; // [rsp+E0h] [rbp-20h]
  __int128 v48; // [rsp+E8h] [rbp-18h]
  __int64 v49; // [rsp+F8h] [rbp-8h] BYREF
  __int64 v50; // [rsp+100h] [rbp+0h] BYREF
  _QWORD v51[3]; // [rsp+108h] [rbp+8h] BYREF
  char v52; // [rsp+120h] [rbp+20h] BYREF
  __int64 (__fastcall **v53)(); // [rsp+128h] [rbp+28h] BYREF
  __int128 v54; // [rsp+130h] [rbp+30h]
  _WORD *v55; // [rsp+140h] [rbp+40h]
  wil::details::in1diag3 *v56; // [rsp+190h] [rbp+90h]
  _WORD v57[2048]; // [rsp+1A0h] [rbp+A0h] BYREF

  v51[1] = -2LL;
  v4 = a3;
  v5 = this;
  v6 = (wil::details_abi *)((char *)this + 8 * (_QWORD)a2);
  v7 = 0LL;
  v42 = 0LL;
  while ( 1 )
  {
    LOBYTE(a3) = *((_BYTE *)v4 + 8);
    v8 = *((_WORD *)v4 + 3);
    LOBYTE(a2) = *((_BYTE *)v4 + 4);
    v9 = *((_WORD *)v4 + 1);
    v31[0] = *(_WORD *)v4;
    v31[1] = v9;
    v32 = (char)a2;
    v33 = v8;
    v34 = (char)a3;
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
      v35 = v10;
    }
    else
    {
      v35 = 0LL;
    }
    v36 = 0LL;
    v37 = 0LL;
    lpMem = 0LL;
    v39 = 0;
    v40 = 0;
    v26 = 4096;
    v11 = (wil::details *)(unsigned int)wil_details_NtQueryWnfStateData(v5, a2, a3, &v27, v57, &v26);
    wil::details::NtStatusToHr(v11);
    if ( (_DWORD)v11 )
    {
      v12 = 0;
      v26 = 0;
      v27 = 0;
    }
    else
    {
      v12 = v26;
    }
    wil::details_abi::RawUsageIndex::SetBuffer((wil::details_abi::RawUsageIndex *)v31, v57, v12, (const char *)0x1000);
    if ( HIBYTE(v39) )
      break;
    v41 = 0LL;
    *(_QWORD *)&v29 = &v41;
    *((_QWORD *)&v29 + 1) = &v42;
    *(_QWORD *)&v30 = v31;
    v53 = off_1800D7FB0;
    v54 = v29;
    v55 = v31;
    v56 = (wil::details::in1diag3 *)&v53;
    v51[2] = &v52;
    v28 = (unsigned __int8 *)(*((_QWORD *)v4 + 3) + 10LL);
    v13 = *((_BYTE *)v4 + 4);
    LOWORD(v29) = *((_WORD *)v4 + 1);
    BYTE2(v29) = v13;
    DWORD1(v29) = 0;
    WORD4(v29) = 0;
    v30 = 0LL;
    v14 = *((_BYTE *)v4 + 8);
    v44 = *((_WORD *)v4 + 3);
    v45 = v14;
    v46 = 0;
    v47 = 0;
    v48 = 0LL;
LABEL_14:
    while ( wil::details_abi::UsageIndexProperty::Read(
              (wil::details_abi::UsageIndexProperty *)&v29,
              &v28,
              *((unsigned __int8 **)v4 + 4)) )
    {
      v16 = 0;
      if ( DWORD1(v29) )
      {
        while ( wil::details_abi::UsageIndexProperty::Read(
                  (wil::details_abi::UsageIndexProperty *)&v44,
                  &v28,
                  *((unsigned __int8 **)v4 + 4)) )
        {
          v26 = v46;
          v49 = v47;
          v50 = *((_QWORD *)&v48 + 1);
          v51[0] = WORD4(v29);
          v43 = *((_QWORD *)&v30 + 1);
          if ( !v56 )
            wil::details::in1diag3::FailFastImmediate_Unexpected(0LL);
          v24 = &v49;
          if ( !(*(unsigned __int8 (__fastcall **)(wil::details::in1diag3 *, __int64 *, _QWORD *, __int64 *))(*(_QWORD *)v56 + 32LL))(
                  v56,
                  &v43,
                  v51,
                  &v50) )
          {
            if ( v56 )
              (*(void (__fastcall **)(wil::details::in1diag3 *))(*(_QWORD *)v56 + 24LL))(v56);
            v17 = 0;
            goto LABEL_27;
          }
          if ( (unsigned int)++v16 >= DWORD1(v29) )
            goto LABEL_14;
        }
      }
    }
    if ( v56 )
      (*(void (__fastcall **)(wil::details::in1diag3 *))(*(_QWORD *)v56 + 24LL))(v56);
    v17 = 1;
LABEL_27:
    if ( (_BYTE)v39 )
    {
      updated = wil_details_NtUpdateWnfStateData(v5, v36, (int)v37 - (int)v36, v15, v24, v27, 1u);
      if ( updated == -1073741823 )
      {
        ++v7;
        v17 = 0;
        goto LABEL_32;
      }
      if ( updated )
        wil_details_NtUpdateWnfStateData(v5, v36, v37 - (_DWORD)v36, v19, v25, 0, 0);
    }
    v5 = (const struct __WIL__WNF_STATE_NAME *)((char *)v5 + 8);
    v42 = v41;
LABEL_32:
    v20 = lpMem;
    lpMem = 0LL;
    if ( v20 )
    {
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, v20);
    }
    if ( v17 || v5 >= v6 || v7 >= 0x32 )
      return;
  }
  v22 = lpMem;
  lpMem = 0LL;
  if ( v22 )
  {
    v23 = GetProcessHeap();
    HeapFree(v23, 0, v22);
  }
}
