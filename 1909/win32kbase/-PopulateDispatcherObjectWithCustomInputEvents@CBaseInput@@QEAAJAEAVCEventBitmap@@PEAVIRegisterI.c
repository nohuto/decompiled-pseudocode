/*
 * XREFs of ?PopulateDispatcherObjectWithCustomInputEvents@CBaseInput@@QEAAJAEAVCEventBitmap@@PEAVIRegisterInputDispatcherObjects@@@Z @ 0x1C0176F90
 * Callers:
 *     <none>
 * Callees:
 *     ?GetDispatcherObjectByIndex@CRIMBase@@IEBAPEAXI@Z @ 0x1C00545F4 (-GetDispatcherObjectByIndex@CRIMBase@@IEBAPEAXI@Z.c)
 *     ?IsDispatcherObjectValid@CRIMBase@@IEBA_NI@Z @ 0x1C00547F8 (-IsDispatcherObjectValid@CRIMBase@@IEBA_NI@Z.c)
 *     __security_check_cookie @ 0x1C00B7F30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00BF5D0 (_guard_dispatch_icall_nop.c)
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
