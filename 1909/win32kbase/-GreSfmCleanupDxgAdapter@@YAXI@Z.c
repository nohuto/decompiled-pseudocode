/*
 * XREFs of ?GreSfmCleanupDxgAdapter@@YAXI@Z @ 0x1C0067C58
 * Callers:
 *     GreSfmCleanupPresentHistory @ 0x1C0067B00 (GreSfmCleanupPresentHistory.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00B7F30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00BF5D0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall GreSfmCleanupDxgAdapter(int a1)
{
  _DWORD v2[2]; // [rsp+20h] [rbp-CE8h] BYREF
  __int64 v3; // [rsp+28h] [rbp-CE0h]
  char *v4; // [rsp+30h] [rbp-CD8h]
  int v5; // [rsp+38h] [rbp-CD0h]
  int v6; // [rsp+3Ch] [rbp-CCCh]
  char v7; // [rsp+40h] [rbp-CC8h] BYREF

  v3 = 0LL;
  v6 = 0;
  if ( (int)((__int64 (*)(void))qword_1C0212098)() >= 0 )
  {
    do
    {
      v5 = 0;
      v4 = &v7;
      v2[0] = a1;
      v2[1] = 3240;
      ((void (__fastcall *)(_DWORD *, _QWORD))qword_1C0212080)(v2, 0LL);
    }
    while ( v5 );
  }
}
