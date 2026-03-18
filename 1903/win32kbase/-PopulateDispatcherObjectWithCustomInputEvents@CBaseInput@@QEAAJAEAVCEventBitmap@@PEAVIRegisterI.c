/*
 * XREFs of ?PopulateDispatcherObjectWithCustomInputEvents@CBaseInput@@QEAAJAEAVCEventBitmap@@PEAVIRegisterInputDispatcherObjects@@@Z @ 0x1C0179180
 * Callers:
 *     <none>
 * Callees:
 *     ?IsDispatcherObjectValid@CRIMBase@@IEBA_NI@Z @ 0x1C0098948 (-IsDispatcherObjectValid@CRIMBase@@IEBA_NI@Z.c)
 *     ?GetDispatcherObjectByIndex@CRIMBase@@IEBAPEAXI@Z @ 0x1C009898C (-GetDispatcherObjectByIndex@CRIMBase@@IEBAPEAXI@Z.c)
 *     __security_check_cookie @ 0x1C00BAF90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00C13F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBaseInput::PopulateDispatcherObjectWithCustomInputEvents(
        CBaseInput *this,
        struct CEventBitmap *a2,
        struct IRegisterInputDispatcherObjects *a3)
{
  int v3; // eax
  __int64 v4; // rdi
  __int64 v6; // rdx
  _QWORD v10[16]; // [rsp+20h] [rbp-A8h] BYREF

  v3 = *((_DWORD *)a2 + 1);
  v4 = 0LL;
  *(_DWORD *)a2 = 0;
  v6 = 0LL;
  while ( v3 && (unsigned int)v4 < 0x10 )
  {
    if ( (*((_BYTE *)a2 + 4) & 1) != 0 && CRIMBase::IsDispatcherObjectValid(this, v6, (__int64)a3) )
    {
      v10[v4] = CRIMBase::GetDispatcherObjectByIndex(this, *(unsigned int *)a2, (__int64)a3);
      v4 = (unsigned int)(v4 + 1);
    }
    ++*(_DWORD *)a2;
    *((_DWORD *)a2 + 1) >>= 1;
    v3 = *((_DWORD *)a2 + 1);
    v6 = *(unsigned int *)a2;
  }
  return (*(__int64 (__fastcall **)(struct IRegisterInputDispatcherObjects *, _QWORD, _QWORD *))(*(_QWORD *)a3 + 8LL))(
           a3,
           (unsigned int)v4,
           v10);
}
