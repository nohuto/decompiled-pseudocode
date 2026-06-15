/*
 * XREFs of ?IsSubjectToSessionDisplayPolicyGain@CWindowsPolicyManager@@UEAAHPEAUIAudioProcess@@K@Z @ 0x180006090
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180035AC0 (_guard_dispatch_icall_nop.c)
 */

_BOOL8 __fastcall CWindowsPolicyManager::IsSubjectToSessionDisplayPolicyGain(
        CWindowsPolicyManager *this,
        void (__fastcall ***a2)(struct IAudioProcess *, GUID *, __int64 *),
        unsigned int a3)
{
  void (__fastcall **v3)(struct IAudioProcess *, GUID *, __int64 *); // rax
  int v5; // esi
  int v6; // ebp
  int v7; // edi
  int v8; // eax
  __int64 v9; // rbx
  int v10; // eax
  BOOL v11; // edi
  __int64 v13; // [rsp+58h] [rbp+10h] BYREF
  __int64 v14; // [rsp+68h] [rbp+20h] BYREF

  v3 = *a2;
  v5 = 0;
  v13 = 0LL;
  v6 = 0;
  v7 = 0;
  (*v3)((struct IAudioProcess *)a2, &GUID_2ea99478_7574_414c_8ba3_0c615b1716a4, &v13);
  v14 = 0LL;
  v8 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v13 + 24LL))(v13, &v14);
  v9 = v14;
  if ( v8 >= 0 )
  {
    v6 = *(_DWORD *)(v14 + 500);
    v5 = *(_DWORD *)(v14 + 476);
    v7 = *(_DWORD *)(v14 + 504);
  }
  v11 = (a3 > 0x13 || (v10 = 933936, !_bittest(&v10, a3))) && !v6 && !v5 && !v7;
  if ( v14 && _InterlockedExchangeAdd((volatile signed __int32 *)(v14 + 8), 0xFFFFFFFF) == 1 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 32LL))(v9);
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v9 + 24LL))(v9, 1LL);
  }
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  return v11;
}
