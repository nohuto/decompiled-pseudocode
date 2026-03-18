/*
 * XREFs of ?GreSfmCleanupDxgAdapter@@YAXI@Z @ 0x1C0098158
 * Callers:
 *     GreSfmCleanupPresentHistory @ 0x1C0098000 (GreSfmCleanupPresentHistory.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AF730 (_guard_dispatch_icall_nop.c)
 */

void __fastcall GreSfmCleanupDxgAdapter(int a1)
{
  _DWORD v2[4]; // [rsp+20h] [rbp-CE8h] BYREF
  char *v3; // [rsp+30h] [rbp-CD8h]
  int v4; // [rsp+38h] [rbp-CD0h]
  char v5; // [rsp+40h] [rbp-CC8h] BYREF

  if ( (int)((__int64 (*)(void))qword_1C01CD8A0)() >= 0 )
  {
    do
    {
      v4 = 0;
      v3 = &v5;
      v2[0] = a1;
      v2[1] = 3240;
      ((void (__fastcall *)(_DWORD *, _QWORD))qword_1C01CD7E8)(v2, 0LL);
    }
    while ( v4 );
  }
}
