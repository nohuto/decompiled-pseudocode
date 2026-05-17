/*
 * XREFs of RtlWow64LogMessageInEventLogger @ 0x1800D8BF0
 * Callers:
 *     <none>
 * Callees:
 *     LdrGetProcedureAddressForCaller @ 0x1800094D0 (LdrGetProcedureAddressForCaller.c)
 *     LdrLoadDll @ 0x1800226B0 (LdrLoadDll.c)
 *     LdrUnloadDll @ 0x1800425D0 (LdrUnloadDll.c)
 *     _guard_dispatch_icall_nop @ 0x1800A3CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RtlWow64LogMessageInEventLogger(__int16 a1, __int64 a2, unsigned int a3)
{
  __int64 result; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rax
  __int64 v11; // rdi
  int v12; // [rsp+28h] [rbp-50h]
  __int64 (__fastcall *v13)(_QWORD, const wchar_t *); // [rsp+50h] [rbp-28h] BYREF
  void (__fastcall *v14)(__int64, __int64, _QWORD, _QWORD, _QWORD, int, _DWORD, __int64, _QWORD); // [rsp+58h] [rbp-20h] BYREF
  void (__fastcall *v15[2])(_QWORD); // [rsp+60h] [rbp-18h] BYREF
  __int64 retaddr; // [rsp+78h] [rbp+0h]
  unsigned __int64 v17; // [rsp+98h] [rbp+20h] BYREF

  result = LdrLoadDll(0LL, 0LL, (__int64)&unk_180119428, &v17);
  if ( (int)result >= 0 )
  {
    if ( (int)LdrGetProcedureAddressForCaller(v17, &qword_180119448, 0, &v13, 0, retaddr) >= 0
      && (int)LdrGetProcedureAddressForCaller(v17, &qword_180119438, 0, v15, 0, retaddr) >= 0
      && (int)LdrGetProcedureAddressForCaller(v17, &qword_180119458, 0, &v14, 0, retaddr) >= 0 )
    {
      v10 = v13(0LL, L"Wow64 Emulation Layer");
      v11 = v10;
      if ( v10 )
      {
        LOWORD(v12) = a1;
        v14(v10, 4LL, 0LL, a3, 0LL, v12, 0, a2, 0LL);
        v15[0](v11);
      }
    }
    return LdrUnloadDll(v17, v7, v8, v9);
  }
  return result;
}
