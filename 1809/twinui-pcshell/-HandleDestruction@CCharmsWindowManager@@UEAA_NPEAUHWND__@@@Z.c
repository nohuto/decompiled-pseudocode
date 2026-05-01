/*
 * XREFs of ?HandleDestruction@CCharmsWindowManager@@UEAA_NPEAUHWND__@@@Z @ 0x18005F6D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
bool __fastcall CCharmsWindowManager::HandleDestruction(CCharmsWindowManager *this, HWND a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v6; // rsi
  unsigned __int64 i; // rbx
  int v8; // ebx
  __int64 *v10; // rcx
  __int64 v11; // rax

  v6 = 0LL;
  for ( i = 0LL; i < *((_QWORD *)this + 4); ++i )
  {
    v10 = *(__int64 **)(*((_QWORD *)this + 3) + 8 * i);
    v11 = *v10;
    if ( a2 )
    {
      if ( (HWND)(*(__int64 (__fastcall **)(__int64 *, HWND, __int64, __int64))(v11 + 32))(v10, a2, a3, a4) == a2 )
        goto LABEL_7;
    }
    else if ( (*(unsigned __int8 (__fastcall **)(__int64 *, _QWORD))(v11 + 48))(v10, 0LL) )
    {
LABEL_7:
      v6 = i;
      v8 = 0;
      goto LABEL_3;
    }
  }
  v8 = -2147319765;
LABEL_3:
  if ( v8 >= 0 )
  {
    (*(void (__fastcall **)(char *, unsigned __int64))(*((_QWORD *)this + 2) + 16LL))((char *)this + 16, v6);
    if ( !v6 )
      *((_DWORD *)this + 14) = 0;
  }
  return v8 >= 0;
}
