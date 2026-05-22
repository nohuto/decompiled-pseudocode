/*
 * XREFs of ?DisableInputRedirection@InputRedirectionProcessor@@UEAAJ_KUtagMsgRoutingInfo@@1H@Z @ 0x1800D12A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CallCallbackWithResult@InputRedirectionProcessor@@AEAAJUtagMsgRoutingInfo@@J@Z @ 0x1800D146C (-CallCallbackWithResult@InputRedirectionProcessor@@AEAAJUtagMsgRoutingInfo@@J@Z.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall InputRedirectionProcessor::DisableInputRedirection(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5)
{
  __int64 v5; // rbx
  unsigned int v6; // edi
  __int128 v10; // xmm1
  int v11; // eax
  unsigned int v12; // ebx
  __int64 v14; // rsi
  __int64 v15; // rcx
  __int64 v16; // rbx
  _BYTE v17[40]; // [rsp+20h] [rbp-41h]
  _BYTE v18[40]; // [rsp+50h] [rbp-11h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+57h]

  v5 = *(_QWORD *)(a1 + 72);
  v6 = 0;
  if ( v5 == *(_QWORD *)(a1 + 80) )
    goto LABEL_4;
  while ( (a5 & *(_DWORD *)v5) == 0 )
  {
    v5 += 16LL;
    if ( v5 == *(_QWORD *)(a1 + 80) )
      goto LABEL_4;
  }
  v14 = *(_QWORD *)(v5 + 8);
  if ( v14
    && (*(_OWORD *)v17 = *(_OWORD *)a3,
        *(_OWORD *)&v17[16] = *(_OWORD *)(a3 + 16),
        *(_QWORD *)&v17[32] = *(_QWORD *)(a3 + 32),
        (*(int (__fastcall **)(_QWORD, _QWORD, _BYTE *))(**(_QWORD **)(v14 + 32) + 112LL))(
          *(_QWORD *)(v14 + 32),
          *(_QWORD *)(v14 + 40),
          v18) >= 0)
    && *(_QWORD *)v17 == *(_QWORD *)v18
    && *(_OWORD *)&v17[8] == *(_OWORD *)&v18[8]
    && *(_OWORD *)&v17[24] == *(_OWORD *)&v18[24]
    && *(_QWORD *)(v14 + 56) == a2 )
  {
    v15 = *(_QWORD *)(a1 + 80);
    v16 = v5 + 16;
    if ( v16 != v15 )
    {
      do
      {
        *(_DWORD *)(v16 - 16) = *(_DWORD *)v16;
        *(_QWORD *)(v16 - 8) = *(_QWORD *)(v16 + 8);
        v16 += 16LL;
      }
      while ( v16 != v15 );
      v15 = *(_QWORD *)(a1 + 80);
    }
    *(_QWORD *)(a1 + 80) = v15 - 16;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  }
  else
  {
LABEL_4:
    v6 = -2147024891;
  }
  if ( !*(_DWORD *)a4 )
    return 0LL;
  v10 = *(_OWORD *)(a4 + 16);
  *(_OWORD *)v18 = *(_OWORD *)a4;
  *(_QWORD *)&v18[32] = *(_QWORD *)(a4 + 32);
  *(_OWORD *)&v18[16] = v10;
  v11 = InputRedirectionProcessor::CallCallbackWithResult(a1 - 8, v18, v6);
  v12 = v11;
  if ( v11 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x129,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\inputredirection\\system\\lib\\"
             "inputredirectionprocessor.cpp",
    (const char *)(unsigned int)v11);
  return v12;
}
