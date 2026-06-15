/*
 * XREFs of AudioDGGetVpoFromVpoContext @ 0x14003D890
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140001D58 (--1-$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x140017DA0 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140028234 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FindKey@?$CSimpleMap@KPEAVCVpoContext@@V?$CSimpleMapEqualHelper@KPEAVCVpoContext@@@ATL@@@ATL@@QEBAHAEBK@Z @ 0x14003D2E8 (-FindKey@-$CSimpleMap@KPEAVCVpoContext@@V-$CSimpleMapEqualHelper@KPEAVCVpoContext@@@ATL@@@ATL@@Q.c)
 */

__int64 __fastcall AudioDGGetVpoFromVpoContext(__int64 a1, int a2, __int64 a3, unsigned int a4, __int64 *a5)
{
  unsigned int v5; // ebx
  int Key; // eax
  __int64 v9; // rsi
  int v10; // eax
  int v11; // edi
  __int64 v12; // r9
  __int64 v13; // rdx
  int v14; // eax
  int v15; // eax
  __int64 v16; // rcx
  __int64 v18; // [rsp+30h] [rbp-10h] BYREF
  __int64 v19; // [rsp+38h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  int v21; // [rsp+68h] [rbp+28h] BYREF

  v21 = a2;
  v5 = 0;
  v18 = 0LL;
  v19 = 0LL;
  Key = ATL::CSimpleMap<unsigned long,CVpoContext *,ATL::CSimpleMapEqualHelper<unsigned long,CVpoContext *>>::FindKey(
          a1,
          &v21);
  if ( Key == -1 )
    goto LABEL_14;
  if ( Key < 0 || Key >= (int)qword_140087070 )
  {
    RaiseException(0xC000008C, 1u, 0, 0LL);
    __debugbreak();
  }
  v9 = *((_QWORD *)Block + Key);
  if ( !v9 )
  {
LABEL_14:
    v11 = -2147023728;
    v13 = 87LL;
    v12 = 2147943568LL;
    goto LABEL_15;
  }
  v10 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)(*(_QWORD *)(v9 + 80) + 16LL) + 24LL))(
          *(_QWORD *)(v9 + 80) + 16LL,
          a4,
          &v19);
  v11 = v10;
  if ( v10 < 0 )
  {
    v12 = (unsigned int)v10;
    v13 = 90LL;
LABEL_15:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\vpocontext.cpp",
      (const char *)v12);
    v5 = v11;
    goto LABEL_16;
  }
  if ( *(_QWORD *)(v9 + 72) )
  {
    v14 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, __int64, __int64 *))(**(_QWORD **)(v9 + 72) + 200LL))(
            *(_QWORD *)(v9 + 72),
            a3,
            a4,
            v19,
            &v18);
    v11 = v14;
    if ( v14 < 0 )
    {
      v12 = (unsigned int)v14;
      v13 = 95LL;
      goto LABEL_15;
    }
  }
  else
  {
    v15 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v19 + 24LL))(v19, 0LL, &v18);
    v11 = v15;
    if ( v15 < 0 )
    {
      v12 = (unsigned int)v15;
      v13 = 99LL;
      goto LABEL_15;
    }
  }
  v16 = v18;
  v18 = 0LL;
  *a5 = v16;
LABEL_16:
  wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>(&v19);
  wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>(&v18);
  return v5;
}
