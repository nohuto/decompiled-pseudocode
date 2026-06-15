/*
 * XREFs of ?IsSubjectToSessionDisplayPolicyGain@CWindowsPolicyManager@@UEAAHPEAUIAudioProcess@@K@Z @ 0x180009900
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800380A0 (_guard_dispatch_icall_nop.c)
 */

_BOOL8 __fastcall CWindowsPolicyManager::IsSubjectToSessionDisplayPolicyGain(
        CWindowsPolicyManager *this,
        void (__fastcall ***a2)(struct IAudioProcess *, GUID *, __int64 *),
        unsigned int a3)
{
  void (__fastcall **v3)(struct IAudioProcess *, GUID *, __int64 *); // rax
  int v5; // esi
  int v6; // edi
  int v7; // eax
  __int64 v8; // rbx
  int v9; // eax
  BOOL v10; // edi
  __int64 v12; // [rsp+48h] [rbp+10h] BYREF
  __int64 v13; // [rsp+58h] [rbp+20h] BYREF

  v3 = *a2;
  v5 = 0;
  v12 = 0LL;
  v6 = 0;
  (*v3)((struct IAudioProcess *)a2, &GUID_2ea99478_7574_414c_8ba3_0c615b1716a4, &v12);
  v13 = 0LL;
  v7 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v12 + 24LL))(v12, &v13);
  v8 = v13;
  if ( v7 >= 0 )
  {
    v5 = *(_DWORD *)(v13 + 496);
    v6 = *(_DWORD *)(v13 + 500);
  }
  v10 = (a3 > 0x13 || (v9 = 933936, !_bittest(&v9, a3))) && !v5 && !v6;
  if ( v13 && _InterlockedExchangeAdd((volatile signed __int32 *)(v13 + 8), 0xFFFFFFFF) == 1 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 32LL))(v8);
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v8 + 24LL))(v8, 1LL);
  }
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  return v10;
}
