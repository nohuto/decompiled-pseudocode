/*
 * XREFs of _lambda_b9d7157becc689d5daa625d695c4b8bd_::operator() @ 0x18002C530
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b9d7157becc689d5daa625d695c4b8bd___::Run @ 0x18002C520 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_b9d7157becc689d5daa625d695c4b8bd___--Run.c)
 * Callees:
 *     McTemplateU0zqtq @ 0x18002C7E4 (McTemplateU0zqtq.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall lambda_b9d7157becc689d5daa625d695c4b8bd_::operator()(char *a1)
{
  unsigned __int64 v2; // rbp
  __int64 v3; // rax
  __int64 v4; // r14
  __int64 v5; // rsi
  NTSTATUS v6; // eax
  signed int v7; // eax
  int v8; // edx
  bool v9; // sf
  unsigned int i; // ebx
  __int64 v11; // rcx
  void *v12; // rcx
  LPVOID pv[9]; // [rsp+30h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  int v15; // [rsp+80h] [rbp+8h] BYREF
  unsigned int v16; // [rsp+88h] [rbp+10h] BYREF
  char v17; // [rsp+90h] [rbp+18h] BYREF
  __int64 v18; // [rsp+98h] [rbp+20h] BYREF

  pv[1] = (LPVOID)-2LL;
  pv[0] = 0LL;
  (*(void (__fastcall **)(_QWORD, LPVOID *))(**(_QWORD **)(*(_QWORD *)a1 + 24LL) + 32LL))(
    *(_QWORD *)(*(_QWORD *)a1 + 24LL),
    pv);
  v2 = 0LL;
  v3 = *(_QWORD *)a1;
  if ( *(_QWORD *)(*(_QWORD *)a1 + 16LL) )
  {
    v4 = 0LL;
    do
    {
      v5 = *(_QWORD *)(v3 + 8);
      v15 = 0;
      if ( (Microsoft_Windows_Immersive_ShellEnableBits & 8) != 0 )
      {
        v15 = 0;
        v6 = RtlQueryWnfStateData(&v17, WNF_TMCN_ISTABLETMODE, TabletModeHelpers::QueryTabletModeCallback, &v15);
        v7 = RtlNtStatusToDosError(v6);
        v9 = v7 < 0;
        if ( v7 > 0 )
        {
          v7 = (unsigned __int16)v7 | 0x80070000;
          v9 = v7 < 0;
        }
        if ( v9 )
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x30,
            (unsigned int)"internal\\onecoreuapshell\\private\\inc\\TabletModeHelpers.h",
            (const char *)(unsigned int)v7,
            0);
        if ( (Microsoft_Windows_Immersive_ShellEnableBits & 8) != 0 )
          McTemplateU0zqtq((unsigned __int8)a1[8], v8, pv[0], *(_DWORD *)(v5 + v4), a1[8], v15);
      }
      if ( (*(int (__fastcall **)(_QWORD, unsigned int *))(**(_QWORD **)(*(_QWORD *)a1 + 32LL) + 24LL))(
             *(_QWORD *)(*(_QWORD *)a1 + 32LL),
             &v16) >= 0 )
      {
        for ( i = 0; i < v16; ++i )
        {
          v18 = 0LL;
          if ( (*(int (__fastcall **)(_QWORD, _QWORD, GUID *, __int64 *))(**(_QWORD **)(*(_QWORD *)a1 + 32LL) + 32LL))(
                 *(_QWORD *)(*(_QWORD *)a1 + 32LL),
                 i,
                 &GUID_e23730be_13f1_4f0b_88ab_76d5e3beb5b7,
                 &v18) >= 0 )
            (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v18 + 24LL))(
              v18,
              *(_QWORD *)(*(_QWORD *)a1 + 24LL),
              *(unsigned int *)(v5 + v4),
              *(_QWORD *)(v5 + v4 + 8));
          v11 = v18;
          if ( v18 )
          {
            v18 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
          }
        }
      }
      ++v2;
      v4 += 16LL;
      v3 = *(_QWORD *)a1;
    }
    while ( v2 < *(_QWORD *)(*(_QWORD *)a1 + 16LL) );
  }
  v12 = pv[0];
  pv[0] = 0LL;
  CoTaskMemFree(v12);
}
