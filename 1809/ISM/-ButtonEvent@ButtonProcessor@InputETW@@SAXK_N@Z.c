/*
 * XREFs of ?ButtonEvent@ButtonProcessor@InputETW@@SAXK_N@Z @ 0x1800EA3C4
 * Callers:
 *     ?OnInputReport@ButtonProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x1800EA960 (-OnInputReport@ButtonProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180001144 (_TlgWrite.c)
 *     ?Instance@InputETW@@KAPEAV1@XZ @ 0x18002217C (-Instance@InputETW@@KAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 */

void __fastcall InputETW::ButtonProcessor::ButtonEvent(int a1, char a2)
{
  _DWORD *v2; // rcx
  __int64 v3; // rcx
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-58h] BYREF
  int *v5; // [rsp+50h] [rbp-38h]
  int v6; // [rsp+58h] [rbp-30h]
  int v7; // [rsp+5Ch] [rbp-2Ch]
  char *v8; // [rsp+60h] [rbp-28h]
  int v9; // [rsp+68h] [rbp-20h]
  int v10; // [rsp+6Ch] [rbp-1Ch]
  int v11; // [rsp+90h] [rbp+8h] BYREF
  char v12; // [rsp+98h] [rbp+10h] BYREF

  v12 = a2;
  v11 = a1;
  v2 = (_DWORD *)*((_QWORD *)InputETW::Instance() + 1);
  if ( v2 )
  {
    if ( *v2 > 1u )
    {
      v3 = *((_QWORD *)InputETW::Instance() + 1);
      if ( *(_DWORD *)v3 > 5u && (*(_BYTE *)(v3 + 16) & 1) != 0 && (*(_QWORD *)(v3 + 24) & 1LL) == *(_QWORD *)(v3 + 24) )
      {
        v7 = 0;
        v10 = 0;
        v5 = &v11;
        v8 = &v12;
        v6 = 4;
        v9 = 1;
        TlgWrite((TraceLoggingHProvider)v3, &unk_18016B18E, 0LL, 0LL, 4u, &pData);
      }
    }
  }
}
