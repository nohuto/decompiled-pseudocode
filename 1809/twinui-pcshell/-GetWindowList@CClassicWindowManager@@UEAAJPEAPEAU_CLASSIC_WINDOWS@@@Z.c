/*
 * XREFs of ?GetWindowList@CClassicWindowManager@@UEAAJPEAPEAU_CLASSIC_WINDOWS@@@Z @ 0x180103A20
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CClassicWindowManager::GetWindowList(CClassicWindowManager *this, struct _CLASSIC_WINDOWS **a2)
{
  unsigned __int64 v4; // rbp
  char *v5; // rax
  char *v6; // rbx
  unsigned int v7; // edi
  unsigned __int64 v8; // rsi
  _QWORD *v9; // r14
  unsigned __int64 v10; // rdi
  __int64 v11; // r12
  int v12; // eax

  *a2 = 0LL;
  AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  v4 = *((_QWORD *)this + 14);
  v5 = (char *)CoTaskMemAlloc(16 * (v4 + 1));
  v6 = v5;
  if ( v5 )
  {
    v8 = 0LL;
    v9 = v5 + 16;
    v10 = 0LL;
    if ( !v4 )
      goto LABEL_8;
    do
    {
      v11 = *(_QWORD *)(*((_QWORD *)this + 13) + 8 * v10);
      if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v11 + 136LL))(v11) )
      {
        *v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 24LL))(v11);
        (*(void (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v11 + 64LL))(v11, v9 + 1);
        ++v8;
        v9 += 2;
      }
      ++v10;
    }
    while ( v10 < v4 );
    v9 = v6 + 16;
    v12 = -1;
    if ( v8 <= 0xFFFFFFFF )
LABEL_8:
      v12 = v8;
    *(_DWORD *)v6 = v12;
    v7 = v8 > 0xFFFFFFFF ? 0x80070216 : 0;
    if ( v8 <= 0xFFFFFFFF )
    {
      *((_QWORD *)v6 + 1) = v9;
      *a2 = (struct _CLASSIC_WINDOWS *)v6;
      v6 = 0LL;
    }
    CoTaskMemFree(v6);
  }
  else
  {
    v7 = -2147024882;
  }
  ReleaseSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  return v7;
}
