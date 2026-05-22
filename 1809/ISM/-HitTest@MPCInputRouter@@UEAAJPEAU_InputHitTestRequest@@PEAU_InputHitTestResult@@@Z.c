/*
 * XREFs of ?HitTest@MPCInputRouter@@UEAAJPEAU_InputHitTestRequest@@PEAU_InputHitTestResult@@@Z @ 0x180006260
 * Callers:
 *     <none>
 * Callees:
 *     ?_FailFast_NtStatus@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000AD20 (-_FailFast_NtStatus@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x18003FCE0 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     ?HitTest@DWMInputRouter@@UEAAJPEAU_InputHitTestRequest@@PEAU_InputHitTestResult@@@Z @ 0x18008A720 (-HitTest@DWMInputRouter@@UEAAJPEAU_InputHitTestRequest@@PEAU_InputHitTestResult@@@Z.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall MPCInputRouter::HitTest(
        MPCInputRouter *this,
        struct _InputHitTestRequest *a2,
        struct _InputHitTestResult *a3)
{
  int v6; // esi
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rbx
  __int64 v10; // rax
  int v11; // eax
  __int64 v12; // rax
  __int64 v13; // rcx
  _QWORD v15[3]; // [rsp+20h] [rbp-68h] BYREF
  _BYTE v16[40]; // [rsp+38h] [rbp-50h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  v15[1] = -2LL;
  v6 = DWMInputRouter::HitTest(this, a2, a3);
  if ( *((_BYTE *)this + 856)
    && ((*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 98) + 32LL))(*((_QWORD *)this + 98))
     && *((_DWORD *)a2 + 24)
     || !*((_BYTE *)MPCHolographicInputManager::GetInstance() + 1873) && v6 < 0) )
  {
    v7 = *((_QWORD *)this + 98);
    if ( v7 )
    {
      if ( (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 112LL))(v7) )
      {
        v8 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 98) + 112LL))(*((_QWORD *)this + 98));
        v9 = v8;
        v15[2] = v8;
        if ( v8 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
        v15[0] = 0LL;
        if ( (**(int (__fastcall ***)(__int64, GUID *, _QWORD *))v9)(
               v9,
               &GUID_05b38163_1229_4e7b_a0fc_5b47c4e7b631,
               v15) >= 0 )
        {
          v10 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 98) + 120LL))(*((_QWORD *)this + 98));
          if ( v10 )
          {
            v11 = NtDuplicateCompositionInputSink(v10, (char *)a3 + 16);
            if ( v11 < 0 )
            {
              wil::details::in1diag3::_FailFast_NtStatus(
                retaddr,
                (void *)0xCB,
                (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
                (const char *)(unsigned int)v11,
                v15[0]);
              JUMPOUT(0x18000644CLL);
            }
          }
          *((_DWORD *)a3 + 34) &= ~1u;
          v12 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)v15[0] + 72LL))(v15[0], v16);
          *((_OWORD *)a3 + 6) = *(_OWORD *)v12;
          *((_OWORD *)a3 + 7) = *(_OWORD *)(v12 + 16);
          *((_QWORD *)a3 + 16) = *(_QWORD *)(v12 + 32);
          *((_QWORD *)a3 + 1) = (*(int (__fastcall **)(_QWORD))(**((_QWORD **)this + 98) + 56LL))(*((_QWORD *)this + 98));
          v6 = 0;
        }
        v13 = v15[0];
        if ( v15[0] )
        {
          v15[0] = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
        }
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
      }
    }
  }
  return (unsigned int)v6;
}
