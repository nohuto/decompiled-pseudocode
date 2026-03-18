/*
 * XREFs of ?_SqmEdgy@Edgy@@YAXAEBUtagEDGY_DATA@@AEBUtagARC_DATA@1@H@Z @ 0x1C01BF05C
 * Callers:
 *     ?_OnEnterActive@Edgy@@YAXAEAUtagEDGY_DATA@@AEBUtagARC_DATA@1@@Z @ 0x1C01BED00 (-_OnEnterActive@Edgy@@YAXAEAUtagEDGY_DATA@@AEBUtagARC_DATA@1@@Z.c)
 *     ?_OnStateTransition@Edgy@@YAQEAXAEAUtagEDGY_DATA@@W4tagEDGY_STATE@@AEBUtagARC_DATA@1@@Z @ 0x1C01BEEF4 (-_OnStateTransition@Edgy@@YAQEAXAEAUtagEDGY_DATA@@W4tagEDGY_STATE@@AEBUtagARC_DATA@1@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 */

void __fastcall Edgy::_SqmEdgy(Edgy *this, const struct tagEDGY_DATA *a2, const struct Edgy::tagARC_DATA *a3)
{
  int v3; // esi
  bool v6; // zf
  int v7; // ecx
  _DWORD v8[12]; // [rsp+30h] [rbp-48h] BYREF

  v3 = (int)a3;
  if ( gSqmIsOptedIn )
  {
    memset(v8, 0, sizeof(v8));
    v6 = *((_DWORD *)this + 4) == 1;
    v8[2] = *((_DWORD *)a2 + 6);
    v7 = 2;
    if ( !v6 )
      v7 = 0;
    v8[0] = 16;
    v8[1] = 1;
    v8[4] = 16;
    v8[5] = 1;
    v8[8] = 16;
    v8[9] = 1;
    v8[6] = (v3 != 0) | v7;
    v8[10] = *((_DWORD *)a2 + 12) - *((_DWORD *)this + 50);
    WinSqmAddToStreamEx(0LL, 8509LL, 3LL, v8, 0);
  }
}
